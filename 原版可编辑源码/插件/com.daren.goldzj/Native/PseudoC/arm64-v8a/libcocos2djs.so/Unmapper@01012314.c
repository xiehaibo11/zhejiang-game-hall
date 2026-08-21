
/* v8::internal::MemoryAllocator::Unmapper::Unmapper(v8::internal::Heap*,
   v8::internal::MemoryAllocator*) */

void __thiscall
v8::internal::MemoryAllocator::Unmapper::Unmapper
          (Unmapper *this,Heap *param_1,MemoryAllocator *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  Unmapper *pUVar4;
  
  *(Heap **)this = param_1;
  *(MemoryAllocator **)(this + 8) = param_2;
  base::Mutex::Mutex((Mutex *)(this + 0x10));
  pUVar4 = this + 0x38;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)pUVar4 = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  base::Semaphore::Semaphore((Semaphore *)(this + 0xa0),0);
  pvVar2 = *(void **)pUVar4;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  if ((ulong)(*(long *)(this + 0x48) - (long)pvVar2 >> 3) < 0x40) {
    lVar3 = *(long *)(this + 0x40) - (long)pvVar2;
    pvVar1 = operator_new(0x200);
    if (0 < lVar3) {
      __memcpy_chk(pvVar1,pvVar2,lVar3,0x200);
      pvVar2 = *(void **)pUVar4;
    }
    *(void **)(this + 0x38) = pvVar1;
    *(long *)(this + 0x40) = (long)pvVar1 + lVar3;
    *(long *)(this + 0x48) = (long)pvVar1 + 0x200;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  pvVar2 = *(void **)(this + 0x68);
  if ((ulong)(*(long *)(this + 0x78) - (long)pvVar2 >> 3) < 0x40) {
    lVar3 = *(long *)(this + 0x70) - (long)pvVar2;
    pvVar1 = operator_new(0x200);
    if (0 < lVar3) {
      __memcpy_chk(pvVar1,pvVar2,lVar3,0x200);
      pvVar2 = *(void **)(this + 0x68);
    }
    *(void **)(this + 0x68) = pvVar1;
    *(long *)(this + 0x70) = (long)pvVar1 + lVar3;
    *(long *)(this + 0x78) = (long)pvVar1 + 0x200;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}

