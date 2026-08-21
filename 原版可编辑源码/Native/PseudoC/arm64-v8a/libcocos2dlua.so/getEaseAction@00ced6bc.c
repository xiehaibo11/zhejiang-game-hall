
/* cocosbuilder::CCBAnimationManager::getEaseAction(cocos2d::ActionInterval*,
   cocosbuilder::CCBKeyframe::EasingType, float) */

ActionInterval * __thiscall
cocosbuilder::CCBAnimationManager::getEaseAction
          (float param_1_00,undefined8 param_2,ActionInterval *param_1,uint param_4)

{
  long lVar1;
  ActionInterval *pAVar2;
  
  if ((param_1 == (ActionInterval *)0x0) ||
     (lVar1 = __dynamic_cast(param_1,&cocos2d::ActionInterval::typeinfo,&cocos2d::Sequence::typeinfo
                             ,0), lVar1 == 0)) {
    switch(param_4) {
    case 0:
      pAVar2 = (ActionInterval *)CCBEaseInstant::create(param_1);
      return pAVar2;
    case 1:
      break;
    case 2:
      pAVar2 = (ActionInterval *)cocos2d::EaseIn::create(param_1,param_1_00);
      return pAVar2;
    case 3:
      pAVar2 = (ActionInterval *)cocos2d::EaseOut::create(param_1,param_1_00);
      return pAVar2;
    case 4:
      pAVar2 = (ActionInterval *)cocos2d::EaseInOut::create(param_1,param_1_00);
      return pAVar2;
    case 5:
      pAVar2 = (ActionInterval *)cocos2d::EaseElasticIn::create(param_1,param_1_00);
      return pAVar2;
    case 6:
      pAVar2 = (ActionInterval *)cocos2d::EaseElasticOut::create(param_1,param_1_00);
      return pAVar2;
    case 7:
      pAVar2 = (ActionInterval *)cocos2d::EaseElasticInOut::create(param_1,param_1_00);
      return pAVar2;
    case 8:
      pAVar2 = (ActionInterval *)cocos2d::EaseBounceIn::create(param_1);
      return pAVar2;
    case 9:
      pAVar2 = (ActionInterval *)cocos2d::EaseBounceOut::create(param_1);
      return pAVar2;
    case 10:
      pAVar2 = (ActionInterval *)cocos2d::EaseBounceInOut::create(param_1);
      return pAVar2;
    case 0xb:
      pAVar2 = (ActionInterval *)cocos2d::EaseBackIn::create(param_1);
      return pAVar2;
    case 0xc:
      pAVar2 = (ActionInterval *)cocos2d::EaseBackOut::create(param_1);
      return pAVar2;
    case 0xd:
      pAVar2 = (ActionInterval *)cocos2d::EaseBackInOut::create(param_1);
      return pAVar2;
    default:
      cocos2d::log("CCBReader: Unknown easing type %d",(ulong)param_4);
    }
  }
  return param_1;
}

