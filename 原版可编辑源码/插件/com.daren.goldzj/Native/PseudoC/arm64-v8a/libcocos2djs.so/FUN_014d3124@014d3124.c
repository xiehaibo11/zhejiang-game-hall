
undefined8 FUN_014d3124(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  Isolate *pIVar6;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  param_1 = param_1 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 < 2) {
    pIVar3 = param_3 + 0xa0;
LAB_014d3188:
    pIVar5 = param_3 + 0xa0;
  }
  else {
    pIVar3 = (Isolate *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014d3188;
    pIVar5 = (Isolate *)(param_2 + -0x10);
    if (3 < param_1) {
      pIVar6 = (Isolate *)(param_2 + -0x18);
      goto LAB_014d3190;
    }
  }
  pIVar6 = param_3 + 0xa0;
LAB_014d3190:
  v8::internal::Isolate::CountUsage(param_3,0x35);
  pIVar5 = (Isolate *)FUN_014d3a04(param_3,pIVar3,pIVar5,pIVar6);
  pIVar3 = param_3 + 0x180;
  if (pIVar5 != (Isolate *)0x0) {
    pIVar3 = pIVar5;
  }
  uVar4 = *(undefined8 *)pIVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar4;
}

