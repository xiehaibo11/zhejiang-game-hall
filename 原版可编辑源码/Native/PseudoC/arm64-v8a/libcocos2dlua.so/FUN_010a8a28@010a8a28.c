
int FUN_010a8a28(long param_1,undefined8 *param_2,long param_3)

{
  long *__s;
  byte bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  size_t __n;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  int local_68;
  uint local_64;
  
                    /* catch() { ... } // from try @ 010a89d0 with catch @ 010a8a30 */
  plVar4 = (long *)ft_mem_alloc(*(undefined8 *)(param_1 + 0xb8),*(long *)(param_1 + 0x20) + 0x1a0,
                                &local_68);
  if (local_68 == 0) {
    *plVar4 = param_1;
    __n = *(size_t *)(param_1 + 0x20);
    __s = plVar4 + 0x34;
    plVar4[0x33] = param_3;
    plVar4[1] = __n;
    plVar4[2] = (long)__s;
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    memset(__s,0x7f,__n);
    iVar2 = FT_Select_Charmap(param_1,0x756e6963);
    if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a8bb4 with catch @ 010a8b44
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8be4 with catch @ 010a8b44
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8c14 with catch @ 010a8b44
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8c3c with catch @ 010a8b44
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8c68 with catch @ 010a8b44
                        */
      puVar6 = af_cyrl_c2cp_style_class;
      lVar5 = 0;
      do {
        puVar11 = *(uint **)(*(long *)(af_script_classes + (ulong)*(uint *)(puVar6 + 8) * 8) + 8);
        if ((puVar11 != (uint *)0x0) && (*(int *)(puVar6 + 0x10) == 10)) {
          uVar3 = *puVar11;
          while (uVar3 != 0) {
            uVar7 = (ulong)uVar3;
            local_64 = FT_Get_Char_Index(param_1,uVar7);
                    /* try { // try from 010a8bac to 011a8bb3 has its CatchHandler @ 010a8ca8 */
                    /* try { // try from 010a8bb4 to 011a8bd7 has its CatchHandler @ 010a8b44 */
            if (((local_64 != 0) && (uVar8 = (ulong)local_64, uVar8 < (ulong)plVar4[1])) &&
               (*(char *)((long)__s + uVar8) == '\x7f')) {
              *(char *)((long)__s + uVar8) = (char)lVar5;
            }
                    /* try { // try from 010a8bd8 to 011a8be3 has its CatchHandler @ 010a8ca8 */
                    /* try { // try from 010a8be4 to 011a8c0b has its CatchHandler @ 010a8b44 */
            while ((uVar7 = FT_Get_Next_Char(param_1,uVar7,&local_64), local_64 != 0 &&
                   (uVar7 <= puVar11[1]))) {
              uVar8 = (ulong)local_64;
                    /* try { // try from 010a8c0c to 011a8c13 has its CatchHandler @ 010a8ca4 */
              if ((uVar8 < (ulong)plVar4[1]) && (*(char *)((long)__s + uVar8) == '\x7f')) {
                *(char *)((long)__s + uVar8) = (char)lVar5;
                    /* try { // try from 010a8c14 to 011a8c33 has its CatchHandler @ 010a8b44 */
              }
            }
            puVar11 = puVar11 + 2;
            uVar3 = *puVar11;
          }
        }
        lVar5 = lVar5 + 1;
        puVar6 = (&af_style_classes)[lVar5];
      } while (lVar5 != 0x2f);
                    /* try { // try from 010a8c34 to 011a8c3b has its CatchHandler @ 010a8ca4 */
      uVar3 = FT_Get_Char_Index(param_1,0x30);
                    /* try { // try from 010a8c3c to 011a8c5b has its CatchHandler @ 010a8b44 */
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
                    /* try { // try from 010a8c5c to 011a8c67 has its CatchHandler @ 010a8ca4 */
      uVar3 = FT_Get_Char_Index(param_1,0x31);
                    /* try { // try from 010a8c68 to 011a8cab has its CatchHandler @ 010a8b44 */
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x32);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a8c0c with catch @ 010a8ca4
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8c34 with catch @ 010a8ca4
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8c5c with catch @ 010a8ca4
                        */
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a8bac with catch @ 010a8ca8
                       catch(type#1 @ 00000000) { ... } // from try @ 010a8bd8 with catch @ 010a8ca8
                        */
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x33);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x34);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x35);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x36);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x37);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x38);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
      uVar3 = FT_Get_Char_Index(param_1,0x39);
      if ((uVar3 != 0) && (uVar7 = (ulong)uVar3, uVar7 < (ulong)plVar4[1])) {
        *(byte *)((long)__s + uVar7) = *(byte *)((long)__s + uVar7) | 0x80;
      }
    }
    if ((*(int *)(plVar4[0x33] + 0x18) != 0x7f) && (lVar5 = plVar4[1], 0 < lVar5)) {
      lVar9 = 0;
      do {
        if ((~*(byte *)((long)__s + lVar9) & 0x7f) == 0) {
          bVar1 = *(byte *)((long)__s + lVar9) & 0x80;
          *(byte *)((long)__s + lVar9) = bVar1;
          *(byte *)((long)__s + lVar9) = (byte)*(undefined4 *)(plVar4[0x33] + 0x18) | bVar1;
          lVar5 = plVar4[1];
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar5);
    }
    FT_Set_Charmap(param_1,uVar10);
    local_68 = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
  }
  *param_2 = plVar4;
  return local_68;
}

