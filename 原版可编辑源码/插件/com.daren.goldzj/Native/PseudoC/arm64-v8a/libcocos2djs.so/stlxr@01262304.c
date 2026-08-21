
/* v8::internal::Assembler::stlxr(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&) */

void __thiscall
v8::internal::Assembler::stlxr
          (Assembler *this,Register *param_1,Register *param_2,Register *param_3)

{
  uint uVar1;
  
  uVar1 = 0x8800fc00;
  if (*(int *)(param_2 + 4) != 0x20) {
    uVar1 = 0xc800fc00;
  }
  Emit(this,uVar1 | *(int *)param_1 << 0x10 | *(uint *)param_2 | (*(uint *)param_3 & 0x1f) << 5);
  return;
}

