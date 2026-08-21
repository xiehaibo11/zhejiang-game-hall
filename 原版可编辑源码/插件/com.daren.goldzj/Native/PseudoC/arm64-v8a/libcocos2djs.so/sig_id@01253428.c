
/* v8::internal::IndirectFunctionTableEntry::sig_id() const */

undefined4 __thiscall
v8::internal::IndirectFunctionTableEntry::sig_id(IndirectFunctionTableEntry *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
    plVar1 = *(long **)(this + 8);
    lVar2 = 7;
  }
  else {
    lVar2 = 0x43;
  }
  return *(undefined4 *)(*(long *)(*plVar1 + lVar2) + (long)*(int *)(this + 0x10) * 4);
}

