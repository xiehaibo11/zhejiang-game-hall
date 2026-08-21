
void FUN_01249728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cbc5c0;
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[2]);
  operator_delete(param_1);
  return;
}

