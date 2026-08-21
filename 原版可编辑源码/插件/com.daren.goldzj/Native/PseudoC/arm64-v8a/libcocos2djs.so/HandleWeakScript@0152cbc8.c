
/* v8::internal::AllocationTracker::UnresolvedLocation::HandleWeakScript(v8::WeakCallbackInfo<void>
   const&) */

void v8::internal::AllocationTracker::UnresolvedLocation::HandleWeakScript
               (WeakCallbackInfo *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  GlobalHandles::Destroy((ulong *)*puVar1);
  *puVar1 = 0;
  return;
}

