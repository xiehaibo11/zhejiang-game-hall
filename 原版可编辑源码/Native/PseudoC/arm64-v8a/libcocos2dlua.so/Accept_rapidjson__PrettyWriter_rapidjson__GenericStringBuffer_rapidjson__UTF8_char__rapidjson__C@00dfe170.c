
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
  ulong uVar1;
  ushort uVar2;
  PrettyWriter PVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined1 *puVar9;
  void *pvVar10;
  size_t sVar11;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar12;
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
  *pGVar13;
  undefined1 *puVar14;
  long *plVar15;
  void *pvVar16;
  uint uVar17;
  double dVar18;
  
  uVar2 = *(ushort *)(this + 0x16);
  switch(uVar2 & 7) {
  case 0:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,0);
    uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::WriteNull((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                         *)param_1);
    return (bool)uVar4;
  case 1:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,1);
    bVar5 = false;
    break;
  case 2:
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,2);
    bVar5 = true;
    break;
  case 3:
    uVar6 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::StartObject((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                           *)param_1);
    if ((uVar6 & 1) == 0) {
      return false;
    }
    if (*(int *)this != 0) {
      pGVar12 = (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 *)(*(long *)(this + 8) + 0x18);
      do {
        if (((byte)pGVar12[-1] >> 4 & 1) == 0) {
          pGVar13 = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      **)(pGVar12 + -0x10);
          uVar17 = *(uint *)(pGVar12 + -0x18);
        }
        else {
          pGVar13 = pGVar12 + -0x18;
          uVar17 = 0x15 - (byte)pGVar12[-3];
        }
        PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
        ::PrettyPrefix(param_1,5);
        uVar6 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                               *)param_1,(char *)pGVar13,uVar17);
        if ((uVar6 & 1) == 0) {
          return false;
        }
        bVar5 = Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
                          (pGVar12,param_1);
        if (!bVar5) {
          return false;
        }
        pGVar13 = pGVar12 + 0x18;
        pGVar12 = pGVar12 + 0x30;
      } while (pGVar13 !=
               (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)(*(long *)(this + 8) + (ulong)*(uint *)this * 0x30));
    }
    lVar8 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar8 + -0x10;
    if (*(long *)(lVar8 + -0x10) != 0) {
      plVar15 = *(long **)param_1;
      puVar14 = (undefined1 *)plVar15[3];
      puVar9 = (undefined1 *)plVar15[4];
      if (puVar9 < puVar14 + 1) {
        pvVar10 = (void *)plVar15[2];
        if (pvVar10 == (void *)0x0) {
          if (*plVar15 == 0) {
            pvVar7 = operator_new(1);
            *plVar15 = (long)pvVar7;
            plVar15[1] = (long)pvVar7;
          }
          puVar9 = (undefined1 *)plVar15[5];
        }
        else {
          puVar9 = puVar9 + (((ulong)(puVar9 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
        }
        lVar8 = (long)puVar14 - (long)pvVar10;
        if (puVar9 < (undefined1 *)(lVar8 + 1)) {
          puVar9 = (undefined1 *)(lVar8 + 1);
        }
        if (puVar9 == (undefined1 *)0x0) {
          free(pvVar10);
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = realloc(pvVar10,(size_t)puVar9);
        }
        puVar14 = (undefined1 *)((long)pvVar10 + lVar8);
        plVar15[2] = (long)pvVar10;
        plVar15[3] = (long)puVar14;
        plVar15[4] = (long)((long)pvVar10 + (long)puVar9);
      }
      plVar15[3] = (long)(puVar14 + 1);
      *puVar14 = 10;
      plVar15 = *(long **)param_1;
      PVar3 = param_1[0x3d];
      pvVar10 = (void *)plVar15[3];
      pvVar7 = (void *)plVar15[4];
      sVar11 = ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 4) *
               (ulong)*(uint *)(param_1 + 0x40);
      if (pvVar7 < (void *)((long)pvVar10 + sVar11)) {
        pvVar16 = (void *)plVar15[2];
        if (pvVar16 == (void *)0x0) {
          if (*plVar15 == 0) {
            pvVar7 = operator_new(1);
            *plVar15 = (long)pvVar7;
            plVar15[1] = (long)pvVar7;
          }
          uVar6 = plVar15[5];
        }
        else {
          uVar6 = (long)pvVar7 +
                  (((ulong)((long)pvVar7 + (1 - (long)pvVar16)) >> 1) - (long)pvVar16);
        }
        uVar1 = ((long)pvVar10 - (long)pvVar16) + sVar11;
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        if (uVar1 == 0) {
          free(pvVar16);
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = realloc(pvVar16,uVar1);
        }
        pvVar10 = (void *)((long)pvVar7 + ((long)pvVar10 - (long)pvVar16));
        plVar15[2] = (long)pvVar7;
        plVar15[3] = (long)pvVar10;
        plVar15[4] = (long)pvVar7 + uVar1;
      }
      plVar15[3] = (long)((long)pvVar10 + sVar11);
      memset(pvVar10,(int)(char)PVar3,sVar11);
    }
    plVar15 = *(long **)param_1;
    puVar14 = (undefined1 *)plVar15[3];
    puVar9 = (undefined1 *)plVar15[4];
    if (puVar9 < puVar14 + 1) {
      pvVar10 = (void *)plVar15[2];
      if (pvVar10 == (void *)0x0) {
        if (*plVar15 == 0) {
          pvVar7 = operator_new(1);
          *plVar15 = (long)pvVar7;
          plVar15[1] = (long)pvVar7;
        }
        puVar9 = (undefined1 *)plVar15[5];
      }
      else {
        puVar9 = puVar9 + (((ulong)(puVar9 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
      }
      lVar8 = (long)puVar14 - (long)pvVar10;
      if (puVar9 < (undefined1 *)(lVar8 + 1U)) {
        puVar9 = (undefined1 *)(lVar8 + 1);
      }
      if (puVar9 == (undefined1 *)0x0) {
        free(pvVar10);
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = realloc(pvVar10,(size_t)puVar9);
      }
      puVar14 = (undefined1 *)((long)pvVar10 + lVar8);
      plVar15[2] = (long)pvVar10;
      plVar15[3] = (long)puVar14;
      plVar15[4] = (long)((long)pvVar10 + (long)puVar9);
    }
    uVar4 = 0x7d;
    goto LAB_00dfe47c;
  case 4:
    uVar6 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::StartArray((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                          *)param_1);
    if ((uVar6 & 1) == 0) {
      return false;
    }
    if (*(int *)this != 0) {
      pGVar12 = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  **)(this + 8);
      do {
        bVar5 = Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
                          (pGVar12,param_1);
        if (!bVar5) {
          return false;
        }
        pGVar12 = pGVar12 + 0x18;
      } while (pGVar12 !=
               (GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                *)(*(long *)(this + 8) + (ulong)*(uint *)this * 0x18));
    }
    lVar8 = *(long *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar8 + -0x10;
    if ((*(long *)(lVar8 + -0x10) != 0) && (((byte)param_1[0x44] & 1) == 0)) {
      plVar15 = *(long **)param_1;
      puVar14 = (undefined1 *)plVar15[3];
      puVar9 = (undefined1 *)plVar15[4];
      if (puVar9 < puVar14 + 1) {
        pvVar10 = (void *)plVar15[2];
        if (pvVar10 == (void *)0x0) {
          if (*plVar15 == 0) {
            pvVar7 = operator_new(1);
            *plVar15 = (long)pvVar7;
            plVar15[1] = (long)pvVar7;
          }
          puVar9 = (undefined1 *)plVar15[5];
        }
        else {
          puVar9 = puVar9 + (((ulong)(puVar9 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
        }
        lVar8 = (long)puVar14 - (long)pvVar10;
        if (puVar9 < (undefined1 *)(lVar8 + 1)) {
          puVar9 = (undefined1 *)(lVar8 + 1);
        }
        if (puVar9 == (undefined1 *)0x0) {
          free(pvVar10);
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = realloc(pvVar10,(size_t)puVar9);
        }
        puVar14 = (undefined1 *)((long)pvVar10 + lVar8);
        plVar15[2] = (long)pvVar10;
        plVar15[3] = (long)puVar14;
        plVar15[4] = (long)((long)pvVar10 + (long)puVar9);
      }
      plVar15[3] = (long)(puVar14 + 1);
      *puVar14 = 10;
      plVar15 = *(long **)param_1;
      PVar3 = param_1[0x3d];
      pvVar10 = (void *)plVar15[3];
      pvVar7 = (void *)plVar15[4];
      sVar11 = ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 4) *
               (ulong)*(uint *)(param_1 + 0x40);
      if (pvVar7 < (void *)((long)pvVar10 + sVar11)) {
        pvVar16 = (void *)plVar15[2];
        if (pvVar16 == (void *)0x0) {
          if (*plVar15 == 0) {
            pvVar7 = operator_new(1);
            *plVar15 = (long)pvVar7;
            plVar15[1] = (long)pvVar7;
          }
          uVar6 = plVar15[5];
        }
        else {
          uVar6 = (long)pvVar7 +
                  (((ulong)((long)pvVar7 + (1 - (long)pvVar16)) >> 1) - (long)pvVar16);
        }
        uVar1 = ((long)pvVar10 - (long)pvVar16) + sVar11;
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        if (uVar1 == 0) {
          free(pvVar16);
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = realloc(pvVar16,uVar1);
        }
        pvVar10 = (void *)((long)pvVar7 + ((long)pvVar10 - (long)pvVar16));
        plVar15[2] = (long)pvVar7;
        plVar15[3] = (long)pvVar10;
        plVar15[4] = (long)pvVar7 + uVar1;
      }
      plVar15[3] = (long)((long)pvVar10 + sVar11);
      memset(pvVar10,(int)(char)PVar3,sVar11);
    }
    plVar15 = *(long **)param_1;
    puVar14 = (undefined1 *)plVar15[3];
    puVar9 = (undefined1 *)plVar15[4];
    if (puVar9 < puVar14 + 1) {
      pvVar10 = (void *)plVar15[2];
      if (pvVar10 == (void *)0x0) {
        if (*plVar15 == 0) {
          pvVar7 = operator_new(1);
          *plVar15 = (long)pvVar7;
          plVar15[1] = (long)pvVar7;
        }
        puVar9 = (undefined1 *)plVar15[5];
      }
      else {
        puVar9 = puVar9 + (((ulong)(puVar9 + (1 - (long)pvVar10)) >> 1) - (long)pvVar10);
      }
      lVar8 = (long)puVar14 - (long)pvVar10;
      if (puVar9 < (undefined1 *)(lVar8 + 1U)) {
        puVar9 = (undefined1 *)(lVar8 + 1);
      }
      if (puVar9 == (undefined1 *)0x0) {
        free(pvVar10);
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = realloc(pvVar10,(size_t)puVar9);
      }
      puVar14 = (undefined1 *)((long)pvVar10 + lVar8);
      plVar15[2] = (long)pvVar10;
      plVar15[3] = (long)puVar14;
      plVar15[4] = (long)((long)pvVar10 + (long)puVar9);
    }
    uVar4 = 0x5d;
LAB_00dfe47c:
    plVar15[3] = (long)(puVar14 + 1);
    *puVar14 = uVar4;
    return true;
  case 5:
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar17 = *(uint *)this;
      this = *(GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
               **)(this + 8);
    }
    else {
      uVar17 = 0x15 - (int)(char)this[0x15];
    }
    PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::PrettyPrefix(param_1,5);
    uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                           *)param_1,(char *)this,uVar17);
    return (bool)uVar4;
  default:
    if ((uVar2 >> 9 & 1) != 0) {
      dVar18 = *(double *)this;
      PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
      ::PrettyPrefix(param_1,6);
      uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::WriteDouble((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                             *)param_1,dVar18);
      return (bool)uVar4;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      uVar4 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Int((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                     *)param_1,*(int *)this);
      return (bool)uVar4;
    }
    if ((uVar2 >> 6 & 1) != 0) {
      uVar4 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Uint((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                      *)param_1,*(uint *)this);
      return (bool)uVar4;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      uVar4 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              ::Int64((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                       *)param_1,*(ulong *)this);
      return (bool)uVar4;
    }
    uVar4 = PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            ::Uint64((PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                      *)param_1,*(ulong *)this);
    return (bool)uVar4;
  }
  uVar4 = Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
          ::WriteBool((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                       *)param_1,bVar5);
  return (bool)uVar4;
}

