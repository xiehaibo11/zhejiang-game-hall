
/* v8::internal::compiler::ObjectRef::OddballToNumber() const */

void __thiscall v8::internal::compiler::ObjectRef::OddballToNumber(ObjectRef *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  lVar1 = data(this);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0172ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_0172ee8c + (ulong)(byte)(&DAT_01a5d686)[*(uint *)(lVar2 + 0x70)] * 4))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(data_) != nullptr");
}

