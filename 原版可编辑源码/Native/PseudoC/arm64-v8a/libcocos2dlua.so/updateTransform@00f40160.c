
/* cocos2d::Sprite::updateTransform() */

void __thiscall cocos2d::Sprite::updateTransform(Sprite *this)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  TextureAtlas *this_00;
  undefined8 *puVar4;
  Mat4 *pMVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0x5d0))();
  if ((uVar3 & 1) == 0) goto LAB_00f40210;
  if (this[0x1f9] == (Sprite)0x0) {
LAB_00f401b8:
    *(undefined4 *)(this + 0x4a0) = 0;
    *(undefined4 *)(this + 0x458) = 0;
    *(undefined4 *)(this + 0x488) = 0;
    *(undefined4 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x498) = 0;
    *(undefined8 *)(this + 0x450) = 0;
    *(undefined8 *)(this + 0x480) = 0;
    *(undefined8 *)(this + 0x468) = 0;
    this[0x31a] = (Sprite)0x1;
    this_00 = *(TextureAtlas **)(this + 0x300);
  }
  else {
    lVar6 = *(long *)(this + 400);
    if ((lVar6 == 0) || (lVar6 == *(long *)(this + 0x310))) {
      this[0x31a] = (Sprite)0x0;
      puVar4 = (undefined8 *)(**(code **)(*(long *)this + 1000))(this);
      uVar9 = puVar4[4];
      uVar13 = puVar4[7];
      uVar12 = puVar4[6];
      uVar15 = puVar4[1];
      uVar14 = *puVar4;
      uVar17 = puVar4[3];
      uVar16 = puVar4[2];
      *(undefined8 *)(this + 0x344) = puVar4[5];
      *(undefined8 *)(this + 0x33c) = uVar9;
      *(undefined8 *)(this + 0x354) = uVar13;
      *(undefined8 *)(this + 0x34c) = uVar12;
      *(undefined8 *)(this + 0x324) = uVar15;
      *(undefined8 *)(this + 0x31c) = uVar14;
      *(undefined8 *)(this + 0x334) = uVar17;
      *(undefined8 *)(this + 0x32c) = uVar16;
    }
    else {
      if (*(char *)(lVar6 + 0x31a) != '\0') goto LAB_00f401b8;
      this[0x31a] = (Sprite)0x0;
      pMVar5 = (Mat4 *)(**(code **)(*(long *)this + 1000))(this);
      Mat4::Mat4((Mat4 *)&local_78,(Mat4 *)(*(long *)(this + 400) + 0x31c));
      Mat4::multiply((Mat4 *)&local_78,pMVar5);
      *(undefined8 *)(this + 0x344) = uStack_50;
      *(undefined8 *)(this + 0x33c) = local_58;
      *(undefined8 *)(this + 0x354) = uStack_40;
      *(undefined8 *)(this + 0x34c) = local_48;
      *(undefined8 *)(this + 0x324) = uStack_70;
      *(undefined8 *)(this + 0x31c) = local_78;
      *(undefined8 *)(this + 0x334) = uStack_60;
      *(undefined8 *)(this + 0x32c) = local_68;
      Mat4::~Mat4((Mat4 *)&local_78);
    }
    fVar7 = *(float *)(this + 0x440);
    fVar10 = *(float *)(this + 0x444);
    fVar18 = *(float *)(this + 0x34c);
    fVar19 = *(float *)(this + 0x350);
    uVar1 = *(undefined4 *)(this + 0x58);
    fVar22 = fVar7 * *(float *)(this + 0x31c);
    fVar8 = fVar7 * *(float *)(this + 800);
    fVar23 = fVar10 * *(float *)(this + 0x330);
    fVar11 = fVar10 * -*(float *)(this + 0x32c);
    fVar20 = (fVar7 + *(float *)(this + 0x410)) * *(float *)(this + 0x31c);
    fVar7 = (fVar7 + *(float *)(this + 0x410)) * *(float *)(this + 800);
    fVar21 = (fVar10 + *(float *)(this + 0x414)) * -*(float *)(this + 0x32c);
    fVar10 = (fVar10 + *(float *)(this + 0x414)) * *(float *)(this + 0x330);
    *(undefined4 *)(this + 0x470) = uVar1;
    *(undefined4 *)(this + 0x4a0) = uVar1;
    *(undefined4 *)(this + 0x458) = uVar1;
    *(float *)(this + 0x46c) = fVar19 + fVar8 + fVar23;
    *(float *)(this + 0x468) = fVar18 + (fVar22 - fVar11);
    *(float *)(this + 0x498) = fVar18 + (fVar20 - fVar11);
    *(float *)(this + 0x49c) = fVar19 + fVar7 + fVar23;
    *(float *)(this + 0x450) = fVar18 + (fVar22 - fVar21);
    *(float *)(this + 0x454) = fVar19 + fVar8 + fVar10;
    *(float *)(this + 0x480) = fVar18 + (fVar20 - fVar21);
    *(float *)(this + 0x484) = fVar19 + fVar7 + fVar10;
    *(undefined4 *)(this + 0x488) = uVar1;
    (**(code **)(*(long *)this + 0x630))(this,this + 0x408);
    this_00 = *(TextureAtlas **)(this + 0x300);
  }
  if (this_00 != (TextureAtlas *)0x0) {
    TextureAtlas::updateQuad(this_00,(V3F_C4B_T2F_Quad *)(this + 0x450),*(long *)(this + 0x308));
  }
  this[0x319] = (Sprite)0x0;
  (**(code **)(*(long *)this + 0x5d8))(this,0);
LAB_00f40210:
  Node::updateTransform((Node *)this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

