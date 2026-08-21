
/* cocostudio::Bone::applyParentTransform(cocostudio::Bone*) */

void __thiscall cocostudio::Bone::applyParentTransform(Bone *this,Bone *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(this + 0x388);
  lVar2 = *(long *)(param_1 + 0x388);
  fVar5 = *(float *)(lVar1 + 0x24);
  *(float *)(lVar1 + 0x24) =
       fVar5 * *(float *)(param_1 + 0x344) + *(float *)(lVar1 + 0x28) * *(float *)(param_1 + 0x354)
       + *(float *)(lVar2 + 0x24);
  *(float *)(lVar1 + 0x28) =
       *(float *)(lVar2 + 0x28) +
       fVar5 * *(float *)(param_1 + 0x348) + *(float *)(lVar1 + 0x28) * *(float *)(param_1 + 0x358);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x30);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20);
  fVar7 = (float)*(undefined8 *)(lVar1 + 0x38);
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
  auVar3._0_4_ = fVar5 * *(float *)(lVar2 + 0x30);
  auVar3._4_4_ = fVar6 * *(float *)(lVar2 + 0x34);
  auVar3._8_4_ = fVar7 * *(float *)(lVar2 + 0x38);
  auVar3._12_4_ = fVar8 * *(float *)(lVar2 + 0x3c);
  auVar4._4_4_ = fVar6 + *(float *)(lVar2 + 0x34);
  auVar4._0_4_ = fVar5 + *(float *)(lVar2 + 0x30);
  auVar4._8_4_ = fVar7 + *(float *)(lVar2 + 0x38);
  auVar4._12_4_ = fVar8 + *(float *)(lVar2 + 0x3c);
  auVar4 = NEON_ext(auVar3,auVar4,8,1);
  auVar4 = NEON_ext(auVar4,auVar4,8,1);
  *(long *)(lVar1 + 0x38) = auVar4._8_8_;
  *(long *)(lVar1 + 0x30) = auVar4._0_8_;
  return;
}

