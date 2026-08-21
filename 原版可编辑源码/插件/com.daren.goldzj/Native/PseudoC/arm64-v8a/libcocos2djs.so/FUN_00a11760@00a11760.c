
void FUN_00a11760(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  
  lVar9 = *(long *)(param_1 + 0x60);
  if (lVar9 != 0) {
    auVar12 = FUN_00a18e40();
    lVar8 = auVar12._8_8_ + (param_2 % 1000) * 1000;
    lVar1 = auVar12._0_8_ + param_2 / 1000;
    if (999999 < lVar8) {
      lVar1 = lVar1 + 1;
      lVar8 = lVar8 + -1000000;
    }
    if (*(long *)(param_1 + 0x8c50) != 0 || *(long *)(param_1 + 0x8c58) != 0) {
      lVar4 = FUN_00a18ea0(lVar1,lVar8);
      puVar11 = *(undefined8 **)(param_1 + 0x8c90);
      plVar5 = (long *)(*(code *)PTR_malloc_01d1b740)(0x10);
      if (0 < lVar4) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        *plVar5 = lVar1;
        plVar5[1] = lVar8;
        lVar9 = FUN_00a34218(puVar11);
        if ((lVar9 == 0) || ((undefined8 *)*puVar11 == (undefined8 *)0x0)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (undefined8 *)*puVar11;
          puVar10 = (undefined8 *)0x0;
          do {
            puVar7 = puVar2;
            lVar9 = FUN_00a18ea0(*(undefined8 *)*puVar7,((undefined8 *)*puVar7)[1],*plVar5,plVar5[1]
                                );
            if (0 < lVar9) break;
            puVar2 = (undefined8 *)puVar7[2];
            puVar10 = puVar7;
          } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
        }
        iVar3 = FUN_00a33fc4(puVar11,puVar10,plVar5);
        if (iVar3 != 0) {
          return;
        }
        (*(code *)PTR_free_01d1b748)(plVar5);
        return;
      }
      if (plVar5 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x8c50);
        plVar5[1] = *(long *)(param_1 + 0x8c58);
        *plVar5 = lVar4;
        lVar4 = FUN_00a34218(puVar11);
        if ((lVar4 == 0) || ((undefined8 *)*puVar11 == (undefined8 *)0x0)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (undefined8 *)*puVar11;
          puVar10 = (undefined8 *)0x0;
          do {
            puVar7 = puVar2;
            lVar4 = FUN_00a18ea0(*(undefined8 *)*puVar7,((undefined8 *)*puVar7)[1],*plVar5,plVar5[1]
                                );
            if (0 < lVar4) break;
            puVar2 = (undefined8 *)puVar7[2];
            puVar10 = puVar7;
          } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
        }
        iVar3 = FUN_00a33fc4(puVar11,puVar10,plVar5);
        if (iVar3 == 0) {
          (*(code *)PTR_free_01d1b748)(plVar5);
        }
      }
      iVar3 = FUN_00a1620c(*(undefined8 *)(lVar9 + 0x80),param_1 + 0x8c60,
                           (undefined8 *)(lVar9 + 0x80));
      if (iVar3 != 0) {
        FUN_00a22d58(param_1,"Internal error removing splay node = %d\n",iVar3);
      }
    }
    *(long *)(param_1 + 0x8c50) = lVar1;
    *(long *)(param_1 + 0x8c58) = lVar8;
    *(long *)(param_1 + 0x8c88) = param_1;
    uVar6 = FUN_00a1602c(lVar1,lVar8,*(undefined8 *)(lVar9 + 0x80),param_1 + 0x8c60);
    *(undefined8 *)(lVar9 + 0x80) = uVar6;
  }
  return;
}

