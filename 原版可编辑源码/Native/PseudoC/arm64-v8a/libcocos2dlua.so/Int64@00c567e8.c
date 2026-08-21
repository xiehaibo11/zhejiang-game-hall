
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>::Int64(long) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::Int64(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
        *this,long param_1)

{
  ulong __size;
  long *plVar1;
  void *__ptr;
  void *pvVar2;
  long *plVar3;
  ushort uVar4;
  ulong uVar5;
  
  plVar3 = *(long **)(this + 0x40);
  plVar1 = *(long **)(this + 0x48);
  if (plVar1 < plVar3 + 3) {
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
      uVar5 = (long)plVar1 + (((ulong)((long)plVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)plVar3 - (long)__ptr) + 0x18;
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
    plVar3 = (long *)((long)pvVar2 + ((long)plVar3 - (long)__ptr));
    *(void **)(this + 0x38) = pvVar2;
    *(long **)(this + 0x40) = plVar3;
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
  }
  *(long **)(this + 0x40) = plVar3 + 3;
  *plVar3 = param_1;
  plVar3[1] = 0;
  plVar3[2] = 0x96000000000000;
  if (param_1 < 0) {
    if (param_1 < -0x80000000) {
      return 1;
    }
    uVar4 = 0xb6;
  }
  else {
    uVar4 = 0x196;
    if ((ulong)param_1 >> 0x20 == 0) {
      uVar4 = 0x1d6;
    }
    *(ushort *)((long)plVar3 + 0x16) = uVar4;
    if ((ulong)param_1 >> 0x1f != 0) {
      return 1;
    }
    uVar4 = uVar4 | 0x20;
  }
  *(ushort *)((long)plVar3 + 0x16) = uVar4;
  return 1;
}

