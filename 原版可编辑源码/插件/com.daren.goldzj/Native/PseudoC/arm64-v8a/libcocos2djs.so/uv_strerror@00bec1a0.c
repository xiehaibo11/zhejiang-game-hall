
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_strerror(int param_1)

{
  char *pcVar1;
  char acStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == -0x5b) {
    pcVar1 = "protocol wrong type for socket";
    goto LAB_00bec4a4;
  }
  if (param_1 < -0x5a) {
    if (param_1 == -0x72) {
      pcVar1 = "connection already in progress";
      goto LAB_00bec4a4;
    }
    if (param_1 < -0x71) {
      if (param_1 == -0xbc0) {
        pcVar1 = "unknown node or service";
        goto LAB_00bec4a4;
      }
      if (param_1 < -0xbbf) {
        if (param_1 == -0xbc6) {
          pcVar1 = "resolved protocol is unknown";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0xbc5) {
          if (param_1 == -0xffe) {
            pcVar1 = "unknown error";
            goto LAB_00bec4a4;
          }
          if (param_1 == -0xff0) {
            pcVar1 = "invalid Unicode character";
            goto LAB_00bec4a4;
          }
          if (param_1 == -0xfff) {
            pcVar1 = "end of file";
            goto LAB_00bec4a4;
          }
        }
        else {
          if (param_1 == -0xbc3) {
            pcVar1 = "socket type not supported";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0xbc2) {
            pcVar1 = "invalid value for hints";
            if (param_1 == -0xbc5) goto LAB_00bec4a4;
          }
          else {
            if (param_1 == -0xbc2) {
              pcVar1 = "service not available for socket type";
              goto LAB_00bec4a4;
            }
            pcVar1 = "argument buffer overflow";
            if (param_1 == -0xbc1) goto LAB_00bec4a4;
          }
        }
      }
      else {
        if (param_1 == -0xbbb) {
          pcVar1 = "request canceled";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0xbba) {
          if (param_1 == -0xbbe) {
            pcVar1 = "out of memory";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0xbbe) {
            pcVar1 = "no address";
            goto LAB_00bec4a4;
          }
          if (param_1 == -0xbbd) {
            pcVar1 = "ai_family not supported";
            goto LAB_00bec4a4;
          }
          pcVar1 = "permanent failure";
          if (param_1 == -0xbbc) goto LAB_00bec4a4;
        }
        else {
          if (param_1 == -0xbb9) {
            pcVar1 = "temporary failure";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0xbb9) {
            pcVar1 = "bad ai_flags value";
            goto LAB_00bec4a4;
          }
          if (param_1 == -3000) {
            pcVar1 = "address family not supported";
            goto LAB_00bec4a4;
          }
          pcVar1 = "operation canceled";
          if (param_1 == -0x7d) goto LAB_00bec4a4;
        }
      }
    }
    else {
      if (param_1 == -0x68) {
        pcVar1 = "connection reset by peer";
        goto LAB_00bec4a4;
      }
      if (param_1 < -0x67) {
        if (param_1 == -0x6e) {
          pcVar1 = "connection timed out";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0x6d) {
          if (param_1 == -0x70) {
            pcVar1 = "host is down";
          }
          else if (param_1 < -0x6f) {
            pcVar1 = "host is unreachable";
          }
          else {
            pcVar1 = "connection refused";
          }
          goto LAB_00bec4a4;
        }
        if (param_1 == -0x6b) {
          pcVar1 = "socket is not connected";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0x6a) {
          pcVar1 = "cannot send after transport endpoint shutdown";
          if (param_1 == -0x6c) goto LAB_00bec4a4;
        }
        else {
          if (param_1 == -0x6a) {
            pcVar1 = "socket is already connected";
            goto LAB_00bec4a4;
          }
          pcVar1 = "no buffer space available";
          if (param_1 == -0x69) goto LAB_00bec4a4;
        }
      }
      else {
        if (param_1 == -0x62) {
          pcVar1 = "address already in use";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0x61) {
          if (param_1 == -0x65) {
            pcVar1 = "network is unreachable";
            goto LAB_00bec4a4;
          }
          if (param_1 < -100) {
            pcVar1 = "software caused connection abort";
            if (param_1 == -0x67) goto LAB_00bec4a4;
          }
          else {
            if (param_1 == -100) {
              pcVar1 = "network is down";
              goto LAB_00bec4a4;
            }
            pcVar1 = "address not available";
            if (param_1 == -99) goto LAB_00bec4a4;
          }
        }
        else {
          if (param_1 == -0x5f) {
            pcVar1 = "operation not supported on socket";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x5e) {
            pcVar1 = "address family not supported";
            if (param_1 == -0x61) goto LAB_00bec4a4;
          }
          else {
            if (param_1 == -0x5d) {
              pcVar1 = "protocol not supported";
              goto LAB_00bec4a4;
            }
            pcVar1 = "protocol not available";
            if (param_1 == -0x5c) goto LAB_00bec4a4;
          }
        }
      }
    }
  }
  else {
    if (param_1 == -0x17) {
      pcVar1 = "file table overflow";
      goto LAB_00bec4a4;
    }
    if (param_1 < -0x16) {
      if (param_1 == -0x24) {
        pcVar1 = "name too long";
        goto LAB_00bec4a4;
      }
      if (param_1 < -0x23) {
        if (param_1 == -0x47) {
          pcVar1 = "protocol error";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0x46) {
          if (param_1 == -0x59) {
            pcVar1 = "destination address required";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x59) {
            pcVar1 = "message too long";
            goto LAB_00bec4a4;
          }
          pcVar1 = "socket operation on non-socket";
          if (param_1 == -0x58) goto LAB_00bec4a4;
        }
        else {
          if (param_1 == -0x28) {
            pcVar1 = "too many symbolic links encountered";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x27) {
            pcVar1 = "machine is not on the network";
            if (param_1 == -0x40) goto LAB_00bec4a4;
          }
          else {
            if (param_1 == -0x27) {
              pcVar1 = "directory not empty";
              goto LAB_00bec4a4;
            }
            pcVar1 = "function not implemented";
            if (param_1 == -0x26) goto LAB_00bec4a4;
          }
        }
      }
      else {
        if (param_1 == -0x1d) {
          pcVar1 = "invalid seek";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0x1c) {
          if (param_1 == -0x20) {
            pcVar1 = "broken pipe";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x1f) {
            pcVar1 = "result too large";
            if (param_1 == -0x22) goto LAB_00bec4a4;
          }
          else {
            if (param_1 == -0x1f) {
              pcVar1 = "too many links";
              goto LAB_00bec4a4;
            }
            pcVar1 = "read-only file system";
            if (param_1 == -0x1e) goto LAB_00bec4a4;
          }
        }
        else {
          if (param_1 == -0x1b) {
            pcVar1 = "file too large";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x1b) {
            pcVar1 = "no space left on device";
            goto LAB_00bec4a4;
          }
          if (param_1 == -0x1a) {
            pcVar1 = "text file is busy";
            goto LAB_00bec4a4;
          }
          pcVar1 = "too many open files";
          if (param_1 == -0x18) goto LAB_00bec4a4;
        }
      }
    }
    else {
      if (param_1 == -0xc) {
        pcVar1 = "not enough memory";
        goto LAB_00bec4a4;
      }
      if (param_1 < -0xb) {
        if (param_1 == -0x12) {
          pcVar1 = "cross-device link not permitted";
          goto LAB_00bec4a4;
        }
        if (param_1 < -0x11) {
          if (param_1 == -0x15) {
            pcVar1 = "illegal operation on a directory";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x15) {
            pcVar1 = "invalid argument";
            goto LAB_00bec4a4;
          }
          if (param_1 == -0x14) {
            pcVar1 = "not a directory";
            goto LAB_00bec4a4;
          }
          pcVar1 = "no such device";
          if (param_1 == -0x13) goto LAB_00bec4a4;
        }
        else {
          if (param_1 == -0x10) {
            pcVar1 = "resource busy or locked";
            goto LAB_00bec4a4;
          }
          if (param_1 < -0x10) {
            pcVar1 = "file already exists";
            goto LAB_00bec4a4;
          }
          if (param_1 == -0xe) {
            pcVar1 = "bad address in system call argument";
            goto LAB_00bec4a4;
          }
          pcVar1 = "permission denied";
          if (param_1 == -0xd) goto LAB_00bec4a4;
        }
      }
      else {
        if (param_1 == -5) {
          pcVar1 = "i/o error";
          goto LAB_00bec4a4;
        }
        if (param_1 < -4) {
          if (param_1 == -9) {
            pcVar1 = "bad file descriptor";
            goto LAB_00bec4a4;
          }
          if (param_1 < -8) {
            pcVar1 = "resource temporarily unavailable";
            if (param_1 == -0xb) goto LAB_00bec4a4;
          }
          else {
            if (param_1 == -7) {
              pcVar1 = "argument list too long";
              goto LAB_00bec4a4;
            }
            pcVar1 = "no such device or address";
            if (param_1 == -6) goto LAB_00bec4a4;
          }
        }
        else {
          if (param_1 == -3) {
            pcVar1 = "no such process";
            goto LAB_00bec4a4;
          }
          if (param_1 < -3) {
            pcVar1 = "interrupted system call";
            goto LAB_00bec4a4;
          }
          if (param_1 == -2) {
            pcVar1 = "no such file or directory";
            goto LAB_00bec4a4;
          }
          pcVar1 = "operation not permitted";
          if (param_1 == -1) goto LAB_00bec4a4;
        }
      }
    }
  }
  snprintf(acStack_28,0x20,"Unknown system error %d");
  pcVar1 = (char *)uv__strdup(acStack_28);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown system error";
  }
LAB_00bec4a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar1);
  }
  return;
}

