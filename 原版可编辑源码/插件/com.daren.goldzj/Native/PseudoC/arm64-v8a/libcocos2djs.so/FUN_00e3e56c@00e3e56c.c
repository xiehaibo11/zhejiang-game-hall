
undefined8 FUN_00e3e56c(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  param_1[0xb] = param_2;
  FUN_00e16df4(*param_1);
  puVar3 = *(undefined8 **)(*(long *)(*param_1 + 0x490) + 0x1358);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  if ((((puVar3 != (undefined8 *)0x0) && (lVar1 != 0)) &&
      (pcVar2 = (code *)*puVar3, pcVar2 != (code *)0x0)) && (lVar1 = (*pcVar2)(), lVar1 != 0)) {
    puVar3 = *(undefined8 **)param_1[10];
    lVar5 = *(long *)(*param_1 + 0x490);
    lVar4 = *(long *)(lVar5 + 0x6d0);
    (**(code **)(lVar1 + 8))(*puVar3,param_1[4],param_1[5],0,0);
    iVar7 = *(int *)(lVar5 + 0xb30);
    if (iVar7 != 0) {
      plVar8 = (long *)(lVar5 + (ulong)(iVar7 - 1) * 8 + 0xb38);
      puVar3 = puVar3 + (ulong)(iVar7 - 1) + 1;
      do {
        lVar5 = param_1[4];
        lVar6 = *(long *)(*plVar8 + 0x68);
        if (lVar4 == lVar6) {
          lVar6 = param_1[5];
        }
        else {
          lVar5 = FT_MulDiv(lVar5,lVar4,lVar6);
          lVar6 = FT_MulDiv(param_1[5],lVar4,lVar6);
        }
        (**(code **)(lVar1 + 8))(*puVar3,lVar5,lVar6,0,0);
        iVar7 = iVar7 + -1;
        plVar8 = plVar8 + -1;
        puVar3 = puVar3 + -1;
      } while (iVar7 != 0);
    }
  }
  return 0;
}

