
/* v8::internal::interpreter::ConstantArrayBuilder::size() const */

long __thiscall v8::internal::interpreter::ConstantArrayBuilder::size(ConstantArrayBuilder *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0x10;
  do {
    if (lVar1 == -8) {
      return *(long *)(*(long *)this + 0x28) - *(long *)(*(long *)this + 0x20) >> 4;
    }
    plVar2 = *(long **)(this + lVar1);
    lVar1 = lVar1 + -8;
  } while (plVar2[5] - plVar2[4] == 0);
  return *plVar2 + (plVar2[5] - plVar2[4] >> 4);
}

