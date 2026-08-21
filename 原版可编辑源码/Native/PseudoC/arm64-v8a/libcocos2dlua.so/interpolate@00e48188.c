
/* cocos2d::PUSimpleSpline::interpolate(unsigned int, float) const */

void __thiscall
cocos2d::PUSimpleSpline::interpolate(PUSimpleSpline *this,uint param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float local_f8;
  float fStack_f4;
  float local_f0;
  Vec4 aVStack_e8 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  Mat4 aMStack_c8 [64];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = (ulong)(param_1 + 1);
  if (((*(long *)(this + 0x10) - *(long *)(this + 8) >> 2) * -0x5555555555555555 - uVar5 == 0) ||
     (param_2 == 0.0)) {
    uVar5 = (ulong)param_1;
  }
  else if (param_2 != 1.0) {
    Vec4::Vec4(aVStack_e8,param_2 * param_2 * param_2,param_2 * param_2,param_2,1.0);
    lVar7 = *(long *)(this + 8);
    lVar6 = *(long *)(this + 0x20);
    Mat4::Mat4((Mat4 *)&local_88);
    puVar1 = (undefined4 *)(lVar7 + (ulong)param_1 * 0xc);
    local_88 = *puVar1;
    local_84 = puVar1[1];
    puVar2 = (undefined4 *)(lVar6 + (ulong)param_1 * 0xc);
    local_80 = puVar1[2];
    puVar1 = (undefined4 *)(lVar7 + uVar5 * 0xc);
    uStack_7c = 0x3f800000;
    local_78 = *puVar1;
    local_74 = puVar1[1];
    local_70 = puVar1[2];
    uStack_6c = 0x3f800000;
    local_68 = *puVar2;
    local_64 = puVar2[1];
    local_60 = puVar2[2];
    puVar1 = (undefined4 *)(lVar6 + uVar5 * 0xc);
    uStack_5c = 0x3f800000;
    local_58 = *puVar1;
    local_54 = puVar1[1];
    local_50 = puVar1[2];
    uStack_4c = 0x3f800000;
    Mat4::Mat4(aMStack_c8,(Mat4 *)&local_88);
    Mat4::multiply(aMStack_c8,(Mat4 *)(this + 0x38));
    Vec4::Vec4((Vec4 *)&local_f8);
    Mat4::transformVector(aMStack_c8,aVStack_e8,(Vec4 *)&local_f8);
    Mat4::~Mat4(aMStack_c8);
    Vec3::Vec3((Vec3 *)&local_d8,local_f8,fStack_f4,local_f0);
    Vec4::~Vec4((Vec4 *)&local_f8);
    Mat4::~Mat4((Mat4 *)&local_88);
    Vec4::~Vec4(aVStack_e8);
    goto LAB_00e481f8;
  }
  puVar4 = (undefined8 *)(*(long *)(this + 8) + uVar5 * 0xc);
  local_d0 = *(undefined4 *)(puVar4 + 1);
  local_d8 = *puVar4;
LAB_00e481f8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_d8,local_d8._4_4_,local_d0);
}

