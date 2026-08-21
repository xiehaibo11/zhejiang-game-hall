
/* v8::debug::PostponeInterruptsScope::PostponeInterruptsScope(v8::Isolate*) */

void __thiscall
v8::debug::PostponeInterruptsScope::PostponeInterruptsScope
          (PostponeInterruptsScope *this,Isolate *param_1)

{
  InterruptsScope *pIVar1;
  
  pIVar1 = operator_new(0x30);
  internal::InterruptsScope::InterruptsScope(pIVar1,param_1,8,0);
  *(undefined ***)pIVar1 = &PTR__InterruptsScope_01c98490;
  *(InterruptsScope **)this = pIVar1;
  return;
}

