
uint FUN_01078d9c(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ushort *puVar14;
  undefined1 auStack_88 [16];
  long local_78;
  code *pcStack_70;
  long local_68;
  uint local_58;
  uint local_54;
  
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  local_58 = 2;
  lVar6 = ft_mem_alloc(uVar12,0x58,&local_58);
  if ((local_58 != 0) ||
     (local_58 = FT_Stream_EnterFrame(param_2,*(undefined8 *)(param_2 + 8)), local_58 != 0))
  goto LAB_01079150;
  uVar7 = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(lVar6 + 8) = uVar7;
  *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_1 + 0x2d8);
  lVar13 = *(long *)(param_1 + 0x308);
  if (*(undefined8 **)(lVar13 + 0x30) == (undefined8 *)0x0) {
LAB_010790d4:
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(param_1 + 0x2e0) = uVar7;
    uVar7 = *(undefined8 *)(lVar6 + 8);
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(param_1 + 0x2d0) = uVar7;
    lVar13 = *(long *)(lVar6 + 8);
    *(long *)(param_1 + 0x70) = *(long *)(lVar6 + 0x10) >> 0x10;
    *(long *)(param_1 + 0x68) = lVar13 >> 0x10;
    lVar13 = *(long *)(lVar6 + 0x18);
    *(long *)(param_1 + 0x80) = *(long *)(lVar6 + 0x20) + 0xffff >> 0x10;
    *(long *)(param_1 + 0x78) = lVar13 + 0xffff >> 0x10;
    *(short *)(param_1 + 0x8a) = (short)((uint)(*(int *)(lVar6 + 0x28) + 0x8000) >> 0x10);
    *(short *)(param_1 + 0x8c) = (short)((uint)(*(int *)(lVar6 + 0x30) + 0x8000) >> 0x10);
    if (*(int *)(lVar6 + 0x50) != 0) {
      *(long *)(param_1 + 0x310) = lVar6;
      lVar6 = 0;
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) | 0x40;
    }
  }
  else {
    local_58 = (*(code *)**(undefined8 **)(lVar13 + 0x30))
                         (auStack_88,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40)
                          ,*(undefined8 *)(param_2 + 0x48));
    if (local_58 == 0) {
      local_68 = param_1 + 0xf8;
      pcStack_70 = FUN_0107c5d4;
      local_78 = lVar6;
      local_58 = (**(code **)(*(long *)(lVar13 + 0x30) + 0x10))(auStack_88);
      (**(code **)(*(long *)(lVar13 + 0x30) + 8))(auStack_88);
    }
                    /* try { // try from 01078e8c to 01178ebf has its CatchHandler @ 01078e8c
                       catch() { ... } // from try @ 01078e8c with catch @ 01078e8c
                       catch() { ... } // from try @ 01078f0c with catch @ 01078e8c */
                    /* try { // try from 01078ec0 to 01178ec7 has its CatchHandler @ 01078f38 */
    if (((((local_58 & 0xff) == 2) && (6 < *(ulong *)(param_2 + 8))) &&
        (lVar13 = *(long *)(param_2 + 0x40), *(byte *)(lVar13 + 1) < 4)) &&
       (((ulong)*(byte *)(lVar13 + 5) << 0x18 | (ulong)*(byte *)(lVar13 + 4) << 0x10 |
         (ulong)*(byte *)(lVar13 + 3) << 8 | (ulong)*(byte *)(lVar13 + 2)) ==
        *(ulong *)(param_2 + 8))) {
      puVar9 = *(ushort **)(param_2 + 0x48);
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      local_54 = 0;
                    /* try { // try from 01078ee4 to 01178f0b has its CatchHandler @ 01078f20 */
      if (puVar9 < (ushort *)(lVar13 + 0x65U)) goto LAB_01078eec;
                    /* try { // try from 01078f0c to 01178f4b has its CatchHandler @ 01078e8c */
      lVar11 = lVar13 + 99 + (ulong)*(ushort *)(lVar13 + 99);
                    /* catch() { ... } // from try @ 01078ee4 with catch @ 01078f20 */
                    /* catch() { ... } // from try @ 01078ec0 with catch @ 01078f38 */
                    /* try { // try from 01078f4c to 01178f9f has its CatchHandler @ 01078f4c
                       catch() { ... } // from try @ 01078f4c with catch @ 01078f4c
                       catch() { ... } // from try @ 01078fcc with catch @ 01078f4c */
      if (((puVar9 < (ushort *)(lVar11 + 0x24U)) || (*(ushort *)(lVar11 + 0x12) < 0x12)) ||
         (uVar10 = (ulong)*(byte *)(lVar11 + 0x23) << 0x18 | (ulong)*(byte *)(lVar11 + 0x22) << 0x10
                   | (ulong)*(byte *)(lVar11 + 0x21) << 8 | (ulong)*(byte *)(lVar11 + 0x20),
         uVar10 == 0)) goto LAB_010790c8;
      puVar1 = (ushort *)(lVar13 + uVar10);
      puVar14 = puVar1 + 1;
      if (puVar9 < puVar14) {
LAB_01078eec:
        local_54 = 2;
      }
      else {
        uVar4 = *puVar1;
        uVar2 = (uint)uVar4;
        *(uint *)(lVar6 + 0x50) = uVar2;
        if (puVar9 < puVar14 + (ulong)uVar4 * 2) goto LAB_01078eec;
        if (uVar2 == 0) {
LAB_010790c8:
          local_58 = 0;
          goto LAB_010790d0;
        }
                    /* try { // try from 01078fa0 to 01178fcb has its CatchHandler @ 01078fdc */
        puVar8 = (undefined4 *)ft_mem_realloc(uVar7,0x10,0,uVar2,0,&local_54);
        *(undefined4 **)(lVar6 + 0x48) = puVar8;
        if (local_54 == 0) {
                    /* try { // try from 01078fcc to 01178ff7 has its CatchHandler @ 01078f4c */
          iVar3 = *(int *)(lVar6 + 0x50);
          lVar13 = *(long *)(param_1 + 0xa8);
          if (0 < *(int *)(param_1 + 0x48)) {
                    /* catch() { ... } // from try @ 01078fa0 with catch @ 01078fdc */
            lVar11 = 0;
            do {
              if (*(short *)(*(long *)(*(long *)(param_1 + 0x50) + lVar11 * 8) + 0xc) == 7) {
                local_54 = FT_Set_Charmap(param_1);
                if (local_54 != 0) goto LAB_01078ef4;
                break;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < *(int *)(param_1 + 0x48));
          }
          if (0 < iVar3) {
            do {
              uVar5 = FT_Get_Char_Index(param_1,(char)*puVar14);
              *puVar8 = uVar5;
              uVar5 = FT_Get_Char_Index(param_1,*(undefined1 *)((long)puVar14 + 1));
              puVar8[1] = uVar5;
              puVar9 = puVar14 + 1;
              puVar14 = puVar14 + 2;
              puVar8[2] = (int)(short)*puVar9;
              puVar8[3] = 0;
              puVar8 = puVar8 + 4;
            } while (puVar14 < (ushort *)((long)puVar1 + ((long)iVar3 << 2 | 2U)));
          }
          if (lVar13 != 0) {
            local_54 = FT_Set_Charmap(param_1,lVar13);
          }
                    /* try { // try from 010790b4 to 0117914f has its CatchHandler @ 010790b4
                       catch(type#1 @ 00000000) { ... } // from try @ 010790b4 with catch @ 010790b4
                       catch(type#1 @ 00000000) { ... } // from try @ 010791c8 with catch @ 010790b4
                        */
          if ((local_54 == 0) &&
             (qsort(*(void **)(lVar6 + 0x48),(long)*(int *)(lVar6 + 0x50),0x10,FUN_0107c670),
             local_54 == 0)) goto LAB_010790c8;
        }
      }
LAB_01078ef4:
      ft_mem_free(uVar7,*(undefined8 *)(lVar6 + 0x48));
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined4 *)(lVar6 + 0x50) = 0;
      local_58 = local_54;
    }
LAB_010790d0:
    if (local_58 == 0) goto LAB_010790d4;
  }
  FT_Stream_ExitFrame(param_2);
LAB_01079150:
                    /* try { // try from 01079150 to 01179157 has its CatchHandler @ 01079280 */
  if (lVar6 != 0) {
    ft_mem_free(uVar12,*(undefined8 *)(lVar6 + 0x48));
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined4 *)(lVar6 + 0x50) = 0;
    ft_mem_free(uVar12,*(undefined8 *)(lVar6 + 0x38));
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined4 *)(lVar6 + 0x40) = 0;
    ft_mem_free(uVar12,lVar6);
  }
                    /* try { // try from 010791a8 to 011791ab has its CatchHandler @ 01079248 */
  return local_58;
}

