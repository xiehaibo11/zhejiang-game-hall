
/* WARNING: Type propagation algorithm not settling */

void uv_strerror(uint param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *__dest;
  long lVar3;
  char acStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((int)param_1 < -0x7d) {
    if ((int)param_1 < -0xfbc) {
      if (param_1 == 0xfffff001) {
        pcVar1 = "end of file";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
      else if (param_1 == 0xfffff002) {
        pcVar1 = "unknown error";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
      else {
        if (param_1 != 0xfffff010) goto switchD_011a0b40_caseD_ffffff84;
        pcVar1 = "invalid Unicode character";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
    }
    else {
      switch(param_1) {
      case 0xfffff43a:
        pcVar1 = "resolved protocol is unknown";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43b:
        pcVar1 = "invalid value for hints";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43c:
switchD_011a0b40_caseD_ffffff84:
        snprintf(acStack_58,0x20,"Unknown system error %d",(ulong)param_1);
        sVar2 = strlen(acStack_58);
        __dest = (char *)(*(code *)PTR_malloc_01781850)(sVar2 + 1);
        if (__dest != (char *)0x0) {
          memcpy(__dest,acStack_58,sVar2 + 1);
        }
        pcVar1 = "Unknown system error";
        if (__dest != (char *)0x0) {
          pcVar1 = __dest;
        }
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return;
        }
        goto LAB_011a1494;
      case 0xfffff43d:
        pcVar1 = "socket type not supported";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43e:
        pcVar1 = "service not available for socket type";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43f:
        pcVar1 = "argument buffer overflow";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff440:
        pcVar1 = "unknown node or service";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff441:
        pcVar1 = "no address";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff442:
        pcVar1 = "out of memory";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff443:
        pcVar1 = "ai_family not supported";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff444:
        pcVar1 = "permanent failure";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff445:
        pcVar1 = "request canceled";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff446:
        pcVar1 = "bad ai_flags value";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff447:
        pcVar1 = "temporary failure";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff448:
        pcVar1 = "address family not supported";
        goto switchD_011a0b40_caseD_fffffff9;
      default:
        if (param_1 != 0xfffff044) goto switchD_011a0b40_caseD_ffffff84;
        pcVar1 = "inappropriate file type or format";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
    }
  }
  else {
    pcVar1 = "argument list too long";
    switch(param_1) {
    case 0xffffff83:
      pcVar1 = "operation canceled";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    default:
      goto switchD_011a0b40_caseD_ffffff84;
    case 0xffffff87:
      pcVar1 = "remote I/O error";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff8e:
      pcVar1 = "connection already in progress";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff8f:
      pcVar1 = "host is unreachable";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff90:
      pcVar1 = "host is down";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff91:
      pcVar1 = "connection refused";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff92:
      pcVar1 = "connection timed out";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff94:
      pcVar1 = "cannot send after transport endpoint shutdown";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff95:
      pcVar1 = "socket is not connected";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff96:
      pcVar1 = "socket is already connected";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff97:
      pcVar1 = "no buffer space available";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff98:
      pcVar1 = "connection reset by peer";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff99:
      pcVar1 = "software caused connection abort";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9b:
      pcVar1 = "network is unreachable";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9c:
      pcVar1 = "network is down";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9d:
      pcVar1 = "address not available";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9e:
      pcVar1 = "address already in use";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9f:
      pcVar1 = "address family not supported";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa1:
      pcVar1 = "operation not supported on socket";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa3:
      pcVar1 = "protocol not supported";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa4:
      pcVar1 = "protocol not available";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa5:
      pcVar1 = "protocol wrong type for socket";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa6:
      pcVar1 = "message too long";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa7:
      pcVar1 = "destination address required";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa8:
      pcVar1 = "socket operation on non-socket";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffb9:
      pcVar1 = "protocol error";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffc0:
      pcVar1 = "machine is not on the network";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffd8:
      pcVar1 = "too many symbolic links encountered";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffd9:
      pcVar1 = "directory not empty";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffda:
      pcVar1 = "function not implemented";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffdc:
      pcVar1 = "name too long";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffde:
      pcVar1 = "result too large";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe0:
      pcVar1 = "broken pipe";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe1:
      pcVar1 = "too many links";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe2:
      pcVar1 = "read-only file system";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe3:
      pcVar1 = "invalid seek";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe4:
      pcVar1 = "no space left on device";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe5:
      pcVar1 = "file too large";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe6:
      pcVar1 = "text file is busy";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe7:
      pcVar1 = "inappropriate ioctl for device";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe8:
      pcVar1 = "too many open files";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe9:
      pcVar1 = "file table overflow";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffea:
      pcVar1 = "invalid argument";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffeb:
      pcVar1 = "illegal operation on a directory";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffec:
      pcVar1 = "not a directory";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffed:
      pcVar1 = "no such device";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffee:
      pcVar1 = "cross-device link not permitted";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffef:
      pcVar1 = "file already exists";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff0:
      pcVar1 = "resource busy or locked";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff2:
      pcVar1 = "bad address in system call argument";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff3:
      pcVar1 = "permission denied";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff4:
      pcVar1 = "not enough memory";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff5:
      pcVar1 = "resource temporarily unavailable";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff7:
      pcVar1 = "bad file descriptor";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff9:
switchD_011a0b40_caseD_fffffff9:
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffa:
      pcVar1 = "no such device or address";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffb:
      pcVar1 = "i/o error";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffc:
      pcVar1 = "interrupted system call";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffd:
      pcVar1 = "no such process";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffe:
      pcVar1 = "no such file or directory";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffff:
      pcVar1 = "operation not permitted";
      lVar3 = *(long *)(lVar3 + 0x28);
    }
  }
  if (lVar3 == local_38) {
    return;
  }
LAB_011a1494:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar1);
}

