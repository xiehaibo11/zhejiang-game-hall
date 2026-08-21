
/* cocos2d::ToggleVisibility::update(float) */

void cocos2d::ToggleVisibility::update(float param_1)

{
  uint uVar1;
  long in_x0;
  long *plVar2;
  
  plVar2 = *(long **)(in_x0 + 0x38);
  *(undefined1 *)(in_x0 + 0x50) = 1;
  uVar1 = (**(code **)(*plVar2 + 0x178))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00ed8b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x170))(plVar2,~uVar1 & 1);
  return;
}

