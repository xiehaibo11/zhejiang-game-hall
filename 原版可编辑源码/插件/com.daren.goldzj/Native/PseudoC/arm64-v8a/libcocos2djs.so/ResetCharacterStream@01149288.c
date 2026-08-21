
/* v8::internal::ParseInfo::ResetCharacterStream() */

void __thiscall v8::internal::ParseInfo::ResetCharacterStream(ParseInfo *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011492a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

