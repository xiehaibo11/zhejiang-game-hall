
undefined8 OPENSSL_LH_delete(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar3 = (*(code *)param_1[2])(param_2);
  uVar6 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar7 = uVar3 / uVar6;
  }
  uVar6 = uVar3 - uVar7 * uVar6;
  param_1[0xc] = param_1[0xc] + 1;
  if (uVar6 < *(uint *)(param_1 + 4)) {
    uVar7 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = uVar3 / uVar7;
    }
    uVar6 = uVar3 - uVar6 * uVar7;
  }
  puVar14 = (undefined8 *)(*param_1 + ((long)(uVar6 << 0x20) >> 0x1d));
  puVar15 = (undefined8 *)*puVar14;
  if (puVar15 != (undefined8 *)0x0) {
    pcVar16 = (code *)param_1[1];
    do {
      param_1[0x14] = param_1[0x14] + 1;
      if (puVar15[2] == uVar3) {
        param_1[0xd] = param_1[0xd] + 1;
        iVar2 = (*pcVar16)(*puVar15,param_2);
        if (iVar2 == 0) {
          puVar15 = (undefined8 *)*puVar14;
          if (puVar15 != (undefined8 *)0x0) {
            *puVar14 = puVar15[1];
            uVar12 = *puVar15;
            CRYPTO_free(puVar15);
            lVar10 = param_1[7];
            uVar5 = *(uint *)(param_1 + 3);
            param_1[0x10] = param_1[0x10] + 1;
            param_1[7] = lVar10 + -1;
            if (uVar5 < 0x11) {
              return uVar12;
            }
            uVar6 = 0;
            if ((ulong)uVar5 != 0) {
              uVar6 = (ulong)((lVar10 + -1) * 0x100) / (ulong)uVar5;
            }
            if (uVar6 <= (ulong)param_1[6]) {
              lVar10 = param_1[4];
              iVar2 = *(int *)((long)param_1 + 0x24);
              iVar9 = (int)lVar10 + -1;
              lVar11 = (ulong)(uint)(iVar9 + iVar2) * 8;
              lVar13 = *(long *)(*param_1 + lVar11);
              *(undefined8 *)(*param_1 + lVar11) = 0;
              if ((int)lVar10 == 0) {
                pvVar4 = CRYPTO_realloc((void *)*param_1,iVar2 << 3,"crypto/lhash/lhash.c",0xf0);
                if (pvVar4 == (void *)0x0) {
                  *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
                  return uVar12;
                }
                uVar5 = *(uint *)(param_1 + 3);
                *param_1 = (long)pvVar4;
                uVar1 = *(uint *)((long)param_1 + 0x24) >> 1;
                param_1[0xb] = param_1[0xb] + 1;
                iVar9 = uVar1 - 1;
                *(uint *)((long)param_1 + 0x24) = uVar1;
                *(uint *)((long)param_1 + 0x1c) = *(uint *)((long)param_1 + 0x1c) >> 1;
                *(int *)(param_1 + 4) = iVar9;
              }
              else {
                pvVar4 = (void *)*param_1;
                *(int *)(param_1 + 4) = iVar9;
              }
              *(uint *)(param_1 + 3) = uVar5 - 1;
              param_1[10] = param_1[10] + 1;
              plVar8 = (long *)((long)pvVar4 + (long)iVar9 * 8);
              lVar10 = *plVar8;
              while (lVar10 != 0) {
                plVar8 = (long *)(lVar10 + 8);
                lVar10 = *plVar8;
              }
              *plVar8 = lVar13;
              return uVar12;
            }
            return uVar12;
          }
          break;
        }
      }
      puVar14 = puVar15 + 1;
      puVar15 = (undefined8 *)*puVar14;
    } while (puVar15 != (undefined8 *)0x0);
  }
  param_1[0x11] = param_1[0x11] + 1;
  return 0;
}

