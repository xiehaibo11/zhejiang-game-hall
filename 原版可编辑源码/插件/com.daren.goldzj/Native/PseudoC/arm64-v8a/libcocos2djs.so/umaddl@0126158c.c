
/* v8::internal::Assembler::umaddl(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall
v8::internal::Assembler::umaddl
          (Assembler *this,Register *param_1,Register *param_2,Register *param_3,Register *param_4)

{
  Emit(this,*(uint *)param_1 | *(int *)param_3 << 0x10 | *(int *)param_4 << 10 |
            *(int *)param_2 << 5 | 0x9ba00000);
  return;
}

