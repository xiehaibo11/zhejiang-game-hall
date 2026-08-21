
void FUN_00fa7af8(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  if (0 < *(int *)(param_1 + 0x2b0)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(param_1 + lVar6 * 0x50 + 8);
      uVar13 = *(ulong *)(lVar7 + 8);
      if (uVar13 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar11 = 0;
        puVar8 = (ulong *)(lVar7 + 0x18);
        do {
          uVar12 = puVar8[-1];
          uVar2 = *puVar8;
          if ((*(uint *)(uVar12 - 1) & 1) == 0) {
            uVar12 = (uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 1;
            uVar3 = *(uint *)(uVar2 - 1);
            if ((uVar3 & 1) != 0) goto LAB_00fa7b8c;
LAB_00fa7bd0:
            uVar2 = (uVar2 & 0xffffffff00000000 | (ulong)uVar3) + 1;
            iVar10 = (int)uVar12;
          }
          else {
            if ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar12 = 0;
            }
            uVar3 = *(uint *)(uVar2 - 1);
            if ((uVar3 & 1) == 0) goto LAB_00fa7bd0;
LAB_00fa7b8c:
            if ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar2 = 0;
            }
            iVar10 = (int)uVar12;
          }
          if ((iVar10 != 0) && ((int)uVar2 != 0)) {
            lVar1 = lVar7 + lVar9 * 0x10;
            *(ulong *)(lVar1 + 0x10) = uVar12;
            *(ulong *)(lVar1 + 0x18) = uVar2;
            uVar13 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar11 = uVar11 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar11 < uVar13);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar7 = *(long *)(param_1 + lVar6 * 0x50);
      uVar13 = *(ulong *)(lVar7 + 8);
      if (uVar13 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar11 = 0;
        puVar8 = (ulong *)(lVar7 + 0x18);
        do {
          uVar12 = puVar8[-1];
          uVar2 = *puVar8;
          if ((*(uint *)(uVar12 - 1) & 1) == 0) {
            uVar12 = (uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 1;
            uVar3 = *(uint *)(uVar2 - 1);
            if ((uVar3 & 1) != 0) goto LAB_00fa7c3c;
LAB_00fa7c80:
            uVar2 = (uVar2 & 0xffffffff00000000 | (ulong)uVar3) + 1;
            iVar10 = (int)uVar12;
          }
          else {
            if ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar12 = 0;
            }
            uVar3 = *(uint *)(uVar2 - 1);
            if ((uVar3 & 1) == 0) goto LAB_00fa7c80;
LAB_00fa7c3c:
            if ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar2 = 0;
            }
            iVar10 = (int)uVar12;
          }
          if ((iVar10 != 0) && ((int)uVar2 != 0)) {
            lVar1 = lVar7 + lVar9 * 0x10;
            *(ulong *)(lVar1 + 0x10) = uVar12;
            *(ulong *)(lVar1 + 0x18) = uVar2;
            uVar13 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar11 = uVar11 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar11 < uVar13);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x2b0));
  }
  v8::base::Mutex::Lock((Mutex *)(param_1 + 0x280));
  puVar4 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    uVar13 = puVar4[1];
    puVar5 = puVar4;
    if (uVar13 != 0) goto LAB_00fa7ce4;
LAB_00fa7cb8:
    puVar4[1] = 0;
    puVar5 = puVar4;
LAB_00fa7cbc:
    puVar4 = (undefined8 *)(param_1 + 0x2a8);
    if (puVar14 != (undefined8 *)0x0) {
      puVar4 = puVar14;
    }
    *puVar4 = *puVar5;
    puVar4 = (undefined8 *)*puVar5;
    operator_delete(puVar5);
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar13 = puVar4[1];
        puVar5 = puVar4;
        if (uVar13 == 0) goto LAB_00fa7cb8;
LAB_00fa7ce4:
        lVar6 = 0;
        uVar11 = 0;
        puVar8 = puVar5 + 3;
        do {
          uVar12 = puVar8[-1];
          uVar2 = *puVar8;
          if ((*(uint *)(uVar12 - 1) & 1) == 0) {
            uVar12 = (uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 1;
            uVar3 = *(uint *)(uVar2 - 1);
            if ((uVar3 & 1) != 0) goto LAB_00fa7d24;
LAB_00fa7d68:
            uVar2 = (uVar2 & 0xffffffff00000000 | (ulong)uVar3) + 1;
            iVar10 = (int)uVar12;
          }
          else {
            if ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar12 = 0;
            }
            uVar3 = *(uint *)(uVar2 - 1);
            if ((uVar3 & 1) == 0) goto LAB_00fa7d68;
LAB_00fa7d24:
            if ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar2 = 0;
            }
            iVar10 = (int)uVar12;
          }
          if ((iVar10 != 0) && ((int)uVar2 != 0)) {
            puVar5[lVar6 * 2 + 2] = uVar12;
            puVar5[lVar6 * 2 + 3] = uVar2;
            uVar13 = puVar5[1];
            lVar6 = lVar6 + 1;
          }
          uVar11 = uVar11 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar11 < uVar13);
        puVar5[1] = lVar6;
        if (lVar6 == 0) goto LAB_00fa7cbc;
        puVar4 = (undefined8 *)*puVar5;
        puVar14 = puVar5;
        if (puVar4 == (undefined8 *)0x0) break;
      } while( true );
    }
  }
  v8::base::Mutex::Unlock((Mutex *)(param_1 + 0x280));
  return;
}

