
/* v8::internal::compiler::StateValuesAccess::iterator::type() */

undefined2 __thiscall v8::internal::compiler::StateValuesAccess::iterator::type(iterator *this)

{
  undefined2 uVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + (long)*(int *)(this + 0xc0) * 0x18 + 8);
  if (*(short *)(*plVar3 + 0x10) == 0x2a) {
    uVar1 = 0x708;
  }
  else {
    uVar2 = SparseInputMask::InputIterator::IsReal
                      ((InputIterator *)(this + (long)*(int *)(this + 0xc0) * 0x18));
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      plVar3 = (long *)MachineTypesOf((Operator *)*plVar3);
      uVar1 = *(undefined2 *)
               (*plVar3 + (long)*(int *)(this + (long)*(int *)(this + 0xc0) * 0x18 + 0x10) * 2);
    }
  }
  return uVar1;
}

