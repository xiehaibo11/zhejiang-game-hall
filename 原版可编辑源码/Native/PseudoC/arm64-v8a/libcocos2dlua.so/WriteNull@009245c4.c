
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
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  puVar3 = (undefined1 *)plVar4[3];
  puVar2 = (undefined1 *)plVar4[4];
                    /* try { // try from 009245e0 to 00a245f3 has its CatchHandler @ 00924678 */
  if (puVar2 < puVar3 + 4) {
    __ptr = (void *)plVar4[2];
    if (__ptr == (void *)0x0) {
      if (*plVar4 == 0) {
                    /* catch() { ... } // from try @ 009245e0 with catch @ 00924678 */
                    /* catch() { ... } // from try @ 009245f8 with catch @ 0092467c */
        pvVar1 = operator_new(1);
        *plVar4 = (long)pvVar1;
        plVar4[1] = (long)pvVar1;
      }
      puVar2 = (undefined1 *)plVar4[5];
    }
    else {
      puVar2 = puVar2 + (((ulong)(puVar2 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = (undefined1 *)(((long)puVar3 - (long)__ptr) + 4);
    if (__size <= puVar2) {
      __size = puVar2;
    }
    if (__size == (undefined1 *)0x0) {
      free(__ptr);
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = realloc(__ptr,(size_t)__size);
                    /* catch() { ... } // from try @ 009245ac with catch @ 009246ac */
    }
    plVar4[2] = (long)pvVar1;
    plVar4[3] = (long)pvVar1 + ((long)puVar3 - (long)__ptr);
    plVar4[4] = (long)((long)pvVar1 + (long)__size);
    plVar4 = *(long **)this;
    puVar3 = (undefined1 *)plVar4[3];
  }
  plVar4[3] = (long)(puVar3 + 1);
                    /* try { // try from 009245f8 to 00a2462b has its CatchHandler @ 0092467c */
  *puVar3 = 0x6e;
  puVar2 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar2 + 1;
  *puVar2 = 0x75;
  puVar2 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar2 + 1;
                    /* try { // try from 0092462c to 00a246c7 has its CatchHandler @ 009244f4 */
  *puVar2 = 0x6c;
  puVar2 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar2 + 1;
  *puVar2 = 0x6c;
  return 1;
}

