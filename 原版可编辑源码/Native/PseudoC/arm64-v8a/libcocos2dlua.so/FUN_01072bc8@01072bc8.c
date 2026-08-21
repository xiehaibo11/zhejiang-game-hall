
int FUN_01072bc8(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *__dest;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  int local_9c;
  long local_98;
  ushort local_90;
  ushort local_8e;
  long local_88;
  ushort local_80;
  byte local_7e;
  long local_78;
  undefined1 auStack_70 [12];
  int local_64;
  
                    /* catch() { ... } // from try @ 01072af4 with catch @ 01072bcc */
                    /* catch() { ... } // from try @ 01072ab8 with catch @ 01072bd0 */
                    /* catch() { ... } // from try @ 01072a08 with catch @ 01072bd4 */
                    /* catch() { ... } // from try @ 010729e0 with catch @ 01072bd8 */
                    /* catch() { ... } // from try @ 0107299c with catch @ 01072bdc */
                    /* catch() { ... } // from try @ 01072960 with catch @ 01072be0 */
                    /* catch() { ... } // from try @ 010728ac with catch @ 01072be4 */
                    /* catch() { ... } // from try @ 01072524 with catch @ 01072be8 */
                    /* catch() { ... } // from try @ 01072b08 with catch @ 01072bec */
  local_9c = 0;
                    /* catch() { ... } // from try @ 01072950 with catch @ 01072bf0 */
  puVar12 = *(uint **)(param_1 + 0x450);
                    /* catch() { ... } // from try @ 010728f8 with catch @ 01072bf4 */
  uVar10 = *(undefined8 *)(param_1 + 0xb8);
                    /* catch() { ... } // from try @ 01072a1c with catch @ 01072c00 */
  *(undefined1 *)(param_1 + 0x448) = 0;
                    /* catch() { ... } // from try @ 010729b4 with catch @ 01072c04 */
  if (puVar12 == (uint *)0x0) {
    iVar2 = FUN_01072f9c(param_1,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar12 = *(uint **)(param_1 + 0x450);
  }
  local_9c = 0;
                    /* catch() { ... } // from try @ 01072978 with catch @ 01072c08 */
                    /* catch() { ... } // from try @ 01072910 with catch @ 01072c0c */
                    /* catch() { ... } // from try @ 010728e4 with catch @ 01072c10 */
  if (**(uint **)(puVar12 + 4) != param_2) {
    return 6;
  }
  if (param_2 != 0) {
    lVar8 = 0;
    do {
                    /* catch() { ... } // from try @ 01072924 with catch @ 01072c20 */
      if (0x20000 < *(long *)((long)param_3 + lVar8 * 8) + 0x10000U) {
        return 6;
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < param_2);
  }
  if (*(long *)(puVar12 + 0x12) != 0) goto LAB_01072c44;
  lVar8 = *(long *)(param_1 + 0xc0);
  uVar11 = *(undefined8 *)(lVar8 + 0x38);
  local_64 = (**(code **)(param_1 + 0x330))(param_1,0x67766172,lVar8,auStack_70);
  iVar2 = local_64;
  if (local_64 == 0) {
    lVar5 = FT_Stream_Pos(lVar8);
    local_64 = FT_Stream_ReadFields(lVar8,&DAT_0145d1dc,&local_98);
    iVar2 = local_64;
    if (local_64 == 0) {
      puVar12[0xc] = (uint)local_8e;
      puVar12[0x10] = (uint)local_80;
                    /* try { // try from 01072d14 to 01172d53 has its CatchHandler @ 01072d9c */
      if ((local_98 == 0x10000) && (local_90 == **(ushort **)(puVar12 + 4))) {
        uVar6 = ft_mem_realloc(uVar11,8,0,(ulong)local_80 + 1,0,&local_64);
        *(undefined8 *)(puVar12 + 0x12) = uVar6;
        iVar2 = local_64;
        if (local_64 == 0) {
                    /* try { // try from 01072d54 to 01172db7 has its CatchHandler @ 01072c44 */
          if ((local_7e & 1) == 0) {
            local_64 = FT_Stream_EnterFrame(lVar8,(ulong)(puVar12[0x10] + 1) << 1);
            iVar2 = local_64;
            if (local_64 == 0) {
              uVar13 = 0;
              do {
                uVar3 = FT_Stream_GetUShort(lVar8);
                *(ulong *)(*(long *)(puVar12 + 0x12) + (ulong)uVar13 * 8) =
                     local_78 + lVar5 + (ulong)(uVar3 & 0xffff) * 2;
                    /* catch() { ... } // from try @ 01072d14 with catch @ 01072d9c */
                uVar13 = uVar13 + 1;
              } while (uVar13 <= puVar12[0x10]);
LAB_01072eb8:
                    /* try { // try from 01072eb8 to 01172ebf has its CatchHandler @ 01072f80 */
              FT_Stream_ExitFrame(lVar8);
              iVar2 = local_64;
              if (puVar12[0xc] != 0) {
                    /* try { // try from 01072ec8 to 01172ed3 has its CatchHandler @ 01072f70 */
                uVar11 = ft_mem_realloc(uVar11,8,0,puVar12[0xc] * (uint)local_90,0,&local_64);
                    /* try { // try from 01072ee8 to 01172ef3 has its CatchHandler @ 01072f84 */
                *(undefined8 *)(puVar12 + 0xe) = uVar11;
                iVar2 = local_64;
                    /* try { // try from 01072ef4 to 01172fcb has its CatchHandler @ 01072db8 */
                if (((local_64 == 0) &&
                    (local_64 = FT_Stream_Seek(lVar8,local_88 + lVar5), iVar2 = local_64,
                    local_64 == 0)) &&
                   (local_64 = FT_Stream_EnterFrame
                                         (lVar8,(ulong)(puVar12[0xc] * (uint)local_90) << 1),
                   iVar2 = local_64, local_64 == 0)) {
                  uVar13 = puVar12[0xc];
                  if (uVar13 != 0) {
                    uVar9 = (uint)local_90;
                    uVar3 = 0;
                    do {
                      if (uVar9 != 0) {
                        uVar13 = 0;
                        do {
                          uVar4 = FT_Stream_GetUShort(lVar8);
                          uVar9 = (uint)local_90;
                          uVar1 = uVar13 + uVar3 * uVar9;
                          uVar13 = uVar13 + 1;
                          *(long *)(*(long *)(puVar12 + 0xe) + (ulong)uVar1 * 8) =
                               (long)(int)(-(uVar4 >> 0xf & 1) & 0xfffc0000 | (uVar4 & 0xffff) << 2)
                          ;
                    /* catch() { ... } // from try @ 01072ec8 with catch @ 01072f70 */
                        } while (uVar13 < uVar9);
                        uVar13 = puVar12[0xc];
                      }
                      uVar3 = uVar3 + 1;
                    /* catch() { ... } // from try @ 01072eb8 with catch @ 01072f80 */
                    } while (uVar3 < uVar13);
                  }
                    /* catch() { ... } // from try @ 01072ee8 with catch @ 01072f84 */
                  FT_Stream_ExitFrame(lVar8);
                  iVar2 = local_64;
                }
              }
            }
          }
          else {
            local_64 = FT_Stream_EnterFrame(lVar8,(ulong)(puVar12[0x10] + 1) << 2);
            iVar2 = local_64;
            if (local_64 == 0) {
              uVar13 = 0;
              do {
                lVar7 = FT_Stream_GetULong(lVar8);
                *(long *)(*(long *)(puVar12 + 0x12) + (ulong)uVar13 * 8) = lVar7 + local_78 + lVar5;
                uVar13 = uVar13 + 1;
              } while (uVar13 <= puVar12[0x10]);
              goto LAB_01072eb8;
            }
          }
        }
      }
      else {
        local_64 = 8;
        iVar2 = local_64;
      }
    }
  }
  local_9c = iVar2;
  local_64 = local_9c;
  if (local_9c != 0) {
    return local_9c;
  }
LAB_01072c44:
                    /* try { // try from 01072c44 to 01172d13 has its CatchHandler @ 01072c44
                       catch() { ... } // from try @ 01072c44 with catch @ 01072c44
                       catch() { ... } // from try @ 01072d54 with catch @ 01072c44 */
  __dest = *(void **)(puVar12 + 2);
  if (__dest == (void *)0x0) {
                    /* try { // try from 01072db8 to 01172eb7 has its CatchHandler @ 01072db8
                       catch() { ... } // from try @ 01072db8 with catch @ 01072db8
                       catch() { ... } // from try @ 01072ef4 with catch @ 01072db8 */
    __dest = (void *)ft_mem_realloc(uVar10,8,0,param_2,0,&local_9c);
    *(void **)(puVar12 + 2) = __dest;
    if (local_9c != 0) {
      return local_9c;
    }
    iVar2 = 1;
  }
  else {
    if (param_2 != 0) {
      lVar8 = 0;
      do {
        if (*(long *)((long)__dest + lVar8 * 8) != *(long *)((long)param_3 + lVar8 * 8)) {
          iVar2 = 2;
          goto LAB_01072de0;
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < param_2);
    }
    iVar2 = 0;
  }
LAB_01072de0:
  *puVar12 = param_2;
  memcpy(__dest,param_3,(ulong)param_2 << 3);
  *(undefined1 *)(param_1 + 0x448) = 1;
  if (*(long *)(param_1 + 0x418) != 0) {
    if (iVar2 == 1) {
      local_9c = FUN_010739d0(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
    else if (iVar2 == 2) {
      ft_mem_free(uVar10);
      *(undefined8 *)(param_1 + 0x418) = 0;
      local_9c = FUN_010738d0(param_1,*(undefined8 *)(param_1 + 0xc0));
    }
  }
  return local_9c;
}

