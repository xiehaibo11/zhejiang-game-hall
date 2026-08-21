
/* v8::internal::Factory::InternalizeUtf8String(v8::internal::Vector<char const> const&) */

undefined8 __thiscall v8::internal::Factory::InternalizeUtf8String(Factory *this,Vector *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  Utf8Decoder local_80 [8];
  int local_78;
  ushort *local_70;
  long lStack_68;
  undefined **local_60;
  uint local_58;
  int iStack_54;
  ushort *local_50;
  long lStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lStack_68 = (long)*(int *)(param_1 + 8);
  local_70 = *(ushort **)param_1;
  Utf8Decoder::Utf8Decoder(local_80,(Vector *)&local_70);
  if (local_80[0] == (Utf8Decoder)0x0) {
    local_58 = StringHasher::HashSequentialString<unsigned_char>
                         ((uchar *)local_70,(int)lStack_68,*(ulong *)(*(long *)(this + 0x490) + 7));
    iStack_54 = (int)lStack_68;
    local_60 = &PTR__StringTableKey_01ca7080;
    lStack_48 = lStack_68;
    local_50 = local_70;
    local_40 = 0;
    uVar5 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                      ((Isolate *)this,(SequentialStringKey *)&local_60);
  }
  else {
    uVar3 = (ulong)local_78;
    if (local_80[0] == (Utf8Decoder)0x1) {
      puVar4 = operator_new__(uVar3);
      Utf8Decoder::Decode<unsigned_char>(local_80,(uchar *)puVar4,(Vector *)&local_70);
      local_58 = StringHasher::HashSequentialString<unsigned_char>
                           ((uchar *)puVar4,local_78,*(ulong *)(*(long *)(this + 0x490) + 7));
      iStack_54 = local_78;
      local_60 = &PTR__StringTableKey_01ca7080;
      local_40 = 0;
      local_50 = puVar4;
      lStack_48 = (long)local_78;
      uVar5 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                        ((Isolate *)this,(SequentialStringKey *)&local_60);
    }
    else {
      uVar1 = uVar3 * 2;
      if (CARRY8(uVar3,uVar3)) {
        uVar1 = 0xffffffffffffffff;
      }
      puVar4 = operator_new__(uVar1);
      Utf8Decoder::Decode<unsigned_short>(local_80,puVar4,(Vector *)&local_70);
      local_58 = StringHasher::HashSequentialString<unsigned_short>
                           (puVar4,local_78,*(ulong *)(*(long *)(this + 0x490) + 7));
      iStack_54 = local_78;
      local_60 = &PTR__StringTableKey_01ca70b0;
      local_40 = 0;
      local_50 = puVar4;
      lStack_48 = (long)local_78;
      uVar5 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
                        ((Isolate *)this,(SequentialStringKey *)&local_60);
    }
    operator_delete__(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

