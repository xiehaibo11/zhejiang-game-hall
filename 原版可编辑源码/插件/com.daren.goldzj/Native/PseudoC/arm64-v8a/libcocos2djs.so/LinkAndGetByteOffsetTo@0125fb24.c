
/* v8::internal::Assembler::LinkAndGetByteOffsetTo(v8::internal::Label*) */

int __thiscall v8::internal::Assembler::LinkAndGetByteOffsetTo(Assembler *this,Label *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)param_1;
  if (-1 < (int)uVar2) {
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = uVar2 + ~(*(int *)(this + 0x20) - *(int *)(this + 0x10));
    }
    *(uint *)param_1 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 1;
    return iVar1;
  }
  return ~uVar2 + (*(int *)(this + 0x10) - *(int *)(this + 0x20));
}

