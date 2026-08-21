
/* v8::internal::compiler::hash_value(v8::internal::compiler::CreateCollectionIteratorParameters
   const&) */

void v8::internal::compiler::hash_value(CreateCollectionIteratorParameters *param_1)

{
  base::hash_combine((long)*(int *)param_1,(long)*(int *)(param_1 + 4));
  return;
}

