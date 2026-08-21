
int BIO_snprintf(char *buf,size_t n,char *format,...)

{
  int iVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar2;
  undefined8 in_d0;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int local_34;
  ulong local_30;
  size_t local_28;
  char *local_18;
  
                    /* try { // try from 00af3b30 to 00bf3b37 has its CatchHandler @ 00af3bc0 */
  puStack_50 = auStack_b0;
  puStack_58 = &stack0xffffffffffffff80;
                    /* try { // try from 00af3b58 to 00bf3b5f has its CatchHandler @ 00af3ba8 */
                    /* try { // try from 00af3b60 to 00bf3c2f has its CatchHandler @ 00af39f4 */
  uStack_48 = 0xffffff80ffffffd8;
  local_a8 = in_x3;
  local_a0 = in_x4;
  uStack_98 = in_x5;
  local_90 = in_x6;
  uStack_88 = in_x7;
  local_60 = (undefined1 *)register0x00000008;
  local_28 = n;
  local_18 = buf;
                    /* catch() { ... } // from try @ 00af3b58 with catch @ 00af3ba8 */
  iVar1 = FUN_00af30a4(&local_18,0,&local_28,&local_30,&local_34,format,&local_60,in_x7,in_d0);
  iVar2 = -1;
                    /* catch() { ... } // from try @ 00af3b30 with catch @ 00af3bc0 */
                    /* catch() { ... } // from try @ 00af3adc with catch @ 00af3bc4 */
  if (((iVar1 != 0) && (local_34 == 0)) && (iVar2 = (int)local_30, local_30 >> 0x1f != 0)) {
    iVar2 = -1;
  }
                    /* catch() { ... } // from try @ 00af3a50 with catch @ 00af3bdc */
  return iVar2;
}

