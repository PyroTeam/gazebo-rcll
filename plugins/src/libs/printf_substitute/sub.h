#ifndef _PRINTF_SUBSTITUTE__SUB_HEADER__
#define _PRINTF_SUBSTITUTE__SUB_HEADER__

#include <stdarg.h>
#include <gazebo/common/common.hh>

/* Substitue printf function by gazebo comon Console logger */
#define BUF_LEN	512
#define printf(...) do{							\
	char buffer[BUF_LEN];						\
	snprintf(buffer, BUF_LEN, __VA_ARGS__);		\
	gazebo::common::Console::msg << buffer;		\
} while(0);


#endif /* _PRINTF_SUBSTITUTE__SUB_HEADER__ */
