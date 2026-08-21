
/* v8::internal::Heap::UnregisterBackingStore(v8::internal::JSArrayBuffer) */

void v8::internal::Heap::UnregisterBackingStore(undefined8 *param_1,long param_2,ulong param_3)

{
  Mutex *this;
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = 0;
  if ((*(uint *)(param_3 + 0x1b) >> 4 & 1) == 0) {
    lVar1 = -*(long *)(param_3 + 0xb);
  }
  this = *(Mutex **)((param_3 & 0xfffffffffffc0000) + 0xa0);
  base::Mutex::Lock(this);
  LocalArrayBufferTracker::Remove
            (&local_50,*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 0xf8),param_3);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  base::Mutex::Unlock(this);
  *(long *)(param_2 + -0x8830) = *(long *)(param_2 + -0x8830) + lVar1;
  return;
}

