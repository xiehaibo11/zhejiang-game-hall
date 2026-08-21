
void FUN_01249890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cbc628;
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[1]);
  operator_delete(param_1);
  return;
}

