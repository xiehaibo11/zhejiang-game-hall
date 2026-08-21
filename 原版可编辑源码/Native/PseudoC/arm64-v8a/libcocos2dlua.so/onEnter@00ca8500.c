
/* cocostudio::timeline::BlendFuncFrame::onEnter(cocostudio::timeline::Frame*, int) */

void cocostudio::timeline::BlendFuncFrame::onEnter(Frame *param_1,int param_2)

{
  long *plVar1;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar1 = (long *)__dynamic_cast(*(long *)(param_1 + 0x50),&cocos2d::Node::typeinfo,
                                      &cocos2d::BlendProtocol::typeinfo,0xfffffffffffffffe),
     plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00ca8548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x58);
    return;
  }
  return;
}

