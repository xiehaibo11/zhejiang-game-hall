
undefined8
FUN_0155ab24(Factory *param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  char cVar1;
  ulong *puVar2;
  undefined8 uVar3;
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
  
  puStack_48 = (ulong *)FUN_0155a730(param_1,param_2,1,0,param_4);
  uVar3 = 0;
  if (puStack_48 != (ulong *)0x0) {
    local_40 = (ulong)param_4;
    local_68 = (ulong *)0x0;
    local_60 = 0;
    local_50 = 0;
    local_88[0] = 3;
    local_7c = 0xc000000000;
    uStack_38 = 0xffffffffffffffff;
    local_70 = param_1;
    puVar2 = local_68;
    uStack_58 = param_3;
    if (((param_4 == 0xffffffff) &&
        (*(short *)((*puStack_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_48 - 1)) !=
         0x41b)) &&
       (puVar2 = (ulong *)v8::internal::Factory::SizeToString(param_1,0xffffffff,true),
       (*(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) & 0xffe0) ==
       0x20)) {
      puVar2 = (ulong *)v8::internal::StringTable::LookupString(param_1);
    }
    local_68 = puVar2;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)local_88);
    cVar1 = v8::internal::Object::SetSuperProperty(local_88,param_5,0,0);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = param_5;
    }
  }
  return uVar3;
}

