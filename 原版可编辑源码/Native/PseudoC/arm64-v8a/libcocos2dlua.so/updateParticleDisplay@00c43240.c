
/* cocostudio::DisplayFactory::updateParticleDisplay(cocostudio::Bone*, cocos2d::Node*, float) */

void cocostudio::DisplayFactory::updateParticleDisplay(Bone *param_1,Node *param_2,float param_3)

{
  long lVar1;
  undefined4 in_register_00005004;
  BaseData aBStack_d0 [36];
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_98;
  undefined4 local_94;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  BaseData::BaseData(aBStack_d0);
  (**(code **)(*(long *)param_1 + 0x548))(aMStack_78,param_1);
  TransformHelp::matrixToNode(aMStack_78,aBStack_d0);
  cocos2d::Mat4::~Mat4(aMStack_78);
  (**(code **)(*(long *)param_2 + 200))(local_ac,uStack_a8,param_2);
  (**(code **)(*(long *)param_2 + 0x50))(local_98,param_2);
  (**(code **)(*(long *)param_2 + 0x60))(local_94,param_2);
  (**(code **)(*(long *)param_2 + 0x3d8))(CONCAT44(in_register_00005004,param_3),param_2);
  BaseData::~BaseData(aBStack_d0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

