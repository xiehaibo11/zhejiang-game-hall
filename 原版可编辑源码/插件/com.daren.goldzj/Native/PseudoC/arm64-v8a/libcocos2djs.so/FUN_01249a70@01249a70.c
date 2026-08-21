
void FUN_01249a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cbc658;
  v8::internal::GlobalHandles::Destroy((ulong *)param_1[3]);
  if ((ulong *)param_1[4] != (ulong *)0x0) {
    v8::internal::GlobalHandles::Destroy((ulong *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}

