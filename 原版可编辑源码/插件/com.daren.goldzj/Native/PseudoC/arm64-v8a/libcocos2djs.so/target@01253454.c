
/* v8::internal::IndirectFunctionTableEntry::target() const */

undefined8 __thiscall
v8::internal::IndirectFunctionTableEntry::target(IndirectFunctionTableEntry *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(this + 8);
    lVar2 = 0xf;
  }
  else {
    lVar2 = 0x3b;
  }
  return *(undefined8 *)(*(long *)(*plVar1 + lVar2) + (long)*(int *)(this + 0x10) * 8);
}

