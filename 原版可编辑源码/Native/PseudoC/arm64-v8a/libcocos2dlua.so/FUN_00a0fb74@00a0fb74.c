
int FUN_00a0fb74(long param_1,uint *param_2,long param_3,ulong param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (param_4 < 2) {
                    /* try { // try from 00a0fc00 to 00b0fc0b has its CatchHandler @ 00a0fc70 */
    *(uint *)(param_1 + 0x28) = uVar5;
    return -2;
  }
  lVar6 = 0;
  iVar3 = -1;
  do {
    iVar4 = iVar3;
    param_4 = param_4 - 2;
    if (uVar5 == 0) {
      uVar1 = CONCAT11(*(undefined1 *)(param_3 + lVar6),*(undefined1 *)(param_3 + lVar6 + 1));
    }
    else {
      uVar1 = CONCAT11(*(undefined1 *)(param_3 + lVar6 + 1),*(undefined1 *)(param_3 + lVar6));
    }
    uVar2 = (uint)uVar1;
    if (uVar2 != 0xfeff) {
      if (uVar2 != 0xfffe) {
                    /* try { // try from 00a0fc0c to 00b0fc8b has its CatchHandler @ 00a0fb48 */
        if (uVar1 >> 0xb != 0x1b) {
          *param_2 = uVar2;
          *(uint *)(param_1 + 0x28) = uVar5;
          return (int)lVar6 + 2;
        }
        *(uint *)(param_1 + 0x28) = uVar5;
        return iVar4;
      }
      uVar5 = uVar5 ^ 1;
    }
  } while ((1 < param_4) && (lVar6 = lVar6 + 2, iVar3 = iVar4 + -4, (uint)lVar6 < 0x3fffffff));
  *(uint *)(param_1 + 0x28) = uVar5;
  return iVar4 + -5;
}

