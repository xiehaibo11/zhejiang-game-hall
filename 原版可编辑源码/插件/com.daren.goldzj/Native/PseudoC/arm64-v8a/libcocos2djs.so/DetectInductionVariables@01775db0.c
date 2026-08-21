
/* v8::internal::compiler::LoopVariableOptimizer::DetectInductionVariables(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::DetectInductionVariables
          (LoopVariableOptimizer *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  Node *pNVar5;
  long *plVar6;
  Node *pNVar7;
  uint local_74 [3];
  uint *local_68;
  
  if (*(int *)(*(long *)param_1 + 0x1c) == 2) {
    if (FLAG_trace_turbo_loop != '\0') {
      PrintF("Loop variables for loop %i:",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff));
    }
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x18);
      do {
        plVar6 = (long *)*plVar3;
        lVar4 = 0x10;
        if ((*(uint *)(plVar3 + 2) & 1) != 0) {
          lVar4 = 0x20;
        }
        uVar2 = NodeProperties::IsControlEdge
                          (plVar3,(long)plVar3 +
                                  lVar4 + (ulong)(*(uint *)(plVar3 + 2) >> 1) * 0x20 + 0x18);
        if ((uVar2 & 1) != 0) {
          uVar1 = *(uint *)(plVar3 + 2);
          pNVar7 = (Node *)(plVar3 + (ulong)(uVar1 >> 1) * 3 + 3);
          pNVar5 = pNVar7;
          if ((uVar1 & 1) == 0) {
            pNVar5 = *(Node **)pNVar7;
          }
          if (*(short *)(*(long *)pNVar5 + 0x10) == 0x23) {
            if ((uVar1 & 1) == 0) {
              pNVar7 = *(Node **)pNVar7;
            }
            plVar3 = (long *)TryGetInductionVariable(this,pNVar7);
            if (plVar3 != (long *)0x0) {
              local_68 = local_74;
              local_74[0] = *(uint *)(pNVar7 + 0x14) & 0xffffff;
              lVar4 = std::__ndk1::
                      __tree<std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::InductionVariable*>>>
                      ::
                      __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                                ((int *)(this + 0x60),(piecewise_construct_t *)local_74,
                                 (tuple *)&DAT_01a5ff0b,(tuple *)&local_68);
              *(long **)(lVar4 + 0x28) = plVar3;
              if (FLAG_trace_turbo_loop != '\0') {
                PrintF(" %i",(ulong)(*(uint *)(*plVar3 + 0x14) & 0xffffff));
              }
            }
          }
        }
        plVar3 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    if (FLAG_trace_turbo_loop != '\0') {
      PrintF("\n");
    }
  }
  return;
}

