
/* v8::internal::Object::GetProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>) */

long v8::internal::Object::GetProperty(ulong param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  ulong local_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (((*param_2 & 1) == 0) ||
     (local_58 = param_2, *(ushort *)((param_1 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
    local_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_1,param_2,0xffffffffffffffff);
  }
  local_98 = 3;
  if ((*(short *)((param_1 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) &&
     (local_98 = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
    local_98 = 0;
  }
  local_8c = 0xc000000000;
  local_80 = param_1;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    param_3 = (ulong *)StringTable::LookupString(param_1,param_3);
  }
  uStack_70 = 0;
  uStack_60 = 0;
  local_48 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_78 = param_3;
  local_68 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_98);
  if (local_94 == 4) {
    lVar1 = local_80 + 0xa0;
  }
  else {
    lVar1 = GetProperty((LookupIterator *)&local_98,false);
  }
  return lVar1;
}

