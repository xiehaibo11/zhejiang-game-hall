
void cpBodyEachArbiter(long param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x90);
  while (lVar3 != 0) {
    uVar2 = *(undefined1 *)(lVar3 + 0x88);
    plVar1 = (long *)(lVar3 + 0x38);
    if (*(long *)(lVar3 + 0x28) != param_1) {
      plVar1 = (long *)(lVar3 + 0x48);
    }
    lVar4 = *plVar1;
    *(bool *)(lVar3 + 0x88) = *(long *)(lVar3 + 0x30) == param_1;
    (*param_2)(param_1,lVar3,param_3);
    *(undefined1 *)(lVar3 + 0x88) = uVar2;
    lVar3 = lVar4;
  }
  return;
}

