
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseNull<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseNull<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  void *__ptr;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar5 = *(long *)param_1;
  lVar4 = lVar5 + 1;
  *(long *)param_1 = lVar4;
  if (*(char *)(lVar5 + 1) == 'u') {
    lVar4 = lVar5 + 2;
    *(long *)param_1 = lVar4;
    if (*(char *)(lVar5 + 2) == 'l') {
      lVar4 = lVar5 + 3;
      *(long *)param_1 = lVar4;
                    /* catch() { ... } // from try @ 00a5b79c with catch @ 00a5b808 */
      if (*(char *)(lVar5 + 3) == 'l') {
                    /* catch() { ... } // from try @ 00a5b768 with catch @ 00a5b80c */
        *(long *)param_1 = lVar5 + 4;
        puVar3 = *(undefined8 **)(param_2 + 0x40);
        puVar1 = *(undefined8 **)(param_2 + 0x48);
                    /* try { // try from 00a5b828 to 00b5b86f has its CatchHandler @ 00a5b828
                       catch() { ... } // from try @ 00a5b828 with catch @ 00a5b828
                       catch() { ... } // from try @ 00a5b8c8 with catch @ 00a5b828 */
        puVar6 = puVar3 + 3;
        if (puVar1 < puVar6) {
          __ptr = *(void **)(param_2 + 0x38);
                    /* try { // try from 00a5b870 to 00b5b877 has its CatchHandler @ 00a5b90c */
          if (__ptr == (void *)0x0) {
            if (*(long *)(param_2 + 0x28) == 0) {
                    /* try { // try from 00a5b88c to 00b5b8a7 has its CatchHandler @ 00a5b914 */
              pvVar2 = operator_new(1);
              *(void **)(param_2 + 0x28) = pvVar2;
              *(void **)(param_2 + 0x30) = pvVar2;
            }
            uVar7 = *(ulong *)(param_2 + 0x50);
          }
          else {
            uVar7 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
          }
          __size = ((long)puVar3 - (long)__ptr) + 0x18;
                    /* try { // try from 00a5b8b8 to 00b5b8c7 has its CatchHandler @ 00a5b908 */
          if (__size <= uVar7) {
            __size = uVar7;
          }
          if (__size == 0) {
            free(__ptr);
            pvVar2 = (void *)0x0;
          }
          else {
                    /* try { // try from 00a5b8c8 to 00b5b92f has its CatchHandler @ 00a5b828 */
            pvVar2 = realloc(__ptr,__size);
          }
          puVar3 = (undefined8 *)((long)pvVar2 + ((long)puVar3 - (long)__ptr));
          *(ulong *)(param_2 + 0x48) = (long)pvVar2 + __size;
          puVar6 = puVar3 + 3;
          *(void **)(param_2 + 0x38) = pvVar2;
          *(undefined8 **)(param_2 + 0x40) = puVar3;
        }
        *(undefined8 **)(param_2 + 0x40) = puVar6;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        return;
      }
    }
  }
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)(this + 0x30) = 3;
  *(long *)(this + 0x38) = lVar4 - lVar5;
  return;
}

