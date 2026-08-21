
void FUN_0116d478(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)((undefined8 *)*param_2)[3];
  if ((puVar5 != (undefined8 *)0x0) && ((undefined **)*puVar5 != &PTR_FUN_01781708)) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_2;
  }
  if (*(int *)(param_1 + 4) == *(int *)(puVar5 + 10)) {
    if (param_2[1] != 0) {
      FUN_0116d36c(param_2[1],param_1,0,param_2);
    }
    plVar6 = param_1 + 3;
    lVar4 = *plVar6;
    puVar5 = param_1;
    while (lVar4 != 0) {
      puVar3 = *(undefined8 **)(lVar4 + 0x20);
      bVar1 = puVar5 == puVar3;
      if (bVar1) {
        puVar3 = *(undefined8 **)(lVar4 + 0x28);
      }
      FUN_0116d36c(puVar3,param_1,bVar1,param_2);
      puVar5 = (undefined8 *)*plVar6;
      plVar6 = puVar5 + 3;
      lVar4 = *plVar6;
    }
  }
  else {
    for (lVar4 = param_1[5]; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x28)) {
      while (*(undefined8 **)(lVar4 + 0x20) != param_1) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          return;
        }
      }
      uVar2 = (*(code *)param_2[2])
                        (**(undefined8 **)(lVar4 + 8),*param_1,*(undefined4 *)(lVar4 + 0x30),
                         param_2[3]);
      *(undefined4 *)(lVar4 + 0x30) = uVar2;
    }
  }
  return;
}

