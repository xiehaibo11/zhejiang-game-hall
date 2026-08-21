
undefined8 FUN_00a69c54(undefined8 param_1,char *param_2,DES_cblock *param_3)

{
  long lVar1;
  size_t sVar2;
  DES_key_schedule DStack_e0;
  uchar local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  uchar local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  uchar local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  uchar local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_2);
  if (0xd < sVar2) {
    sVar2 = 0xe;
  }
  FUN_00a4a2bc(&local_60,param_2,sVar2);
  memset(&local_60 + sVar2,0,0xe - sVar2);
  local_50 = local_60;
  local_4f = local_5f >> 1 | local_60 << 7;
  local_4e = local_5e >> 2 | local_5f << 6;
  local_4d = local_5d >> 3 | local_5e << 5;
  local_4c = local_5c >> 4 | local_5d << 4;
  local_4b = local_5b >> 5 | local_5c << 3;
  local_4a = local_5a >> 6 | local_5b << 2;
  local_49 = local_5a << 1;
  DES_set_odd_parity((DES_cblock *)&local_50);
  DES_set_key((const_DES_cblock *)&local_50,&DStack_e0);
  DES_ecb_encrypt((const_DES_cblock *)&DAT_013cc004,param_3,&DStack_e0,1);
  local_50 = local_59;
  local_4f = local_58 >> 1 | local_59 << 7;
  local_4e = local_57 >> 2 | local_58 << 6;
  local_4d = local_56 >> 3 | local_57 << 5;
                    /* try { // try from 00a69d94 to 00b69dc7 has its CatchHandler @ 00a69e94 */
  local_4c = local_55 >> 4 | local_56 << 4;
  local_4b = local_54 >> 5 | local_55 << 3;
  local_4a = local_53 >> 6 | local_54 << 2;
  local_49 = local_53 << 1;
                    /* try { // try from 00a69dc8 to 00b69ddb has its CatchHandler @ 00a69e60 */
  DES_set_odd_parity((DES_cblock *)&local_50);
  DES_set_key((const_DES_cblock *)&local_50,&DStack_e0);
                    /* try { // try from 00a69de0 to 00b69e13 has its CatchHandler @ 00a69e64 */
  DES_ecb_encrypt((const_DES_cblock *)&DAT_013cc004,param_3 + 1,&DStack_e0,1);
  param_3[2][4] = '\0';
  *(uchar *)((long)(param_3 + 2) + 0) = '\0';
  *(uchar *)((long)(param_3 + 2) + 1) = '\0';
  *(uchar *)((long)(param_3 + 2) + 2) = '\0';
  *(uchar *)((long)(param_3 + 2) + 3) = '\0';
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00a69e14 to 00b69eaf has its CatchHandler @ 00a69694 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

