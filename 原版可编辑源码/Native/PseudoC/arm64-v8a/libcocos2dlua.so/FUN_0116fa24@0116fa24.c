
void FUN_0116fa24(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar2 = cpBodyGetType(param_2);
  if ((iVar2 == 0) && ((param_2 == 0 || (*(long *)(param_2 + 0xa0) == 0)))) {
    *(long *)(param_2 + 0xa0) = param_1;
    if (param_2 != param_1) {
      *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
      *(long *)(param_1 + 0xa8) = param_2;
    }
    lVar3 = *(long *)(param_2 + 0x90);
    while (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x28);
      plVar1 = (long *)(lVar3 + 0x30);
      if (*plVar4 != param_2) {
        plVar1 = plVar4;
      }
      FUN_0116fa24(param_1,*plVar1);
      plVar1 = (long *)(lVar3 + 0x38);
      if (*plVar4 != param_2) {
        plVar1 = (long *)(lVar3 + 0x48);
      }
      lVar3 = *plVar1;
    }
    lVar3 = *(long *)(param_2 + 0x98);
    while (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x10);
      plVar1 = (long *)(lVar3 + 0x18);
      if (*plVar4 != param_2) {
        plVar1 = plVar4;
      }
      FUN_0116fa24(param_1,*plVar1);
      plVar1 = (long *)(lVar3 + 0x20);
      if (*plVar4 != param_2) {
        plVar1 = (long *)(lVar3 + 0x28);
      }
      lVar3 = *plVar1;
    }
  }
  return;
}

