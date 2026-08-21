
/* v8::internal::JSReceiver::HasOwnProperty(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Name>) */

undefined2 v8::internal::JSReceiver::HasOwnProperty(ulong *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  ulong uVar3;
  PropertyDescriptor local_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  LookupIterator aLStack_70 [92];
  undefined1 local_14 [4];
  
  uVar3 = *param_1;
  uVar2 = uVar3 & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xac) {
    local_98[0] = (PropertyDescriptor)0x0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    local_14[0] = 0;
    LookupIterator::PropertyOrElement
              (aLStack_70,(ulong)*(uint *)((long)param_1 + 4) << 0x20,param_1,param_2,local_14,1);
    uVar1 = GetOwnPropertyDescriptor(aLStack_70,local_98);
  }
  else if (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xaa) {
    LookupIterator::PropertyOrElement(aLStack_70,uVar2,param_1,param_2,param_1,1);
    uVar2 = GetPropertyAttributes(aLStack_70);
    if ((uVar2 & 0xff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x101;
      if (uVar2 >> 0x20 == 0x40) {
        uVar1 = 1;
      }
    }
  }
  else {
    LookupIterator::PropertyOrElement(aLStack_70,uVar2,param_1,param_2,param_1,1);
    uVar1 = HasProperty(aLStack_70);
  }
  return uVar1;
}

