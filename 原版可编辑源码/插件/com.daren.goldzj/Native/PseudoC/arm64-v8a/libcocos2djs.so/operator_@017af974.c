
/* v8::internal::compiler::StateValuesAccess::iterator::TEMPNAMEPLACEHOLDERVALUE() */

undefined1  [16] __thiscall
v8::internal::compiler::StateValuesAccess::iterator::operator*(iterator *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  iVar1 = *(int *)(this + 0xc0);
  uVar2 = SparseInputMask::InputIterator::IsReal((InputIterator *)(this + (long)iVar1 * 0x18));
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = SparseInputMask::InputIterator::GetReal((InputIterator *)(this + (long)iVar1 * 0x18));
  }
  plVar4 = *(long **)(this + (long)*(int *)(this + 0xc0) * 0x18 + 8);
  if (*(short *)(*plVar4 + 0x10) == 0x2a) {
    uVar2 = 0x708;
  }
  else {
    uVar2 = SparseInputMask::InputIterator::IsReal
                      ((InputIterator *)(this + (long)*(int *)(this + 0xc0) * 0x18));
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      plVar4 = (long *)MachineTypesOf((Operator *)*plVar4);
      uVar2 = (ulong)*(ushort *)
                      (*plVar4 +
                      (long)*(int *)(this + (long)*(int *)(this + 0xc0) * 0x18 + 0x10) * 2);
    }
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar3;
  return auVar5;
}

