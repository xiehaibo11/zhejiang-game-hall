
char * uv_strerror_r(uint param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
  if ((int)param_1 < -0x7d) {
    if ((int)param_1 < -0xfbc) {
      if (param_1 == 0xfffff001) {
        pcVar1 = "end of file";
      }
      else if (param_1 == 0xfffff002) {
        pcVar1 = "unknown error";
      }
      else {
        if (param_1 != 0xfffff010) goto switchD_011a0444_caseD_ffffff84;
        pcVar1 = "invalid Unicode character";
      }
      goto LAB_011a0ad0;
    }
    switch(param_1) {
    case 0xfffff43a:
      pcVar1 = "resolved protocol is unknown";
      break;
    case 0xfffff43b:
      pcVar1 = "invalid value for hints";
      break;
    case 0xfffff43c:
switchD_011a0444_caseD_ffffff84:
      snprintf(param_2,param_3,"Unknown system error %d",(ulong)param_1);
      return param_2;
    case 0xfffff43d:
      pcVar1 = "socket type not supported";
      break;
    case 0xfffff43e:
      pcVar1 = "service not available for socket type";
      break;
    case 0xfffff43f:
      pcVar1 = "argument buffer overflow";
      break;
    case 0xfffff440:
      pcVar1 = "unknown node or service";
      break;
    case 0xfffff441:
      pcVar1 = "no address";
      break;
    case 0xfffff442:
      pcVar1 = "out of memory";
      break;
    case 0xfffff443:
      pcVar1 = "ai_family not supported";
      break;
    case 0xfffff444:
      pcVar1 = "permanent failure";
      break;
    case 0xfffff445:
      pcVar1 = "request canceled";
      break;
    case 0xfffff446:
      pcVar1 = "bad ai_flags value";
      break;
    case 0xfffff447:
      pcVar1 = "temporary failure";
      break;
    case 0xfffff448:
      goto switchD_011a0444_caseD_ffffff9f;
    default:
      if (param_1 != 0xfffff044) goto switchD_011a0444_caseD_ffffff84;
      pcVar1 = "inappropriate file type or format";
    }
  }
  else {
    switch(param_1) {
    case 0xffffff83:
      pcVar1 = "operation canceled";
      break;
    default:
      goto switchD_011a0444_caseD_ffffff84;
    case 0xffffff87:
      pcVar1 = "remote I/O error";
      break;
    case 0xffffff8e:
      pcVar1 = "connection already in progress";
      break;
    case 0xffffff8f:
      pcVar1 = "host is unreachable";
      break;
    case 0xffffff90:
      pcVar1 = "host is down";
      break;
    case 0xffffff91:
      pcVar1 = "connection refused";
      break;
    case 0xffffff92:
      pcVar1 = "connection timed out";
      break;
    case 0xffffff94:
      pcVar1 = "cannot send after transport endpoint shutdown";
      break;
    case 0xffffff95:
      pcVar1 = "socket is not connected";
      break;
    case 0xffffff96:
      pcVar1 = "socket is already connected";
      break;
    case 0xffffff97:
      pcVar1 = "no buffer space available";
      break;
    case 0xffffff98:
      pcVar1 = "connection reset by peer";
      break;
    case 0xffffff99:
      pcVar1 = "software caused connection abort";
      break;
    case 0xffffff9b:
      pcVar1 = "network is unreachable";
      break;
    case 0xffffff9c:
      pcVar1 = "network is down";
      break;
    case 0xffffff9d:
      pcVar1 = "address not available";
      break;
    case 0xffffff9e:
      pcVar1 = "address already in use";
      break;
    case 0xffffff9f:
switchD_011a0444_caseD_ffffff9f:
      pcVar1 = "address family not supported";
      break;
    case 0xffffffa1:
      pcVar1 = "operation not supported on socket";
      break;
    case 0xffffffa3:
      pcVar1 = "protocol not supported";
      break;
    case 0xffffffa4:
      pcVar1 = "protocol not available";
      break;
    case 0xffffffa5:
      pcVar1 = "protocol wrong type for socket";
      break;
    case 0xffffffa6:
      pcVar1 = "message too long";
      break;
    case 0xffffffa7:
      pcVar1 = "destination address required";
      break;
    case 0xffffffa8:
      pcVar1 = "socket operation on non-socket";
      break;
    case 0xffffffb9:
      pcVar1 = "protocol error";
      break;
    case 0xffffffc0:
      pcVar1 = "machine is not on the network";
      break;
    case 0xffffffd8:
      pcVar1 = "too many symbolic links encountered";
      break;
    case 0xffffffd9:
      pcVar1 = "directory not empty";
      break;
    case 0xffffffda:
      pcVar1 = "function not implemented";
      break;
    case 0xffffffdc:
      pcVar1 = "name too long";
      break;
    case 0xffffffde:
      pcVar1 = "result too large";
      break;
    case 0xffffffe0:
      pcVar1 = "broken pipe";
      break;
    case 0xffffffe1:
      pcVar1 = "too many links";
      break;
    case 0xffffffe2:
      pcVar1 = "read-only file system";
      break;
    case 0xffffffe3:
      pcVar1 = "invalid seek";
      break;
    case 0xffffffe4:
      pcVar1 = "no space left on device";
      break;
    case 0xffffffe5:
      pcVar1 = "file too large";
      break;
    case 0xffffffe6:
      pcVar1 = "text file is busy";
      break;
    case 0xffffffe7:
      pcVar1 = "inappropriate ioctl for device";
      break;
    case 0xffffffe8:
      pcVar1 = "too many open files";
      break;
    case 0xffffffe9:
      pcVar1 = "file table overflow";
      break;
    case 0xffffffea:
      pcVar1 = "invalid argument";
      break;
    case 0xffffffeb:
      pcVar1 = "illegal operation on a directory";
      break;
    case 0xffffffec:
      pcVar1 = "not a directory";
      break;
    case 0xffffffed:
      pcVar1 = "no such device";
      break;
    case 0xffffffee:
      pcVar1 = "cross-device link not permitted";
      break;
    case 0xffffffef:
      pcVar1 = "file already exists";
      break;
    case 0xfffffff0:
      pcVar1 = "resource busy or locked";
      break;
    case 0xfffffff2:
      pcVar1 = "bad address in system call argument";
      break;
    case 0xfffffff3:
      pcVar1 = "permission denied";
      break;
    case 0xfffffff4:
      pcVar1 = "not enough memory";
      break;
    case 0xfffffff5:
      pcVar1 = "resource temporarily unavailable";
      break;
    case 0xfffffff7:
      pcVar1 = "bad file descriptor";
      break;
    case 0xfffffff9:
      pcVar1 = "argument list too long";
      break;
    case 0xfffffffa:
      pcVar1 = "no such device or address";
      break;
    case 0xfffffffb:
      pcVar1 = "i/o error";
      break;
    case 0xfffffffc:
      pcVar1 = "interrupted system call";
      break;
    case 0xfffffffd:
      pcVar1 = "no such process";
      break;
    case 0xfffffffe:
      pcVar1 = "no such file or directory";
      break;
    case 0xffffffff:
      pcVar1 = "operation not permitted";
    }
  }
LAB_011a0ad0:
  snprintf(param_2,param_3,"%s",pcVar1);
  return param_2;
}

