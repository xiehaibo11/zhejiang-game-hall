
void FUN_01249cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cbc688;
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[2]);
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[3]);
  return;
}

