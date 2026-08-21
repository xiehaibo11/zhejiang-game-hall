
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
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  
                    /* catch() { ... } // from try @ 00a5d810 with catch @ 00a5da74 */
                    /* catch() { ... } // from try @ 00a5d804 with catch @ 00a5da78 */
                    /* catch() { ... } // from try @ 00a5d7e4 with catch @ 00a5da7c */
  plVar3 = *(long **)(this + 0x40);
  plVar1 = *(long **)(this + 0x48);
                    /* catch() { ... } // from try @ 00a5d81c with catch @ 00a5da8c
                       catch() { ... } // from try @ 00a5d890 with catch @ 00a5da8c
                       catch() { ... } // from try @ 00a5d9b0 with catch @ 00a5da8c */
  plVar4 = plVar3 + 3;
  if (plVar1 < plVar4) {
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
                    /* try { // try from 00a5dae4 to 00b5db37 has its CatchHandler @ 00a5dae4
                       catch() { ... } // from try @ 00a5dae4 with catch @ 00a5dae4
                       catch() { ... } // from try @ 00a5dcf8 with catch @ 00a5dae4 */
    }
    __size = ((long)plVar3 - (long)__ptr) + 0x18;
    if (__size <= uVar5) {
      __size = uVar5;
    }
    if (__size == 0) {
      free(__ptr);
                    /* try { // try from 00a5db38 to 00b5db4f has its CatchHandler @ 00a5ddac */
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,__size);
    }
    plVar3 = (long *)((long)pvVar2 + ((long)plVar3 - (long)__ptr));
    *(ulong *)(this + 0x48) = (long)pvVar2 + __size;
    plVar4 = plVar3 + 3;
    *(void **)(this + 0x38) = pvVar2;
    *(long **)(this + 0x40) = plVar3;
  }
  *(long **)(this + 0x40) = plVar4;
  *plVar3 = (long)param_1;
  uVar6 = 0x1f6;
  if (param_1 < 0) {
    uVar6 = 0xb6;
  }
  plVar3[1] = 0;
  plVar3[2] = 0;
  *(undefined2 *)((long)plVar3 + 0x16) = uVar6;
  return 1;
}

