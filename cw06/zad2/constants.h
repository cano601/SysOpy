#ifndef CONSTANTS
#define CONSTANTS

#define MAX_MSG_LEN 200
#define CLIENTS_NO 100
#define QUEUE_SIZE 10

enum {
  TASK_END_MSG = 1,
  INIT_QUEUE_MSG,
  INIT_QUEUE_RET_MSG,
  CLOSE_QUEUE_MSG,
  TASK_ECHO_MSG,
  TASK_CAPS_MSG,
  TASK_TIME_MSG
};

#endif
