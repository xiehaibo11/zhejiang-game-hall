
/* v8::internal::compiler::BytecodeGraphBuilder::MergeIntoSuccessorEnvironment(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::MergeIntoSuccessorEnvironment
          (BytecodeGraphBuilder *this,int param_1)

{
  Environment *pEVar1;
  int iVar2;
  BytecodeLivenessState *pBVar3;
  long lVar4;
  Operator *pOVar5;
  Environment *this_00;
  int local_3c [3];
  int *local_18;
  
  local_3c[0] = param_1;
  if (*(int *)(this + 0x90) < param_1) {
    iVar2 = BytecodeAnalysis::GetLoopOffsetFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
    pBVar3 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
    BuildLoopExitsUntilLoop(this,iVar2,pBVar3);
  }
  local_18 = local_3c;
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)(this + 0xc0),(piecewise_construct_t *)local_3c,(tuple *)&DAT_01a5b4ee,
                     (tuple *)&local_18);
  this_00 = *(Environment **)(lVar4 + 0x28);
  if (this_00 == (Environment *)0x0) {
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Merge(*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),1)
    ;
    MakeNode(this,pOVar5,0,(Node **)0x0,true);
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(this + 0xa8);
  }
  else {
    pEVar1 = *(Environment **)(this + 0xa8);
    pBVar3 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),local_3c[0]);
    Environment::Merge(this_00,pEVar1,pBVar3);
  }
  *(undefined8 *)(this + 0xa8) = 0;
  return;
}

