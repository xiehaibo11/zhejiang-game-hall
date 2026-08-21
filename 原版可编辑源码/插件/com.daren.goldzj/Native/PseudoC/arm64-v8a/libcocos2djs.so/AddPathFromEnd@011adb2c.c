
/* v8::internal::ProfileTree::AddPathFromEnd(std::__ndk1::vector<v8::internal::ProfileStackFrame,
   std::__ndk1::allocator<v8::internal::ProfileStackFrame> > const&, int, bool,
   v8::CpuProfilingMode, v8::internal::ContextFilter*) */

ProfileNode * __thiscall
v8::internal::ProfileTree::AddPathFromEnd
          (ProfileTree *this,long *param_1,int param_2,uint param_4,int param_5,ulong *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  CodeEntry *pCVar3;
  int iVar4;
  ProfileNode *this_00;
  CodeEntry *pCVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  this_00 = *(ProfileNode **)(this + 0x20);
  if (puVar1 != (undefined8 *)*param_1) {
    iVar4 = 0;
    pCVar3 = (CodeEntry *)0x0;
    pCVar5 = (CodeEntry *)puVar1[-4];
    puVar2 = puVar1 + -4;
    while( true ) {
      if ((pCVar5 != (CodeEntry *)0x0) &&
         (((param_6 == (ulong *)0x0 || (*(char *)(puVar1 + -1) == '\0')) ||
          ((puVar1[-2] & 0xfffffffffffffffe) == *param_6)))) {
        this_00 = (ProfileNode *)ProfileNode::FindOrAddChild(this_00,pCVar5,iVar4);
        pCVar3 = pCVar5;
        if (param_5 == 1) {
          iVar4 = *(int *)(puVar1 + -3);
        }
        else {
          iVar4 = 0;
        }
      }
      if (puVar2 == (undefined8 *)*param_1) break;
      pCVar5 = (CodeEntry *)puVar2[-4];
      puVar1 = puVar2;
      puVar2 = puVar2 + -4;
    }
    if (((pCVar3 != (CodeEntry *)0x0) && (*(long *)(pCVar3 + 0x38) != 0)) &&
       (*(int *)(*(long *)(pCVar3 + 0x38) + 0x10) != -1)) {
      ProfileNode::CollectDeoptInfo(this_00,pCVar3);
    }
  }
  if (((param_4 & 1) != 0) &&
     (*(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1, param_2 != 0)) {
    ProfileNode::IncrementLineTicks(this_00,param_2);
  }
  return this_00;
}

