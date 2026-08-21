
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocostudio::TransformHelp::transformToParentWithoutScale(cocostudio::BaseData&,
   cocostudio::BaseData const&) */

void __thiscall
cocostudio::TransformHelp::transformToParentWithoutScale
          (TransformHelp *this,BaseData *param_1,BaseData *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 __x;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  BaseData::copy((BaseData *)helpParentNode,param_1);
  helpParentNode._56_8_ = NEON_fmov(0x3f800000,4);
  fVar4 = *(float *)(this + 0x30);
  if (fVar4 == -*(float *)(this + 0x34)) {
    sincosf(fVar4,&fStack_94,&local_98);
    fVar5 = local_98 * *(float *)(this + 0x38);
    fVar6 = -(fStack_94 * *(float *)(this + 0x38));
    fStack_94 = fStack_94 * *(float *)(this + 0x3c);
    local_98 = local_98 * *(float *)(this + 0x3c);
  }
  else {
    fVar6 = *(float *)(this + 0x38);
    sincosf(*(float *)(this + 0x34),&fStack_84,&local_88);
    fVar7 = *(float *)(this + 0x3c);
    fVar5 = local_88 * fVar6;
    fVar6 = fStack_84 * fVar6;
    sincosf(fVar4,&fStack_8c,&local_90);
    fStack_94 = fStack_8c * fVar7;
    local_98 = local_90 * fVar7;
  }
  __x = helpParentNode._48_4_;
  _helpMatrix1 = CONCAT44(fVar6,fVar5);
  _DAT_01785774 = CONCAT44(local_98,fStack_94);
  DAT_0178577c = *(undefined8 *)(this + 0x24);
  if ((float)helpParentNode._48_4_ == -(float)helpParentNode._52_4_) {
    sincosf((float)helpParentNode._48_4_,&fStack_ac,&local_b0);
    fStack_9c = -fStack_ac;
    DAT_01785790 = local_b0;
  }
  else {
    sincosf((float)helpParentNode._52_4_,&fStack_9c,&local_a0);
    sincosf((float)__x,&fStack_a4,&local_a8);
    fStack_ac = fStack_a4;
    local_b0 = local_a0;
    DAT_01785790 = local_a8;
  }
  DAT_01785794 = helpParentNode._36_8_;
  helpMatrix2 = local_b0;
  DAT_01785788 = fStack_9c;
  DAT_0178578c = fStack_ac;
  cocos2d::AffineTransformConcat
            ((cocos2d *)&helpMatrix1,(AffineTransform *)&helpMatrix2,(AffineTransform *)param_2);
  _DAT_01785774 = uStack_78;
  _helpMatrix1 = local_80;
  DAT_0178577c = local_70;
  fVar6 = 0.0;
  helpPoint1 = 0x3f80000000000000;
  fVar4 = (float)cocos2d::__CCPointApplyAffineTransform
                           ((Vec2 *)&helpPoint1,(AffineTransform *)&helpMatrix1);
  helpPoint1._0_4_ = fVar4 - (float)DAT_0178577c;
  helpPoint1._4_4_ = fVar6 - (float)((ulong)DAT_0178577c >> 0x20);
  helpPoint2 = 0x3f800000;
  fVar4 = (float)cocos2d::__CCPointApplyAffineTransform
                           ((Vec2 *)&helpPoint2,(AffineTransform *)&helpMatrix1);
  fVar2 = (float)DAT_0178577c;
  fVar3 = DAT_0178577c._4_4_;
  fVar4 = fVar4 - (float)DAT_0178577c;
  fVar6 = fVar6 - DAT_0178577c._4_4_;
  helpPoint2 = CONCAT44(fVar6,fVar4);
  fVar5 = atan2f(helpPoint1._4_4_,(float)helpPoint1);
  *(float *)(this + 0x30) = -(fVar5 + -1.5707964);
  fVar4 = atan2f(fVar6,fVar4);
  *(float *)(this + 0x34) = fVar4;
  fVar4 = helpMatrix1;
  fVar5 = DAT_01785770;
  fVar6 = DAT_01785774;
  fVar7 = DAT_01785778;
  *(float *)(this + 0x24) = fVar2;
  *(float *)(this + 0x28) = fVar3;
  *(ulong *)(this + 0x38) =
       CONCAT44(SQRT(fVar6 * fVar6 + fVar7 * fVar7),SQRT(fVar4 * fVar4 + fVar5 * fVar5));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

