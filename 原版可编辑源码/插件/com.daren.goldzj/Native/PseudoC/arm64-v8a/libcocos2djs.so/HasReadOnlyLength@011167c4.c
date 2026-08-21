
/* v8::internal::JSArray::HasReadOnlyLength(v8::internal::Handle<v8::internal::JSArray>) */

bool v8::internal::JSArray::HasReadOnlyLength(ulong *param_1)

{
  ulong uVar1;
  undefined4 local_78;
  int local_74;
  undefined8 local_6c;
  ulong local_60;
  long local_58;
  undefined8 uStack_50;
  ulong *local_48;
  undefined8 uStack_40;
  ulong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_60 = *param_1 & 0xffffffff00000000;
  uVar1 = local_60 | *(uint *)(*param_1 - 1);
  if ((*(uint *)(uVar1 + 0xb) >> 0x15 & 1) == 0) {
    local_6c._4_4_ = *(uint *)((local_60 | *(uint *)(uVar1 + 0x17)) + 0x13) & 0x10;
  }
  else {
    local_58 = local_60 + 0x7b8;
    local_78 = 0;
    local_6c = 0xc000000000;
    if ((*(ushort *)
          ((*(ulong *)(local_60 + 0x7b8) & 0xffffffff00000000 | 7) +
          (ulong)*(uint *)(*(ulong *)(local_60 + 0x7b8) - 1)) & 0xffe0) == 0x20) {
      local_58 = StringTable::LookupString();
    }
    uStack_50 = 0;
    uStack_40 = 0;
    local_28 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_48 = param_1;
    local_38 = param_1;
    LookupIterator::Start<false>((LookupIterator *)&local_78);
    if (local_74 != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","LookupIterator::ACCESSOR == it.state()");
    }
    local_6c._4_4_ = local_6c._4_4_ & 8;
  }
  return local_6c._4_4_ != 0;
}

