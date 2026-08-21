
/* cocos2d::LabelLetter::updateColor() */

void __thiscall cocos2d::LabelLetter::updateColor(LabelLetter *this)

{
  LabelLetter LVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x300) != 0) {
    LVar1 = (LabelLetter)0x0;
    if (this[0x52d] != (LabelLetter)0x0) {
      LVar1 = this[0x218];
    }
    Color4B::Color4B((Color4B *)&local_3c,(uchar)this[0x21a],(uchar)this[0x21b],(uchar)this[0x21c],
                     (uchar)LVar1);
    uVar3 = local_3c;
    if (this[0x508] != (LabelLetter)0x0) {
      fVar4 = (float)(byte)LVar1 / 255.0;
      fVar5 = (float)NEON_ucvtf(local_3c & 0xff);
      fVar6 = (float)NEON_ucvtf(local_3c >> 8 & 0xff);
      fVar7 = (float)NEON_ucvtf(local_3c >> 0x10 & 0xff);
      local_3c._3_1_ = SUB41(uVar3,3);
      local_3c._0_3_ =
           CONCAT12((char)(int)(fVar4 * fVar7),
                    CONCAT11((char)(int)(fVar4 * fVar6),(char)(int)(fVar4 * fVar5)));
    }
    *(uint *)(this + 0x474) = local_3c;
    *(uint *)(this + 0x4a4) = local_3c;
    *(uint *)(this + 0x45c) = local_3c;
    *(uint *)(this + 0x48c) = local_3c;
    TextureAtlas::updateQuad
              (*(TextureAtlas **)(this + 0x300),(V3F_C4B_T2F_Quad *)(this + 0x450),
               *(long *)(this + 0x308));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

