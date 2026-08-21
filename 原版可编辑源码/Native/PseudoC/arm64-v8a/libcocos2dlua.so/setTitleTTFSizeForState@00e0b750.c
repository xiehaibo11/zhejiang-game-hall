
/* cocos2d::extension::ControlButton::setTitleTTFSizeForState(float,
   cocos2d::extension::Control::State) */

void cocos2d::extension::ControlButton::setTitleTTFSizeForState(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x6d8))();
                    /* try { // try from 00e0b774 to 00f0b8b3 has its CatchHandler @ 00e0b774
                       catch() { ... } // from try @ 00e0b774 with catch @ 00e0b774
                       catch() { ... } // from try @ 00e0b8bc with catch @ 00e0b774 */
  if (((lVar1 != 0) &&
      (lVar1 = __dynamic_cast(lVar1,&Node::typeinfo,&LabelProtocol::typeinfo,0xfffffffffffffffe),
      lVar1 != 0)) &&
     (plVar2 = (long *)__dynamic_cast(lVar1,&LabelProtocol::typeinfo,&Label::typeinfo,0x2f8),
     plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e0b7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x570))(param_1);
    return;
  }
  return;
}

