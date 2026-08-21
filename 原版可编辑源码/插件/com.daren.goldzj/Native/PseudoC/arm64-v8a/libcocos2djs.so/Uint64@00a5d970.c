
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
   rapidjson::CrtAllocator>::Uint64(unsigned long) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::Uint64(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
         *this,ulong param_1)

{
  ulong __size;
  ulong *puVar1;
  void *__ptr;
  void *pvVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ushort uVar6;
  
  puVar3 = *(ulong **)(this + 0x40);
  puVar1 = *(ulong **)(this + 0x48);
  puVar4 = puVar3 + 3;
  if (puVar1 < puVar4) {
                    /* try { // try from 00a5d9ec to 00b5dae3 has its CatchHandler @ 00a5d790 */
    __ptr = *(void **)(this + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(this + 0x28) == 0) {
        pvVar2 = operator_new(1);
        *(void **)(this + 0x28) = pvVar2;
        *(void **)(this + 0x30) = pvVar2;
      }
      uVar5 = *(ulong *)(this + 0x50);
    }
    else {
      uVar5 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)puVar3 - (long)__ptr) + 0x18;
    if (__size <= uVar5) {
      __size = uVar5;
    }
    if (__size == 0) {
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,__size);
    }
    puVar3 = (ulong *)((long)pvVar2 + ((long)puVar3 - (long)__ptr));
                    /* catch() { ... } // from try @ 00a5d878 with catch @ 00a5da60
                       catch() { ... } // from try @ 00a5d950 with catch @ 00a5da60 */
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
                    /* catch() { ... } // from try @ 00a5d854 with catch @ 00a5da64
                       catch() { ... } // from try @ 00a5d8fc with catch @ 00a5da64 */
    puVar4 = puVar3 + 3;
    *(void **)(this + 0x38) = pvVar2;
    *(ulong **)(this + 0x40) = puVar3;
  }
  *(ulong **)(this + 0x40) = puVar4;
  uVar6 = 0x116;
  if (-1 < (long)param_1) {
    uVar6 = 0x196;
  }
                    /* try { // try from 00a5d9b0 to 00b5d9eb has its CatchHandler @ 00a5da8c */
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = param_1;
  *(ushort *)((long)puVar3 + 0x16) = uVar6;
  if ((param_1 >> 0x20 == 0) &&
     (*(ushort *)((long)puVar3 + 0x16) = uVar6 | 0x40, param_1 >> 0x1f == 0)) {
    *(ushort *)((long)puVar3 + 0x16) = uVar6 | 0x60;
  }
  return 1;
}

