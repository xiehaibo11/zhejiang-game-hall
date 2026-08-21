
/* cocos2d::PURibbonTrail::resetTrail(unsigned long, cocos2d::Node const*) */

void cocos2d::PURibbonTrail::resetTrail(ulong param_1,Node *param_2)

{
  long lVar1;
  long *in_x2;
  long lVar2;
  float in_s1;
  float in_s2;
  float fVar3;
  Quaternion aQStack_a8 [16];
  float local_98;
  float fStack_94;
  float local_90;
  Mat4 aMStack_88 [20];
  Vec4 aVStack_74 [16];
  Quaternion aQStack_64 [28];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x58) + (long)param_2 * 0x18;
  *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
  local_98 = (float)(**(code **)(*in_x2 + 0x100))();
  if (*(long **)(param_1 + 0x1c8) != (long *)0x0) {
    fStack_94 = in_s1;
    local_90 = in_s2;
    (**(code **)(**(long **)(param_1 + 0x1c8) + 0x448))(aMStack_88);
    Mat4::transformVector(aMStack_88,local_98,fStack_94,local_90,1.0,(Vec3 *)&local_98);
    Mat4::~Mat4(aMStack_88);
  }
  lVar2 = *(long *)(param_1 + 0x168);
  fVar3 = *(float *)(*(long *)(param_1 + 0x198) + (long)param_2 * 4);
  (**(code **)(*in_x2 + 0x1a8))(aQStack_a8);
  PUBillboardChain::Element::Element
            ((Element *)aMStack_88,(Vec3 *)&local_98,fVar3,0.0,
             (Vec4 *)(lVar2 + (long)param_2 * 0x10),aQStack_a8);
  Quaternion::~Quaternion(aQStack_a8);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2,aMStack_88);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2,aMStack_88);
  Quaternion::~Quaternion(aQStack_64);
  Vec4::~Vec4(aVStack_74);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

