#ifndef _MOCK_ADAPTER_H_
#define _MOCK_ADAPTER_H_

#include <stdio.h>
#include "libparodus.h"
#include <nanomsg/nn.h>
#include <nanomsg/pipeline.h>
#include <pthread.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include "wrp-c.h"
#include "wdmp-c.h"
#include "cJSON.h"
#include <string.h>
#include <cimplog.h>

#define CONTENT_TYPE_JSON  "application/json"
#define LOGGING_MODULE     "MOCK_CLIENT"
#define DB_FILE      "../../client_db.json"
#define Error(...)      cimplog_error(LOGGING_MODULE, __VA_ARGS__)
#define Info(...)       cimplog_info(LOGGING_MODULE, __VA_ARGS__)
#define Print(...)      cimplog_debug(LOGGING_MODULE, __VA_ARGS__)

#endif /*_MOCK_ADAPTER_H_*/

