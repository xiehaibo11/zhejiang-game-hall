
/* v8::internal::DeferredHandles::~DeferredHandles() */

void __thiscall v8::internal::DeferredHandles::~DeferredHandles(DeferredHandles *this)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  Isolate::UnlinkDeferredHandles(*(Isolate **)(this + 0x30),this);
  pvVar1 = *(void **)this;
  if (*(void **)(this + 8) != pvVar1) {
    uVar2 = 0;
    do {
      uVar4 = *(undefined8 *)((long)pvVar1 + uVar2 * 8);
      lVar3 = *(long *)(*(long *)(this + 0x30) + 0x95c0);
      pvVar1 = *(void **)(lVar3 + 0x68);
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      *(undefined8 *)(lVar3 + 0x68) = uVar4;
      pvVar1 = *(void **)this;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(*(long *)(this + 8) - (long)pvVar1 >> 3));
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

