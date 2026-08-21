
int FT_Glyph_To_Bitmap(undefined8 *param_1,undefined4 param_2,long *param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long local_1f0;
  long lStack_1e8;
  undefined1 auStack_1d8 [72];
  undefined8 *local_190;
  undefined1 auStack_188 [136];
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 *local_68;
  
                    /* try { // try from 010675dc to 01167627 has its CatchHandler @ 010675dc
                       catch() { ... } // from try @ 010675dc with catch @ 010675dc
                       catch() { ... } // from try @ 0106765c with catch @ 010675dc */
  if ((param_1 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)*param_1, puVar4 != (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)puVar4[1];
    if (puVar6 == (undefined8 *)0x0) {
      return 6;
    }
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 == (undefined8 *)0x0) {
      return 6;
    }
    if (puVar6 == &ft_bitmap_glyph_class) {
      return 0;
    }
                    /* try { // try from 01067628 to 0116762f has its CatchHandler @ 01067690 */
    if (puVar6[7] != 0) {
                    /* try { // try from 01067638 to 0116765b has its CatchHandler @ 01067694 */
      memset(auStack_188,0,0x120);
      memset(auStack_1d8,0,0x48);
                    /* try { // try from 0106765c to 011676a7 has its CatchHandler @ 010675dc */
      local_100 = *(int *)(puVar6 + 1);
      local_190 = puVar7;
      local_68 = auStack_1d8;
      puVar2 = (undefined8 *)ft_mem_alloc(*puVar7,0x58,&local_1f0);
      if ((int)local_1f0 != 0) {
        return (int)local_1f0;
      }
      *puVar2 = puVar7;
      puVar2[1] = &ft_bitmap_glyph_class;
      *(undefined4 *)(puVar2 + 2) = 0x62697473;
                    /* catch() { ... } // from try @ 01067628 with catch @ 01067690 */
                    /* catch() { ... } // from try @ 01067638 with catch @ 01067694 */
      if (((param_3 != (long *)0x0) && (puVar4[1] != 0)) &&
         (pcVar3 = *(code **)(puVar4[1] + 0x28), pcVar3 != (code *)0x0)) {
                    /* try { // try from 010676a8 to 01167747 has its CatchHandler @ 010676a8
                       catch(type#1 @ 00000000) { ... } // from try @ 010676a8 with catch @ 010676a8
                       catch(type#1 @ 00000000) { ... } // from try @ 01067750 with catch @ 010676a8
                       catch(type#1 @ 00000000) { ... } // from try @ 01067850 with catch @ 010676a8
                       catch(type#1 @ 00000000) { ... } // from try @ 01067968 with catch @ 010676a8
                       catch(type#1 @ 00000000) { ... } // from try @ 010679f0 with catch @ 010676a8
                       catch(type#1 @ 00000000) { ... } // from try @ 01067b2c with catch @ 010676a8
                        */
        (*pcVar3)(puVar4,0,param_3);
      }
      iVar1 = (*(code *)puVar6[7])(puVar4,&local_190);
      if (iVar1 == 0) {
        iVar1 = FT_Render_Glyph_Internal(*puVar4,&local_190,param_2);
      }
      if ((param_3 != (long *)0x0) && (param_4 == '\0')) {
        local_1f0 = -*param_3;
        lStack_1e8 = -param_3[1];
        if ((puVar4[1] != 0) && (pcVar3 = *(code **)(puVar4[1] + 0x28), pcVar3 != (code *)0x0)) {
          (*pcVar3)(puVar4,0,&local_1f0);
        }
      }
      if (iVar1 == 0) {
        if (local_100 == 0x62697473) {
          uVar5 = *puVar2;
          puVar6 = puVar2 + 6;
          *(undefined4 *)(puVar2 + 5) = local_d0;
          *(undefined4 *)((long)puVar2 + 0x2c) = local_cc;
                    /* try { // try from 01067748 to 0116774f has its CatchHandler @ 01067b58 */
          if ((local_68[8] & 1) == 0) {
                    /* try { // try from 01067750 to 011677ab has its CatchHandler @ 010676a8 */
            FT_Bitmap_New(puVar6);
            iVar1 = FT_Bitmap_Copy(uVar5,&local_f8,puVar6);
            if (iVar1 != 0) goto LAB_010677a8;
          }
          else {
            puVar2[10] = local_d8;
            puVar2[9] = uStack_e0;
            puVar2[8] = local_e8;
            puVar2[7] = uStack_f0;
            *puVar6 = local_f8;
            *(uint *)(local_68 + 8) = *(uint *)(local_68 + 8) & 0xfffffffe;
          }
          uVar5 = puVar4[3];
          puVar2[4] = puVar4[4];
          puVar2[3] = uVar5;
          if (param_4 != '\0') {
            uVar5 = *(undefined8 *)*puVar4;
            if (*(code **)(puVar4[1] + 0x18) != (code *)0x0) {
              (**(code **)(puVar4[1] + 0x18))(puVar4);
            }
            ft_mem_free(uVar5,puVar4);
          }
          *param_1 = puVar2;
          return 0;
        }
        iVar1 = 0x12;
      }
LAB_010677a8:
      if (iVar1 != 0) {
                    /* try { // try from 010677ac to 011677b3 has its CatchHandler @ 01067b34 */
        uVar5 = *(undefined8 *)*puVar2;
        if (*(code **)(puVar2[1] + 0x18) != (code *)0x0) {
          (**(code **)(puVar2[1] + 0x18))(puVar2);
        }
                    /* try { // try from 010677cc to 011677cf has its CatchHandler @ 01067c28 */
        ft_mem_free(uVar5,puVar2);
      }
      return iVar1;
    }
  }
  return 6;
}

