
/* cocos2d::FontFreeType::getNormalGlyphBitmap(unsigned long) */

void cocos2d::FontFreeType::getNormalGlyphBitmap(ulong param_1)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  GlyphBitmap *pGVar11;
  undefined8 *puVar12;
  undefined8 in_x1;
  undefined8 *in_x8;
  undefined4 uVar13;
  long lVar14;
  void *__src;
  ulong __n;
  ulong uVar15;
  Rect aRStack_90 [16];
  void *local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 009f4bb4 to 00af4bbb has its CatchHandler @ 009f4bc4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f4bb4 with catch @ 009f4bc4
                        */
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((*(long *)(param_1 + 0x58) == 0) ||
     (iVar9 = FT_Load_Char(*(long *)(param_1 + 0x58),in_x1,0x8004), iVar9 != 0)) {
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x58) + 0x98);
    uVar3 = *(ulong *)(lVar14 + 0x30);
    uVar5 = *(ulong *)(lVar14 + 0x38);
    uVar4 = *(ulong *)(lVar14 + 0x40);
    uVar6 = *(ulong *)(lVar14 + 0x48);
    uVar15 = *(ulong *)(lVar14 + 0x50);
    iVar9 = *(int *)(lVar14 + 0x98);
    iVar2 = *(int *)(lVar14 + 0x9c);
    uVar7 = *(byte *)(lVar14 + 0xb2) - 2;
    if (uVar7 < 6) {
      uVar13 = *(undefined4 *)(&DAT_0188d9a4 + (long)(char)uVar7 * 4);
    }
    else {
      uVar13 = 4;
    }
    iVar10 = PixelModeSize(uVar13);
    __src = *(void **)(lVar14 + 0xa8);
    iVar10 = iVar9 * iVar2 * iVar10;
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = (void *)0x0;
    if (iVar10 != 0) {
      __n = (ulong)iVar10;
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      local_80 = operator_new(__n);
      pvVar1 = (void *)((long)local_80 + __n);
      local_70 = pvVar1;
      memcpy(local_80,__src,__n);
      local_78 = pvVar1;
    }
    pGVar11 = operator_new(0x40);
    Rect::Rect(aRStack_90,(float)(int)(uVar4 >> 6),(float)-(int)(uVar6 >> 6),
               (float)(int)(uVar3 >> 6),(float)(int)(uVar5 >> 6));
    GlyphBitmap::GlyphBitmap(pGVar11,&local_80,iVar2,iVar9,aRStack_90,uVar15 >> 6,uVar13,0);
    *in_x8 = pGVar11;
    puVar12 = operator_new(0x20);
    puVar12[2] = 0;
    puVar12[3] = pGVar11;
    in_x8[1] = puVar12;
    *puVar12 = &PTR____shared_weak_count_01c6c428;
    puVar12[1] = 0;
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

