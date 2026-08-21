
/* v8::internal::JSReceiver::CreateDataProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2 v8::internal::JSReceiver::CreateDataProperty(void)

{
  undefined2 uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  ulong uVar2;
  LookupIterator aLStack_b0 [24];
  Factory *local_98;
  long local_90;
  ulong *local_80;
  ulong local_68;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  LookupIterator::PropertyOrElement(aLStack_b0);
  uVar2 = *local_80 & 0xffffffff00000000;
  if (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(*local_80 - 1)) < 0xaa) {
    local_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    local_58[0] = 0xff;
    local_50 = in_x3;
    if (local_90 == 0) {
      local_90 = Factory::SizeToString(local_98,local_68,true);
    }
    uVar1 = DefineOwnProperty(uVar2,local_80,local_90,local_58,in_x4);
  }
  else {
    uVar1 = JSObject::CreateDataProperty(aLStack_b0,in_x3,in_x4);
  }
  return uVar1;
}

