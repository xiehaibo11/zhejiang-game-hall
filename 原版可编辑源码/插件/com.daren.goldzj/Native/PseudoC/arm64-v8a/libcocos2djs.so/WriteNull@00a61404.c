
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::WriteNull() */

undefined8 __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::WriteNull(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            *this)

{
  undefined1 *__size;
  void *__ptr;
  void *pvVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  plVar2 = plVar5 + 3;
  puVar4 = (undefined1 *)*plVar2;
  puVar3 = (undefined1 *)plVar5[4];
  if (puVar3 < puVar4 + 4) {
    __ptr = (void *)plVar5[2];
    if (__ptr == (void *)0x0) {
      if (*plVar5 == 0) {
                    /* catch() { ... } // from try @ 00a6137c with catch @ 00a614c4 */
        pvVar1 = operator_new(1);
                    /* catch() { ... } // from try @ 00a61390 with catch @ 00a614c8 */
        *plVar5 = (long)pvVar1;
        plVar5[1] = (long)pvVar1;
      }
      puVar3 = (undefined1 *)plVar5[5];
    }
    else {
      puVar3 = puVar3 + (((ulong)(puVar3 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
                    /* catch() { ... } // from try @ 00a61334 with catch @ 00a614d8 */
                    /* catch() { ... } // from try @ 00a612e0 with catch @ 00a614dc */
    __size = (undefined1 *)(((long)puVar4 - (long)__ptr) + 4);
                    /* catch() { ... } // from try @ 00a612d8 with catch @ 00a614e4 */
    if (__size <= puVar3) {
      __size = puVar3;
    }
    if (__size == (undefined1 *)0x0) {
      free(__ptr);
      pvVar1 = (void *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00a612cc with catch @ 00a614ec */
      pvVar1 = realloc(__ptr,(size_t)__size);
                    /* catch() { ... } // from try @ 00a612f8 with catch @ 00a614f4 */
    }
                    /* catch() { ... } // from try @ 00a61344 with catch @ 00a61504
                       catch() { ... } // from try @ 00a613b4 with catch @ 00a61504 */
    plVar5[2] = (long)pvVar1;
    plVar5[3] = (long)pvVar1 + ((long)puVar4 - (long)__ptr);
    plVar5[4] = (long)((long)pvVar1 + (long)__size);
    plVar2 = (long *)(*(long *)this + 0x18);
    puVar4 = (undefined1 *)*plVar2;
  }
  *plVar2 = (long)(puVar4 + 1);
  *puVar4 = 0x6e;
                    /* try { // try from 00a61448 to 00b61563 has its CatchHandler @ 00a61274 */
  puVar3 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar3 + 1;
  *puVar3 = 0x75;
  puVar3 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar3 + 1;
  *puVar3 = 0x6c;
  puVar3 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar3 + 1;
  *puVar3 = 0x6c;
  return 1;
}

