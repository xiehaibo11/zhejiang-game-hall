
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
  byte *pbVar11;
  char *pcVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  void *pvVar17;
  char *pcVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  long lVar21;
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
      uVar14 = (long)local_90 - lStack_88;
      if (local_90[1] != 0x75) {
        *(undefined4 *)(this + 0x30) = 10;
        *(ulong *)(this + 0x38) = uVar14;
        local_90 = local_90 + 1;
        goto LAB_00a5be90;
      }
      local_90 = local_90 + 2;
      uVar6 = ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                        (this,(GenericStringStream *)&local_90,uVar14);
      if (*(int *)(this + 0x30) != 0) goto LAB_00a5be90;
      if (uVar6 >> 10 == 0x36) {
        pbVar1 = local_90;
                    /* catch() { ... } // from try @ 00a5bd48 with catch @ 00a5bd98 */
                    /* catch() { ... } // from try @ 00a5bd00 with catch @ 00a5bd9c */
        if ((*local_90 == 0x5c) && (pbVar1 = local_90 + 1, local_90[1] == 0x75)) {
                    /* catch() { ... } // from try @ 00a5bd1c with catch @ 00a5bda4 */
          local_90 = local_90 + 2;
          uVar7 = ParseHex4<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
                            (this,(GenericStringStream *)&local_90,uVar14);
          if (*(int *)(this + 0x30) != 0) goto LAB_00a5be90;
          pbVar1 = local_90;
          if (uVar7 >> 10 == 0x37) {
            uVar6 = (uVar7 - 0xdc00 | uVar6 * 0x400 + 0xfca00000) + 0x10000;
            goto LAB_00a5bd00;
          }
        }
        local_90 = pbVar1;
                    /* try { // try from 00a5bf54 to 00b5bf5b has its CatchHandler @ 00a5bfc0 */
        *(undefined4 *)(this + 0x30) = 9;
                    /* try { // try from 00a5bf5c to 00b5bfdf has its CatchHandler @ 00a5be70 */
        goto LAB_00a5be8c;
      }
