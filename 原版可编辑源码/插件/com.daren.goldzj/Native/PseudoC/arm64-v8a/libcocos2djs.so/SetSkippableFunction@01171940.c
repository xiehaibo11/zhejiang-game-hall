
/* v8::internal::PreparseDataBuilder::DataGatheringScope::SetSkippableFunction(v8::internal::DeclarationScope*,
   int, int) */

void __thiscall
v8::internal::PreparseDataBuilder::DataGatheringScope::SetSkippableFunction
          (DataGatheringScope *this,DeclarationScope *param_1,int param_2,int param_3)

{
  *(DeclarationScope **)(*(long *)(this + 8) + 0x38) = param_1;
  *(int *)(*(long *)(this + 8) + 0x40) = param_2;
  *(int *)(*(long *)(this + 8) + 0x44) = param_3;
  *(byte *)(**(long **)(this + 8) + 0x4c) = *(byte *)(**(long **)(this + 8) + 0x4c) | 2;
  return;
}

