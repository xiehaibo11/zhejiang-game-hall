
/* v8::internal::Assembler::extr(v8::internal::Register const&, v8::internal::Register const&,
   v8::internal::Register const&, int) */

void __thiscall
v8::internal::Assembler::extr
          (Assembler *this,Register *param_1,Register *param_2,Register *param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ulong *)param_1 >> 0x20 == 0x40);
  Emit(this,(uint)*(ulong *)param_1 | param_4 << 10 | uVar1 << 0x1f | *(int *)param_3 << 0x10 |
            uVar1 << 0x16 | *(int *)param_2 << 5 | 0x13800000);
  return;
}

