
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>::Int(int) */

undefined8 __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::Int(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
      *this,int param_1)

{
  ulong __size;
  long *plVar1;
  void *__ptr;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  undefined2 uVar5;
  
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
      uVar4 = *(ulong *)(this + 0x50);
    }
    else {
      uVar4 = (long)plVar1 + (((ulong)((long)plVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)plVar3 - (long)__ptr) + 0x18;
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
    plVar3 = (long *)((long)pvVar2 + ((long)plVar3 - (long)__ptr));
    *(void **)(this + 0x38) = pvVar2;
    *(long **)(this + 0x40) = plVar3;
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
  }
  *(long **)(this + 0x40) = plVar3 + 3;
  uVar5 = 0x1f6;
  if (param_1 < 0) {
    uVar5 = 0xb6;
  }
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)param_1;
  *(undefined2 *)((long)plVar3 + 0x16) = uVar5;
  return 1;
}

