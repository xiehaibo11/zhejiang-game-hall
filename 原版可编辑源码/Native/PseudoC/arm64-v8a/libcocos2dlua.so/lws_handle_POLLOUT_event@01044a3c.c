
/* WARNING: Removing unreachable block (ram,0x01044d20) */

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
                    /* try { // try from 01044a74 to 01144a9b has its CatchHandler @ 010457ec */
  if (*(int *)(param_1 + 0x2e8) == 0) {
                    /* try { // try from 01044a9c to 01144af7 has its CatchHandler @ 01044928 */
    cVar1 = *(char *)(param_1 + 0x2ff);
    if (cVar1 == '\v') {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
    }
    else {
      if (*(char *)(param_1 + 0x2fe) == '&') {
LAB_01044af4:
        bVar6 = *(byte *)(param_1 + 0x2f6);
joined_r0x01044af8:
                    /* try { // try from 01044af8 to 01144b1f has its CatchHandler @ 0104572c */
        if ((bVar6 >> 4 & 1) != 0) {
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
                    /* try { // try from 01044d68 to 01144d77 has its CatchHandler @ 01045948 */
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
          uVar3 = FUN_01044dc0(param_1);
          return uVar3;
        }
        if (param_2 != 0) {
          if ((*(byte *)(param_1 + 0x2f8) >> 6 & 1) == 0) {
            iVar2 = FUN_01046364(param_1,4,0);
            if (iVar2 != 0) goto LAB_01044ab4;
                    /* try { // try from 01044b20 to 01144b37 has its CatchHandler @ 0104570c */
            *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
            if ((*(byte *)(param_1 + 0x2f8) >> 6 & 1) != 0) {
              FUN_01044dc0(param_1);
                    /* try { // try from 01044b38 to 01144b7b has its CatchHandler @ 01044928 */
            }
          }
          else {
            *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
          }
                    /* try { // try from 01044c30 to 01144c53 has its CatchHandler @ 01045958 */
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
        }
        if ((*(char *)(param_1 + 0x2fe) == '&') || ((*(byte *)(param_1 + 0x2f4) & 1) != 0)) {
                    /* try { // try from 01044c54 to 01144c5f has its CatchHandler @ 01045904 */
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
          uVar3 = FUN_01044dc0(param_1);
          *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xdf;
          if ((*(byte *)(param_1 + 0x2f8) >> 6 & 1) != 0) {
            FUN_01046364(param_1,0,4);
            return uVar3;
          }
          return uVar3;
        }
        goto LAB_01044a90;
      }
      if (cVar1 == '\x05') {
        uVar7 = *(uint *)(param_1 + 0x106);
        if ((uVar7 >> 7 & 1) == 0) {
          if (((*(uint *)(param_1 + 0x2f4) >> 6 & 1) != 0) || ((uVar7 >> 0x10 & 1) == 0)) {
            if ((uVar7 >> 0xf & 1) != 0) {
                    /* try { // try from 01044d7c to 01144d9b has its CatchHandler @ 0104598c */
              iVar2 = lws_write(param_1,0,0,2);
              goto joined_r0x01044d8c;
            }
            goto LAB_01044c8c;
          }
          *(uint *)(param_1 + 0x106) = uVar7 & 0xfffeffff;
                    /* try { // try from 01044bc4 to 01144bc7 has its CatchHandler @ 010459c4 */
          iVar2 = lws_write(param_1,param_1 + 0x80,0,5);
          if (-1 < iVar2) {
                    /* try { // try from 01044bd0 to 01144bd7 has its CatchHandler @ 010459c0 */
            uVar5 = 0x11;
            uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x220) + 0xc80);
                    /* try { // try from 01044bd8 to 01144bff has its CatchHandler @ 010459cc */
            goto LAB_01044b88;
          }
        }
        else {
LAB_01044be8:
          iVar2 = lws_write(param_1,param_1 + 0x80,*(undefined1 *)(param_1 + 0xfd),
                            uVar7 >> 5 & 2 ^ 6);
          if ((-1 < iVar2) &&
             (uVar7 = *(uint *)(param_1 + 0x106), *(uint *)(param_1 + 0x106) = uVar7 & 0xffffff7f,
             (uVar7 >> 6 & 1) == 0)) goto LAB_01044a90;
        }
      }
      else {
        if (cVar1 == '\t') {
          uVar7 = *(uint *)(param_1 + 0x106);
          if ((uVar7 >> 6 & 1) != 0) goto LAB_01044be8;
          goto LAB_01044af4;
        }
        if (cVar1 == '\b') {
          *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xfffbffff;
          iVar2 = lws_write(param_1,param_1 + 0x80,*(undefined1 *)(param_1 + 0x102),4);
          if (-1 < iVar2) {
                    /* try { // try from 01044b7c to 01144b83 has its CatchHandler @ 01045744 */
            uVar5 = 6;
            uVar3 = 1;
            *(undefined1 *)(param_1 + 0x2ff) = 10;
LAB_01044b88:
            lws_set_timeout(param_1,uVar5,uVar3);
            goto LAB_01044a90;
          }
        }
        else {
LAB_01044c8c:
                    /* try { // try from 01044c8c to 01144c9b has its CatchHandler @ 0104582c */
          iVar2 = FUN_010566c8(param_1,0x14,0,0);
                    /* try { // try from 01044ca0 to 01144cbf has its CatchHandler @ 010458ec */
          if (iVar2 == 0) {
            uVar7 = *(uint *)(param_1 + 0x2f4);
            if ((uVar7 >> 0x1d & 1) == 0) goto LAB_01044af4;
            if ((*(byte *)(param_1 + 0x2fe) & 0xfe) != 0xc) {
              do {
                while( true ) {
                  local_40 = 0;
                  local_38 = 0;
                  iVar2 = FUN_010566c8(param_1,0xc,&local_40,0);
                    /* try { // try from 01044cd8 to 01144ce7 has its CatchHandler @ 0104593c */
                  if (iVar2 < 0) {
                    _lws_log(1,"ext reports fatal error\n");
                    goto LAB_01044ab4;
                  }
                  if (local_38 == 0) break;
                    /* try { // try from 01044cec to 01144d0b has its CatchHandler @ 0104599c */
                  iVar4 = FUN_01046810(param_1,local_40);
                  if (iVar4 < 0) goto LAB_01044ab4;
                  if (iVar4 != local_38) {
                    /* try { // try from 01044db0 to 01144dbf has its CatchHandler @ 01045938 */
                    _lws_log(1,"Unable to spill ext %d vs %d\n",local_38,iVar4);
                    goto LAB_01044ab4;
                  }
                  if (iVar2 == 0) goto LAB_01044d3c;
                  iVar2 = lws_send_pipe_choked(param_1);
                  if (iVar2 != 0) goto LAB_01044a90;
                }
              } while (iVar2 != 0);
LAB_01044d3c:
              uVar7 = *(uint *)(param_1 + 0x2f4);
            }
            *(uint *)(param_1 + 0x2f4) = uVar7 & 0xdfffffff;
            bVar6 = *(byte *)(param_1 + 0x2f6);
            goto joined_r0x01044af8;
          }
        }
      }
    }
  }
  else {
    iVar2 = FUN_01046810(param_1,*(long *)(param_1 + 0x288) + (ulong)*(uint *)(param_1 + 0x2e4));
joined_r0x01044d8c:
    if (-1 < iVar2) {
LAB_01044a90:
      bVar6 = *(byte *)(param_1 + 0x2f8);
      uVar3 = 0;
      goto LAB_01044abc;
    }
  }
LAB_01044ab4:
  bVar6 = *(byte *)(param_1 + 0x2f8);
  uVar3 = 0xffffffff;
LAB_01044abc:
  *(byte *)(param_1 + 0x2f8) = bVar6 & 0xdf;
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0xbf;
  return uVar3;
}

