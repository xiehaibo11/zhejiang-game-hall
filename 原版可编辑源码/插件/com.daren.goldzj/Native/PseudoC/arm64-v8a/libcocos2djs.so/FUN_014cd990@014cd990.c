
undefined8 FUN_014cd990(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pIVar3 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar3 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *(ulong *)pIVar3;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if (((uVar5 & 1) == 0) ||
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
    pIVar3 = (Isolate *)v8::internal::Object::ToObjectImpl(param_3,pIVar3,0);
  }
  if ((pIVar3 == (Isolate *)0x0) ||
     (plVar4 = (long *)v8::internal::KeyAccumulator::GetKeys(pIVar3,0,8,0,0,0),
     plVar4 == (long *)0x0)) {
    pIVar3 = param_3 + 0x180;
  }
  else {
    pIVar3 = (Isolate *)
             v8::internal::Factory::NewJSArrayWithElements
                       (param_3,plVar4,3,*(int *)(*plVar4 + 3) >> 1,0);
  }
  uVar6 = *(undefined8 *)pIVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

