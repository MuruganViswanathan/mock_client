#   Copyright 2016 Comcast Cable Communications Management, LLC
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -W -g -fprofile-arcs -ftest-coverage -O0")
set(SOURCES mock_client.c mock_adapter.c)

add_executable(mock_client ${SOURCES})

target_link_libraries (mock_client
    ${CMAKE_THREAD_LIBS_INIT}
    -lwrp-c
    -lwdmp-c
    -lmsgpackc
    -ltrower-base64
    -lm
    -lcimplog
    -lnanomsg
    -lcjson
    -lpthread
    -llibparodus
    -lrt
    )
install (TARGETS mock_client DESTINATION bin)
