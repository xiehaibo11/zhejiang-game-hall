
/* v8::internal::Assembler::CodeTargetAlign() */

void __thiscall v8::internal::Assembler::CodeTargetAlign(Assembler *this)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  while ((uVar1 & 7) != 0) {
    Emit(this,0xd503201f);
    uVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x10);
  }
  return;
}

