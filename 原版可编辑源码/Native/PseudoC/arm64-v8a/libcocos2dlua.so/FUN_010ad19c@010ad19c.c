
int FUN_010ad19c(long param_1,long param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long local_e0;
  long lStack_d8;
  uint local_d0;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  int local_54;
  
                    /* try { // try from 010ad1a0 to 011ad2db has its CatchHandler @ 010ad088 */
  if (*(int *)(param_2 + 0x90) == *(int *)(param_1 + 0x20)) {
    if (param_3 == 2) {
                    /* catch() { ... } // from try @ 010ad12c with catch @ 010ad1e8 */
      puVar3 = ft_raster5_renderer_class;
                    /* catch() { ... } // from try @ 010ad104 with catch @ 010ad1ec */
    }
    else {
      puVar3 = ft_raster1_renderer_class;
    }
    if (*(undefined1 **)(param_1 + 0x18) == puVar3) {
      return 0x13;
    }
    lVar1 = param_2 + 200;
                    /* catch() { ... } // from try @ 010ad0f4 with catch @ 010ad1f4 */
    if (param_4 != (undefined8 *)0x0) {
      FT_Outline_Translate(lVar1,*param_4,param_4[1]);
    }
                    /* catch() { ... } // from try @ 010ad0dc with catch @ 010ad204 */
                    /* catch() { ... } // from try @ 010ad194 with catch @ 010ad20c */
    FT_Outline_Get_CBox(lVar1,&local_80);
                    /* catch() { ... } // from try @ 010ad178 with catch @ 010ad21c */
    local_80 = local_80 + 0x20 & 0xffffffffffffffc0;
    uStack_78 = uStack_78 + 0x20 & 0xffffffffffffffc0;
    local_70 = local_70 + 0x20 & 0xffffffffffffffc0;
    uStack_68 = uStack_68 + 0x20 & 0xffffffffffffffc0;
    uVar6 = uStack_68 - uStack_78;
    uVar7 = (uint)(local_70 - local_80 >> 6);
    uVar8 = (uint)(uVar6 >> 6);
    if ((uVar8 | uVar7) < 0x10000) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) != 0) {
        ft_mem_free(uVar5,*(undefined8 *)(param_2 + 0xa8));
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(uint *)(*(long *)(param_2 + 0x128) + 8) =
             *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe;
      }
      if ((param_3 >> 1 & 1) == 0) {
        uVar2 = uVar7 + 3 & 0xfffffffc;
        *(undefined2 *)(param_2 + 0xb0) = 0x100;
        uVar4 = 2;
      }
      else {
                    /* catch() { ... } // from try @ 010ad3a0 with catch @ 010ad2dc */
        uVar2 = uVar7 + 0xf >> 3 & 0x1ffffffe;
        uVar4 = 1;
      }
      *(undefined1 *)(param_2 + 0xb2) = uVar4;
      *(uint *)(param_2 + 0x98) = uVar8;
      *(uint *)(param_2 + 0x9c) = uVar7;
      *(uint *)(param_2 + 0xa0) = uVar2;
      uVar5 = ft_mem_realloc(uVar5,uVar6 >> 6 & 0xffffffff,0,uVar2,0,&local_54);
      *(undefined8 *)(param_2 + 0xa8) = uVar5;
      if (local_54 == 0) {
                    /* try { // try from 010ad330 to 011ad333 has its CatchHandler @ 010ad3a0 */
        *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) | 1;
        FT_Outline_Translate(lVar1,-local_80,-uStack_78);
                    /* try { // try from 010ad354 to 011ad35f has its CatchHandler @ 010ad3b0 */
        local_d0 = (uint)(*(char *)(param_2 + 0xb2) == '\x02');
        local_e0 = param_2 + 0x98;
        lStack_d8 = lVar1;
        local_54 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_e0);
                    /* try { // try from 010ad368 to 011ad36f has its CatchHandler @ 010ad3b8 */
        FT_Outline_Translate(lVar1,local_80,uStack_78);
        if (local_54 == 0) {
          *(undefined4 *)(param_2 + 0x90) = 0x62697473;
          *(int *)(param_2 + 0xc0) = (int)(local_80 >> 6);
                    /* try { // try from 010ad398 to 011ad39f has its CatchHandler @ 010ad3a0 */
          *(int *)(param_2 + 0xc4) = (int)(uStack_68 >> 6);
          return 0;
        }
        return local_54;
      }
      return local_54;
    }
  }
                    /* catch() { ... } // from try @ 010ad330 with catch @ 010ad3a0
                       catch() { ... } // from try @ 010ad398 with catch @ 010ad3a0
                       try { // try from 010ad3a0 to 011ad433 has its CatchHandler @ 010ad2dc */
                    /* catch() { ... } // from try @ 010ad354 with catch @ 010ad3b0 */
                    /* catch() { ... } // from try @ 010ad368 with catch @ 010ad3b8 */
  return 6;
}

