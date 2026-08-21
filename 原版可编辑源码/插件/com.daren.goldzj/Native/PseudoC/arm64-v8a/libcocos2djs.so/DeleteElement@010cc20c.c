
/* v8::internal::JSReceiver::DeleteElement(v8::internal::Handle<v8::internal::JSReceiver>, unsigned
   int, v8::internal::LanguageMode) */

undefined2 v8::internal::JSReceiver::DeleteElement(ulong *param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  ulong *puVar2;
  Factory *this;
  undefined4 local_78 [3];
  undefined8 local_6c;
  Factory *local_60;
  ulong *local_58;
  undefined8 local_50;
  ulong *puStack_48;
  undefined8 local_40;
  ulong *puStack_38;
  ulong local_30;
  undefined8 uStack_28;
  
  local_30 = (ulong)param_2;
  this = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  local_50 = 0;
  local_40 = 0;
  local_78[0] = 1;
  local_6c = 0xc000000000;
  local_58 = (ulong *)0x0;
  uStack_28 = 0xffffffffffffffff;
  local_60 = this;
  puVar2 = local_58;
  puStack_48 = param_1;
  puStack_38 = param_1;
  if (((param_2 == 0xffffffff) &&
      (*(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1)) != 0x41b))
     && (puVar2 = (ulong *)Factory::SizeToString(this,0xffffffff,true),
        (*(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) & 0xffe0)
        == 0x20)) {
    puVar2 = (ulong *)StringTable::LookupString(this);
  }
  local_58 = puVar2;
  LookupIterator::Start<true>((LookupIterator *)local_78);
  uVar1 = DeleteProperty(local_78,param_3 & 1);
  return uVar1;
}

