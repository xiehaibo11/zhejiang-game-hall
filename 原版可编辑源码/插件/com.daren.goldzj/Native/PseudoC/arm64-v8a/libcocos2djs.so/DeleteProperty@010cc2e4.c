
/* v8::internal::JSReceiver::DeleteProperty(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::LanguageMode) */

undefined2 v8::internal::JSReceiver::DeleteProperty(long param_1,ulong *param_2,uint param_3)

{
  undefined2 uVar1;
  uint local_78 [3];
  undefined8 local_6c;
  long local_60;
  ulong *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_60 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  if (*(short *)(((ulong)*(uint *)(param_1 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_2 - 1)) ==
      0x40) {
    local_78[0] = ~*(uint *)(*param_2 + 7) & 1;
  }
  else {
    local_78[0] = 1;
  }
  local_6c = 0xc000000000;
  if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) & 0xffe0)
      == 0x20) {
    param_2 = (ulong *)StringTable::LookupString();
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_58 = param_2;
  local_48 = param_1;
  local_38 = param_1;
  LookupIterator::Start<false>((LookupIterator *)local_78);
  uVar1 = DeleteProperty(local_78,param_3 & 1);
  return uVar1;
}

