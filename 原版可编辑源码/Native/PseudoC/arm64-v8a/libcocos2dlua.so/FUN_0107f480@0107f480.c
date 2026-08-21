
undefined8 FUN_0107f480(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_58;
  
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x10) >> 1 & 1) != 0) {
    iVar1 = (**(code **)(*(long *)(lVar2 + 0x360) + 0xd0))(lVar2,param_2,&local_58);
    if (iVar1 == 0) {
      FUN_0107f5fc(param_1,local_58);
      return 0;
    }
    lVar2 = *param_1;
    param_1[0xb] = 0xffffffff;
  }
  FT_Request_Metrics(lVar2,param_2);
  puVar4 = *(undefined8 **)(*(long *)(*param_1 + 0x428) + 0x1278);
  lVar2 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  if ((((puVar4 != (undefined8 *)0x0) && (lVar2 != 0)) &&
      (pcVar3 = (code *)*puVar4, pcVar3 != (code *)0x0)) && (lVar2 = (*pcVar3)(), lVar2 != 0)) {
    puVar4 = (undefined8 *)param_1[10];
    lVar6 = *(long *)(*param_1 + 0x428);
    lVar5 = *(long *)(lVar6 + 0x678);
    (**(code **)(lVar2 + 8))(*puVar4,param_1[4],param_1[5],0,0);
    iVar1 = *(int *)(lVar6 + 0xa50);
    if (iVar1 != 0) {
      plVar8 = (long *)(lVar6 + (ulong)(iVar1 - 1) * 8 + 0xa58);
      puVar4 = puVar4 + (ulong)(iVar1 - 1) + 1;
      do {
        lVar6 = param_1[4];
        lVar7 = *(long *)(*plVar8 + 0x68);
        if (lVar5 == lVar7) {
          lVar7 = param_1[5];
        }
        else {
          lVar6 = FT_MulDiv(lVar6,lVar5,lVar7);
          lVar7 = FT_MulDiv(param_1[5],lVar5,lVar7);
        }
        (**(code **)(lVar2 + 8))(*puVar4,lVar6,lVar7,0,0);
        iVar1 = iVar1 + -1;
        plVar8 = plVar8 + -1;
        puVar4 = puVar4 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

