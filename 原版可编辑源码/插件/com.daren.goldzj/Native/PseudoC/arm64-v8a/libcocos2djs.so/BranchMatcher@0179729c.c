
/* v8::internal::compiler::BranchMatcher::BranchMatcher(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BranchMatcher::BranchMatcher(BranchMatcher *this,Node *param_1)

{
  long *plVar1;
  long *plVar2;
  BranchMatcher *pBVar3;
  
  *(Node **)this = param_1;
  *(long *)(this + 8) = 0;
  *(long *)(this + 0x10) = 0;
  if (*(short *)(*(long *)param_1 + 0x10) == 2) {
    for (plVar1 = *(long **)(param_1 + 0x18); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      plVar2 = plVar1 + (ulong)(*(uint *)(plVar1 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar1 + 2) & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
      pBVar3 = this + 8;
      if ((*(short *)(*plVar2 + 0x10) == 4) ||
         (pBVar3 = this + 0x10, *(short *)(*plVar2 + 0x10) == 5)) {
        *(long **)pBVar3 = plVar2;
      }
    }
  }
  return;
}

