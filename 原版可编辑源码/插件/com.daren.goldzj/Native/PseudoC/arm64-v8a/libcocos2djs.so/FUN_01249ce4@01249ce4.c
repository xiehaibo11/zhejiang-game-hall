
void FUN_01249ce4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cbc688;
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[2]);
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[3]);
  operator_delete(param_1);
  return;
}

