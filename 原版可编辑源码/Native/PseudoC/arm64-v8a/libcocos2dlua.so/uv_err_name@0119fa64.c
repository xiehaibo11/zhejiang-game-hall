
/* WARNING: Type propagation algorithm not settling */

void uv_err_name(uint param_1)

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
        pcVar1 = "EOF";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
      else if (param_1 == 0xfffff002) {
        pcVar1 = "UNKNOWN";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
      else {
        if (param_1 != 0xfffff010) goto switchD_0119fab4_caseD_ffffff84;
        pcVar1 = "ECHARSET";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
    }
    else {
      switch(param_1) {
      case 0xfffff43a:
        pcVar1 = "EAI_PROTOCOL";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43b:
        pcVar1 = "EAI_BADHINTS";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43c:
switchD_0119fab4_caseD_ffffff84:
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
        goto LAB_011a0408;
      case 0xfffff43d:
        pcVar1 = "EAI_SOCKTYPE";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43e:
        pcVar1 = "EAI_SERVICE";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff43f:
        pcVar1 = "EAI_OVERFLOW";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff440:
        pcVar1 = "EAI_NONAME";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff441:
        pcVar1 = "EAI_NODATA";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff442:
        pcVar1 = "EAI_MEMORY";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff443:
        pcVar1 = "EAI_FAMILY";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff444:
        pcVar1 = "EAI_FAIL";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff445:
        pcVar1 = "EAI_CANCELED";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff446:
        pcVar1 = "EAI_BADFLAGS";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff447:
        pcVar1 = "EAI_AGAIN";
        lVar3 = *(long *)(lVar3 + 0x28);
        break;
      case 0xfffff448:
        pcVar1 = "EAI_ADDRFAMILY";
        goto switchD_0119fab4_caseD_fffffff9;
      default:
        if (param_1 != 0xfffff044) goto switchD_0119fab4_caseD_ffffff84;
        pcVar1 = "EFTYPE";
        lVar3 = *(long *)(lVar3 + 0x28);
      }
    }
  }
  else {
    pcVar1 = "E2BIG";
    switch(param_1) {
    case 0xffffff83:
      pcVar1 = "ECANCELED";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    default:
      goto switchD_0119fab4_caseD_ffffff84;
    case 0xffffff87:
      pcVar1 = "EREMOTEIO";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff8e:
      pcVar1 = "EALREADY";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff8f:
      pcVar1 = "EHOSTUNREACH";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff90:
      pcVar1 = "EHOSTDOWN";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff91:
      pcVar1 = "ECONNREFUSED";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff92:
      pcVar1 = "ETIMEDOUT";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff94:
      pcVar1 = "ESHUTDOWN";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff95:
      pcVar1 = "ENOTCONN";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff96:
      pcVar1 = "EISCONN";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff97:
      pcVar1 = "ENOBUFS";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff98:
      pcVar1 = "ECONNRESET";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff99:
      pcVar1 = "ECONNABORTED";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9b:
      pcVar1 = "ENETUNREACH";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9c:
      pcVar1 = "ENETDOWN";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9d:
      pcVar1 = "EADDRNOTAVAIL";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9e:
      pcVar1 = "EADDRINUSE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffff9f:
      pcVar1 = "EAFNOSUPPORT";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa1:
      pcVar1 = "ENOTSUP";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa3:
      pcVar1 = "EPROTONOSUPPORT";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa4:
      pcVar1 = "ENOPROTOOPT";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa5:
      pcVar1 = "EPROTOTYPE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa6:
      pcVar1 = "EMSGSIZE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa7:
      pcVar1 = "EDESTADDRREQ";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffa8:
      pcVar1 = "ENOTSOCK";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffb9:
      pcVar1 = "EPROTO";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffc0:
      pcVar1 = "ENONET";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffd8:
      pcVar1 = "ELOOP";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffd9:
      pcVar1 = "ENOTEMPTY";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffda:
      pcVar1 = "ENOSYS";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffdc:
      pcVar1 = "ENAMETOOLONG";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffde:
      pcVar1 = "ERANGE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe0:
      pcVar1 = "EPIPE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe1:
      pcVar1 = "EMLINK";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe2:
      pcVar1 = "EROFS";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe3:
      pcVar1 = "ESPIPE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe4:
      pcVar1 = "ENOSPC";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe5:
      pcVar1 = "EFBIG";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe6:
      pcVar1 = "ETXTBSY";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe7:
      pcVar1 = "ENOTTY";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe8:
      pcVar1 = "EMFILE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffe9:
      pcVar1 = "ENFILE";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffea:
      pcVar1 = "EINVAL";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffeb:
      pcVar1 = "EISDIR";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffec:
      pcVar1 = "ENOTDIR";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffed:
      pcVar1 = "ENODEV";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffee:
      pcVar1 = "EXDEV";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffef:
      pcVar1 = "EEXIST";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff0:
      pcVar1 = "EBUSY";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff2:
      pcVar1 = "EFAULT";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff3:
      pcVar1 = "EACCES";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff4:
      pcVar1 = "ENOMEM";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff5:
      pcVar1 = "EAGAIN";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff7:
      pcVar1 = "EBADF";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffff9:
switchD_0119fab4_caseD_fffffff9:
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffa:
      pcVar1 = "ENXIO";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffb:
      pcVar1 = "EIO";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffc:
      pcVar1 = "EINTR";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffd:
      pcVar1 = "ESRCH";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xfffffffe:
      pcVar1 = "ENOENT";
      lVar3 = *(long *)(lVar3 + 0x28);
      break;
    case 0xffffffff:
      pcVar1 = "EPERM";
      lVar3 = *(long *)(lVar3 + 0x28);
    }
  }
  if (lVar3 == local_38) {
    return;
  }
LAB_011a0408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar1);
}

