
ulong FUN_00a32b64(long *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (*(code **)(param_1[0x80] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a32b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1[0x80] + 0x58))(param_1);
    return uVar3;
  }
  if (1 < param_3) {
    lVar5 = *param_1;
    uVar2 = *(uint *)(lVar5 + 0x1e4);
    bVar1 = (uVar2 & 0x15) == 1;
    if (bVar1) {
      *param_2 = (int)param_1[0x83];
      uVar2 = *(uint *)(lVar5 + 0x1e4);
    }
    uVar3 = (ulong)bVar1;
                    /* catch() { ... } // from try @ 00a32a14 with catch @ 00a32bc8 */
    if ((uVar2 & 0x2a) == 2) {
                    /* catch() { ... } // from try @ 00a32a08 with catch @ 00a32bcc */
      uVar2 = (uint)bVar1;
                    /* catch() { ... } // from try @ 00a329e8 with catch @ 00a32bd0 */
      if ((uVar2 == 0) || ((int)param_1[0x83] != *(int *)((long)param_1 + 0x41c))) {
        uVar4 = uVar2 | 0x10;
        param_2[uVar3] = *(int *)((long)param_1 + 0x41c);
      }
      else {
                    /* catch() { ... } // from try @ 00a32a20 with catch @ 00a32be0 */
        uVar4 = 0x10;
      }
      uVar3 = (ulong)(1 << (ulong)uVar4 | uVar2);
    }
    return uVar3;
  }
  return 0;
}

