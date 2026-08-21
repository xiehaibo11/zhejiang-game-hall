
/* v8::internal::Object::SetProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::StoreOrigin,
   v8::Maybe<v8::internal::ShouldThrow>) */

undefined8
v8::internal::Object::SetProperty
          (ulong param_1,ulong *param_2,ulong *param_3,undefined8 param_4,undefined4 param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_a8 [3];
  undefined8 local_9c;
  ulong local_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (((*param_2 & 1) == 0) ||
     (local_68 = param_2, *(ushort *)((param_1 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
    local_68 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_1,param_2,0xffffffffffffffff);
  }
  local_a8[0] = 3;
  if ((*(short *)((param_1 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) &&
     (local_a8[0] = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
    local_a8[0] = 0;
  }
  local_9c = 0xc000000000;
  local_90 = param_1;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    param_3 = (ulong *)StringTable::LookupString(param_1,param_3);
  }
  uStack_80 = 0;
  uStack_70 = 0;
  local_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_88 = param_3;
  local_78 = param_2;
  LookupIterator::Start<false>((LookupIterator *)local_a8);
  cVar2 = SetProperty(local_a8,param_4,param_5,param_6);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = param_4;
  }
  return uVar1;
}

