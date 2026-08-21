
undefined8 FUN_014cbb80(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong uVar4;
  undefined8 uVar5;
  LookupIterator aLStack_98 [88];
  
  pIVar3 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar3 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *(ulong *)pIVar3;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if (((uVar4 & 1) == 0) ||
     (0x40 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    pIVar3 = (Isolate *)v8::internal::Object::ConvertToName(param_3,pIVar3);
  }
  if (pIVar3 != (Isolate *)0x0) {
    uVar4 = *param_2;
    if (((uVar4 & 1) == 0) ||
       (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
      param_2 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
    }
    if (param_2 != (ulong *)0x0) {
      v8::internal::LookupIterator::PropertyOrElement
                (aLStack_98,(ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2,pIVar3,param_2,1);
      uVar4 = v8::internal::JSReceiver::GetPropertyAttributes(aLStack_98);
      if ((uVar4 & 0xff) != 0) {
        if ((int)(uVar4 >> 0x20) == 0x40) {
          pIVar3 = param_3 + 0xc0;
        }
        else {
          pIVar3 = param_3 + 0xb8;
          if ((uVar4 & 0x200000000) != 0) {
            pIVar3 = param_3 + 0xc0;
          }
        }
        goto LAB_014cbc7c;
      }
    }
  }
  pIVar3 = param_3 + 0x180;
LAB_014cbc7c:
  uVar5 = *(undefined8 *)pIVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

