
/* v8::internal::compiler::MachineGraph::RelocatableInt32Constant(int,
   v8::internal::RelocInfo::Mode) */

void __thiscall
v8::internal::compiler::MachineGraph::RelocatableInt32Constant
          (MachineGraph *this,undefined4 param_1,undefined4 param_3)

{
  Graph *this_00;
  long *plVar1;
  Operator *pOVar2;
  long lVar3;
  Node *local_28;
  
  plVar1 = (long *)NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
                   ::Find((NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
                           *)(this + 0x118),*(undefined8 *)(this + 0x158),
                          CONCAT44(param_3,param_1) & 0xffffffffff);
  if (*plVar1 == 0) {
    this_00 = *(Graph **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::RelocatableInt32Constant
                       (*(CommonOperatorBuilder **)(this + 8),param_1,param_3);
    local_28 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_28,false);
    *plVar1 = lVar3;
  }
  return;
}

