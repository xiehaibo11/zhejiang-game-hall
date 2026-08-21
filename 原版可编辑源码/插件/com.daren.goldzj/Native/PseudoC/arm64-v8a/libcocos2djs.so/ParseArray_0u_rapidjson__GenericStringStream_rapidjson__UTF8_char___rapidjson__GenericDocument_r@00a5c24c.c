
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseArray<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  void *__ptr;
  undefined8 *puVar9;
  
  *(long *)param_1 = *(long *)param_1 + 1;
  puVar9 = *(undefined8 **)(param_2 + 0x40);
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  puVar4 = puVar9 + 3;
  if (puVar1 < puVar4) {
    __ptr = *(void **)(param_2 + 0x38);
    if (__ptr == (void *)0x0) {
      if (*(long *)(param_2 + 0x28) == 0) {
        pvVar2 = operator_new(1);
        *(void **)(param_2 + 0x28) = pvVar2;
        *(void **)(param_2 + 0x30) = pvVar2;
      }
      uVar3 = *(ulong *)(param_2 + 0x50);
    }
    else {
      uVar3 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)puVar9 - (long)__ptr) + 0x18;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    if (__size == 0) {
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,__size);
    }
    puVar9 = (undefined8 *)((long)pvVar2 + ((long)puVar9 - (long)__ptr));
    *(ulong *)(param_2 + 0x48) = (long)pvVar2 + __size;
    puVar4 = puVar9 + 3;
    *(void **)(param_2 + 0x38) = pvVar2;
    *(undefined8 **)(param_2 + 0x40) = puVar9;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  *(undefined2 *)((long)puVar9 + 0x16) = 4;
                    /* try { // try from 00a5c29c to 00b5c2b3 has its CatchHandler @ 00a5c4e4 */
  pbVar5 = *(byte **)param_1;
                    /* try { // try from 00a5c2bc to 00b5c2c7 has its CatchHandler @ 00a5c4e0 */
                    /* try { // try from 00a5c2c8 to 00b5c2d3 has its CatchHandler @ 00a5c4dc */
  while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  *(byte **)param_1 = pbVar5;
                    /* try { // try from 00a5c2d4 to 00b5c327 has its CatchHandler @ 00a5c4f4 */
  if (*(int *)(this + 0x30) == 0) {
    if (*pbVar5 == 0x5d) {
      *(byte **)param_1 = pbVar5 + 1;
      lVar6 = *(long *)(param_2 + 0x40);
      *(undefined2 *)(lVar6 + -2) = 4;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
    else {
                    /* try { // try from 00a5c328 to 00b5c33b has its CatchHandler @ 00a5c4cc */
      uVar8 = 0;
      do {
        ParseValue<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                  (this,param_1,param_2);
                    /* try { // try from 00a5c348 to 00b5c34f has its CatchHandler @ 00a5c4f4 */
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
                    /* try { // try from 00a5c350 to 00b5c363 has its CatchHandler @ 00a5c4c8 */
        pbVar5 = *(byte **)param_1;
                    /* try { // try from 00a5c370 to 00b5c377 has its CatchHandler @ 00a5c4f4 */
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
                    /* try { // try from 00a5c378 to 00b5c38b has its CatchHandler @ 00a5c4c4 */
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        uVar8 = uVar8 + 1;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 == 0x5d) {
            *(byte **)param_1 = pbVar5 + 1;
            uVar3 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    ::EndArray((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                                *)param_2,uVar8);
            if ((uVar3 & 1) != 0) {
              return;
            }
            pbVar5 = *(byte **)param_1;
            lVar6 = *(long *)(param_1 + 8);
            uVar7 = 0x10;
          }
          else {
                    /* try { // try from 00a5c450 to 00b5c54b has its CatchHandler @ 00a5c248 */
            lVar6 = *(long *)(param_1 + 8);
            uVar7 = 7;
          }
          *(undefined4 *)(this + 0x30) = uVar7;
          *(long *)(this + 0x38) = (long)pbVar5 - lVar6;
          return;
        }
        pbVar5 = pbVar5 + 1;
                    /* try { // try from 00a5c394 to 00b5c44f has its CatchHandler @ 00a5c4f4 */
        *(byte **)param_1 = pbVar5;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
      } while (*(int *)(this + 0x30) == 0);
    }
  }
  return;
}

