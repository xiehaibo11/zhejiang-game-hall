
/* v8::internal::RegExpCapture::CaptureRegisters() */

undefined8 __thiscall v8::internal::RegExpCapture::CaptureRegisters(RegExpCapture *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(this + 0x10) * 2;
  uVar1 = *(int *)(this + 0x10) << 1 | 1;
  uVar4 = (**(code **)(**(long **)(this + 8) + 0x48))(*(long **)(this + 8));
  uVar5 = (uint)((ulong)uVar4 >> 0x20);
  if ((int)uVar5 <= (int)uVar1) {
    uVar5 = uVar1;
  }
  iVar3 = (int)uVar4;
  if (iVar3 != -1) {
    uVar1 = uVar5;
  }
  if (iVar3 <= iVar2 && iVar3 != -1) {
    iVar2 = iVar3;
  }
  return CONCAT44(uVar1,iVar2);
}

