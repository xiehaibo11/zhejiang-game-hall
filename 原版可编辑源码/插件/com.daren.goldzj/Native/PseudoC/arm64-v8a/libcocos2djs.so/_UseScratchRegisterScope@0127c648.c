
/* v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope() */

void __thiscall
v8::internal::UseScratchRegisterScope::~UseScratchRegisterScope(UseScratchRegisterScope *this)

{
  **(undefined8 **)this = *(undefined8 *)(this + 0x10);
  **(undefined8 **)(this + 8) = *(undefined8 *)(this + 0x18);
  return;
}

