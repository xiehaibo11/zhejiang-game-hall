
/* v8::internal::Assembler::stlxrh(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&) */

void __thiscall
v8::internal::Assembler::stlxrh
          (Assembler *this,Register *param_1,Register *param_2,Register *param_3)

{
  Emit(this,*(uint *)param_2 | *(int *)param_1 << 0x10 | (*(uint *)param_3 & 0x1f) << 5 | 0x4800fc00
      );
  return;
}

