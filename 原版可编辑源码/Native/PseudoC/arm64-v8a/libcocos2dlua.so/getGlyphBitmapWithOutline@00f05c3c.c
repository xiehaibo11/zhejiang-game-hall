
/* cocos2d::FontFreeType::getGlyphBitmapWithOutline(unsigned long, FT_BBox_&) */

void * __thiscall
cocos2d::FontFreeType::getGlyphBitmapWithOutline(FontFreeType *this,ulong param_1,FT_BBox_ *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  size_t __n;
  long lVar8;
  long lVar9;
  undefined4 *local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  void *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  long local_60;
  long local_58;
  
                    /* try { // try from 00f05c40 to 01005cd3 has its CatchHandler @ 00f05b0c */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  iVar6 = FT_Load_Char(*(undefined8 *)(this + 0x28),param_1,8);
  if (iVar6 == 0) {
                    /* catch() { ... } // from try @ 00f05bd8 with catch @ 00f05c90 */
    if ((*(int *)(*(long *)(*(long *)(this + 0x28) + 0x98) + 0x90) == 0x6f75746c) &&
       (iVar6 = FT_Get_Glyph(*(long *)(*(long *)(this + 0x28) + 0x98),&local_60), iVar6 == 0)) {
      FT_Glyph_StrokeBorder(&local_60,*(undefined8 *)(this + 0x30),0,1);
      if (*(int *)(local_60 + 0x10) == 0x6f75746c) {
        lVar1 = local_60 + 0x28;
        FT_Glyph_Get_CBox(local_60,1,param_2);
        lVar3 = *(long *)param_2;
        lVar4 = *(long *)(param_2 + 8);
        lVar8 = *(long *)(param_2 + 0x10) - lVar3 >> 6;
        lVar9 = *(long *)(param_2 + 0x18) - lVar4 >> 6;
        __n = lVar9 * lVar8;
        uVar2 = __n;
        if ((long)__n < 0) {
          uVar2 = 0xffffffffffffffff;
        }
        local_78 = operator_new__(uVar2,(nothrow_t *)&std::nothrow);
        memset(local_78,0,__n);
        local_6e = 2;
        local_f0 = &local_88;
        local_84 = (undefined4)lVar8;
        local_88 = (undefined4)lVar9;
        local_70 = 0x100;
        uStack_d8 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        local_e0 = 1;
        lStack_e8 = lVar1;
        uStack_80 = local_84;
        FT_Outline_Translate(lVar1,-lVar3,-lVar4);
        FT_Outline_Render(_FTlibrary,lVar1,&local_f0);
        pvVar7 = local_78;
      }
      else {
        pvVar7 = (void *)0x0;
      }
      FT_Done_Glyph(local_60);
      goto LAB_00f05ca8;
    }
  }
  pvVar7 = (void *)0x0;
LAB_00f05ca8:
                    /* catch() { ... } // from try @ 00f05bcc with catch @ 00f05ca8 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00f05c24 with catch @ 00f05cc4 */
    return pvVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

