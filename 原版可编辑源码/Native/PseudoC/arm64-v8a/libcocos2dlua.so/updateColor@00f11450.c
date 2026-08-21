
/* cocos2d::LabelAtlas::updateColor() */

void __thiscall cocos2d::LabelAtlas::updateColor(LabelAtlas *this)

{
  long lVar1;
  uint uVar2;
  V3F_C4B_T2F_Quad *pVVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x318) != 0) {
    Color4B::Color4B((Color4B *)&local_4c,(uchar)this[0x21a],(uchar)this[0x21b],(uchar)this[0x21c],
                     (uchar)this[0x218]);
    uVar2 = local_4c;
    if (this[800] != (LabelAtlas)0x0) {
      fVar6 = (float)NEON_ucvtf((uint)(byte)this[0x218]);
      fVar6 = fVar6 / 255.0;
      fVar7 = (float)NEON_ucvtf(local_4c & 0xff);
      fVar8 = (float)NEON_ucvtf(local_4c >> 8 & 0xff);
      fVar9 = (float)NEON_ucvtf(local_4c >> 0x10 & 0xff);
      local_4c._3_1_ = SUB41(uVar2,3);
      local_4c._0_3_ =
           CONCAT12((char)(int)(fVar6 * fVar9),
                    CONCAT11((char)(int)(fVar6 * fVar8),(char)(int)(fVar6 * fVar7)));
    }
    pVVar3 = (V3F_C4B_T2F_Quad *)TextureAtlas::getQuads(*(TextureAtlas **)(this + 0x318));
    if (((byte)this[0x3f0] & 1) == 0) {
      uVar5 = (ulong)((byte)this[0x3f0] >> 1);
      if (uVar5 == 0) goto LAB_00f11564;
    }
    else {
      uVar5 = *(ulong *)(this + 0x3f8);
      if ((long)uVar5 < 1) goto LAB_00f11564;
    }
    uVar4 = 0;
    do {
      *(uint *)(pVVar3 + 0x24) = local_4c;
      *(uint *)(pVVar3 + 0x54) = local_4c;
      *(uint *)(pVVar3 + 0xc) = local_4c;
      *(uint *)(pVVar3 + 0x3c) = local_4c;
      TextureAtlas::updateQuad(*(TextureAtlas **)(this + 0x318),pVVar3,uVar4);
      uVar4 = uVar4 + 1;
      pVVar3 = pVVar3 + 0x60;
    } while (uVar5 != uVar4);
  }
LAB_00f11564:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

