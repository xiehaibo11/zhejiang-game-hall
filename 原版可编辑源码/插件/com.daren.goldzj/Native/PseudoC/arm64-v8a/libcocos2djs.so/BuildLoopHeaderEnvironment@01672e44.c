
/* v8::internal::compiler::BytecodeGraphBuilder::BuildLoopHeaderEnvironment(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BuildLoopHeaderEnvironment
          (BytecodeGraphBuilder *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  BytecodeLivenessState *pBVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int local_4c [3];
  int *local_28;
  
  local_4c[0] = param_1;
  uVar1 = BytecodeAnalysis::IsLoopHeader(*(BytecodeAnalysis **)(this + 0xa0),param_1);
  if ((uVar1 & 1) != 0) {
    this[0x160] = (BytecodeGraphBuilder)0x1;
    lVar2 = BytecodeAnalysis::GetLoopInfoFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
    pBVar3 = (BytecodeLivenessState *)
             BytecodeAnalysis::GetInLivenessFor(*(BytecodeAnalysis **)(this + 0xa0),param_1);
    lVar6 = *(long *)(lVar2 + 0x18);
    lVar7 = *(long *)(lVar2 + 0x20);
    Environment::PrepareForLoop
              (*(Environment **)(this + 0xa8),(BytecodeLoopAssignments *)(lVar2 + 8),pBVar3);
    uVar4 = Environment::Copy(*(Environment **)(this + 0xa8));
    local_28 = local_4c;
    lVar5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::BytecodeGraphBuilder::Environment*>>>
            ::
            __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                      ((int *)(this + 0xc0),(piecewise_construct_t *)local_4c,(tuple *)&DAT_01a5b4ee
                       ,(tuple *)&local_28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    if (lVar6 != lVar7) {
      BuildSwitchOnGeneratorState(this,(ZoneVector *)(lVar2 + 0x18),true);
      lVar2 = *(long *)(this + 0xa8);
      uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x10),-2.0);
      *(undefined8 *)(lVar2 + 0x50) = uVar4;
    }
  }
  return;
}

