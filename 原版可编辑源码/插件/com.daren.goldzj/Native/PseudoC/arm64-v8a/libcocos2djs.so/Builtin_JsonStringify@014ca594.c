
/* v8::internal::Builtin_JsonStringify(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Builtin_JsonStringify(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_014ca684(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  iVar2 = param_1 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (iVar2 < 2) {
    pIVar5 = param_3 + 0xa0;
LAB_014ca608:
    pIVar3 = param_3 + 0xa0;
  }
  else {
    pIVar5 = (Isolate *)(param_2 + -1);
    if (iVar2 == 2) goto LAB_014ca608;
    pIVar3 = (Isolate *)(param_2 + -2);
    if (3 < iVar2) {
      pIVar6 = (Isolate *)(param_2 + -3);
      goto LAB_014ca610;
    }
  }
  pIVar6 = param_3 + 0xa0;
LAB_014ca610:
  pIVar3 = (Isolate *)JsonStringify(param_3,pIVar5,pIVar3,pIVar6);
  pIVar5 = param_3 + 0x180;
  if (pIVar3 != (Isolate *)0x0) {
    pIVar5 = pIVar3;
  }
  uVar7 = *(undefined8 *)pIVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

