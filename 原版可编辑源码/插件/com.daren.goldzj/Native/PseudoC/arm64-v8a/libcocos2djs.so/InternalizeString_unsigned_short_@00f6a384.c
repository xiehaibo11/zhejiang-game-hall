
/* v8::internal::Handle<v8::internal::String> v8::internal::Factory::InternalizeString<unsigned
   short>(v8::internal::Vector<unsigned short const> const&, bool) */

void __thiscall
v8::internal::Factory::InternalizeString<unsigned_short>(Factory *this,Vector *param_1,bool param_2)

{
  long lVar1;
  undefined **local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = StringHasher::HashSequentialString<unsigned_short>
                       (*(ushort **)param_1,*(int *)(param_1 + 8),
                        *(ulong *)(*(long *)(this + 0x490) + 7));
  uStack_54 = (undefined4)*(undefined8 *)(param_1 + 8);
  local_60 = &PTR__StringTableKey_01ca70b0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  local_50 = *(undefined8 *)param_1;
  local_40 = param_2;
  StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
            ((Isolate *)this,(SequentialStringKey *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

