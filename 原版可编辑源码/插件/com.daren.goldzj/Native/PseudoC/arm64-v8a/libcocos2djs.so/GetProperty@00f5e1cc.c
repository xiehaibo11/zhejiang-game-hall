
/* v8::internal::JSReceiver::GetProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, char const*) */

Factory * v8::internal::JSReceiver::GetProperty(Factory *param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  Factory *local_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  sVar1 = strlen(param_3);
  uStack_80 = (undefined4)sVar1;
  local_7c = (undefined4)(sVar1 >> 0x20);
  local_88 = param_3;
  local_68 = (ulong *)Factory::InternalizeUtf8String(param_1,(Vector *)&local_88);
  uVar2 = 3;
  if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*local_68 - 1)) == 0x40) &&
     (uVar2 = 3, (*(byte *)(*local_68 + 7) & 1) != 0)) {
    uVar2 = 0;
  }
  local_7c = 0;
  uStack_78 = 0xc0;
  local_70 = param_1;
  local_88._0_4_ = uVar2;
  if ((*(ushort *)((*local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_68 - 1)) & 0xffe0)
      == 0x20) {
    local_68 = (ulong *)StringTable::LookupString(param_1);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_58 = param_2;
  local_48 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_88._4_4_ == 4) {
    local_70 = local_70 + 0xa0;
  }
  else {
    local_70 = (Factory *)Object::GetProperty((LookupIterator *)&local_88,false);
  }
  return local_70;
}

