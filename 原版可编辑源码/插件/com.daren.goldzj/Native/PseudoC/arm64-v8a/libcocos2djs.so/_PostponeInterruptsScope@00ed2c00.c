
/* v8::debug::PostponeInterruptsScope::~PostponeInterruptsScope() */

void __thiscall
v8::debug::PostponeInterruptsScope::~PostponeInterruptsScope(PostponeInterruptsScope *this)

{
  long *plVar1;
  
  plVar1 = *(long **)this;
  *(undefined8 *)this = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed2c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

