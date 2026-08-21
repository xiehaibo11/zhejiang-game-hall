
/* v8::internal::TransitionArray::SetNumberOfPrototypeTransitions(v8::internal::WeakFixedArray, int)
    */

void v8::internal::TransitionArray::SetNumberOfPrototypeTransitions(long param_1,int param_2)

{
  *(int *)(param_1 + 7) = param_2 << 1;
  return;
}

