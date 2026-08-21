
void FUN_0155a940(Factory *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong *puVar1;
  undefined4 local_88 [3];
  undefined8 local_7c;
  Factory *local_70;
  ulong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong *puStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  puStack_48 = (ulong *)FUN_0155a730(param_1,param_3,0,0,param_4);
  if (puStack_48 != (ulong *)0x0) {
    local_40 = (ulong)param_4;
    local_68 = (ulong *)0x0;
    local_60 = 0;
    local_50 = 0;
    local_88[0] = 3;
    local_7c = 0xc000000000;
    uStack_38 = 0xffffffffffffffff;
    local_70 = param_1;
    puVar1 = local_68;
    uStack_58 = param_2;
    if (((param_4 == 0xffffffff) &&
        (*(short *)((*puStack_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_48 - 1)) !=
         0x41b)) &&
       (puVar1 = (ulong *)v8::internal::Factory::SizeToString(param_1,0xffffffff,true),
       (*(ushort *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) & 0xffe0) ==
       0x20)) {
      puVar1 = (ulong *)v8::internal::StringTable::LookupString(param_1);
    }
    local_68 = puVar1;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)local_88);
    v8::internal::Object::GetProperty((LookupIterator *)local_88,false);
  }
  return;
}

