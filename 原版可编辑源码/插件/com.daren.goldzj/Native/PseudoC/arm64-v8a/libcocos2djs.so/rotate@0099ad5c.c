
/* cocos2d::Mat4::rotate(cocos2d::Quaternion const&) */

void __thiscall cocos2d::Mat4::rotate(Mat4 *this,Quaternion *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
                    /* try { // try from 0099ad6c to 00a9ad77 has its CatchHandler @ 0099af38 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0099ad78 to 00a9ad83 has its CatchHandler @ 0099af34 */
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
                    /* try { // try from 0099ad84 to 00a9aebf has its CatchHandler @ 0099af4c */
  local_5c = 0;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar4 + fVar4;
  fStack_44 = (fVar2 + fVar2) * fVar5;
  fStack_64 = fVar2 * fVar6 + fVar5 * fVar7;
  local_58 = fVar2 * fVar6 - fVar5 * fVar7;
  local_40 = 1.0 - fVar2 * (fVar2 + fVar2);
  local_60 = fVar2 * fVar7 - fVar6 * fVar5;
  local_48 = fVar2 * fVar7 + fVar6 * fVar5;
  local_50 = fVar3 * fVar7 + fStack_44;
  fStack_44 = fVar3 * fVar7 - fStack_44;
  local_68 = (1.0 - fVar3 * fVar6) - fVar4 * fVar7;
  fStack_54 = local_40 - fVar4 * fVar7;
  local_40 = local_40 - fVar3 * fVar6;
  local_4c = 0;
  local_34 = 0;
  local_3c = 0;
  local_2c = 0x3f800000;
  MathUtil::multiplyMatrix((float *)this,&local_68,(float *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

