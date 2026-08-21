
/* cocos2d::Sprite::updateColor() */

void __thiscall cocos2d::Sprite::updateColor(Sprite *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B((Color4B *)&local_2c,(uchar)this[0x21a],(uchar)this[0x21b],(uchar)this[0x21c],
                   (uchar)this[0x218]);
  uVar2 = local_2c;
  if (this[0x508] != (Sprite)0x0) {
    fVar5 = (float)NEON_ucvtf((uint)(byte)this[0x218]);
    fVar5 = fVar5 / 255.0;
    fVar6 = (float)NEON_ucvtf(local_2c & 0xff);
    fVar7 = (float)NEON_ucvtf(local_2c >> 8 & 0xff);
    fVar8 = (float)NEON_ucvtf(local_2c >> 0x10 & 0xff);
    local_2c._3_1_ = SUB41(uVar2,3);
    local_2c._0_3_ =
         CONCAT12((char)(int)(fVar5 * fVar8),
                  CONCAT11((char)(int)(fVar5 * fVar7),(char)(int)(fVar5 * fVar6)));
  }
  if (0 < *(int *)(this + 0x4d0)) {
    lVar3 = 0;
    lVar4 = 0xc;
    do {
      lVar3 = lVar3 + 1;
      *(uint *)(*(long *)(this + 0x4c0) + lVar4) = local_2c;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 < *(int *)(this + 0x4d0));
  }
  *(uint *)(this + 0x48c) = local_2c;
  *(uint *)(this + 0x4a4) = local_2c;
  *(uint *)(this + 0x45c) = local_2c;
  *(uint *)(this + 0x474) = local_2c;
  if (*(int *)(this + 0x42c) == 3) {
    if (*(long *)(this + 0x308) == -1) {
      (**(code **)(*(long *)this + 0x5d8))(this,1);
    }
    else {
      TextureAtlas::updateQuad
                (*(TextureAtlas **)(this + 0x300),(V3F_C4B_T2F_Quad *)(this + 0x450),
                 *(long *)(this + 0x308));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00f41314 to 0104139f has its CatchHandler @ 00f41314
                       catch() { ... } // from try @ 00f41314 with catch @ 00f41314
                       catch() { ... } // from try @ 00f413b8 with catch @ 00f41314 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

