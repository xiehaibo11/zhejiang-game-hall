
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::GetStateValuesFromCache(v8::internal::compiler::Node**,
   int, v8::internal::BitVector const*, int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::GetStateValuesFromCache
          (Environment *this,Node **param_1,int param_2,BitVector *param_3,int param_4)

{
  StateValuesCache::GetNodeForValues
            ((StateValuesCache *)(*(long *)this + 400),param_1,(long)param_2,param_3,param_4);
  return;
}

