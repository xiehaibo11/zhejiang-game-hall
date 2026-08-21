
Factory * FUN_01482540(Factory *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  Factory *pFVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  ulong local_70;
  ulong *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  ulong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_88 = "Math";
  uStack_80 = 4;
  local_7c = 0;
  local_68 = (ulong *)v8::internal::Factory::InternalizeString<unsigned_char>
                                (param_1,(Vector *)&local_88,false);
  local_70 = (ulong)*(uint *)(param_2 + 4) << 0x20;
  uVar4 = 2;
  if (*(short *)(((ulong)*(uint *)(param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(*local_68 - 1)) ==
      0x40) {
    uVar4 = (*(int *)(*local_68 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_7c = 0;
  uStack_78 = 0xc0;
  local_88._0_4_ = uVar4;
  if ((*(ushort *)((*local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_68 - 1)) & 0xffe0)
      == 0x20) {
    local_68 = (ulong *)v8::internal::StringTable::LookupString();
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_58 = (ulong *)param_2;
  local_48 = (ulong *)param_2;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_88._4_4_ == 4) {
    puVar1 = (ulong *)(local_70 + 0xa0);
    uVar3 = *puVar1;
  }
  else {
    puVar1 = (ulong *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_88);
    uVar3 = *puVar1;
  }
  if ((uVar3 & 1) != 0) {
    local_70 = uVar3 & 0xffffffff00000000;
    if (0xa8 < *(ushort *)((local_70 | 7) + (ulong)*(uint *)(uVar3 - 1))) {
      local_88._0_4_ = 2;
      if (*(short *)((local_70 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) {
        local_88._0_4_ = (*(int *)(*param_3 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_7c = 0;
      uStack_78 = 0xc0;
      if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) &
          0xffe0) == 0x20) {
        param_3 = (ulong *)v8::internal::StringTable::LookupString(local_70,param_3);
      }
      uStack_60 = 0;
      uStack_50 = 0;
      local_38 = 0xffffffffffffffff;
      uStack_40 = 0xffffffffffffffff;
      local_68 = param_3;
      local_58 = puVar1;
      local_48 = puVar1;
      v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_88);
      if (local_88._4_4_ == 4) {
        return (Factory *)(local_70 + 0xa0);
      }
      pFVar2 = (Factory *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_88);
      return pFVar2;
    }
  }
  return param_1 + 0xa0;
}

