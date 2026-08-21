
/* v8::internal::compiler::Node::UseCount() const */

int __thiscall v8::internal::compiler::Node::UseCount(Node *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 != (long *)0x0) {
    iVar1 = 0;
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)0x0);
    return iVar1;
  }
  return 0;
}

