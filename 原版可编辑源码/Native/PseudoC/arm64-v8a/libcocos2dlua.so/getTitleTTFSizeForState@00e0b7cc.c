
/* cocos2d::extension::ControlButton::getTitleTTFSizeForState(cocos2d::extension::Control::State) */

undefined1  [16] cocos2d::extension::ControlButton::getTitleTTFSizeForState(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  lVar1 = (**(code **)(*param_1 + 0x6d8))();
  if (((lVar1 != 0) &&
      (lVar1 = __dynamic_cast(lVar1,&Node::typeinfo,&LabelProtocol::typeinfo,0xfffffffffffffffe),
      lVar1 != 0)) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&LabelProtocol::typeinfo,&Label::typeinfo,0x2f8),
     plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e0b828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x578))();
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  return ZEXT816(0);
}

