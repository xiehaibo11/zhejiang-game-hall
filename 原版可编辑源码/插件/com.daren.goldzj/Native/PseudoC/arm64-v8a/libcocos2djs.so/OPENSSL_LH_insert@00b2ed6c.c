
undefined8 OPENSSL_LH_insert(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  code *pcVar17;
  
  plVar14 = param_1 + 7;
  uVar1 = *(uint *)(param_1 + 3);
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar9 = 0;
  if ((ulong)uVar1 != 0) {
    uVar9 = (ulong)(*plVar14 << 8) / (ulong)uVar1;
  }
  if ((ulong)param_1[5] <= uVar9) {
    *(uint *)(param_1 + 3) = uVar1 + 1;
    param_1[8] = param_1[8] + 1;
    uVar7 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar7 + 1;
    lVar10 = *param_1;
    uVar2 = *(uint *)((long)param_1 + 0x24);
    plVar11 = (long *)(lVar10 + (ulong)uVar7 * 8);
    uVar9 = (ulong)(uVar2 + uVar7);
    *(undefined8 *)(lVar10 + uVar9 * 8) = 0;
    lVar12 = *plVar11;
    uVar1 = *(uint *)((long)param_1 + 0x1c);
    uVar5 = (ulong)uVar1;
    if (lVar12 != 0) {
      lVar13 = uVar9 * 8;
      do {
        while( true ) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = *(ulong *)(lVar12 + 0x10) / uVar5;
          }
          if (*(ulong *)(lVar12 + 0x10) - uVar9 * uVar5 == (ulong)uVar7) break;
          *plVar11 = *(long *)(lVar12 + 8);
          *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar10 + lVar13);
          *(long *)(lVar10 + lVar13) = lVar12;
          lVar12 = *plVar11;
          if (lVar12 == 0) goto LAB_00b2ee48;
        }
        plVar11 = (long *)(lVar12 + 8);
        lVar12 = *plVar11;
      } while (lVar12 != 0);
    }
LAB_00b2ee48:
    if (uVar2 <= uVar7 + 1) {
      pvVar4 = CRYPTO_realloc((void *)*param_1,uVar1 << 4,"crypto/lhash/lhash.c",0xd6);
      if (pvVar4 == (void *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
        return 0;
      }
      uVar7 = *(uint *)((long)param_1 + 0x1c);
      uVar1 = uVar1 * 2;
      if (uVar7 < uVar1) {
        memset((void *)((long)pvVar4 + (ulong)uVar7 * 8),0,(ulong)((uVar1 - 1) - uVar7) * 8 + 8);
        uVar7 = *(uint *)((long)param_1 + 0x1c);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(uint *)((long)param_1 + 0x24) = uVar7;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = (long)pvVar4;
      param_1[9] = param_1[9] + 1;
    }
  }
  uVar5 = (*(code *)param_1[2])(param_2);
  param_1[0xc] = param_1[0xc] + 1;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar5 / uVar8;
  }
  uVar9 = uVar5 - uVar9 * uVar8;
  if (uVar9 < *(uint *)(param_1 + 4)) {
    uVar8 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar5 / uVar8;
    }
    uVar9 = uVar5 - uVar9 * uVar8;
  }
  puVar15 = (undefined8 *)(*param_1 + ((long)(uVar9 << 0x20) >> 0x1d));
  puVar16 = (undefined8 *)*puVar15;
  if (puVar16 != (undefined8 *)0x0) {
    pcVar17 = (code *)param_1[1];
    do {
      param_1[0x14] = param_1[0x14] + 1;
      if (puVar16[2] == uVar5) {
        param_1[0xd] = param_1[0xd] + 1;
        iVar3 = (*pcVar17)(*puVar16,param_2);
        if (iVar3 == 0) {
          puVar16 = (undefined8 *)*puVar15;
          if (puVar16 != (undefined8 *)0x0) {
            uVar6 = *puVar16;
            plVar14 = param_1 + 0xf;
            *puVar16 = param_2;
            goto LAB_00b2ef90;
          }
          break;
        }
      }
      puVar15 = puVar16 + 1;
      puVar16 = (undefined8 *)*puVar15;
    } while (puVar16 != (undefined8 *)0x0);
  }
  puVar16 = CRYPTO_malloc(0x18,"crypto/lhash/lhash.c",0x53);
  if (puVar16 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
    uVar6 = 0;
  }
  else {
    *puVar16 = param_2;
    puVar16[1] = 0;
    puVar16[2] = uVar5;
    *puVar15 = puVar16;
    uVar6 = 0;
    param_1[0xe] = param_1[0xe] + 1;
LAB_00b2ef90:
    *plVar14 = *plVar14 + 1;
  }
  return uVar6;
}

