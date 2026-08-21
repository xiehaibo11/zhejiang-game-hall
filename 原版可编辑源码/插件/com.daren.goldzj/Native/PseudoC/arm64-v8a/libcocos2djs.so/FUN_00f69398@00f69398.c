
void FUN_00f69398(long param_1)

{
  v8::internal::GlobalHandles::InvokeSecondPassPhantomCallbacksFromTask
            (*(GlobalHandles **)(param_1 + 8));
  return;
}

