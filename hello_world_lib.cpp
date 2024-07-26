#include "hello_world_lib.h"

#include <stdio.h>
#include <zlib.h>
#include <sqlite3.h>
#include <brotli/decode.h>
#include <yaml.h>
#include <yaml-cpp/yaml.h>
#include <maxminddb.h>
#include <libconfig.h>
//#include <parserutils/parserutils.h>
#include <hubbub/parser.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

int my_func() {
    config_t cfg;
    config_init(&cfg);
    config_destroy(&cfg);
    printf("hello %s %s %d %s %d %s %d %d %p\n",
      zlibVersion(),
      sqlite3_libversion(),
      BrotliDecoderVersion(),
      yaml_get_version_string(),
      YAML::Load("[123]")[0].as<int>(),
      MMDB_lib_version(),
      LIBCONFIG_VER_MINOR,
      hubbub_parser_create(0, false, 0),
      xmlReadFile("", NULL, 0));
    xmlCleanupParser();
    return 0;
}
