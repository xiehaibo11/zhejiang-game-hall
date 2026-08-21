
/* cocos2d::network::SocketIOPacketV10x::stringify() const */

void cocos2d::network::SocketIOPacketV10x::stringify(void)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long in_x0;
  size_t sVar6;
  void *pvVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 *puVar16;
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
  
  local_88 = (long *)&local_c0;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_a0 = (char *)0x0;
  local_98 = (char *)0x100;
  local_60 = 0;
  uStack_58 = 0x200;
                    /* try { // try from 009e18b8 to 00ae1967 has its CatchHandler @ 009e18b8
                       catch() { ... } // from try @ 009e18b8 with catch @ 009e18b8
                       catch() { ... } // from try @ 009e19a4 with catch @ 009e18b8 */
  pvStack_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_a8 = (char *)0x0;
  local_b0 = (char *)0x0;
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = (void *)0x0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  local_50 = 0x144;
  local_4c = 0;
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::StartArray((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                *)&local_88);
  if ((*(byte *)(in_x0 + 0x38) & 1) == 0) {
    pcVar12 = (char *)(in_x0 + 0x39);
  }
  else {
    pcVar12 = *(char **)(in_x0 + 0x48);
  }
  pcVar13 = pcVar12 + -1;
  do {
    pcVar13 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::Prefix(&local_88,5);
  rapidjson::
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
  ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                 *)&local_88,pcVar12,(int)pcVar13 - (int)pcVar12);
  pbVar2 = *(byte **)(in_x0 + 0x58);
  plVar4 = local_88;
  for (pbVar1 = *(byte **)(in_x0 + 0x50); local_88 = plVar4, pbVar1 != pbVar2;
      pbVar1 = pbVar1 + 0x18) {
    if ((*pbVar1 & 1) == 0) {
      pbVar10 = pbVar1 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar1 + 0x10);
    }
    pbVar15 = pbVar10 + -1;
    do {
      pbVar15 = pbVar15 + 1;
    } while (*pbVar15 != 0);
    rapidjson::
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::Prefix(&local_88,5);
                    /* try { // try from 009e1968 to 00ae1997 has its CatchHandler @ 009e1a0c */
    rapidjson::
    Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
    ::WriteString((Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
                   *)&local_88,(char *)pbVar10,(int)pbVar15 - (int)pbVar10);
    plVar4 = local_88;
  }
  local_68 = local_68 + -0x10;
  puVar16 = (undefined1 *)plVar4[3];
  puVar9 = (undefined1 *)plVar4[4];
  puVar8 = puVar16 + 1;
  if (puVar9 < puVar8) {
    pvVar11 = (void *)plVar4[2];
    if (pvVar11 == (void *)0x0) {
      if (*plVar4 == 0) {
        pvVar7 = operator_new(1);
        *plVar4 = (long)pvVar7;
        plVar4[1] = (long)pvVar7;
      }
      puVar9 = (undefined1 *)plVar4[5];
    }
    else {
      puVar9 = puVar9 + (((ulong)(puVar9 + (1 - (long)pvVar11)) >> 1) - (long)pvVar11);
    }
    lVar14 = (long)puVar16 - (long)pvVar11;
    if (puVar9 < (undefined1 *)(lVar14 + 1)) {
      puVar9 = (undefined1 *)(lVar14 + 1);
    }
    if (puVar9 == (undefined1 *)0x0) {
                    /* try { // try from 009e1ad8 to 00ae1ae7 has its CatchHandler @ 009e1b64 */
      free(pvVar11);
      pvVar11 = (void *)0x0;
    }
    else {
      pvVar11 = realloc(pvVar11,(size_t)puVar9);
    }
    puVar16 = (undefined1 *)((long)pvVar11 + lVar14);
                    /* try { // try from 009e1ae8 to 00ae1bcb has its CatchHandler @ 009e1a4c */
    plVar4[4] = (long)((long)pvVar11 + (long)puVar9);
    puVar8 = puVar16 + 1;
    plVar4[2] = (long)pvVar11;
    plVar4[3] = (long)puVar16;
  }
  pcVar13 = local_b0;
  plVar4[3] = (long)puVar8;
  pcVar5 = local_a8;
                    /* try { // try from 009e199c to 00ae19a3 has its CatchHandler @ 009e1a08 */
  *puVar16 = 0x5d;
                    /* try { // try from 009e19a4 to 00ae1a27 has its CatchHandler @ 009e18b8 */
  pcVar12 = local_a8 + 1;
  if (local_a0 < pcVar12) {
                    /* try { // try from 009e1a4c to 00ae1a9f has its CatchHandler @ 009e1a4c
                       catch() { ... } // from try @ 009e1a4c with catch @ 009e1a4c
                       catch() { ... } // from try @ 009e1ae8 with catch @ 009e1a4c */
    if (local_b0 == (char *)0x0) {
                    /* try { // try from 009e1aa0 to 00ae1ab7 has its CatchHandler @ 009e1b7c */
      pcVar12 = local_98;
      if (local_c0 == (void *)0x0) {
        local_c0 = operator_new(1);
        pcVar12 = local_98;
        pvStack_b8 = local_c0;
      }
    }
    else {
      pcVar12 = local_a0 + (((ulong)(local_a0 + (1 - (long)local_b0)) >> 1) - (long)local_b0);
    }
    lVar14 = (long)pcVar5 - (long)pcVar13;
                    /* try { // try from 009e1ac0 to 00ae1acb has its CatchHandler @ 009e1b60 */
    if (pcVar12 < (char *)(lVar14 + 1)) {
      pcVar12 = (char *)(lVar14 + 1);
    }
    if (pcVar12 == (char *)0x0) {
      free(pcVar13);
      local_b0 = (char *)0x0;
    }
    else {
                    /* try { // try from 009e1acc to 00ae1ad7 has its CatchHandler @ 009e1b5c */
      local_b0 = realloc(pcVar13,(size_t)pcVar12);
    }
    local_a8 = local_b0 + lVar14;
    local_a0 = local_b0 + (long)pcVar12;
    pcVar12 = local_a8 + 1;
  }
  pcVar13 = local_b0;
  *local_a8 = '\0';
  local_a8 = pcVar12 + -1;
  sVar6 = strlen(local_b0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(in_x8,pcVar13,sVar6);
  free(local_70);
  if (pvStack_78 != (void *)0x0) {
    operator_delete(pvStack_78);
  }
  free(local_b0);
  if (pvStack_b8 != (void *)0x0) {
    operator_delete(pvStack_b8);
  }
                    /* catch() { ... } // from try @ 009e199c with catch @ 009e1a08 */
                    /* catch() { ... } // from try @ 009e1968 with catch @ 009e1a0c */
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

