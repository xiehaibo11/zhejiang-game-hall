
/* XMLHttpRequest::setReadyState(XMLHttpRequest::ReadyState) */

void __thiscall XMLHttpRequest::setReadyState(XMLHttpRequest *this,XMLHttpRequest param_2)

{
  long *plVar1;
  
  if (this[0x263] != param_2) {
    plVar1 = *(long **)(this + 0xc0);
    this[0x263] = param_2;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008f91f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1);
      return;
    }
  }
  return;
}

