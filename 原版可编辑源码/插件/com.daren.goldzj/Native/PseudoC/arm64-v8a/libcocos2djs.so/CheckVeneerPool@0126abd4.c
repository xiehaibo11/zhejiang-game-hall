
/* v8::internal::Assembler::CheckVeneerPool(bool, bool, unsigned long) */

void __thiscall
v8::internal::Assembler::CheckVeneerPool(Assembler *this,bool param_1,bool param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((*(long *)(this + 0x128) == 0) || (0 < *(int *)(this + 0xd0))) {
    return;
  }
  uVar1 = param_3 << (~(uint)param_2 & 1);
  if ((!param_1) &&
     ((long)(uVar1 + *(long *)(this + 0x128) * 4 +
             (long)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 8) <
      (long)*(int *)(*(long *)(this + 0x118) + 0x20))) {
    *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
    return;
  }
  EmitVeneers(this,param_1,param_2,uVar1);
  return;
}

