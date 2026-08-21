
/* v8::internal::compiler::Node::OwnedBy(v8::internal::compiler::Node const*,
   v8::internal::compiler::Node const*) const */

bool __thiscall v8::internal::compiler::Node::OwnedBy(Node *this,Node *param_1,Node *param_2)

{
  uint uVar1;
  long *plVar2;
  Node *pNVar3;
  
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      while( true ) {
        pNVar3 = (Node *)(plVar2 + (ulong)(*(uint *)(plVar2 + 2) >> 1) * 3 + 3);
        if ((*(uint *)(plVar2 + 2) & 1) == 0) {
          pNVar3 = *(Node **)pNVar3;
        }
        if (pNVar3 == param_1) break;
        if (pNVar3 != param_2) {
          return false;
        }
        uVar1 = uVar1 | 2;
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_0129de7c;
      }
      uVar1 = uVar1 | 1;
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_0129de7c:
  return uVar1 == 3;
}

