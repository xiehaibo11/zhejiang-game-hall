
undefined8
ssl_add_serverhello_use_srtp_ext(long param_1,undefined2 *param_2,undefined4 *param_3,int param_4)

{
  int reason;
  int line;
  undefined8 uVar1;
  
                    /* try { // try from 00ae4790 to 00be488f has its CatchHandler @ 00ae4720 */
  if (param_2 == (undefined2 *)0x0) {
LAB_00ae47ec:
    *param_3 = 5;
    return 0;
  }
  if (param_4 < 5) {
    reason = 0x16b;
    line = 0xff;
  }
  else {
    if (*(long *)(param_1 + 0x2f0) != 0) {
      *param_2 = 0x200;
      *(char *)(param_2 + 1) = (char)((ulong)*(undefined8 *)(*(long *)(param_1 + 0x2f0) + 8) >> 8);
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x2f0) + 8);
      *(undefined1 *)(param_2 + 2) = 0;
      *(char *)((long)param_2 + 3) = (char)uVar1;
      goto LAB_00ae47ec;
    }
    reason = 0x171;
    line = 0x105;
  }
  ERR_put_error(0x14,0x134,reason,"ssl/d1_srtp.c",line);
  return 1;
}

