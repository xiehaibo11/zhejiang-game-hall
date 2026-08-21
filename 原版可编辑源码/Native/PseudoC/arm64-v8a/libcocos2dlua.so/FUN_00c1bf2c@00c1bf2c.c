
void FUN_00c1bf2c(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  uVar13 = (ulong)param_3;
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar16 = (ulong)uVar2;
  lVar15 = *(long *)(param_2 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x34);
  if (uVar2 < param_3) {
    if (0x8000001 < param_3) goto LAB_00c1c1cc;
    if (*(char *)(param_2 + 0xb) < '\x01') {
      lVar6 = FUN_00c1a2b4(param_1,*(undefined8 *)(param_2 + 0x10),uVar16 << 3,uVar13 << 3);
    }
    else {
      lVar17 = *(long *)(param_2 + 0x10);
      lVar6 = FUN_00c1a2b4(param_1,0,0,uVar13 << 3);
      *(byte *)(param_2 + 0xb) = *(byte *)(param_2 + 0xb) | 0x80;
      if (uVar2 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(lVar6 + lVar10 * 8) = *(undefined8 *)(lVar17 + lVar10 * 8);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < uVar2);
      }
    }
    iVar5 = param_3 - uVar2;
    *(long *)(param_2 + 0x10) = lVar6;
    *(uint *)(param_2 + 0x30) = param_3;
    uVar1 = (iVar5 - 2U >> 1) + 1;
    iVar4 = uVar1 * 2;
    uVar11 = uVar16;
    if (iVar5 != 1) {
      uVar12 = 0;
      puVar8 = (undefined8 *)(lVar6 + uVar16 * 8);
      do {
        puVar8[1] = 0xffffffffffffffff;
        *puVar8 = 0xffffffffffffffff;
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar12 < uVar1);
      uVar11 = (ulong)(iVar4 + uVar2);
      if (iVar4 == iVar5) goto LAB_00c1c014;
    }
    *(undefined8 *)(lVar6 + uVar11 * 8) = 0xffffffffffffffff;
  }
LAB_00c1c014:
  if (param_4 == 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 0x34) = 0;
    lVar6 = lVar6 + 0xe8;
    *(long *)(param_2 + 0x28) = lVar6;
    *(long *)(param_2 + 0x38) = lVar6;
  }
  else {
    if (0x1a < param_4) {
LAB_00c1c1cc:
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0x8b);
    }
    uVar1 = 1 << (ulong)(param_4 & 0x1f);
    lVar6 = (ulong)uVar1 * 0x18;
    lVar17 = FUN_00c1a2b4(param_1,0,0,lVar6);
    uVar1 = uVar1 - 1;
    *(long *)(param_2 + 0x28) = lVar17;
    *(long *)(param_2 + 0x38) = lVar17 + lVar6;
    *(uint *)(param_2 + 0x34) = uVar1;
    uVar11 = 0;
    do {
      uVar12 = (int)uVar11 + 1;
      lVar6 = lVar17 + uVar11 * 0x18;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + uVar11 * 0x18) = 0xffffffffffffffff;
      uVar11 = (ulong)uVar12;
    } while (uVar12 <= uVar1);
  }
  if (param_3 < uVar2) {
    lVar17 = *(long *)(param_2 + 0x10);
    lVar6 = uVar13 * 8;
    *(uint *)(param_2 + 0x30) = param_3;
    plVar14 = (long *)(lVar6 + lVar17);
    do {
      if (*plVar14 != -1) {
        plVar7 = (long *)FUN_00c1c648(param_1,param_2,uVar13);
        *plVar7 = *plVar14;
      }
      uVar1 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar1;
      plVar14 = plVar14 + 1;
    } while (uVar1 < uVar2);
    if (*(char *)(param_2 + 0xb) < '\x01') {
      uVar9 = FUN_00c1a2b4(param_1,lVar17,uVar16 << 3,lVar6);
      *(undefined8 *)(param_2 + 0x10) = uVar9;
    }
  }
  if (uVar3 != 0) {
    uVar13 = 0;
    do {
      lVar6 = uVar13 * 0x18;
      if (*(long *)(lVar15 + lVar6) != -1) {
        puVar8 = (undefined8 *)FUN_00c1bdd4(param_1,param_2,lVar15 + lVar6 + 8);
        *puVar8 = *(undefined8 *)(lVar15 + lVar6);
      }
      uVar2 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar2;
    } while (uVar2 <= uVar3);
    lVar6 = *(long *)(param_1 + 0x10);
    *(ulong *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + (ulong)(uVar3 + 1) * -0x18;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 0x18),lVar15,(ulong)(uVar3 + 1) * 0x18,0);
  }
  return;
}

