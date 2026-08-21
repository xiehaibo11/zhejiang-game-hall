
void FUN_00e3e08c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  
  puVar4 = *(undefined8 **)param_1[10];
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = *param_1;
    uVar1 = *(undefined8 *)(lVar2 + 0xb8);
    lVar7 = *(long *)(lVar2 + 0x490);
    puVar5 = *(undefined8 **)(lVar7 + 0x1358);
    lVar2 = FT_Get_Module(*(undefined8 *)(*(long *)(lVar2 + 0xb0) + 8),"pshinter");
    if ((((puVar5 != (undefined8 *)0x0) && (lVar2 != 0)) &&
        (pcVar3 = (code *)*puVar5, pcVar3 != (code *)0x0)) && (lVar2 = (*pcVar3)(), lVar2 != 0)) {
      (**(code **)(lVar2 + 0x10))(*puVar4);
      iVar6 = *(int *)(lVar7 + 0xb30);
      if (iVar6 != 0) {
        puVar5 = puVar4 + (ulong)(iVar6 - 1) + 1;
        do {
          (**(code **)(lVar2 + 0x10))(*puVar5);
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + -1;
        } while (iVar6 != 0);
      }
    }
    FUN_00e139fc(uVar1,puVar4);
    return;
  }
  return;
}

