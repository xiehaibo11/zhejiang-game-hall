
/* v8::internal::Assembler::rev(v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::rev(Assembler *this,Register *param_1,Register *param_2)

{
  uint uVar1;
  
  uVar1 = 0xdac00c00;
  if (*(int *)(param_1 + 4) != 0x40) {
    uVar1 = 0x5ac00800;
  }
  Emit(this,uVar1 | (int)*(ulong *)param_2 << 5 | *(uint *)param_1 |
            (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x1f);
  return;
}

