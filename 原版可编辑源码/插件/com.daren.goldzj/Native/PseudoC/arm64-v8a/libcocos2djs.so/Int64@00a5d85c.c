
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
  long *plVar5;
  ulong uVar6;
  
  plVar3 = *(long **)(this + 0x40);
  plVar1 = *(long **)(this + 0x48);
                    /* try { // try from 00a5d878 to 00b5d887 has its CatchHandler @ 00a5da60 */
  plVar5 = plVar3 + 3;
  if (plVar1 < plVar5) {
    __ptr = *(void **)(this + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(this + 0x28) == 0) {
        pvVar2 = operator_new(1);
        *(void **)(this + 0x28) = pvVar2;
        *(void **)(this + 0x30) = pvVar2;
      }
      uVar6 = *(ulong *)(this + 0x50);
    }
    else {
                    /* try { // try from 00a5d8fc to 00b5d93f has its CatchHandler @ 00a5da64 */
      uVar6 = (long)plVar1 + (((ulong)((long)plVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)plVar3 - (long)__ptr) + 0x18;
    if (__size <= uVar6) {
      __size = uVar6;
    }
    if (__size == 0) {
                    /* try { // try from 00a5d950 to 00b5d9a7 has its CatchHandler @ 00a5da60 */
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,__size);
    }
    plVar3 = (long *)((long)pvVar2 + ((long)plVar3 - (long)__ptr));
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
    plVar5 = plVar3 + 3;
    *(void **)(this + 0x38) = pvVar2;
    *(long **)(this + 0x40) = plVar3;
  }
  *(long **)(this + 0x40) = plVar5;
  plVar3[1] = 0;
  plVar3[2] = 0;
                    /* try { // try from 00a5d890 to 00b5d8f7 has its CatchHandler @ 00a5da8c */
  *plVar3 = param_1;
  *(undefined2 *)((long)plVar3 + 0x16) = 0x96;
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

