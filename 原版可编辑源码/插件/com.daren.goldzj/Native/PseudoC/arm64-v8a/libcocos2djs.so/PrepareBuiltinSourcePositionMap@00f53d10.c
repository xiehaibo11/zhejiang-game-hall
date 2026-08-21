
/* v8::internal::Isolate::PrepareBuiltinSourcePositionMap() */

void __thiscall v8::internal::Isolate::PrepareBuiltinSourcePositionMap(Isolate *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xc788);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f53d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,this + 0x9e00);
    return;
  }
  return;
}

