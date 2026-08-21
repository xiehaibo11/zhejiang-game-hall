
/* v8::internal::compiler::ObjectRef::IsNullOrUndefined() const */

undefined8 __thiscall v8::internal::compiler::ObjectRef::IsNullOrUndefined(ObjectRef *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = data(this);
  if (*(int *)(lVar1 + 8) == 0) {
    return 0;
  }
  lVar3 = *(long *)(this + 8);
  lVar1 = data(this);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0172ecd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_0172ecd8 + (ulong)(byte)(&DAT_01a5d682)[*(uint *)(lVar3 + 0x70)] * 4))()
    ;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(data_) != nullptr");
}

