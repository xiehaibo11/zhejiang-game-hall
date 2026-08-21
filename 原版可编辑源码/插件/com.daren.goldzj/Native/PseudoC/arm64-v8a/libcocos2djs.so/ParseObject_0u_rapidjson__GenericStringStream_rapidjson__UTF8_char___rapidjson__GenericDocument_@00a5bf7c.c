
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseObject<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2)

{
  ulong __size;
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
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
        pvVar3 = operator_new(1);
        *(void **)(param_2 + 0x28) = pvVar3;
        *(void **)(param_2 + 0x30) = pvVar3;
      }
      uVar2 = *(ulong *)(param_2 + 0x50);
    }
    else {
      uVar2 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = ((long)puVar9 - (long)__ptr) + 0x18;
    if (__size <= uVar2) {
      __size = uVar2;
    }
    if (__size == 0) {
      free(__ptr);
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = realloc(__ptr,__size);
    }
    puVar9 = (undefined8 *)((long)pvVar3 + ((long)puVar9 - (long)__ptr));
    *(ulong *)(param_2 + 0x48) = (long)pvVar3 + __size;
    puVar4 = puVar9 + 3;
    *(void **)(param_2 + 0x38) = pvVar3;
    *(undefined8 **)(param_2 + 0x40) = puVar9;
  }
  *(undefined8 **)(param_2 + 0x40) = puVar4;
                    /* catch() { ... } // from try @ 00a5bf54 with catch @ 00a5bfc0 */
  puVar9[1] = 0;
  puVar9[2] = 0;
                    /* catch() { ... } // from try @ 00a5bf20 with catch @ 00a5bfc4 */
  *puVar9 = 0;
  *(undefined2 *)((long)puVar9 + 0x16) = 3;
  pbVar5 = *(byte **)param_1;
  while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
    pbVar5 = pbVar5 + 1;
  }
  *(byte **)param_1 = pbVar5;
  if (*(int *)(this + 0x30) == 0) {
                    /* try { // try from 00a5c00c to 00b5c00f has its CatchHandler @ 00a5c10c */
    if (*pbVar5 == 0x7d) {
      *(byte **)param_1 = pbVar5 + 1;
      lVar6 = *(long *)(param_2 + 0x40);
      *(undefined2 *)(lVar6 + -2) = 3;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
    else if (*pbVar5 == 0x22) {
                    /* try { // try from 00a5c060 to 00b5c063 has its CatchHandler @ 00a5c0f8 */
      uVar8 = 0;
      while (ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                       (this,param_1,param_2,true), *(int *)(this + 0x30) == 0) {
        pbVar5 = *(byte **)param_1;
                    /* try { // try from 00a5c09c to 00b5c09f has its CatchHandler @ 00a5c0e4 */
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        if (*pbVar5 != 0x3a) {
          lVar6 = *(long *)(param_1 + 8);
          uVar7 = 5;
                    /* try { // try from 00a5c248 to 00b5c29b has its CatchHandler @ 00a5c248
                       catch() { ... } // from try @ 00a5c248 with catch @ 00a5c248
                       catch() { ... } // from try @ 00a5c450 with catch @ 00a5c248 */
          goto LAB_00a5c1d4;
        }
        pbVar5 = pbVar5 + 1;
        *(byte **)param_1 = pbVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5c09c with catch @ 00a5c0e4
                        */
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5c060 with catch @ 00a5c0f8
                        */
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        ParseValue<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                  (this,param_1,param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5c00c with catch @ 00a5c10c
                        */
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        pbVar5 = *(byte **)param_1;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        uVar8 = uVar8 + 1;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 == 0x7d) {
            *(byte **)param_1 = pbVar5 + 1;
            uVar2 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                    ::EndObject((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                                 *)param_2,uVar8);
            if ((uVar2 & 1) != 0) {
              return;
            }
            pbVar5 = *(byte **)param_1;
            lVar6 = *(long *)(param_1 + 8);
            uVar7 = 0x10;
          }
          else {
            lVar6 = *(long *)(param_1 + 8);
            uVar7 = 6;
          }
          goto LAB_00a5c1d4;
        }
        pbVar5 = pbVar5 + 1;
        *(byte **)param_1 = pbVar5;
        while ((*pbVar5 < 0x21 && ((1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0))) {
          pbVar5 = pbVar5 + 1;
        }
        *(byte **)param_1 = pbVar5;
        if (*(int *)(this + 0x30) != 0) {
          return;
        }
        if (*pbVar5 != 0x22) goto LAB_00a5c194;
      }
    }
    else {
LAB_00a5c194:
      lVar6 = *(long *)(param_1 + 8);
      uVar7 = 4;
LAB_00a5c1d4:
      *(undefined4 *)(this + 0x30) = uVar7;
      *(long *)(this + 0x38) = (long)pbVar5 - lVar6;
    }
  }
  return;
}

