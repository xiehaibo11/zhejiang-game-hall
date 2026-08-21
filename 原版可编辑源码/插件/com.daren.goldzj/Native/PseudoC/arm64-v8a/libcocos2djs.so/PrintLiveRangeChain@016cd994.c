
/* v8::internal::compiler::GraphC1Visualizer::PrintLiveRangeChain(v8::internal::compiler::TopLevelLiveRange
   const*, char const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintLiveRangeChain
          (GraphC1Visualizer *this,TopLevelLiveRange *param_1,char *param_2)

{
  int iVar1;
  
  if ((param_1 != (TopLevelLiveRange *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_1 + 0x5c);
    do {
      PrintLiveRange(this,(LiveRange *)param_1,param_2,iVar1);
      param_1 = *(TopLevelLiveRange **)(param_1 + 0x28);
    } while (param_1 != (TopLevelLiveRange *)0x0);
  }
  return;
}

