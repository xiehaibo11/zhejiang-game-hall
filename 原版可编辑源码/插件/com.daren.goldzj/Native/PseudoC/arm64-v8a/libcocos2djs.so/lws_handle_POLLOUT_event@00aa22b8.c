
/* WARNING: Removing unreachable block (ram,0x00aa259c) */

undefined4 lws_handle_POLLOUT_event(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 local_40;
  int local_38;
  
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 0x20;
  if (*(int *)(param_1 + 0x2e8) == 0) {
    cVar1 = *(char *)(param_1 + 0x2ff);
    if (cVar1 == '\v') {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
    }
    else {
      if (*(char *)(param_1 + 0x2fe) == '&') {
LAB_00aa2370:
        bVar6 = *(byte *)(param_1 + 0x2f6);
joined_r0x00aa2374:
        if ((bVar6 >> 4 & 1) != 0) {
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
          uVar3 = FUN_00aa263c(param_1);
          return uVar3;
        }
        if (param_2 != 0) {
          if ((*(byte *)(param_1 + 0x2f8) >> 6 & 1) == 0) {
            iVar2 = FUN_00aa3be0(param_1,4,0);
            if (iVar2 != 0) goto LAB_00aa2330;
            *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
            if ((*(byte *)(param_1 + 0x2f8) >> 6 & 1) != 0) {
              FUN_00aa263c(param_1);
            }
          }
          else {
            *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
          }
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
        }
        if ((*(char *)(param_1 + 0x2fe) == '&') || ((*(byte *)(param_1 + 0x2f4) & 1) != 0)) {
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
          uVar3 = FUN_00aa263c(param_1);
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
          if ((*(byte *)(param_1 + 0x2f8) >> 6 & 1) != 0) {
            FUN_00aa3be0(param_1,0,4);
            return uVar3;
          }
          return uVar3;
        }
        goto LAB_00aa230c;
      }
      if (cVar1 == '\x05') {
        uVar7 = *(uint *)(param_1 + 0x106);
        if ((uVar7 >> 7 & 1) == 0) {
          if (((*(uint *)(param_1 + 0x2f4) >> 6 & 1) != 0) || ((uVar7 >> 0x10 & 1) == 0)) {
            if ((uVar7 >> 0xf & 1) != 0) {
              iVar2 = lws_write(param_1,0,0,2);
              goto joined_r0x00aa2608;
            }
            goto LAB_00aa2508;
          }
          *(uint *)(param_1 + 0x106) = uVar7 & 0xfffeffff;
          iVar2 = lws_write(param_1,param_1 + 0x80,0,5);
          if (-1 < iVar2) {
            uVar5 = 0x11;
            uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x220) + 0xc80);
            goto LAB_00aa2404;
          }
        }
        else {
LAB_00aa2464:
          iVar2 = lws_write(param_1,param_1 + 0x80,*(undefined1 *)(param_1 + 0xfd),
                            uVar7 >> 5 & 2 ^ 6);
          if ((-1 < iVar2) &&
             (uVar7 = *(uint *)(param_1 + 0x106), *(uint *)(param_1 + 0x106) = uVar7 & 0xffffff7f,
             (uVar7 >> 6 & 1) == 0)) goto LAB_00aa230c;
        }
      }
      else {
        if (cVar1 == '\t') {
          uVar7 = *(uint *)(param_1 + 0x106);
          if ((uVar7 >> 6 & 1) != 0) goto LAB_00aa2464;
          goto LAB_00aa2370;
        }
        if (cVar1 == '\b') {
          *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xfffbffff;
          iVar2 = lws_write(param_1,param_1 + 0x80,*(undefined1 *)(param_1 + 0x102),4);
          if (-1 < iVar2) {
            uVar5 = 6;
            uVar3 = 1;
            *(undefined1 *)(param_1 + 0x2ff) = 10;
LAB_00aa2404:
            lws_set_timeout(param_1,uVar5,uVar3);
            goto LAB_00aa230c;
          }
        }
        else {
LAB_00aa2508:
          iVar2 = FUN_00ab3f44(param_1,0x14,0,0);
          if (iVar2 == 0) {
            uVar7 = *(uint *)(param_1 + 0x2f4);
            if ((uVar7 >> 0x1d & 1) == 0) goto LAB_00aa2370;
            if ((*(byte *)(param_1 + 0x2fe) & 0xfe) != 0xc) {
              do {
                while( true ) {
                  local_40 = 0;
                  local_38 = 0;
                  iVar2 = FUN_00ab3f44(param_1,0xc,&local_40,0);
                  if (iVar2 < 0) {
                    _lws_log(1,"ext reports fatal error\n");
                    goto LAB_00aa2330;
                  }
                  if (local_38 == 0) break;
                  iVar4 = FUN_00aa408c(param_1,local_40);
                  if (iVar4 < 0) goto LAB_00aa2330;
                  if (iVar4 != local_38) {
                    _lws_log(1,"Unable to spill ext %d vs %d\n",local_38,iVar4);
                    goto LAB_00aa2330;
                  }
                  if (iVar2 == 0) goto LAB_00aa25b8;
                  iVar2 = lws_send_pipe_choked(param_1);
                  if (iVar2 != 0) goto LAB_00aa230c;
                }
              } while (iVar2 != 0);
LAB_00aa25b8:
              uVar7 = *(uint *)(param_1 + 0x2f4);
            }
            *(uint *)(param_1 + 0x2f4) = uVar7 & 0xdfffffff;
            bVar6 = *(byte *)(param_1 + 0x2f6);
            goto joined_r0x00aa2374;
          }
        }
      }
    }
  }
  else {
    iVar2 = FUN_00aa408c(param_1,*(long *)(param_1 + 0x288) + (ulong)*(uint *)(param_1 + 0x2e4));
joined_r0x00aa2608:
    if (-1 < iVar2) {
LAB_00aa230c:
      bVar6 = *(byte *)(param_1 + 0x2f8);
      uVar3 = 0;
      goto LAB_00aa2338;
    }
  }
LAB_00aa2330:
  bVar6 = *(byte *)(param_1 + 0x2f8);
  uVar3 = 0xffffffff;
LAB_00aa2338:
  *(byte *)(param_1 + 0x2f8) = bVar6 & 0xdf;
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
  return uVar3;
}

