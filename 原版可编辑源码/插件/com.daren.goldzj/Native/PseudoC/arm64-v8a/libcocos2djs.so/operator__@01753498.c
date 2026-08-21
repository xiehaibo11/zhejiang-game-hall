
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CreateCollectionIteratorParameters
   const&, v8::internal::compiler::CreateCollectionIteratorParameters const&) */

bool v8::internal::compiler::operator==
               (CreateCollectionIteratorParameters *param_1,
               CreateCollectionIteratorParameters *param_2)

{
  return *(int *)param_1 == *(int *)param_2 && *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}

