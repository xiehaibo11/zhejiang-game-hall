
void FUN_0109c6b8(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(ulong *)(param_1 + 0x30) < 0xffffffff) {
    uVar3 = *(ulong *)(param_1 + 0x40);
    if (uVar3 < *(ulong *)(param_1 + 0x48)) {
      uVar4 = *(ulong *)(param_1 + 0x30) + 1;
      do {
        pbVar7 = (byte *)(*(long *)(param_1 + 0x18) + 0x10 + uVar3 * 0xc);
        uVar9 = (ulong)*pbVar7 << 0x18 | (ulong)pbVar7[1] << 0x10 | (ulong)pbVar7[2] << 8 |
                (ulong)pbVar7[3];
        uVar8 = (ulong)pbVar7[4] << 0x18 | (ulong)pbVar7[5] << 0x10 | (ulong)pbVar7[6] << 8 |
                (ulong)pbVar7[7];
        uVar5 = uVar9;
        if (uVar9 <= uVar4) {
          uVar5 = uVar4;
        }
        if (uVar5 <= uVar8) {
          uVar1 = (*(uint *)(pbVar7 + 8) & 0xff00ff00) >> 8 |
                  (*(uint *)(pbVar7 + 8) & 0xff00ff) << 8;
          iVar6 = ((uVar1 >> 0x10 | uVar1 << 0x10) + (int)uVar5) - (int)uVar9;
          uVar4 = uVar5;
          do {
            if (iVar6 != 0) {
              *(ulong *)(param_1 + 0x30) = uVar4;
              *(int *)(param_1 + 0x38) = iVar6;
              *(ulong *)(param_1 + 0x40) = uVar3;
              return;
            }
            uVar5 = uVar4 + 1;
            bVar2 = uVar4 < uVar8;
            iVar6 = 1;
            uVar4 = uVar5;
          } while (bVar2);
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar5;
      } while (uVar3 < *(ulong *)(param_1 + 0x48));
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

