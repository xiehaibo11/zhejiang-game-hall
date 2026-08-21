
void speex_init_header(undefined8 *param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0x2020207865657053;
  *(undefined4 *)(param_1 + 2) = 0x74656232;
  *(undefined2 *)((long)param_1 + 0x14) = 0x3361;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0x16) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x5000000001;
  builtin_strncpy((char *)(param_1 + 1),"speex-1.",8);
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  param_1[5] = uVar1;
  if ((int)uVar1 < 0) {
    fprintf((FILE *)0x14d168,"warning: %s\n","This mode is meant to be used alone");
  }
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  speex_mode_query(param_4,0,param_1 + 7);
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  return;
}

