
undefined8
FUN_0155aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_88 [3];
  undefined8 local_7c;
  long local_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = FUN_0155a730(param_1,param_2,1,param_4,0);
  uVar2 = 0;
  if (local_48 != 0) {
    local_70 = (ulong)*(uint *)(local_48 + 4) << 0x20;
    local_88[0] = 3;
    if ((*(short *)(((ulong)*(uint *)(local_48 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_4 - 1))
         == 0x40) && (local_88[0] = 3, (*(byte *)(*param_4 + 7) & 1) != 0)) {
      local_88[0] = 0;
    }
    local_7c = 0xc000000000;
    if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) & 0xffe0)
        == 0x20) {
      param_4 = (ulong *)v8::internal::StringTable::LookupString(local_70,param_4);
    }
    uStack_60 = 0;
    uStack_50 = 0;
    local_38 = 0xffffffffffffffff;
    uStack_40 = 0xffffffffffffffff;
    local_68 = param_4;
    local_58 = param_3;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)local_88);
    cVar1 = v8::internal::Object::SetSuperProperty(local_88,param_5,1,0);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = param_5;
    }
  }
  return uVar2;
}

