
undefined8 FUN_014c8d1c(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  pIVar3 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar3 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *(ulong *)pIVar3;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if (((uVar4 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    pIVar3 = (Isolate *)v8::internal::Object::ConvertToString(param_3);
  }
  if ((pIVar3 == (Isolate *)0x0) ||
     (pIVar3 = (Isolate *)v8::internal::Uri::Encode(param_3,pIVar3,1), pIVar3 == (Isolate *)0x0)) {
    pIVar3 = param_3 + 0x180;
  }
  uVar5 = *(undefined8 *)pIVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

