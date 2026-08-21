
void md5_finish(uint *param_1,undefined1 *param_2)

{
  long lVar1;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *param_1;
  uStack_3c = param_1[1];
                    /* catch() { ... } // from try @ 01020a64 with catch @ 01020a18 */
  md5_append(param_1,&DAT_0145898c,(0x37 - (local_40 >> 3) & 0x3f) + 1);
  md5_append(param_1,&local_40,8);
  *param_2 = (char)param_1[2];
  param_2[1] = (char)(param_1[2] >> 8);
                    /* try { // try from 01020a5c to 01120a63 has its CatchHandler @ 01020bd8 */
  param_2[2] = (char)*(undefined2 *)((long)param_1 + 10);
                    /* try { // try from 01020a64 to 01120bf3 has its CatchHandler @ 01020a18 */
  param_2[3] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[4] = (char)param_1[3];
  param_2[5] = (char)(param_1[3] >> 8);
  param_2[6] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[7] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[8] = (char)param_1[4];
  param_2[9] = (char)(param_1[4] >> 8);
  param_2[10] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0xb] = *(undefined1 *)((long)param_1 + 0x13);
  param_2[0xc] = (char)param_1[5];
  param_2[0xd] = (char)(param_1[5] >> 8);
  param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[0xf] = *(undefined1 *)((long)param_1 + 0x17);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

