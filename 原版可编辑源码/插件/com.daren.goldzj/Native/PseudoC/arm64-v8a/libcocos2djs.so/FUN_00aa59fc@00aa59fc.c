
int FUN_00aa59fc(byte param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((byte)(param_1 - 0x30) < 10) {
    return uVar1 + 0xd0;
  }
                    /* catch() { ... } // from try @ 00aa5940 with catch @ 00aa5a20 */
  if ((byte)(param_1 + 0x9f) < 6) {
    return uVar1 + 0xa9;
  }
  if ((byte)(param_1 + 0xbf) < 6) {
    return uVar1 + 0xc9;
  }
                    /* catch() { ... } // from try @ 00aa5934 with catch @ 00aa5a4c */
  return 0xff;
}

