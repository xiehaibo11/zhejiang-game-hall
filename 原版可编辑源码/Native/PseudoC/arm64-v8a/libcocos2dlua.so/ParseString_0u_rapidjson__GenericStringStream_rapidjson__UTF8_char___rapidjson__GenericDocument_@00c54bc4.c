
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseString<0u, rapidjson::GenericStringStream<rapidjson::UTF8<char> >,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, bool) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          GenericStringStream *param_1,GenericDocument *param_2,bool param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *pGVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  char *pcVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  void *pvVar14;
  char *pcVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  long lVar18;
  byte *local_90;
  long lStack_88;
  GenericStringStream *local_80;
  GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *local_78;
  uint local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lStack_88 = *(long *)(param_1 + 8);
  local_70 = 0;
  local_90 = (byte *)(*(long *)param_1 + 1);
  local_80 = param_1;
  local_78 = this;
  while (pGVar5 = local_78, bVar2 = *local_90, bVar2 == 0x5c) {
    cVar3 = ParseStringToStream<0u,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>>&,rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>&)
            ::escape[local_90[1]];
    if (cVar3 == '\0') {
      uVar11 = (long)local_90 - lStack_88;
      if (local_90[1] != 0x75) {
        *(undefined4 *)(this + 0x30) = 10;
        *(ulong *)(this + 0x38) = uVar11;
        local_90 = local_90 + 1;
        goto LAB_00c54ef8;
      }
      local_90 = local_90 + 2;
      uVar6 = ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                        (this,(GenericStringStream *)&local_90,uVar11);
      if (*(int *)(this + 0x30) != 0) goto LAB_00c54ef8;
      if (uVar6 >> 10 == 0x36) {
        pbVar1 = local_90;
        if ((*local_90 == 0x5c) && (pbVar1 = local_90 + 1, local_90[1] == 0x75)) {
          local_90 = local_90 + 2;
          uVar7 = ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                            (this,(GenericStringStream *)&local_90,uVar11);
          if (*(int *)(this + 0x30) != 0) goto LAB_00c54ef8;
          pbVar1 = local_90;
          if (uVar7 >> 10 == 0x37) {
            uVar6 = (uVar7 - 0xdc00 | uVar6 * 0x400 + 0xfca00000) + 0x10000;
            goto LAB_00c54d68;
          }
        }
        local_90 = pbVar1;
        *(undefined4 *)(this + 0x30) = 9;
        goto LAB_00c54ef4;
      }
LAB_00c54d68:
      UTF8<char>::
      Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>>
                ((StackStream *)&local_78,uVar6);
    }
    else {
      local_90 = local_90 + 2;
      pcVar15 = *(char **)(local_78 + 0x18);
      pcVar9 = *(char **)(local_78 + 0x20);
      if (pcVar9 < pcVar15 + 1) {
        pvVar14 = *(void **)(local_78 + 0x10);
        if (pvVar14 == (void *)0x0) {
          if (*(long *)local_78 == 0) {
            pvVar8 = operator_new(1);
            *(void **)pGVar5 = pvVar8;
            *(void **)(pGVar5 + 8) = pvVar8;
          }
          pcVar9 = *(char **)(pGVar5 + 0x28);
        }
        else {
          pcVar9 = pcVar9 + (((ulong)(pcVar9 + (1 - (long)pvVar14)) >> 1) - (long)pvVar14);
        }
        lVar18 = (long)pcVar15 - (long)pvVar14;
        if (pcVar9 < (char *)(lVar18 + 1U)) {
          pcVar9 = (char *)(lVar18 + 1);
        }
        if (pcVar9 == (char *)0x0) {
          free(pvVar14);
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = realloc(pvVar14,(size_t)pcVar9);
        }
        pcVar15 = (char *)((long)pvVar14 + lVar18);
        *(void **)(pGVar5 + 0x10) = pvVar14;
        *(char **)(pGVar5 + 0x18) = pcVar15;
        *(char **)(pGVar5 + 0x20) = (char *)((long)pvVar14 + (long)pcVar9);
      }
      *(char **)(pGVar5 + 0x18) = pcVar15 + 1;
      *pcVar15 = cVar3;
LAB_00c54c68:
      local_70 = local_70 + 1;
    }
  }
  if (bVar2 == 0x22) {
    local_90 = local_90 + 1;
    puVar16 = *(undefined1 **)(local_78 + 0x18);
    puVar12 = *(undefined1 **)(local_78 + 0x20);
    if (puVar12 < puVar16 + 1) {
      pvVar14 = *(void **)(local_78 + 0x10);
      if (pvVar14 == (void *)0x0) {
        if (*(long *)local_78 == 0) {
          pvVar8 = operator_new(1);
          *(void **)pGVar5 = pvVar8;
          *(void **)(pGVar5 + 8) = pvVar8;
        }
        puVar12 = *(undefined1 **)(pGVar5 + 0x28);
      }
      else {
        puVar12 = puVar12 + (((ulong)(puVar12 + (1 - (long)pvVar14)) >> 1) - (long)pvVar14);
      }
      lVar18 = (long)puVar16 - (long)pvVar14;
      if (puVar12 < (undefined1 *)(lVar18 + 1)) {
        puVar12 = (undefined1 *)(lVar18 + 1);
      }
      if (puVar12 == (undefined1 *)0x0) {
        free(pvVar14);
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = realloc(pvVar14,(size_t)puVar12);
      }
      puVar16 = (undefined1 *)((long)pvVar14 + lVar18);
      *(void **)(pGVar5 + 0x10) = pvVar14;
      *(undefined1 **)(pGVar5 + 0x18) = puVar16;
      *(undefined1 **)(pGVar5 + 0x20) = (undefined1 *)((long)pvVar14 + (long)puVar12);
    }
    uVar6 = local_70;
    *(undefined1 **)(pGVar5 + 0x18) = puVar16 + 1;
    *puVar16 = 0;
    local_70 = local_70 + 1;
    if (*(int *)(this + 0x30) != 0) goto LAB_00c54ef8;
    pcVar9 = (char *)(*(long *)(local_78 + 0x18) - (ulong)local_70);
    *(char **)(local_78 + 0x18) = pcVar9;
    if (param_3) {
      uVar11 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               ::String((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                         *)param_2,pcVar9,uVar6,true);
    }
    else {
      uVar11 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               ::String((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                         *)param_2,pcVar9,uVar6,true);
    }
    if ((uVar11 & 1) != 0) goto LAB_00c54ef8;
    *(undefined4 *)(this + 0x30) = 0x10;
    uVar11 = (long)local_90 - lStack_88;
  }
  else {
    if (0x1f < bVar2) {
      pbVar1 = local_90 + 1;
      bVar2 = *local_90;
      pbVar17 = *(byte **)(local_78 + 0x18);
      pbVar10 = *(byte **)(local_78 + 0x20);
      local_90 = pbVar1;
      if (pbVar10 < pbVar17 + 1) {
        pvVar14 = *(void **)(local_78 + 0x10);
        if (pvVar14 == (void *)0x0) {
          if (*(long *)local_78 == 0) {
            pvVar8 = operator_new(1);
            *(void **)pGVar5 = pvVar8;
            *(void **)(pGVar5 + 8) = pvVar8;
          }
          pbVar10 = *(byte **)(pGVar5 + 0x28);
        }
        else {
          pbVar10 = pbVar10 + (((ulong)(pbVar10 + (1 - (long)pvVar14)) >> 1) - (long)pvVar14);
        }
        lVar18 = (long)pbVar17 - (long)pvVar14;
        if (pbVar10 < (byte *)(lVar18 + 1U)) {
          pbVar10 = (byte *)(lVar18 + 1);
        }
        if (pbVar10 == (byte *)0x0) {
          free(pvVar14);
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = realloc(pvVar14,(size_t)pbVar10);
        }
        pbVar17 = (byte *)((long)pvVar14 + lVar18);
        *(void **)(pGVar5 + 0x10) = pvVar14;
        *(byte **)(pGVar5 + 0x18) = pbVar17;
        *(byte **)(pGVar5 + 0x20) = (byte *)((long)pvVar14 + (long)pbVar10);
      }
      *(byte **)(pGVar5 + 0x18) = pbVar17 + 1;
      *pbVar17 = bVar2;
      goto LAB_00c54c68;
    }
    uVar11 = (long)local_90 - lStack_88;
    if (bVar2 == 0) {
      uVar13 = 0xb;
    }
    else {
      uVar13 = 10;
    }
    *(undefined4 *)(this + 0x30) = uVar13;
  }
LAB_00c54ef4:
  *(ulong *)(this + 0x38) = uVar11;
LAB_00c54ef8:
  *(long *)(local_80 + 8) = lStack_88;
  *(byte **)local_80 = local_90;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

