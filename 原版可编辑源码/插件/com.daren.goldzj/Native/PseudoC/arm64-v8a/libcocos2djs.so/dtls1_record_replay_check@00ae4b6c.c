
undefined8 dtls1_record_replay_check(long param_1,ulong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ae4bf0(param_1 + 0x1110,param_2 + 1);
  if (iVar1 < 1) {
    if (0x3f < (uint)-iVar1) {
      return 0;
    }
                    /* try { // try from 00ae4bc4 to 00be4bd7 has its CatchHandler @ 00ae4cf4 */
                    /* try { // try from 00ae4bd8 to 00be4ccb has its CatchHandler @ 00ae49f4 */
    if ((*param_2 & 1L << ((ulong)(uint)-iVar1 & 0x3f)) != 0) {
      return 0;
    }
  }
  SSL3_RECORD_set_seq_num(param_1 + 0x7d8,param_1 + 0x1110);
  return 1;
}

