
/* cocos2d::Mat4::rotate(cocos2d::Vec3 const&, float, cocos2d::Mat4*) const */

void __thiscall cocos2d::Mat4::rotate(Mat4 *this,Vec3 *param_1,float param_2,Mat4 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  ulong uStack_98;
  float local_90;
  float fStack_8c;
  ulong local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_98 = IDENTITY._8_8_;
  _local_a0 = IDENTITY._0_8_;
  local_88 = IDENTITY._24_8_;
  _local_90 = IDENTITY._16_8_;
  _local_80 = IDENTITY._32_8_;
  fStack_78 = (float)IDENTITY._40_8_;
  uStack_74 = SUB84(IDENTITY._40_8_,4);
  uStack_68 = (undefined4)IDENTITY._56_8_;
  local_64 = SUB84(IDENTITY._56_8_,4);
  uStack_70 = (undefined4)IDENTITY._48_8_;
  local_6c = SUB84(IDENTITY._48_8_,4);
  fVar6 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  if ((fVar2 != 1.0) && (fVar2 = SQRT(fVar2), 1e-06 < fVar2)) {
    fVar2 = 1.0 / fVar2;
    fVar6 = fVar6 * fVar2;
    fVar5 = fVar5 * fVar2;
    fVar4 = fVar4 * fVar2;
  }
  sincosf(param_2,&fStack_a4,&local_a8);
  fVar2 = 1.0 - local_a8;
  fVar3 = fVar2 * fVar6;
  fVar7 = fVar4 * fVar2 * fVar5;
  fStack_78 = local_a8 + fVar4 * fVar2 * fVar4;
  local_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  _local_a0 = CONCAT44(fStack_a4 * fVar4 + fVar5 * fVar3,local_a8 + fVar6 * fVar3);
  uStack_98 = (ulong)(uint)(fVar4 * fVar3 - fStack_a4 * fVar5);
  _local_90 = CONCAT44(local_a8 + fVar5 * fVar2 * fVar5,fVar5 * fVar3 - fStack_a4 * fVar4);
  local_88 = (ulong)(uint)(fVar7 + fStack_a4 * fVar6);
  _local_80 = CONCAT44(fVar7 - fStack_a4 * fVar6,fStack_a4 * fVar5 + fVar4 * fVar3);
  local_64 = 0x3f800000;
  MathUtil::multiplyMatrix((float *)this,&local_a0,(float *)param_3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

