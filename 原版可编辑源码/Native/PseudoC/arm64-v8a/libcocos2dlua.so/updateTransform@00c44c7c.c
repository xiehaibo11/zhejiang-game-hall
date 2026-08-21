
/* cocostudio::Skin::updateTransform() */

void __thiscall cocostudio::Skin::updateTransform(Skin *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  long lVar6;
  Mat4 *pMVar7;
  long lVar8;
  TextureAtlas *this_00;
  float fVar9;
  float fVar10;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (this[0x1f9] == (Skin)0x0) {
    *(undefined4 *)(this + 0x4a0) = 0;
    *(undefined4 *)(this + 0x458) = 0;
    *(undefined4 *)(this + 0x488) = 0;
    *(undefined4 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x498) = 0;
    *(undefined8 *)(this + 0x450) = 0;
    *(undefined8 *)(this + 0x480) = 0;
    *(undefined8 *)(this + 0x468) = 0;
    this_00 = *(TextureAtlas **)(this + 0x300);
  }
  else {
    pMVar7 = (Mat4 *)(**(code **)(*(long *)this + 1000))(this);
    cocos2d::Mat4::Mat4((Mat4 *)&local_78,pMVar7);
    fVar3 = *(float *)(this + 0x440);
    fVar4 = *(float *)(this + 0x444);
    fVar1 = *(float *)(this + 0x410) + fVar3;
    if (this[0x509] != (Skin)0x0) {
      fVar1 = fVar3;
      fVar3 = *(float *)(this + 0x410) + fVar3;
    }
    fVar2 = *(float *)(this + 0x414) + fVar4;
    if (this[0x50a] != (Skin)0x0) {
      fVar2 = fVar4;
      fVar4 = *(float *)(this + 0x414) + fVar4;
    }
    uVar5 = *(undefined4 *)(this + 0x58);
    fVar10 = fVar4 * -local_68;
    fVar9 = fVar2 * -local_68;
    *(undefined4 *)(this + 0x470) = uVar5;
    *(undefined4 *)(this + 0x4a0) = uVar5;
    *(undefined4 *)(this + 0x458) = uVar5;
    *(float *)(this + 0x468) = local_48 + (local_78 * fVar3 - fVar10);
    *(float *)(this + 0x46c) = fStack_44 + fStack_74 * fVar3 + fStack_64 * fVar4;
    *(float *)(this + 0x498) = local_48 + (local_78 * fVar1 - fVar10);
    *(float *)(this + 0x49c) = fStack_44 + fStack_74 * fVar1 + fStack_64 * fVar4;
    *(float *)(this + 0x450) = local_48 + (local_78 * fVar3 - fVar9);
    *(float *)(this + 0x454) = fStack_44 + fStack_74 * fVar3 + fStack_64 * fVar2;
    *(float *)(this + 0x480) = local_48 + (local_78 * fVar1 - fVar9);
    *(float *)(this + 0x484) = fStack_44 + fStack_74 * fVar1 + fStack_64 * fVar2;
    *(undefined4 *)(this + 0x488) = uVar5;
    cocos2d::Mat4::~Mat4((Mat4 *)&local_78);
    this_00 = *(TextureAtlas **)(this + 0x300);
  }
  if (this_00 != (TextureAtlas *)0x0) {
    lVar8 = cocos2d::TextureAtlas::getTotalQuads(this_00);
    cocos2d::TextureAtlas::updateQuad(this_00,(V3F_C4B_T2F_Quad *)(this + 0x450),lVar8);
  }
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

