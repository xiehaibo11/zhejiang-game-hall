
char * uv_err_name_r(uint param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
  if ((int)param_1 < -0x7d) {
    if ((int)param_1 < -0xfbc) {
      if (param_1 == 0xfffff001) {
        pcVar1 = "EOF";
      }
      else if (param_1 == 0xfffff002) {
        pcVar1 = "UNKNOWN";
      }
      else {
        if (param_1 != 0xfffff010) goto switchD_0119f3a4_caseD_ffffff84;
        pcVar1 = "ECHARSET";
      }
    }
    else {
      switch(param_1) {
      case 0xfffff43a:
        pcVar1 = "EAI_PROTOCOL";
        break;
      case 0xfffff43b:
        pcVar1 = "EAI_BADHINTS";
        break;
      case 0xfffff43c:
switchD_0119f3a4_caseD_ffffff84:
        snprintf(param_2,param_3,"Unknown system error %d",(ulong)param_1);
        return param_2;
      case 0xfffff43d:
        pcVar1 = "EAI_SOCKTYPE";
        break;
      case 0xfffff43e:
        pcVar1 = "EAI_SERVICE";
        break;
      case 0xfffff43f:
        pcVar1 = "EAI_OVERFLOW";
        break;
      case 0xfffff440:
        pcVar1 = "EAI_NONAME";
        break;
      case 0xfffff441:
        pcVar1 = "EAI_NODATA";
        break;
      case 0xfffff442:
        pcVar1 = "EAI_MEMORY";
        break;
      case 0xfffff443:
        pcVar1 = "EAI_FAMILY";
        break;
      case 0xfffff444:
        pcVar1 = "EAI_FAIL";
        break;
      case 0xfffff445:
        pcVar1 = "EAI_CANCELED";
        break;
      case 0xfffff446:
        pcVar1 = "EAI_BADFLAGS";
        break;
      case 0xfffff447:
        pcVar1 = "EAI_AGAIN";
        break;
      case 0xfffff448:
        pcVar1 = "EAI_ADDRFAMILY";
        break;
      default:
        if (param_1 != 0xfffff044) goto switchD_0119f3a4_caseD_ffffff84;
        pcVar1 = "EFTYPE";
      }
    }
  }
  else {
    switch(param_1) {
    case 0xffffff83:
      pcVar1 = "ECANCELED";
      break;
    default:
      goto switchD_0119f3a4_caseD_ffffff84;
    case 0xffffff87:
      pcVar1 = "EREMOTEIO";
      break;
    case 0xffffff8e:
      pcVar1 = "EALREADY";
      break;
    case 0xffffff8f:
      pcVar1 = "EHOSTUNREACH";
      break;
    case 0xffffff90:
      pcVar1 = "EHOSTDOWN";
      break;
    case 0xffffff91:
      pcVar1 = "ECONNREFUSED";
      break;
    case 0xffffff92:
      pcVar1 = "ETIMEDOUT";
      break;
    case 0xffffff94:
      pcVar1 = "ESHUTDOWN";
      break;
    case 0xffffff95:
      pcVar1 = "ENOTCONN";
      break;
    case 0xffffff96:
      pcVar1 = "EISCONN";
      break;
    case 0xffffff97:
      pcVar1 = "ENOBUFS";
      break;
    case 0xffffff98:
      pcVar1 = "ECONNRESET";
      break;
    case 0xffffff99:
      pcVar1 = "ECONNABORTED";
      break;
    case 0xffffff9b:
      pcVar1 = "ENETUNREACH";
      break;
    case 0xffffff9c:
      pcVar1 = "ENETDOWN";
      break;
    case 0xffffff9d:
      pcVar1 = "EADDRNOTAVAIL";
      break;
    case 0xffffff9e:
      pcVar1 = "EADDRINUSE";
      break;
    case 0xffffff9f:
      pcVar1 = "EAFNOSUPPORT";
      break;
    case 0xffffffa1:
      pcVar1 = "ENOTSUP";
      break;
    case 0xffffffa3:
      pcVar1 = "EPROTONOSUPPORT";
      break;
    case 0xffffffa4:
      pcVar1 = "ENOPROTOOPT";
      break;
    case 0xffffffa5:
      pcVar1 = "EPROTOTYPE";
      break;
    case 0xffffffa6:
      pcVar1 = "EMSGSIZE";
      break;
    case 0xffffffa7:
      pcVar1 = "EDESTADDRREQ";
      break;
    case 0xffffffa8:
      pcVar1 = "ENOTSOCK";
      break;
    case 0xffffffb9:
      pcVar1 = "EPROTO";
      break;
    case 0xffffffc0:
      pcVar1 = "ENONET";
      break;
    case 0xffffffd8:
      pcVar1 = "ELOOP";
      break;
    case 0xffffffd9:
      pcVar1 = "ENOTEMPTY";
      break;
    case 0xffffffda:
      pcVar1 = "ENOSYS";
      break;
    case 0xffffffdc:
      pcVar1 = "ENAMETOOLONG";
      break;
    case 0xffffffde:
      pcVar1 = "ERANGE";
      break;
    case 0xffffffe0:
      pcVar1 = "EPIPE";
      break;
    case 0xffffffe1:
      pcVar1 = "EMLINK";
      break;
    case 0xffffffe2:
      pcVar1 = "EROFS";
      break;
    case 0xffffffe3:
      pcVar1 = "ESPIPE";
      break;
    case 0xffffffe4:
      pcVar1 = "ENOSPC";
      break;
    case 0xffffffe5:
      pcVar1 = "EFBIG";
      break;
    case 0xffffffe6:
      pcVar1 = "ETXTBSY";
      break;
    case 0xffffffe7:
      pcVar1 = "ENOTTY";
      break;
    case 0xffffffe8:
      pcVar1 = "EMFILE";
      break;
    case 0xffffffe9:
      pcVar1 = "ENFILE";
      break;
    case 0xffffffea:
      pcVar1 = "EINVAL";
      break;
    case 0xffffffeb:
      pcVar1 = "EISDIR";
      break;
    case 0xffffffec:
      pcVar1 = "ENOTDIR";
      break;
    case 0xffffffed:
      pcVar1 = "ENODEV";
      break;
    case 0xffffffee:
      pcVar1 = "EXDEV";
      break;
    case 0xffffffef:
      pcVar1 = "EEXIST";
      break;
    case 0xfffffff0:
      pcVar1 = "EBUSY";
      break;
    case 0xfffffff2:
      pcVar1 = "EFAULT";
      break;
    case 0xfffffff3:
      pcVar1 = "EACCES";
      break;
    case 0xfffffff4:
      pcVar1 = "ENOMEM";
      break;
    case 0xfffffff5:
      pcVar1 = "EAGAIN";
      break;
    case 0xfffffff7:
      pcVar1 = "EBADF";
      break;
    case 0xfffffff9:
      pcVar1 = "E2BIG";
      break;
    case 0xfffffffa:
      pcVar1 = "ENXIO";
      break;
    case 0xfffffffb:
      pcVar1 = "EIO";
      break;
    case 0xfffffffc:
      pcVar1 = "EINTR";
      break;
    case 0xfffffffd:
      pcVar1 = "ESRCH";
      break;
    case 0xfffffffe:
      pcVar1 = "ENOENT";
      break;
    case 0xffffffff:
      pcVar1 = "EPERM";
    }
  }
  snprintf(param_2,param_3,"%s",pcVar1);
  return param_2;
}

