
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseNull<1u,
   rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericInsituStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseNull<1u,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericInsituStringStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  void *__ptr;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)param_1;
  lVar4 = lVar5 + 1;
  *(long *)param_1 = lVar4;
  if (*(char *)(lVar5 + 1) == 'u') {
    lVar4 = lVar5 + 2;
    *(long *)param_1 = lVar4;
    if (*(char *)(lVar5 + 2) == 'l') {
      lVar4 = lVar5 + 3;
      *(long *)param_1 = lVar4;
      if (*(char *)(lVar5 + 3) == 'l') {
        *(long *)param_1 = lVar5 + 4;
        puVar3 = *(undefined8 **)(param_2 + 0x40);
        puVar1 = *(undefined8 **)(param_2 + 0x48);
        if (puVar1 < puVar3 + 3) {
          __ptr = *(void **)(param_2 + 0x38);
          if (__ptr == (void *)0x0) {
            if (*(long *)(param_2 + 0x28) == 0) {
              pvVar2 = operator_new(1);
              *(void **)(param_2 + 0x28) = pvVar2;
              *(void **)(param_2 + 0x30) = pvVar2;
            }
            uVar6 = *(ulong *)(param_2 + 0x50);
          }
          else {
            uVar6 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
          }
          __size = ((long)puVar3 - (long)__ptr) + 0x18;
          if (__size <= uVar6) {
            __size = uVar6;
          }
          if (__size == 0) {
            free(__ptr);
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = realloc(__ptr,__size);
          }
          puVar3 = (undefined8 *)((long)pvVar2 + ((long)puVar3 - (long)__ptr));
          *(void **)(param_2 + 0x38) = pvVar2;
          *(undefined8 **)(param_2 + 0x40) = puVar3;
          *(ulong *)(param_2 + 0x48) = (long)pvVar2 + __size;
        }
        *(undefined8 **)(param_2 + 0x40) = puVar3 + 3;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        return;
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x30) = 3;
  *(long *)(this + 0x38) = lVar4 - lVar5;
  return;
}

