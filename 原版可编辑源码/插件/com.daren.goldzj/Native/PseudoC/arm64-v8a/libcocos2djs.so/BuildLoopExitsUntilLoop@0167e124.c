
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLoopExitsUntilLoop(int,
   v8::internal::compiler::BytecodeLivenessState const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLoopExitsUntilLoop
          (BytecodeGraphBuilder *this,int param_1,BytecodeLivenessState *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  Node *pNVar4;
  int local_64 [3];
  int *local_58;
  
  local_64[0] = BytecodeAnalysis::GetLoopOffsetFor
                          (*(BytecodeAnalysis **)(this + 0xa0),*(int *)(this + 0x90));
  iVar1 = *(int *)(this + 0xb4);
  if (*(int *)(this + 0xb4) <= param_1) {
    iVar1 = param_1;
  }
  if (iVar1 < local_64[0]) {
    do {
      local_58 = local_64;
      lVar2 = std::__ndk1::
              __tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
              ::
              __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                        ((int *)(this + 0xc0),(piecewise_construct_t *)local_64,
                         (tuple *)&DAT_01a5b4ee,(tuple *)&local_58);
      pNVar4 = *(Node **)(*(long *)(lVar2 + 0x28) + 0x18);
      piVar3 = (int *)BytecodeAnalysis::GetLoopInfoFor
                                (*(BytecodeAnalysis **)(this + 0xa0),local_64[0]);
      Environment::PrepareForLoopExit
                (*(Environment **)(this + 0xa8),pNVar4,(BytecodeLoopAssignments *)(piVar3 + 2),
                 param_2);
      local_64[0] = *piVar3;
    } while (iVar1 < local_64[0]);
  }
  return;
}

