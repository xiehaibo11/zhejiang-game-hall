
/* v8::internal::StackLimitCheck::JsHasOverflowed(unsigned long) const */

bool __thiscall v8::internal::StackLimitCheck::JsHasOverflowed(StackLimitCheck *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  lVar1 = GetCurrentStackPosition();
  return lVar1 - param_1 < *(ulong *)(lVar2 + 0x58);
}

