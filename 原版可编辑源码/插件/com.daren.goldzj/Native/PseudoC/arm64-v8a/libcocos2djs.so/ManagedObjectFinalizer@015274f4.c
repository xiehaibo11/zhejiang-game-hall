
/* v8::internal::ManagedObjectFinalizer(v8::WeakCallbackInfo<void> const&) */

void v8::internal::ManagedObjectFinalizer(WeakCallbackInfo *param_1)

{
  GlobalHandles::Destroy(*(ulong **)(*(long *)(param_1 + 8) + 0x28));
  **(undefined8 **)(param_1 + 0x10) = FUN_0152752c;
  return;
}

