
void FUN_00133d74(long param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  iVar7 = *(int *)(param_1 + 0x14b4);
  iVar3 = *(int *)(param_1 + (long)(int)param_3 * 4 + 0xbc0);
  uVar4 = param_3 * 2;
  if ((int)uVar4 <= iVar7) {
    do {
      uVar5 = uVar4;
      if ((int)uVar4 < iVar7) {
        uVar8 = (ulong)(int)uVar4;
        lVar6 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar4 * 4);
        lVar9 = (long)*(int *)(param_1 + 0xbc0 + (uVar8 | 1) * 4);
        uVar1 = *(ushort *)(param_2 + lVar9 * 4);
        uVar2 = *(ushort *)(param_2 + lVar6 * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            (*(byte *)(param_1 + 0x14bc + lVar9) <= *(byte *)(param_1 + 0x14bc + lVar6))))) {
          uVar8 = uVar8 | 1;
          uVar5 = uVar4 | 1;
        }
      }
      else {
        uVar8 = (ulong)(int)uVar4;
      }
      uVar4 = *(uint *)(param_1 + uVar8 * 4 + 0xbc0);
      uVar1 = *(ushort *)(param_2 + (long)iVar3 * 4);
      uVar2 = *(ushort *)
               (param_2 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(param_1 + iVar3 + 0x14bc) <= *(byte *)(param_1 + (int)uVar4 + 0x14bc)))))
      break;
      *(uint *)(param_1 + (long)(int)param_3 * 4 + 0xbc0) = uVar4;
      iVar7 = *(int *)(param_1 + 0x14b4);
      uVar4 = uVar5 * 2;
      param_3 = uVar5;
    } while ((int)uVar4 <= iVar7);
  }
  *(int *)(param_1 + (long)(int)param_3 * 4 + 0xbc0) = iVar3;
  return;
}

