
/* cocostudio::DisplayFactory::updateDisplay(cocostudio::Bone*, float, bool) */

void cocostudio::DisplayFactory::updateDisplay(Bone *param_1,float param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  Node *this;
  long *plVar3;
  Mat4 *pMVar4;
  Mat4 *pMVar5;
  undefined8 *puVar6;
  cocos2d *this_00;
  Mat4 *in_x2;
  undefined4 in_register_00005004;
  undefined4 in_s1;
  undefined8 local_d0;
  Mat4 aMStack_c8 [64];
  Mat4 aMStack_88 [48];
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Node *)Bone::getDisplayRenderNode(param_1);
  if (this == (Node *)0x0) goto LAB_00c431e4;
  iVar2 = Bone::getDisplayRenderNodeType(param_1);
  if (iVar2 == 2) {
    updateParticleDisplay(param_1,this,param_2);
joined_r0x00c430dc:
    if (!param_3) goto LAB_00c431e4;
  }
  else {
    if (iVar2 == 1) {
      (**(code **)(*(long *)this + 0x2b0))(this);
      (**(code **)(*(long *)this + 0x3d8))(CONCAT44(in_register_00005004,param_2),this);
      goto joined_r0x00c430dc;
    }
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_1 + 0x548))(aMStack_88,param_1);
      cocos2d::Node::setAdditionalTransform(this,aMStack_88);
      cocos2d::Mat4::~Mat4(aMStack_88);
      goto joined_r0x00c430dc;
    }
    if (!param_3) goto LAB_00c431e4;
    Skin::updateArmatureTransform();
  }
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x588))(param_1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
  pMVar4 = (Mat4 *)(**(code **)(*plVar3 + 0x40))();
  if (pMVar4 != (Mat4 *)0x0) {
    pMVar5 = (Mat4 *)(**(code **)(*(long *)this + 1000))(this);
    cocos2d::Mat4::Mat4(aMStack_88,pMVar5);
    puVar6 = (undefined8 *)(**(code **)(*(long *)this + 0x158))(this);
    local_d0 = *puVar6;
    local_58 = cocos2d::PointApplyTransform((Vec2 *)&local_d0,aMStack_88);
    local_d0 = CONCAT44(in_s1,local_58);
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x570))(param_1);
    this_00 = (cocos2d *)(**(code **)(*plVar3 + 1000))();
    cocos2d::TransformConcat(this_00,aMStack_88,in_x2);
    ColliderDetector::updateTransform(pMVar4);
    cocos2d::Mat4::~Mat4(aMStack_c8);
    cocos2d::Mat4::~Mat4(aMStack_88);
  }
LAB_00c431e4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

