
/* v8::internal::Assembler::smull(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&) */

void __thiscall
v8::internal::Assembler::smull
          (Assembler *this,Register *param_1,Register *param_2,Register *param_3)

{
  Emit(this,*(uint *)param_1 | *(int *)param_3 << 0x10 | *(int *)param_2 << 5 | 0x9b207c00);
  return;
}

