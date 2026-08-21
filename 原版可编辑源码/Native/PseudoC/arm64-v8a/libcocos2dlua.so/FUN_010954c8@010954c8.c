
undefined8 FUN_010954c8(long param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar9 = *(long *)(param_1 + 0x108);
  if (((lVar9 != 0) && (param_2 != (byte *)0x0)) && (*(long *)(lVar9 + 0x80) != 0)) {
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    if (uVar6 != 0) {
      uVar3 = 0;
      lVar5 = 1;
      puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe8) + 0x10);
      do {
        uVar8 = (ulong)uVar6;
        uVar6 = (uint)param_2[lVar5];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010953ac with catch @ 01095528
                        */
        uVar3 = uVar3 * 0x1f + uVar8;
        lVar5 = lVar5 + 1;
      } while (uVar6 != 0);
      uVar4 = (ulong)*(int *)(*(long *)(lVar9 + 0xe8) + 4);
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = uVar3 / uVar4;
      }
      puVar11 = puVar10 + (uVar3 - uVar8 * uVar4);
      puVar12 = (undefined8 *)*puVar11;
      if (puVar12 != (undefined8 *)0x0) {
        do {
          if ((*(byte *)*puVar12 == bVar1) &&
             (iVar2 = strcmp((char *)*puVar12,(char *)param_2), iVar2 == 0)) {
            lVar9 = *(long *)(lVar9 + 0x90);
            lVar5 = puVar12[1];
            if (lVar9 + lVar5 * 0x18 == 0) {
              return 6;
            }
            iVar2 = *(int *)(lVar9 + lVar5 * 0x18 + 8);
            if (iVar2 == 3) {
              uVar7 = 3;
            }
            else {
              if (iVar2 != 2) {
                if (iVar2 != 1) {
                  return 6;
                }
                *param_3 = 1;
                *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar9 + lVar5 * 0x18 + 0x10);
                return 0;
              }
              uVar7 = 2;
            }
            *param_3 = uVar7;
            param_3[2] = (int)*(undefined8 *)(lVar9 + lVar5 * 0x18 + 0x10);
            return 0;
          }
          puVar12 = puVar11 + -1;
          puVar11 = puVar10 + (uVar4 - 1);
          if (puVar10 <= puVar12) {
            puVar11 = puVar12;
          }
          puVar12 = (undefined8 *)*puVar11;
        } while (puVar12 != (undefined8 *)0x0);
      }
    }
  }
  return 6;
}

