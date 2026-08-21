
/* v8::internal::wasm::NativeModule::SnapshotCodeTable() const */

void v8::internal::wasm::NativeModule::SnapshotCodeTable(void)

{
  void *pvVar1;
  uint uVar2;
  long in_x0;
  void *__dest;
  undefined8 *in_x8;
  void *__src;
  ulong __n;
  
  base::Mutex::Lock((Mutex *)(in_x0 + 0x110));
  __src = *(void **)(in_x0 + 0x150);
  uVar2 = *(uint *)(*(long *)(in_x0 + 200) + 0x44);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (uVar2 != 0) {
    __n = (ulong)uVar2 << 3;
    __dest = operator_new(__n);
    pvVar1 = (void *)((long)__dest + (ulong)uVar2 * 8);
    *in_x8 = __dest;
    in_x8[2] = pvVar1;
    memcpy(__dest,__src,__n);
    in_x8[1] = pvVar1;
  }
  base::Mutex::Unlock((Mutex *)(in_x0 + 0x110));
  return;
}

