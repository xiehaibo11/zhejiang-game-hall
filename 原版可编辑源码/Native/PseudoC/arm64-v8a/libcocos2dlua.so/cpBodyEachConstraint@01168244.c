
void cpBodyEachConstraint(long param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x98);
  while (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x20);
    if (*(long *)(lVar2 + 0x10) != param_1) {
      plVar1 = (long *)(lVar2 + 0x28);
    }
    lVar3 = *plVar1;
    (*param_2)(param_1,lVar2,param_3);
    lVar2 = lVar3;
  }
  return;
}

