
void dtls1_record_bitmap_update(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00ae4bf0((ulong *)(param_1 + 0x1110),param_2 + 1);
  if ((int)uVar1 < 1) {
    if (-uVar1 < 0x40) {
      *param_2 = *param_2 | 1L << ((ulong)-uVar1 & 0x3f);
    }
  }
  else {
    if (uVar1 < 0x40) {
      uVar2 = *param_2 << ((ulong)uVar1 & 0x3f) | 1;
    }
    else {
      uVar2 = 1;
    }
    *param_2 = uVar2;
                    /* try { // try from 00ae4ccc to 00be4cd3 has its CatchHandler @ 00ae4cd4 */
    param_2[1] = *(ulong *)(param_1 + 0x1110);
  }
                    /* catch() { ... } // from try @ 00ae4af4 with catch @ 00ae4cd4
                       catch() { ... } // from try @ 00ae4ccc with catch @ 00ae4cd4
                       try { // try from 00ae4cd4 to 00be4d6f has its CatchHandler @ 00ae49f4 */
                    /* catch() { ... } // from try @ 00ae4b20 with catch @ 00ae4cd8 */
  return;
}

