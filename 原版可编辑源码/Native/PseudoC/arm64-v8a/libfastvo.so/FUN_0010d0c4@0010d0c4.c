
void FUN_0010d0c4(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 *__src;
  long lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  piVar9 = *(int **)(param_1 + 8000);
  if (param_2 < -0x7ffe) {
    param_2 = -0x7fff;
  }
  if (0x7ffe < param_2) {
    param_2 = 0x7fff;
  }
  sVar3 = (short)param_2;
  if (piVar9[1] < *(int *)(param_1 + 0x1f5c)) {
    iVar8 = *piVar9;
    if (iVar8 < 0x28) {
      if (0 < iVar8) goto LAB_0010d214;
      lVar7 = 0;
    }
    else {
      if (piVar9[(long)(iVar8 + -1) + 2] <= (int)sVar3) {
        piVar9[1] = piVar9[1] + 1;
        return;
      }
LAB_0010d214:
      lVar7 = 0;
      do {
        if ((int)sVar3 < piVar9[lVar7 + 2]) {
          bVar4 = true;
          goto LAB_0010d24c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar8);
    }
    bVar4 = false;
LAB_0010d24c:
    uVar6 = (uint)lVar7;
    piVar10 = piVar9;
    if (iVar8 < (int)uVar6) goto LAB_0010d258;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x1f48);
    piVar10 = *(int **)(param_1 + 0x1f50);
    iVar8 = 0;
    bVar4 = false;
    *(int **)(param_1 + 0x1f48) = piVar9;
    *(undefined8 *)(param_1 + 0x1f50) = uVar5;
    *(int **)(param_1 + 8000) = piVar10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    uVar6 = 0;
  }
  if (uVar6 < 0x28) {
    if (bVar4) {
      uVar2 = (iVar8 - (uint)(iVar8 == 0x28)) - uVar6;
      piVar9 = piVar10 + (ulong)uVar6 + 2;
      memmove(piVar10 + (ulong)(uVar6 + 1) + 2,piVar9,
              -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
      __src = (undefined2 *)((long)piVar10 + (ulong)uVar6 * 2 + 0xa8);
      memmove((void *)((long)piVar10 + (ulong)(uVar6 + 1) * 2 + 0xa8),__src,
              -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
    }
    else {
      piVar9 = piVar10 + (ulong)uVar6 + 2;
      __src = (undefined2 *)((long)piVar10 + (ulong)uVar6 * 2 + 0xa8);
    }
    *piVar9 = (int)sVar3;
    iVar1 = piVar10[1];
    *__src = (short)iVar1;
    piVar10[1] = iVar1 + 1;
    if (iVar8 < 0x28) {
      *piVar10 = iVar8 + 1;
    }
    return;
  }
LAB_0010d258:
                    /* WARNING: Subroutine does not return */
  FUN_0010e4e8();
}

