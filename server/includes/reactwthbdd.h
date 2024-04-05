#include <stdlib.h>
#include <stdio.h>
#include <mariadb/mysql.h>
#include <bcrypt.h>
#include <string.h>
#include <unistd.h>
#define POLL_INTERVAL_SECONDS 10
#include <sys/inotify.h>
#define EVENT_SIZE (sizeof(struct inotify_event))
#define BUF_LEN (1024 * (EVENT_SIZE + 16))

void updateFile(MYSQL *conn, char *old_path, char *new_path, char *new_name);