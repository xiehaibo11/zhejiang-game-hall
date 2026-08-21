
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
   rapidjson::CrtAllocator>::~GenericDocument() */

void __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::~GenericDocument(GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                   *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
                    /* catch() { ... } // from try @ 00a54b5c with catch @ 00a54c50 */
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
                    /* catch() { ... } // from try @ 00a54b18 with catch @ 00a54c68 */
    while (pvVar1 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a54aec with catch @ 00a54c6c */
      if ((void *)puVar2[2] == pvVar1) {
        *(undefined8 *)((long)pvVar1 + 8) = 0;
        pvVar1 = (void *)puVar2[4];
        if (pvVar1 == (void *)0x0) goto LAB_00a54c98;
        goto LAB_00a54c94;
      }
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      free(pvVar1);
      *puVar2 = pvVar3;
      pvVar1 = pvVar3;
    }
    pvVar1 = (void *)puVar2[4];
    if (pvVar1 != (void *)0x0) {
LAB_00a54c94:
      operator_delete(pvVar1);
    }
LAB_00a54c98:
    operator_delete(puVar2);
  }
  free(*(void **)(this + 0x38));
  if (*(void **)(this + 0x30) != (void *)0x0) {
                    /* try { // try from 00a54cbc to 00b54cff has its CatchHandler @ 00a54cbc
                       catch() { ... } // from try @ 00a54cbc with catch @ 00a54cbc
                       catch() { ... } // from try @ 00a54d18 with catch @ 00a54cbc */
    operator_delete(*(void **)(this + 0x30));
    return;
  }
  return;
}

