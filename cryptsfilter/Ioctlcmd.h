//这个文件  用来存放所有的应用层与驱动层所需的共有的参数  使应用层与驱动层通信保证统一
// 最大路径长度
#define MAXPATHLEN	1024

// 最大记录数
#define MAXRULES	50

//要隐藏的文件名的最大长度
#define    HIDERLEN   64


//这个我还不知道要不要使用 
#define HIDE_FLAG_FILE			1L//要隐藏的是某个文件
#define HIDE_FLAG_DIRECTORY		2L//要隐藏的是某个目录

//注意  以下两个名字要统一
//
//设备的DOS NAME
//
#define DOS_DEVICE_NAME L"\\DosDevices\\LSFilter"


#define DEVICENAME _T("\\\\.\\LSFilter")



//获取logbuf
#define IOCTL_GETLOGBUF \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

//清空logbuf
#define IOCTL_ZEROLOGBUF \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

//开启或关闭 获取logbuf
#define IOCTL_CONTROLLOG \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式


// 初始化的时候增加所有禁止访问的文件
#define IOCTL_INIT_NOACCESSFILE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x807, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后增加一个禁止访问的文件
#define IOCTL_ADD_NOACCESSFILE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x808, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后删除一个禁止访问的文件
#define IOCTL_DEL_NOACCESSFILE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x809, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式



// 初始化的时候增加所有禁止删除的文件
#define IOCTL_INIT_NODELETEFILE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x810, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后增加一个禁止删除的文件
#define IOCTL_ADD_NODELETEFILE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x811, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后删除一个禁止删除的文件
#define IOCTL_DEL_NODELETEFILE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x812, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式



// 初始化的时候增加所有隐藏的文件
#define IOCTL_INIT_HIDE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x813, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后增加一个隐藏的文件
#define IOCTL_ADD_HIDE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x814, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后删除一个禁隐藏的文件
#define IOCTL_DEL_HIDE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x815, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后增加一个重定向的文件
#define IOCTL_ADD_REPARSE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x816, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

// 程序跑起来后删除一个重定向的文件
#define IOCTL_DEL_REPARSE \
CTL_CODE(FILE_DEVICE_UNKNOWN, 0x817, METHOD_BUFFERED, FILE_ANY_ACCESS)//缓冲区方式

