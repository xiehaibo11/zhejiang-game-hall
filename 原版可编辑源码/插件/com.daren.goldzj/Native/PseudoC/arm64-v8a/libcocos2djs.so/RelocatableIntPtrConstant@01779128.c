
/* v8::internal::compiler::MachineGraph::RelocatableIntPtrConstant(long,
   v8::internal::RelocInfo::Mode) */

void __thiscall
v8::internal::compiler::MachineGraph::RelocatableIntPtrConstant
          (MachineGraph *this,undefined8 param_1,uint param_3)

{
  Graph *this_00;
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  Node *local_28;
  
  plVar1 = (long *)NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
                   ::Find(this + 0x138,*(undefined8 *)(this + 0x158),param_1,param_3 & 0xff);
  if (*plVar1 == 0) {
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::RelocatableInt64Constant
                       (*(CommonOperatorBuilder **)(this + 8),param_1,param_3);
    local_28 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_28,false);
    *plVar1 = lVar3;
  }
  return;
}

