
/* v8::internal::Debug::~Debug() */

void __thiscall v8::internal::Debug::~Debug(Debug *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f05280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}

