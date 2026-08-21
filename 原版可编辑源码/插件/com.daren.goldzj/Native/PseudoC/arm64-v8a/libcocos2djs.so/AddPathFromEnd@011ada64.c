
/* v8::internal::ProfileTree::AddPathFromEnd(std::__ndk1::vector<v8::internal::CodeEntry*,
   std::__ndk1::allocator<v8::internal::CodeEntry*> > const&, int, bool) */

ProfileNode * __thiscall
v8::internal::ProfileTree::AddPathFromEnd
          (ProfileTree *this,vector *param_1,int param_2,bool param_3)

{
  CodeEntry *pCVar1;
  CodeEntry *pCVar2;
  long *plVar3;
  ProfileNode *this_00;
  long *plVar4;
  
  plVar3 = *(long **)param_1;
  this_00 = *(ProfileNode **)(this + 0x20);
  if (*(long **)(param_1 + 8) != plVar3) {
    pCVar2 = (CodeEntry *)0x0;
    plVar4 = *(long **)(param_1 + 8) + -1;
    pCVar1 = (CodeEntry *)*plVar4;
    if ((CodeEntry *)*plVar4 != (CodeEntry *)0x0) goto LAB_011adab0;
    while (plVar4 != plVar3) {
      while( true ) {
        plVar4 = plVar4 + -1;
        pCVar1 = (CodeEntry *)*plVar4;
        if ((CodeEntry *)*plVar4 == (CodeEntry *)0x0) break;
LAB_011adab0:
        pCVar2 = pCVar1;
        this_00 = (ProfileNode *)ProfileNode::FindOrAddChild(this_00,pCVar2,0);
        plVar3 = *(long **)param_1;
        if (plVar4 == plVar3) goto LAB_011adad4;
      }
    }
LAB_011adad4:
    if (((pCVar2 != (CodeEntry *)0x0) && (*(long *)(pCVar2 + 0x38) != 0)) &&
       (*(int *)(*(long *)(pCVar2 + 0x38) + 0x10) != -1)) {
      ProfileNode::CollectDeoptInfo(this_00,pCVar2);
    }
  }
  if ((param_3) && (*(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1, param_2 != 0)) {
    ProfileNode::IncrementLineTicks(this_00,param_2);
  }
  return this_00;
}

