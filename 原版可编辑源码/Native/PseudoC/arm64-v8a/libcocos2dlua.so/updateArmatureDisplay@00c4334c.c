
/* cocostudio::DisplayFactory::updateArmatureDisplay(cocostudio::Bone*, cocos2d::Node*, float) */

void cocostudio::DisplayFactory::updateArmatureDisplay(Bone *param_1,Node *param_2,float param_3)

{
  undefined4 in_register_00005004;
  
  if (param_2 != (Node *)0x0) {
    (**(code **)(*(long *)param_2 + 0x2b0))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c43394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0x3d8))(CONCAT44(in_register_00005004,param_3),param_2);
    return;
  }
  return;
}

