
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_err_name(int param_1)

{
  char *pcVar1;
  char acStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == -0x5b) {
    pcVar1 = "EPROTOTYPE";
    goto LAB_00bebe14;
  }
  if (param_1 < -0x5a) {
    if (param_1 == -0x72) {
      pcVar1 = "EALREADY";
      goto LAB_00bebe14;
    }
    if (param_1 < -0x71) {
      if (param_1 == -0xbc0) {
        pcVar1 = "EAI_NONAME";
        goto LAB_00bebe14;
      }
      if (param_1 < -0xbbf) {
        if (param_1 == -0xbc6) {
          pcVar1 = "EAI_PROTOCOL";
          goto LAB_00bebe14;
        }
        if (param_1 < -0xbc5) {
          if (param_1 == -0xffe) {
            pcVar1 = "UNKNOWN";
            goto LAB_00bebe14;
          }
          if (param_1 == -0xff0) {
            pcVar1 = "ECHARSET";
            goto LAB_00bebe14;
          }
          if (param_1 == -0xfff) {
            pcVar1 = "EOF";
            goto LAB_00bebe14;
          }
        }
        else {
          if (param_1 == -0xbc3) {
            pcVar1 = "EAI_SOCKTYPE";
            goto LAB_00bebe14;
          }
          if (param_1 < -0xbc2) {
            pcVar1 = "EAI_BADHINTS";
            if (param_1 == -0xbc5) goto LAB_00bebe14;
          }
          else {
            if (param_1 == -0xbc2) {
              pcVar1 = "EAI_SERVICE";
              goto LAB_00bebe14;
            }
            pcVar1 = "EAI_OVERFLOW";
            if (param_1 == -0xbc1) goto LAB_00bebe14;
          }
        }
      }
      else {
        if (param_1 == -0xbbb) {
          pcVar1 = "EAI_CANCELED";
          goto LAB_00bebe14;
        }
        if (param_1 < -0xbba) {
          if (param_1 == -0xbbe) {
            pcVar1 = "EAI_MEMORY";
            goto LAB_00bebe14;
          }
          if (param_1 < -0xbbe) {
            pcVar1 = "EAI_NODATA";
            goto LAB_00bebe14;
          }
          if (param_1 == -0xbbd) {
            pcVar1 = "EAI_FAMILY";
            goto LAB_00bebe14;
          }
          pcVar1 = "EAI_FAIL";
          if (param_1 == -0xbbc) goto LAB_00bebe14;
        }
        else {
          if (param_1 == -0xbb9) {
            pcVar1 = "EAI_AGAIN";
            goto LAB_00bebe14;
          }
          if (param_1 < -0xbb9) {
            pcVar1 = "EAI_BADFLAGS";
            goto LAB_00bebe14;
          }
          if (param_1 == -3000) {
            pcVar1 = "EAI_ADDRFAMILY";
            goto LAB_00bebe14;
          }
          pcVar1 = "ECANCELED";
          if (param_1 == -0x7d) goto LAB_00bebe14;
        }
      }
    }
    else {
      if (param_1 == -0x68) {
        pcVar1 = "ECONNRESET";
        goto LAB_00bebe14;
      }
      if (param_1 < -0x67) {
        if (param_1 == -0x6e) {
          pcVar1 = "ETIMEDOUT";
          goto LAB_00bebe14;
        }
        if (param_1 < -0x6d) {
          if (param_1 == -0x70) {
            pcVar1 = "EHOSTDOWN";
          }
          else if (param_1 < -0x6f) {
            pcVar1 = "EHOSTUNREACH";
          }
          else {
            pcVar1 = "ECONNREFUSED";
          }
          goto LAB_00bebe14;
        }
        if (param_1 == -0x6b) {
          pcVar1 = "ENOTCONN";
          goto LAB_00bebe14;
        }
        if (param_1 < -0x6a) {
          pcVar1 = "ESHUTDOWN";
          if (param_1 == -0x6c) goto LAB_00bebe14;
        }
        else {
          if (param_1 == -0x6a) {
            pcVar1 = "EISCONN";
            goto LAB_00bebe14;
          }
          pcVar1 = "ENOBUFS";
          if (param_1 == -0x69) goto LAB_00bebe14;
        }
      }
      else {
        if (param_1 == -0x62) {
          pcVar1 = "EADDRINUSE";
          goto LAB_00bebe14;
        }
        if (param_1 < -0x61) {
          if (param_1 == -0x65) {
            pcVar1 = "ENETUNREACH";
            goto LAB_00bebe14;
          }
          if (param_1 < -100) {
            pcVar1 = "ECONNABORTED";
            if (param_1 == -0x67) goto LAB_00bebe14;
          }
          else {
            if (param_1 == -100) {
              pcVar1 = "ENETDOWN";
              goto LAB_00bebe14;
            }
            pcVar1 = "EADDRNOTAVAIL";
            if (param_1 == -99) goto LAB_00bebe14;
          }
        }
        else {
          if (param_1 == -0x5f) {
            pcVar1 = "ENOTSUP";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x5e) {
            pcVar1 = "EAFNOSUPPORT";
            if (param_1 == -0x61) goto LAB_00bebe14;
          }
          else {
            if (param_1 == -0x5d) {
              pcVar1 = "EPROTONOSUPPORT";
              goto LAB_00bebe14;
            }
            pcVar1 = "ENOPROTOOPT";
            if (param_1 == -0x5c) goto LAB_00bebe14;
          }
        }
      }
    }
  }
  else {
    if (param_1 == -0x17) {
      pcVar1 = "ENFILE";
      goto LAB_00bebe14;
    }
    if (param_1 < -0x16) {
      if (param_1 == -0x24) {
        pcVar1 = "ENAMETOOLONG";
        goto LAB_00bebe14;
      }
      if (param_1 < -0x23) {
        if (param_1 == -0x47) {
          pcVar1 = "EPROTO";
          goto LAB_00bebe14;
        }
        if (param_1 < -0x46) {
          if (param_1 == -0x59) {
            pcVar1 = "EDESTADDRREQ";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x59) {
            pcVar1 = "EMSGSIZE";
            goto LAB_00bebe14;
          }
          pcVar1 = "ENOTSOCK";
          if (param_1 == -0x58) goto LAB_00bebe14;
        }
        else {
          if (param_1 == -0x28) {
            pcVar1 = "ELOOP";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x27) {
            pcVar1 = "ENONET";
            if (param_1 == -0x40) goto LAB_00bebe14;
          }
          else {
            if (param_1 == -0x27) {
              pcVar1 = "ENOTEMPTY";
              goto LAB_00bebe14;
            }
            pcVar1 = "ENOSYS";
            if (param_1 == -0x26) goto LAB_00bebe14;
          }
        }
      }
      else {
        if (param_1 == -0x1d) {
          pcVar1 = "ESPIPE";
          goto LAB_00bebe14;
        }
        if (param_1 < -0x1c) {
          if (param_1 == -0x20) {
            pcVar1 = "EPIPE";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x1f) {
            pcVar1 = "ERANGE";
            if (param_1 == -0x22) goto LAB_00bebe14;
          }
          else {
            if (param_1 == -0x1f) {
              pcVar1 = "EMLINK";
              goto LAB_00bebe14;
            }
            pcVar1 = "EROFS";
            if (param_1 == -0x1e) goto LAB_00bebe14;
          }
        }
        else {
          if (param_1 == -0x1b) {
            pcVar1 = "EFBIG";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x1b) {
            pcVar1 = "ENOSPC";
            goto LAB_00bebe14;
          }
          if (param_1 == -0x1a) {
            pcVar1 = "ETXTBSY";
            goto LAB_00bebe14;
          }
          pcVar1 = "EMFILE";
          if (param_1 == -0x18) goto LAB_00bebe14;
        }
      }
    }
    else {
      if (param_1 == -0xc) {
        pcVar1 = "ENOMEM";
        goto LAB_00bebe14;
      }
      if (param_1 < -0xb) {
        if (param_1 == -0x12) {
          pcVar1 = "EXDEV";
          goto LAB_00bebe14;
        }
        if (param_1 < -0x11) {
          if (param_1 == -0x15) {
            pcVar1 = "EISDIR";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x15) {
            pcVar1 = "EINVAL";
            goto LAB_00bebe14;
          }
          if (param_1 == -0x14) {
            pcVar1 = "ENOTDIR";
            goto LAB_00bebe14;
          }
          pcVar1 = "ENODEV";
          if (param_1 == -0x13) goto LAB_00bebe14;
        }
        else {
          if (param_1 == -0x10) {
            pcVar1 = "EBUSY";
            goto LAB_00bebe14;
          }
          if (param_1 < -0x10) {
            pcVar1 = "EEXIST";
            goto LAB_00bebe14;
          }
          if (param_1 == -0xe) {
            pcVar1 = "EFAULT";
            goto LAB_00bebe14;
          }
          pcVar1 = "EACCES";
          if (param_1 == -0xd) goto LAB_00bebe14;
        }
      }
      else {
        if (param_1 == -5) {
          pcVar1 = "EIO";
          goto LAB_00bebe14;
        }
        if (param_1 < -4) {
          if (param_1 == -9) {
            pcVar1 = "EBADF";
            goto LAB_00bebe14;
          }
          if (param_1 < -8) {
            pcVar1 = "EAGAIN";
            if (param_1 == -0xb) goto LAB_00bebe14;
          }
          else {
            if (param_1 == -7) {
              pcVar1 = "E2BIG";
              goto LAB_00bebe14;
            }
            pcVar1 = "ENXIO";
            if (param_1 == -6) goto LAB_00bebe14;
          }
        }
        else {
          if (param_1 == -3) {
            pcVar1 = "ESRCH";
            goto LAB_00bebe14;
          }
          if (param_1 < -3) {
            pcVar1 = "EINTR";
            goto LAB_00bebe14;
          }
          if (param_1 == -2) {
            pcVar1 = "ENOENT";
            goto LAB_00bebe14;
          }
          pcVar1 = "EPERM";
          if (param_1 == -1) goto LAB_00bebe14;
        }
      }
    }
  }
  snprintf(acStack_28,0x20,"Unknown system error %d");
  pcVar1 = (char *)uv__strdup(acStack_28);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown system error";
  }
LAB_00bebe14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar1);
  }
  return;
}

