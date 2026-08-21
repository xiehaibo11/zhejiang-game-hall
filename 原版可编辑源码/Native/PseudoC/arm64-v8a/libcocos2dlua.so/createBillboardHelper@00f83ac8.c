
/* cocos2d::Mat4::createBillboardHelper(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3
   const&, cocos2d::Vec3 const*, cocos2d::Mat4*) */

void cocos2d::Mat4::createBillboardHelper
               (Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Mat4 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_a0,param_1,param_2);
  uVar8 = IDENTITY._56_8_;
  uVar7 = IDENTITY._48_8_;
  uVar6 = IDENTITY._32_8_;
  uVar5 = IDENTITY._24_8_;
  uVar4 = IDENTITY._16_8_;
  uVar3 = IDENTITY._8_8_;
  uVar2 = IDENTITY._0_8_;
  *(undefined8 *)(param_5 + 0x28) = IDENTITY._40_8_;
  *(undefined8 *)(param_5 + 0x20) = uVar6;
  *(undefined8 *)(param_5 + 0x38) = uVar8;
  *(undefined8 *)(param_5 + 0x30) = uVar7;
  *(undefined8 *)(param_5 + 8) = uVar3;
  *(undefined8 *)param_5 = uVar2;
  *(undefined8 *)(param_5 + 0x18) = uVar5;
  *(undefined8 *)(param_5 + 0x10) = uVar4;
  fVar9 = local_a0 * local_a0 + fStack_9c * fStack_9c + local_98 * local_98;
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)param_1;
  *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_5 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if ((param_4 != (Vec3 *)0x0) || (1e-06 < fVar9)) {
    if (fVar9 <= 1e-06) {
      fVar9 = *(float *)param_1;
      fVar10 = *(float *)(param_1 + 4);
      fVar11 = *(float *)(param_1 + 8);
      fVar12 = fVar9 - *(float *)param_4;
      fVar13 = fVar10 - *(float *)(param_4 + 4);
      fVar14 = fVar11 - *(float *)(param_4 + 8);
    }
    else {
      fVar12 = *(float *)param_2;
      fVar13 = *(float *)(param_2 + 4);
      fVar14 = *(float *)(param_2 + 8);
      fVar9 = *(float *)param_1;
      fVar10 = *(float *)(param_1 + 4);
      fVar11 = *(float *)(param_1 + 8);
    }
    _uStack_88 = IDENTITY._8_8_;
    _local_90 = IDENTITY._0_8_;
    _local_78 = IDENTITY._24_8_;
    _local_80 = IDENTITY._16_8_;
    _uStack_68 = IDENTITY._40_8_;
    _local_70 = IDENTITY._32_8_;
    uStack_58 = IDENTITY._56_8_;
    uStack_60 = IDENTITY._48_8_;
    createLookAt(fVar9,fVar10,fVar11,fVar12,fVar13,fVar14,*(float *)param_3,*(float *)(param_3 + 4),
                 *(float *)(param_3 + 8),(Mat4 *)&local_90);
    *(undefined4 *)param_5 = local_90;
    *(undefined4 *)(param_5 + 4) = local_80;
    *(undefined4 *)(param_5 + 8) = local_70;
    *(undefined4 *)(param_5 + 0x10) = uStack_8c;
    *(undefined4 *)(param_5 + 0x14) = local_7c;
    *(undefined4 *)(param_5 + 0x18) = uStack_6c;
    *(undefined4 *)(param_5 + 0x20) = uStack_88;
    *(undefined4 *)(param_5 + 0x24) = local_78;
    *(undefined4 *)(param_5 + 0x28) = uStack_68;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

