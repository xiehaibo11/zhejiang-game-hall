
undefined8
FUN_010567dc(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if ((((param_2 != 0) && (*(long *)(param_2 + 0x228) != 0)) &&
      (lVar3 = *(long *)(*(long *)(param_2 + 0x228) + 0x1c0), lVar3 != 0)) &&
     (pcVar2 = *(code **)(lVar3 + 8), pcVar2 != (code *)0x0)) {
    lVar4 = 0;
    do {
      iVar1 = (*pcVar2)(param_1,lVar3,param_2,param_3,lVar4,param_4,(long)param_5);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
      if (iVar1 != 0) {
        return 0;
      }
      pcVar2 = *(code **)(lVar3 + 0x20);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + 1;
    } while (pcVar2 != (code *)0x0);
  }
  return 0;
}

