
/* v8::internal::Assembler::DeleteUnresolvedBranchInfoForLabel(v8::internal::Label*) */

void __thiscall
v8::internal::Assembler::DeleteUnresolvedBranchInfoForLabel(Assembler *this,Label *param_1)

{
  int iVar1;
  
  if (*(long *)(this + 0x128) != 0) {
    if ((*(int *)param_1 < 1) ||
       (DeleteUnresolvedBranchInfoForLabelTraverse(this,param_1), *(long *)(this + 0x128) != 0)) {
      iVar1 = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(int *)(this + 0x130) = iVar1;
  }
  return;
}

