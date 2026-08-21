
/* v8::internal::Assembler::bfm(v8::internal::Register const&, v8::internal::Register const&, int,
   int) */

void __thiscall
v8::internal::Assembler::bfm
          (Assembler *this,Register *param_1,Register *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ulong *)param_1 >> 0x20 == 0x40);
  Emit(this,param_3 << 0x10 | param_4 << 10 | (uint)*(ulong *)param_1 | uVar1 << 0x1f |
            *(int *)param_2 << 5 | uVar1 << 0x16 | 0x33000000);
  return;
}

