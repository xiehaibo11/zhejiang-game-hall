
/* cocos2d::Label::updateColor() */

void __thiscall cocos2d::Label::updateColor(Label *this)

{
  long lVar1;
  uint uVar2;
  V3F_C4B_T2F_Quad *pVVar3;
  long lVar4;
  TextureAtlas *this_00;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x3d8) != *(long *)(this + 0x3e0)) {
    Color4B::Color4B((Color4B *)&local_5c,(uchar)this[0x21a],(uchar)this[0x21b],(uchar)this[0x21c],
                     (uchar)this[0x218]);
    uVar2 = local_5c;
    if (this[0x63d] != (Label)0x0) {
      fVar8 = (float)NEON_ucvtf((uint)(byte)this[0x218]);
      fVar8 = fVar8 / 255.0;
      fVar9 = (float)NEON_ucvtf(local_5c & 0xff);
      fVar10 = (float)NEON_ucvtf(local_5c >> 8 & 0xff);
      fVar11 = (float)NEON_ucvtf(local_5c >> 0x10 & 0xff);
      local_5c._3_1_ = SUB41(uVar2,3);
      local_5c._0_3_ =
           CONCAT12((char)(int)(fVar8 * fVar11),
                    CONCAT11((char)(int)(fVar8 * fVar10),(char)(int)(fVar8 * fVar9)));
    }
    plVar7 = *(long **)(this + 0x3e0);
    for (plVar6 = *(long **)(this + 0x3d8); plVar6 != plVar7; plVar6 = plVar6 + 1) {
      this_00 = *(TextureAtlas **)(*plVar6 + 0x300);
      pVVar3 = (V3F_C4B_T2F_Quad *)TextureAtlas::getQuads(this_00);
      lVar4 = TextureAtlas::getTotalQuads(this_00);
      if (0 < lVar4) {
                    /* try { // try from 00f0ed30 to 0100ed4f has its CatchHandler @ 00f0ed60 */
        lVar5 = 0;
        do {
          *(uint *)(pVVar3 + 0x24) = local_5c;
          *(uint *)(pVVar3 + 0x54) = local_5c;
          *(uint *)(pVVar3 + 0xc) = local_5c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0ed30 with catch @ 00f0ed60
                        */
          *(uint *)(pVVar3 + 0x3c) = local_5c;
          TextureAtlas::updateQuad(this_00,pVVar3,lVar5);
          lVar5 = lVar5 + 1;
          pVVar3 = pVVar3 + 0x60;
        } while (lVar4 != lVar5);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00f0edd4 with catch @ 00f0ed98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

