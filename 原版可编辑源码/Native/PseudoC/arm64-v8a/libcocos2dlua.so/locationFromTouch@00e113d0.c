
/* cocos2d::extension::ControlSlider::locationFromTouch(cocos2d::Touch*) */

void cocos2d::extension::ControlSlider::locationFromTouch(Touch *param_1)

{
  long lVar1;
  float *pfVar2;
  Touch *in_x1;
  float fVar3;
  undefined4 in_s1;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (float)Touch::getLocation(in_x1);
  fVar3 = (float)Node::convertToNodeSpace((Node *)param_1,(Vec2 *)&local_40);
  local_3c = in_s1;
  if (0.0 <= fVar3) {
    local_40 = fVar3;
    pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
    if (*pfVar2 < fVar3) {
      pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
      local_40 = *pfVar2;
    }
  }
  else {
    local_40 = 0.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00e11480 to 00f1184b has its CatchHandler @ 00e11350 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40,local_3c);
}

