
/* v8::internal::UseScratchRegisterScope::AcquireSameSizeAs(v8::internal::VRegister const&) */

undefined1  [16] __thiscall
v8::internal::UseScratchRegisterScope::AcquireSameSizeAs
          (UseScratchRegisterScope *this,VRegister *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (*(long *)*(CPURegList **)(this + 8) != 0) {
    uVar1 = CPURegList::PopLowestIndex(*(CPURegList **)(this + 8));
    auVar2._8_8_ = 0x100000001;
    auVar2._0_8_ = uVar1 & 0xffffffff | (ulong)*(uint *)(param_1 + 4) << 0x20;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!available->IsEmpty()");
}

