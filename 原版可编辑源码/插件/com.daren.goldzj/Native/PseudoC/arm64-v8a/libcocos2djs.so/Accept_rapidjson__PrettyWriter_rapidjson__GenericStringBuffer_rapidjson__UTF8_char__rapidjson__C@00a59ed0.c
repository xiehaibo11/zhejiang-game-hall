
/* bool rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>
   >::Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u> >(rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>&) const */

bool __thiscall
rapidjson::
GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
          (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
           *this,PrettyWriter *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *pvVar9;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar10;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar11;
  undefined1 *puVar12;
  long *plVar13;
  uint uVar14;
  double dVar15;
  
                    /* try { // try from 00a59ed4 to 00b59f27 has its CatchHandler @ 00a59ed4
                       catch() { ... } // from try @ 00a59ed4 with catch @ 00a59ed4
                       catch() { ... } // from try @ 00a5a094 with catch @ 00a59ed4 */
  uVar1 = *(ushort *)(this + 0x16);
  switch(uVar1 & 7) {
  case 0:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,0);
                    /* try { // try from 00a59f28 to 00b59f3f has its CatchHandler @ 00a5a110 */
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::WriteNull((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                         *)param_1);
    return (bool)uVar2;
  case 1:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,1);
    bVar3 = false;
    break;
  case 2:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,2);
    bVar3 = true;
    break;
  case 3:
    uVar4 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::StartObject((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                           *)param_1);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (*(int *)this != 0) {
      pGVar10 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 *)(*(long *)(this + 8) + 0x18);
      do {
        if (((byte)pGVar10[-1] >> 4 & 1) == 0) {
          pGVar11 = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      **)(pGVar10 + -0x10);
          uVar14 = *(uint *)(pGVar10 + -0x18);
        }
        else {
          pGVar11 = pGVar10 + -0x18;
          uVar14 = 0x15 - (byte)pGVar10[-3];
        }
        PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
        ::PrettyPrefix(param_1,5);
        uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                               *)param_1,(char *)pGVar11,uVar14);
        if ((uVar4 & 1) == 0) {
          return false;
        }
        bVar3 = Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
                          (pGVar10,param_1);
        if (!bVar3) {
          return false;
        }
        pGVar11 = pGVar10 + 0x18;
        pGVar10 = pGVar10 + 0x30;
      } while (pGVar11 !=
               (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)(*(long *)(this + 8) + (ulong)*(uint *)this * 0x30));
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar6 + -0x10;
    if (*(long *)(lVar6 + -0x10) != 0) {
      plVar13 = *(long **)param_1;
      puVar12 = (undefined1 *)plVar13[3];
      puVar8 = (undefined1 *)plVar13[4];
      puVar7 = puVar12 + 1;
      if (puVar8 < puVar7) {
        pvVar9 = (void *)plVar13[2];
        if (pvVar9 == (void *)0x0) {
          if (*plVar13 == 0) {
            pvVar5 = operator_new(1);
            *plVar13 = (long)pvVar5;
            plVar13[1] = (long)pvVar5;
          }
                    /* try { // try from 00a5a398 to 00b5a3db has its CatchHandler @ 00a5a398
                       catch() { ... } // from try @ 00a5a398 with catch @ 00a5a398
                       catch() { ... } // from try @ 00a5a3f4 with catch @ 00a5a398 */
          puVar8 = (undefined1 *)plVar13[5];
        }
        else {
          puVar8 = puVar8 + (((ulong)(puVar8 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
        }
        lVar6 = (long)puVar12 - (long)pvVar9;
        if (puVar8 < (undefined1 *)(lVar6 + 1)) {
          puVar8 = (undefined1 *)(lVar6 + 1);
        }
        if (puVar8 == (undefined1 *)0x0) {
          free(pvVar9);
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,(size_t)puVar8);
        }
        puVar12 = (undefined1 *)((long)pvVar9 + lVar6);
        plVar13[4] = (long)((long)pvVar9 + (long)puVar8);
        puVar7 = puVar12 + 1;
        plVar13[2] = (long)pvVar9;
        plVar13[3] = (long)puVar12;
                    /* try { // try from 00a5a3dc to 00b5a3f3 has its CatchHandler @ 00a5a424 */
      }
      plVar13[3] = (long)puVar7;
      *puVar12 = 10;
      PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
      ::WriteIndent((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                     *)param_1);
    }
    plVar13 = *(long **)param_1;
                    /* try { // try from 00a5a094 to 00b5a177 has its CatchHandler @ 00a59ed4 */
    puVar12 = (undefined1 *)plVar13[3];
    puVar8 = (undefined1 *)plVar13[4];
    puVar7 = puVar12 + 1;
    if (puVar8 < puVar7) {
      pvVar9 = (void *)plVar13[2];
      if (pvVar9 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00a5a248 with catch @ 00a5a314 */
        if (*plVar13 == 0) {
                    /* catch() { ... } // from try @ 00a5a208 with catch @ 00a5a318 */
                    /* catch() { ... } // from try @ 00a5a250 with catch @ 00a5a31c */
          pvVar5 = operator_new(1);
          *plVar13 = (long)pvVar5;
          plVar13[1] = (long)pvVar5;
        }
        puVar8 = (undefined1 *)plVar13[5];
      }
      else {
        puVar8 = puVar8 + (((ulong)(puVar8 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
      }
      lVar6 = (long)puVar12 - (long)pvVar9;
                    /* catch() { ... } // from try @ 00a5a238 with catch @ 00a5a32c */
      if (puVar8 < (undefined1 *)(lVar6 + 1U)) {
        puVar8 = (undefined1 *)(lVar6 + 1);
      }
      if (puVar8 == (undefined1 *)0x0) {
        free(pvVar9);
        pvVar9 = (void *)0x0;
      }
      else {
                    /* catch() { ... } // from try @ 00a5a1f4 with catch @ 00a5a344 */
        pvVar9 = realloc(pvVar9,(size_t)puVar8);
                    /* catch() { ... } // from try @ 00a5a1c8 with catch @ 00a5a348 */
      }
      puVar12 = (undefined1 *)((long)pvVar9 + lVar6);
      plVar13[4] = (long)((long)pvVar9 + (long)puVar8);
      puVar7 = puVar12 + 1;
      plVar13[2] = (long)pvVar9;
      plVar13[3] = (long)puVar12;
    }
    plVar13[3] = (long)puVar7;
    uVar2 = 0x7d;
    goto LAB_00a5a154;
  case 4:
    uVar4 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::StartArray((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                          *)param_1);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (*(int *)this != 0) {
      pGVar10 = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  **)(this + 8);
      do {
        bVar3 = Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
                          (pGVar10,param_1);
        if (!bVar3) {
          return false;
        }
        pGVar10 = pGVar10 + 0x18;
      } while (pGVar10 !=
               (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)(*(long *)(this + 8) + (ulong)*(uint *)this * 0x18));
    }
    lVar6 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar6 + -0x10;
                    /* catch() { ... } // from try @ 00a59f54 with catch @ 00a5a108 */
                    /* catch() { ... } // from try @ 00a59f48 with catch @ 00a5a10c */
    if ((*(long *)(lVar6 + -0x10) != 0) && (((byte)param_1[0x44] & 1) == 0)) {
                    /* catch() { ... } // from try @ 00a59f28 with catch @ 00a5a110 */
      plVar13 = *(long **)param_1;
      puVar12 = (undefined1 *)plVar13[3];
      puVar8 = (undefined1 *)plVar13[4];
      puVar7 = puVar12 + 1;
                    /* catch() { ... } // from try @ 00a59f60 with catch @ 00a5a120 */
      if (puVar8 < puVar7) {
        pvVar9 = (void *)plVar13[2];
        if (pvVar9 == (void *)0x0) {
          if (*plVar13 == 0) {
            pvVar5 = operator_new(1);
            *plVar13 = (long)pvVar5;
            plVar13[1] = (long)pvVar5;
          }
                    /* try { // try from 00a5a3f4 to 00b5a437 has its CatchHandler @ 00a5a398 */
          puVar8 = (undefined1 *)plVar13[5];
        }
        else {
          puVar8 = puVar8 + (((ulong)(puVar8 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
        }
        lVar6 = (long)puVar12 - (long)pvVar9;
        if (puVar8 < (undefined1 *)(lVar6 + 1)) {
          puVar8 = (undefined1 *)(lVar6 + 1);
        }
        if (puVar8 == (undefined1 *)0x0) {
          free(pvVar9);
          pvVar9 = (void *)0x0;
        }
        else {
          pvVar9 = realloc(pvVar9,(size_t)puVar8);
        }
                    /* catch() { ... } // from try @ 00a5a3dc with catch @ 00a5a424 */
        puVar12 = (undefined1 *)((long)pvVar9 + lVar6);
        plVar13[4] = (long)((long)pvVar9 + (long)puVar8);
        puVar7 = puVar12 + 1;
        plVar13[2] = (long)pvVar9;
        plVar13[3] = (long)puVar12;
                    /* try { // try from 00a5a438 to 00b5a487 has its CatchHandler @ 00a5a438
                       catch() { ... } // from try @ 00a5a438 with catch @ 00a5a438
                       catch() { ... } // from try @ 00a5a540 with catch @ 00a5a438 */
      }
      plVar13[3] = (long)puVar7;
      *puVar12 = 10;
      PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
      ::WriteIndent((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                     *)param_1);
    }
    plVar13 = *(long **)param_1;
    puVar12 = (undefined1 *)plVar13[3];
    puVar8 = (undefined1 *)plVar13[4];
    puVar7 = puVar12 + 1;
    if (puVar8 < puVar7) {
      pvVar9 = (void *)plVar13[2];
      if (pvVar9 == (void *)0x0) {
        if (*plVar13 == 0) {
          pvVar5 = operator_new(1);
          *plVar13 = (long)pvVar5;
          plVar13[1] = (long)pvVar5;
        }
        puVar8 = (undefined1 *)plVar13[5];
      }
      else {
        puVar8 = puVar8 + (((ulong)(puVar8 + (1 - (long)pvVar9)) >> 1) - (long)pvVar9);
                    /* try { // try from 00a5a280 to 00b5a397 has its CatchHandler @ 00a5a178 */
      }
      lVar6 = (long)puVar12 - (long)pvVar9;
      if (puVar8 < (undefined1 *)(lVar6 + 1U)) {
        puVar8 = (undefined1 *)(lVar6 + 1);
      }
      if (puVar8 == (undefined1 *)0x0) {
        free(pvVar9);
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = realloc(pvVar9,(size_t)puVar8);
      }
      puVar12 = (undefined1 *)((long)pvVar9 + lVar6);
                    /* catch() { ... } // from try @ 00a5a230 with catch @ 00a5a2fc */
      plVar13[4] = (long)((long)pvVar9 + (long)puVar8);
      puVar7 = puVar12 + 1;
      plVar13[2] = (long)pvVar9;
      plVar13[3] = (long)puVar12;
    }
    plVar13[3] = (long)puVar7;
    uVar2 = 0x5d;
LAB_00a5a154:
    *puVar12 = uVar2;
    return true;
  case 5:
                    /* try { // try from 00a5a178 to 00b5a1c7 has its CatchHandler @ 00a5a178
                       catch() { ... } // from try @ 00a5a178 with catch @ 00a5a178
                       catch() { ... } // from try @ 00a5a280 with catch @ 00a5a178 */
    if ((uVar1 >> 0xc & 1) == 0) {
      uVar14 = *(uint *)this;
      this = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               **)(this + 8);
    }
    else {
                    /* try { // try from 00a5a1c8 to 00b5a1df has its CatchHandler @ 00a5a348 */
      uVar14 = 0x15 - (int)(char)this[0x15];
    }
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,5);
                    /* try { // try from 00a5a1f4 to 00b5a207 has its CatchHandler @ 00a5a344 */
    uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                           *)param_1,(char *)this,uVar14);
    return (bool)uVar2;
  default:
                    /* try { // try from 00a59f48 to 00b59f53 has its CatchHandler @ 00a5a10c */
    if ((uVar1 >> 9 & 1) != 0) {
      dVar15 = *(double *)this;
      PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
      ::PrettyPrefix(param_1,6);
      uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::WriteDouble((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                             *)param_1,dVar15);
      return (bool)uVar2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
                    /* try { // try from 00a5a208 to 00b5a217 has its CatchHandler @ 00a5a318 */
      uVar2 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Int((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                     *)param_1,*(int *)this);
      return (bool)uVar2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
                    /* try { // try from 00a5a230 to 00b5a237 has its CatchHandler @ 00a5a2fc */
                    /* try { // try from 00a5a238 to 00b5a247 has its CatchHandler @ 00a5a32c */
      uVar2 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Uint((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                      *)param_1,*(uint *)this);
      return (bool)uVar2;
    }
                    /* try { // try from 00a59f54 to 00b59f5f has its CatchHandler @ 00a5a108 */
    if ((uVar1 >> 7 & 1) != 0) {
                    /* try { // try from 00a5a248 to 00b5a24f has its CatchHandler @ 00a5a314 */
                    /* try { // try from 00a5a250 to 00b5a27f has its CatchHandler @ 00a5a31c */
      uVar2 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Int64((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                       *)param_1,*(ulong *)this);
      return (bool)uVar2;
    }
                    /* try { // try from 00a59f60 to 00b5a093 has its CatchHandler @ 00a5a120 */
    uVar2 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::Uint64((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                      *)param_1,*(ulong *)this);
    return (bool)uVar2;
  }
  uVar2 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
          ::WriteBool((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                       *)param_1,bVar3);
  return (bool)uVar2;
}

