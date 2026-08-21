
/* cocos2d::network::SocketIOPacket::stringify() const */

void cocos2d::network::SocketIOPacket::stringify(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  int iVar9;
  long in_x0;
  size_t sVar10;
  void *pvVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined1 *puVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  undefined1 *puVar14;
  void *pvVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  void *local_c0;
  void *pvStack_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  long *local_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  bVar5 = *(byte *)(in_x0 + 0x98);
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(in_x0 + 0xa0);
  }
  if (uVar2 == 7) {
    pvVar15 = *(void **)(in_x0 + 0xa8);
    if ((bVar5 & 1) == 0) {
      pvVar15 = (void *)(in_x0 + 0x99);
    }
    iVar9 = memcmp(pvVar15,"message",7);
    if (iVar9 == 0) {
      pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (in_x0 + 0x50);
      if (pbVar13 != in_x8) {
        uVar2 = *(ulong *)(pbVar13 + 8);
        pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar13 + 0x10);
        if (((byte)*pbVar13 & 1) == 0) {
          pbVar4 = pbVar13 + 1;
          uVar2 = (ulong)((byte)*pbVar13 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(in_x8,(char *)pbVar4,uVar2);
      }
      goto LAB_009e09e4;
    }
  }
  local_a0 = (char *)0x0;
  local_98 = (char *)0x100;
  local_60 = 0;
  uStack_58 = 0x200;
  pvStack_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_a8 = (char *)0x0;
  local_b0 = (char *)0x0;
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = (void *)0x0;
  local_50 = 0x144;
  local_4c = 0;
  local_88 = (long *)&local_c0;
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::StartObject((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                 *)&local_88);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::Prefix(&local_88,5);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                 *)&local_88,"name",4);
  if ((*(byte *)(in_x0 + 0x38) & 1) == 0) {
    pcVar17 = (char *)(in_x0 + 0x39);
  }
  else {
    pcVar17 = *(char **)(in_x0 + 0x48);
  }
  pcVar18 = pcVar17 + -1;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::Prefix(&local_88,5);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                 *)&local_88,pcVar17,(int)pcVar18 - (int)pcVar17);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::Prefix(&local_88,5);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                 *)&local_88,"args",4);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::StartArray((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                *)&local_88);
  pbVar3 = *(byte **)(in_x0 + 0x58);
  plVar7 = local_88;
  for (pbVar1 = *(byte **)(in_x0 + 0x50); local_88 = plVar7, pbVar1 != pbVar3;
      pbVar1 = pbVar1 + 0x18) {
    if ((*pbVar1 & 1) == 0) {
      pbVar16 = pbVar1 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar1 + 0x10);
    }
    pbVar20 = pbVar16 + -1;
    do {
      pbVar20 = pbVar20 + 1;
    } while (*pbVar20 != 0);
    rapidjson::
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::Prefix(&local_88,5);
    rapidjson::
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                   *)&local_88,(char *)pbVar16,(int)pbVar20 - (int)pbVar16);
    plVar7 = local_88;
  }
  local_68 = local_68 + -0x10;
  puVar21 = (undefined1 *)plVar7[3];
  puVar14 = (undefined1 *)plVar7[4];
  puVar12 = puVar21 + 1;
  if (puVar14 < puVar12) {
    pvVar15 = (void *)plVar7[2];
    if (pvVar15 == (void *)0x0) {
      if (*plVar7 == 0) {
        pvVar11 = operator_new(1);
        *plVar7 = (long)pvVar11;
        plVar7[1] = (long)pvVar11;
      }
      puVar14 = (undefined1 *)plVar7[5];
    }
    else {
      puVar14 = puVar14 + (((ulong)(puVar14 + (1 - (long)pvVar15)) >> 1) - (long)pvVar15);
    }
    lVar19 = (long)puVar21 - (long)pvVar15;
    if (puVar14 < (undefined1 *)(lVar19 + 1)) {
      puVar14 = (undefined1 *)(lVar19 + 1);
    }
    if (puVar14 == (undefined1 *)0x0) {
      free(pvVar15);
      pvVar15 = (void *)0x0;
    }
    else {
      pvVar15 = realloc(pvVar15,(size_t)puVar14);
    }
    puVar21 = (undefined1 *)((long)pvVar15 + lVar19);
    plVar7[4] = (long)((long)pvVar15 + (long)puVar14);
    puVar12 = puVar21 + 1;
    plVar7[2] = (long)pvVar15;
    plVar7[3] = (long)puVar21;
  }
  plVar7[3] = (long)puVar12;
  plVar7 = local_88;
  *puVar21 = 0x5d;
  local_68 = local_68 + -0x10;
  puVar21 = (undefined1 *)local_88[3];
  puVar14 = (undefined1 *)local_88[4];
  puVar12 = puVar21 + 1;
  if (puVar14 < puVar12) {
    pvVar15 = (void *)local_88[2];
    if (pvVar15 == (void *)0x0) {
      if (*local_88 == 0) {
        pvVar11 = operator_new(1);
        *plVar7 = (long)pvVar11;
        plVar7[1] = (long)pvVar11;
      }
      puVar14 = (undefined1 *)plVar7[5];
    }
    else {
      puVar14 = puVar14 + (((ulong)(puVar14 + (1 - (long)pvVar15)) >> 1) - (long)pvVar15);
    }
    lVar19 = (long)puVar21 - (long)pvVar15;
    if (puVar14 < (undefined1 *)(lVar19 + 1)) {
      puVar14 = (undefined1 *)(lVar19 + 1);
    }
    if (puVar14 == (undefined1 *)0x0) {
      free(pvVar15);
      pvVar15 = (void *)0x0;
    }
    else {
      pvVar15 = realloc(pvVar15,(size_t)puVar14);
    }
    puVar21 = (undefined1 *)((long)pvVar15 + lVar19);
    plVar7[4] = (long)((long)pvVar15 + (long)puVar14);
    puVar12 = puVar21 + 1;
    plVar7[2] = (long)pvVar15;
    plVar7[3] = (long)puVar21;
  }
  pcVar18 = local_b0;
  plVar7[3] = (long)puVar12;
  pcVar8 = local_a8;
  *puVar21 = 0x7d;
  pcVar17 = local_a8 + 1;
  if (local_a0 < pcVar17) {
    if (local_b0 == (char *)0x0) {
      pcVar17 = local_98;
      if (local_c0 == (void *)0x0) {
        local_c0 = operator_new(1);
        pcVar17 = local_98;
        pvStack_b8 = local_c0;
      }
    }
    else {
      pcVar17 = local_a0 + (((ulong)(local_a0 + (1 - (long)local_b0)) >> 1) - (long)local_b0);
    }
    lVar19 = (long)pcVar8 - (long)pcVar18;
    if (pcVar17 < (char *)(lVar19 + 1)) {
      pcVar17 = (char *)(lVar19 + 1);
    }
    if (pcVar17 == (char *)0x0) {
      free(pcVar18);
      local_b0 = (char *)0x0;
    }
    else {
      local_b0 = realloc(pcVar18,(size_t)pcVar17);
    }
    local_a8 = local_b0 + lVar19;
    local_a0 = local_b0 + (long)pcVar17;
    pcVar17 = local_a8 + 1;
  }
  pcVar18 = local_b0;
  *local_a8 = '\0';
  local_a8 = pcVar17 + -1;
  sVar10 = strlen(local_b0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(in_x8,pcVar18,sVar10);
  free(local_70);
  if (pvStack_78 != (void *)0x0) {
    operator_delete(pvStack_78);
  }
  free(local_b0);
  if (pvStack_b8 != (void *)0x0) {
    operator_delete(pvStack_b8);
  }
LAB_009e09e4:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

