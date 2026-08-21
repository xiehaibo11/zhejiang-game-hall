
/* v8::internal::RegisterValues::GetFloatRegister(unsigned int) const */

undefined4 __thiscall
v8::internal::RegisterValues::GetFloatRegister(RegisterValues *this,uint param_1)

{
  return *(undefined4 *)(this + (ulong)param_1 * 8 + 0x100);
}

