
/* v8::internal::compiler::UsePosition::set_type(v8::internal::compiler::UsePositionType, bool) */

void __thiscall
v8::internal::compiler::UsePosition::set_type(UsePosition *this,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x20;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x1c) = uVar1 | param_2 & 0xff | *(uint *)(this + 0x1c) & 0x1c | 0x800;
  return;
}

