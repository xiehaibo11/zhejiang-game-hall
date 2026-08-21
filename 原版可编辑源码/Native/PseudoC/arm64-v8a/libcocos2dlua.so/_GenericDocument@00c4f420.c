
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
  
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    while (pvVar1 != (void *)0x0) {
      if ((void *)puVar2[2] == pvVar1) {
        *(undefined8 *)((long)pvVar1 + 8) = 0;
        pvVar1 = (void *)puVar2[4];
        if (pvVar1 == (void *)0x0) goto LAB_00c4f470;
        goto LAB_00c4f46c;
      }
      pvVar3 = *(void **)((long)pvVar1 + 0x10);
      free(pvVar1);
      *puVar2 = pvVar3;
      pvVar1 = pvVar3;
    }
    pvVar1 = (void *)puVar2[4];
    if (pvVar1 != (void *)0x0) {
LAB_00c4f46c:
      operator_delete(pvVar1);
    }
LAB_00c4f470:
    operator_delete(puVar2);
  }
  free(*(void **)(this + 0x38));
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x30));
    return;
  }
  return;
}

