
/* v8::internal::AstRawString::Internalize(v8::internal::Isolate*) */

void __thiscall v8::internal::AstRawString::Internalize(AstRawString *this,Isolate *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined **local_50;
  undefined4 local_48;
  int iStack_44;
  undefined8 local_40;
  ulong uStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar3 = (int)*(undefined8 *)(this + 0x10);
  if (iVar3 == 0) {
    *(Isolate **)this = param_1 + 200;
  }
  else {
    if (this[0x1c] == (AstRawString)0x0) {
      local_48 = *(undefined4 *)(this + 0x18);
      local_40 = *(undefined8 *)(this + 8);
      uStack_38 = (ulong)(long)iVar3 >> 1;
      local_50 = &PTR__StringTableKey_01ca70b0;
      iStack_44 = (int)uStack_38;
      local_30 = 0;
      uVar2 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
                        (param_1,(SequentialStringKey *)&local_50);
    }
    else {
      local_48 = *(undefined4 *)(this + 0x18);
      local_50 = &PTR__StringTableKey_01ca7080;
      uStack_38 = *(ulong *)(this + 0x10);
      local_40 = *(undefined8 *)(this + 8);
      local_30 = 0;
      iStack_44 = iVar3;
      uVar2 = StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                        (param_1,(SequentialStringKey *)&local_50);
    }
    *(undefined8 *)this = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

