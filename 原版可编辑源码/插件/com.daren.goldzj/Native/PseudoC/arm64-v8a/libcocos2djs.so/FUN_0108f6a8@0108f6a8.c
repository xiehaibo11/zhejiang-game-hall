
void FUN_0108f6a8(long param_1,int param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if ((int)param_5 < 0) {
    iVar2 = *(int *)(param_3 + 3) >> 1;
    param_5 = (*(int *)(param_1 + 3) >> 1) - param_2;
    uVar8 = iVar2 - param_4;
    if (uVar8 <= param_5) {
      param_5 = uVar8;
    }
    iVar1 = param_5 + param_4;
    if (iVar1 < iVar2) {
      lVar6 = (long)iVar1;
      uVar8 = iVar1 * 8 | 7;
      do {
        *(undefined8 *)(param_3 + (int)uVar8) = 0xfff7fffffff7ffff;
        lVar6 = lVar6 + 1;
        uVar8 = uVar8 + 8;
      } while (lVar6 < *(int *)(param_3 + 3) >> 1);
    }
  }
  if (param_5 != 0) {
    param_5 = param_5 << 1;
    param_3 = param_3 + (ulong)(uint)(param_4 << 3);
    param_1 = param_1 + (ulong)(uint)(param_2 << 3);
    puVar5 = (undefined4 *)(param_3 + 7);
    puVar7 = (undefined4 *)(param_1 + 7);
    uVar9 = (ulong)(int)param_5;
    if (0xf < param_5) {
      v8::internal::MemCopy(puVar5,puVar7,uVar9 << 2);
      return;
    }
    if ((7 < param_5) && ((puVar7 + uVar9 <= puVar5 || (puVar5 + uVar9 <= puVar7)))) {
      uVar10 = uVar9 & 0xfffffffffffffff8;
      puVar11 = (undefined8 *)(param_3 + 0x17);
      puVar7 = puVar7 + uVar10;
      puVar5 = puVar5 + uVar10;
      puVar12 = (undefined8 *)(param_1 + 0x17);
      uVar13 = uVar10;
      do {
        puVar3 = puVar12 + -1;
        uVar14 = puVar12[-2];
        uVar16 = puVar12[1];
        uVar15 = *puVar12;
        uVar13 = uVar13 - 8;
        puVar12 = puVar12 + 4;
        puVar11[-1] = *puVar3;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      bVar4 = uVar10 == uVar9;
      uVar9 = uVar9 - uVar10;
      if (bVar4) {
        return;
      }
    }
    do {
      uVar9 = uVar9 - 1;
      *puVar5 = *puVar7;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar9 != 0);
  }
  return;
}

