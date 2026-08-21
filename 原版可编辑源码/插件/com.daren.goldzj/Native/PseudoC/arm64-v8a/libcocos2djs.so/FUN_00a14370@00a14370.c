
void FUN_00a14370(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  plVar5 = *(long **)(param_4 + 0x8c90);
  puVar1 = (undefined8 *)(param_4 + 0x8c50);
  puVar6 = (undefined8 *)*plVar5;
  if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
    do {
      puVar7 = (undefined8 *)puVar6[2];
      lVar2 = FUN_00a18ea0(*(undefined8 *)*puVar6,((undefined8 *)*puVar6)[1],param_1,param_2);
      if (0 < lVar2) break;
      FUN_00a34074(plVar5,puVar6,0);
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    plVar4 = (long *)*plVar5;
    if (plVar4 != (long *)0x0) {
      uVar3 = *(undefined8 *)*plVar4;
      *(undefined8 *)(param_4 + 0x8c58) = ((undefined8 *)*plVar4)[1];
      *puVar1 = uVar3;
      FUN_00a34074(plVar5,plVar4,0);
      uVar3 = FUN_00a1602c(*puVar1,*(undefined8 *)(param_4 + 0x8c58),*(undefined8 *)(param_3 + 0x80)
                           ,param_4 + 0x8c60);
      *(undefined8 *)(param_3 + 0x80) = uVar3;
      return;
    }
  }
  *puVar1 = 0;
  *(undefined8 *)(param_4 + 0x8c58) = 0;
  return;
}

