
/* v8::internal::compiler::Frame::AlignFrame(int) */

int __thiscall v8::internal::compiler::Frame::AlignFrame(Frame *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1 + 7;
  if (-1 < param_1) {
    iVar2 = param_1;
  }
  iVar2 = iVar2 >> 3;
  uVar3 = *(uint *)(this + 0xc) & iVar2 - 1U;
  if (uVar3 == 0) {
    uVar3 = *(uint *)(this + 4);
  }
  else {
    uVar3 = (iVar2 - uVar3) + *(int *)(this + 4);
    *(uint *)(this + 4) = uVar3;
  }
  uVar1 = uVar3 & iVar2 - 1U;
  iVar2 = iVar2 - uVar1;
  if (uVar1 != 0) {
    *(uint *)(this + 4) = iVar2 + uVar3;
    if (*(int *)(this + 8) != 0) {
      *(int *)(this + 8) = *(int *)(this + 8) + iVar2;
    }
  }
  return iVar2;
}

