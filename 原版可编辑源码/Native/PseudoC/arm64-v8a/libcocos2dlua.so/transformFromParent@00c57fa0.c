
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocostudio::TransformHelp::transformFromParent(cocostudio::BaseData&, cocostudio::BaseData
   const&) */

void __thiscall
cocostudio::TransformHelp::transformFromParent
          (TransformHelp *this,BaseData *param_1,BaseData *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  AffineTransform *extraout_x1;
  AffineTransform *extraout_x1_00;
  AffineTransform *pAVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  fVar5 = *(float *)(this + 0x30);
  if (fVar5 == -*(float *)(this + 0x34)) {
    sincosf(fVar5,&fStack_94,&local_98);
    fVar7 = local_98 * *(float *)(this + 0x38);
    fVar6 = -(fStack_94 * *(float *)(this + 0x38));
    fStack_94 = fStack_94 * *(float *)(this + 0x3c);
    local_98 = local_98 * *(float *)(this + 0x3c);
  }
  else {
    fVar6 = *(float *)(this + 0x38);
    sincosf(*(float *)(this + 0x34),&fStack_84,&local_88);
    fVar8 = *(float *)(this + 0x3c);
    fVar7 = local_88 * fVar6;
    fVar6 = fStack_84 * fVar6;
    sincosf(fVar5,&fStack_8c,&local_90);
    fStack_94 = fStack_8c * fVar8;
    local_98 = local_90 * fVar8;
  }
  _helpMatrix1 = CONCAT44(fVar6,fVar7);
  _DAT_01785774 = CONCAT44(local_98,fStack_94);
  DAT_0178577c = *(undefined8 *)(this + 0x24);
  fVar5 = *(float *)(param_1 + 0x30);
  if (fVar5 == -*(float *)(param_1 + 0x34)) {
    sincosf(fVar5,&fStack_ac,&local_b0);
    fVar7 = local_b0 * *(float *)(param_1 + 0x38);
    fVar6 = -(fStack_ac * *(float *)(param_1 + 0x38));
    fStack_ac = fStack_ac * *(float *)(param_1 + 0x3c);
    local_b0 = local_b0 * *(float *)(param_1 + 0x3c);
    pAVar4 = extraout_x1;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x38);
    sincosf(*(float *)(param_1 + 0x34),&fStack_9c,&local_a0);
    fVar8 = *(float *)(param_1 + 0x3c);
    fVar7 = local_a0 * fVar6;
    fVar6 = fStack_9c * fVar6;
    sincosf(fVar5,&fStack_a4,&local_a8);
    fStack_ac = fStack_a4 * fVar8;
    local_b0 = local_a8 * fVar8;
    pAVar4 = extraout_x1_00;
  }
  _helpMatrix2 = CONCAT44(fVar6,fVar7);
  _DAT_0178578c = CONCAT44(local_b0,fStack_ac);
  DAT_01785794 = *(undefined8 *)(param_1 + 0x24);
  cocos2d::AffineTransformInvert((cocos2d *)&helpMatrix2,pAVar4);
  DAT_01785794 = local_70;
  _DAT_0178578c = uStack_78;
  _helpMatrix2 = local_80;
  cocos2d::AffineTransformConcat
            ((cocos2d *)&helpMatrix1,(AffineTransform *)&helpMatrix2,(AffineTransform *)param_2);
  _DAT_01785774 = uStack_78;
  _helpMatrix1 = local_80;
  DAT_0178577c = local_70;
  fVar7 = 0.0;
  helpPoint1 = 0x3f80000000000000;
  fVar5 = (float)cocos2d::__CCPointApplyAffineTransform
                           ((Vec2 *)&helpPoint1,(AffineTransform *)&helpMatrix1);
  helpPoint1._0_4_ = fVar5 - (float)DAT_0178577c;
  helpPoint1._4_4_ = fVar7 - (float)((ulong)DAT_0178577c >> 0x20);
  helpPoint2 = 0x3f800000;
  fVar5 = (float)cocos2d::__CCPointApplyAffineTransform
                           ((Vec2 *)&helpPoint2,(AffineTransform *)&helpMatrix1);
  fVar2 = (float)DAT_0178577c;
  fVar3 = DAT_0178577c._4_4_;
  fVar5 = fVar5 - (float)DAT_0178577c;
  fVar7 = fVar7 - DAT_0178577c._4_4_;
  helpPoint2 = CONCAT44(fVar7,fVar5);
  fVar6 = atan2f(helpPoint1._4_4_,(float)helpPoint1);
  *(float *)(this + 0x30) = -(fVar6 + -1.5707964);
  fVar5 = atan2f(fVar7,fVar5);
  *(float *)(this + 0x34) = fVar5;
  fVar5 = helpMatrix1;
  fVar6 = DAT_01785770;
  fVar7 = DAT_01785774;
  fVar8 = DAT_01785778;
  *(float *)(this + 0x24) = fVar2;
  *(float *)(this + 0x28) = fVar3;
  *(ulong *)(this + 0x38) =
       CONCAT44(SQRT(fVar7 * fVar7 + fVar8 * fVar8),SQRT(fVar5 * fVar5 + fVar6 * fVar6));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

