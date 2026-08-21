
/* cocostudio::FlatBuffersSerialize::deleteFlatBufferBuilder() */

void __thiscall
cocostudio::FlatBuffersSerialize::deleteFlatBufferBuilder(FlatBuffersSerialize *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar3 + 0x28);
    pvVar2 = *(void **)((long)pvVar3 + 0x40);
    *(long *)((long)pvVar3 + 0x18) = *(long *)((long)pvVar3 + 0x10) + *(long *)((long)pvVar3 + 8);
    *(void **)((long)pvVar3 + 0x30) = pvVar1;
    *(void **)((long)pvVar3 + 0x48) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(void **)((long)pvVar3 + 0x48) = pvVar2;
      operator_delete(pvVar2);
      pvVar1 = *(void **)((long)pvVar3 + 0x28);
    }
    if (pvVar1 != (void *)0x0) {
      *(void **)((long)pvVar3 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
    (**(code **)(**(long **)((long)pvVar3 + 0x20) + 0x18))
              (*(long **)((long)pvVar3 + 0x20),*(undefined8 *)((long)pvVar3 + 0x10));
    operator_delete(pvVar3);
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