LAB_00a5bd00:
                    /* try { // try from 00a5bd00 to 00b5bd07 has its CatchHandler @ 00a5bd9c */
      UTF8<char>::
      Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>>
                ((StackStream *)&local_78,uVar6);
    }
    else {
                    /* try { // try from 00a5bc2c to 00b5bc33 has its CatchHandler @ 00a5bc98 */
      local_90 = local_90 + 2;
                    /* try { // try from 00a5bc34 to 00b5bcb7 has its CatchHandler @ 00a5bb48 */
      pcVar18 = *(char **)(local_78 + 0x18);
      pcVar12 = *(char **)(local_78 + 0x20);
      pcVar9 = pcVar18 + 1;
      if (pcVar12 < pcVar9) {
        pvVar17 = *(void **)(local_78 + 0x10);
        if (pvVar17 == (void *)0x0) {
          if (*(long *)local_78 == 0) {
            pvVar8 = operator_new(1);
            *(void **)pGVar5 = pvVar8;
            *(void **)(pGVar5 + 8) = pvVar8;
          }
          pcVar12 = *(char **)(pGVar5 + 0x28);
        }
        else {
                    /* try { // try from 00a5bd1c to 00b5bd37 has its CatchHandler @ 00a5bda4 */
          pcVar12 = pcVar12 + (((ulong)(pcVar12 + (1 - (long)pvVar17)) >> 1) - (long)pvVar17);
        }
        lVar21 = (long)pcVar18 - (long)pvVar17;
                    /* try { // try from 00a5bd48 to 00b5bd57 has its CatchHandler @ 00a5bd98 */
        if (pcVar12 < (char *)(lVar21 + 1U)) {
          pcVar12 = (char *)(lVar21 + 1);
        }
        if (pcVar12 == (char *)0x0) {
          free(pvVar17);
          pvVar17 = (void *)0x0;
        }
        else {
                    /* try { // try from 00a5bd58 to 00b5bdbf has its CatchHandler @ 00a5bcb8 */
          pvVar17 = realloc(pvVar17,(size_t)pcVar12);
        }
        pcVar18 = (char *)((long)pvVar17 + lVar21);
        *(char **)(pGVar5 + 0x20) = (char *)((long)pvVar17 + (long)pcVar12);
        pcVar9 = pcVar18 + 1;
        *(void **)(pGVar5 + 0x10) = pvVar17;
        *(char **)(pGVar5 + 0x18) = pcVar18;
      }
      *(char **)(pGVar5 + 0x18) = pcVar9;
      *pcVar18 = cVar3;
LAB_00a5bc04:
      local_70 = local_70 + 1;
    }
  }
  if (bVar2 == 0x22) {
    local_90 = local_90 + 1;
    puVar19 = *(undefined1 **)(local_78 + 0x18);
    puVar15 = *(undefined1 **)(local_78 + 0x20);
    puVar13 = puVar19 + 1;
    if (puVar15 < puVar13) {
      pvVar17 = *(void **)(local_78 + 0x10);
      if (pvVar17 == (void *)0x0) {
        if (*(long *)local_78 == 0) {
          pvVar8 = operator_new(1);
          *(void **)pGVar5 = pvVar8;
          *(void **)(pGVar5 + 8) = pvVar8;
        }
        puVar15 = *(undefined1 **)(pGVar5 + 0x28);
      }
      else {
        puVar15 = puVar15 + (((ulong)(puVar15 + (1 - (long)pvVar17)) >> 1) - (long)pvVar17);
      }
      lVar21 = (long)puVar19 - (long)pvVar17;
      if (puVar15 < (undefined1 *)(lVar21 + 1)) {
        puVar15 = (undefined1 *)(lVar21 + 1);
      }
      if (puVar15 == (undefined1 *)0x0) {
                    /* try { // try from 00a5bf20 to 00b5bf4f has its CatchHandler @ 00a5bfc4 */
        free(pvVar17);
        pvVar17 = (void *)0x0;
      }
      else {
        pvVar17 = realloc(pvVar17,(size_t)puVar15);
      }
      puVar19 = (undefined1 *)((long)pvVar17 + lVar21);
      *(undefined1 **)(pGVar5 + 0x20) = (undefined1 *)((long)pvVar17 + (long)puVar15);
      puVar13 = puVar19 + 1;
      *(void **)(pGVar5 + 0x10) = pvVar17;
      *(undefined1 **)(pGVar5 + 0x18) = puVar19;
    }
    uVar6 = local_70;
    *(undefined1 **)(pGVar5 + 0x18) = puVar13;
    *puVar19 = 0;
    local_70 = local_70 + 1;
    if (*(int *)(this + 0x30) != 0) goto LAB_00a5be90;
    pcVar9 = (char *)(*(long *)(local_78 + 0x18) - (ulong)local_70);
    *(char **)(local_78 + 0x18) = pcVar9;
    if (param_3) {
      uVar14 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               ::String((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                         *)param_2,pcVar9,uVar6,true);
    }
    else {
      uVar14 = GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               ::String((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                         *)param_2,pcVar9,uVar6,true);
    }
    if ((uVar14 & 1) != 0) goto LAB_00a5be90;
    *(undefined4 *)(this + 0x30) = 0x10;
    uVar14 = (long)local_90 - lStack_88;
  }
  else {
    if (0x1f < bVar2) {
      pbVar1 = local_90 + 1;
      bVar2 = *local_90;
      pbVar20 = *(byte **)(local_78 + 0x18);
      pbVar11 = *(byte **)(local_78 + 0x20);
      pbVar10 = pbVar20 + 1;
                    /* try { // try from 00a5bbf8 to 00b5bc27 has its CatchHandler @ 00a5bc9c */
      local_90 = pbVar1;
      if (pbVar11 < pbVar10) {
        pvVar17 = *(void **)(local_78 + 0x10);
        if (pvVar17 == (void *)0x0) {
          if (*(long *)local_78 == 0) {
            pvVar8 = operator_new(1);
            *(void **)pGVar5 = pvVar8;
            *(void **)(pGVar5 + 8) = pvVar8;
          }
          pbVar11 = *(byte **)(pGVar5 + 0x28);
        }
        else {
          pbVar11 = pbVar11 + (((ulong)(pbVar11 + (1 - (long)pvVar17)) >> 1) - (long)pvVar17);
        }
        lVar21 = (long)pbVar20 - (long)pvVar17;
        if (pbVar11 < (byte *)(lVar21 + 1U)) {
          pbVar11 = (byte *)(lVar21 + 1);
        }
                    /* catch() { ... } // from try @ 00a5bc2c with catch @ 00a5bc98 */
        if (pbVar11 == (byte *)0x0) {
          free(pvVar17);
          pvVar17 = (void *)0x0;
        }
        else {
                    /* catch() { ... } // from try @ 00a5bbf8 with catch @ 00a5bc9c */
          pvVar17 = realloc(pvVar17,(size_t)pbVar11);
        }
        pbVar20 = (byte *)((long)pvVar17 + lVar21);
                    /* try { // try from 00a5bcb8 to 00b5bcff has its CatchHandler @ 00a5bcb8
                       catch() { ... } // from try @ 00a5bcb8 with catch @ 00a5bcb8
                       catch() { ... } // from try @ 00a5bd58 with catch @ 00a5bcb8 */
        *(byte **)(pGVar5 + 0x20) = (byte *)((long)pvVar17 + (long)pbVar11);
        pbVar10 = pbVar20 + 1;
        *(void **)(pGVar5 + 0x10) = pvVar17;
        *(byte **)(pGVar5 + 0x18) = pbVar20;
      }
      *(byte **)(pGVar5 + 0x18) = pbVar10;
      *pbVar20 = bVar2;
      goto LAB_00a5bc04;
    }
    uVar14 = (long)local_90 - lStack_88;
    if (bVar2 == 0) {
      uVar16 = 0xb;
    }
    else {
      uVar16 = 10;
                    /* try { // try from 00a5be70 to 00b5bf1f has its CatchHandler @ 00a5be70
                       catch() { ... } // from try @ 00a5be70 with catch @ 00a5be70
                       catch() { ... } // from try @ 00a5bf5c with catch @ 00a5be70 */
    }
    *(undefined4 *)(this + 0x30) = uVar16;
  }
LAB_00a5be8c:
  *(ulong *)(this + 0x38) = uVar14;
LAB_00a5be90:
  *(long *)(local_80 + 8) = lStack_88;
  *(byte **)local_80 = local_90;
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

