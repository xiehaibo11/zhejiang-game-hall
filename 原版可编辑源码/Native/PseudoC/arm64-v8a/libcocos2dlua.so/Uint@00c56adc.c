
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>::Uint(unsigned
   int) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::Uint(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
       *this,uint param_1)

{
  ulong __size;
  ulong *puVar1;
  void *__ptr;
  void *pvVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined2 uVar5;
  
  puVar3 = *(ulong **)(this + 0x40);
  puVar1 = *(ulong **)(this + 0x48);
  if (puVar1 < puVar3 + 3) {
    __ptr = *(void **)(this + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(this + 0x28) == 0) {
        pvVar2 = operator_new(1);
        *(void **)(this + 0x28) = pvVar2;
        *(void **)(this + 0x30) = pvVar2;
      }
      uVar4 = *(ulong *)(this + 0x50);
    }
    else {
      uVar4 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)puVar3 - (long)__ptr) + 0x18;
    if (__size <= uVar4) {
      __size = uVar4;
    }
    if (__size == 0) {
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,__size);
    }
    puVar3 = (ulong *)((long)pvVar2 + ((long)puVar3 - (long)__ptr));
    *(void **)(this + 0x38) = pvVar2;
    *(ulong **)(this + 0x40) = puVar3;
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
  }
  *(ulong **)(this + 0x40) = puVar3 + 3;
  uVar5 = 0x1d6;
  if (-1 < (int)param_1) {
    uVar5 = 0x1f6;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = (ulong)param_1;
  *(undefined2 *)((long)puVar3 + 0x16) = uVar5;
  return 1;
}

