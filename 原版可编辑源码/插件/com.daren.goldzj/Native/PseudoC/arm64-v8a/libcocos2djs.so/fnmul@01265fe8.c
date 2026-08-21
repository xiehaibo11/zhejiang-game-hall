
/* v8::internal::Assembler::fnmul(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::fnmul
          (Assembler *this,VRegister *param_1,VRegister *param_2,VRegister *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x1e208800;
  if (*(int *)(param_1 + 4) != 0x20) {
    uVar1 = 0x1e608800;
  }
  uVar2 = 0x1e608800;
  if (*(ulong *)param_1 >> 0x20 != 0x40) {
    uVar2 = uVar1;
  }
  Emit(this,(uint)*(ulong *)param_1 | *(int *)param_3 << 0x10 | uVar2 | *(int *)param_2 << 5);
  return;
}

