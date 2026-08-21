
/* v8::base::debug::StackTrace::Addresses(unsigned long*) const */

StackTrace * __thiscall v8::base::debug::StackTrace::Addresses(StackTrace *this,ulong *param_1)

{
  StackTrace *pSVar1;
  
  *param_1 = *(ulong *)(this + 0x1f0);
  pSVar1 = (StackTrace *)0x0;
  if (*(long *)(this + 0x1f0) != 0) {
    pSVar1 = this;
  }
  return pSVar1;
}

