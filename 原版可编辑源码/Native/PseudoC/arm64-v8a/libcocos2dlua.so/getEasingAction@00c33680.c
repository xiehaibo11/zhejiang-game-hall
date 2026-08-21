
/* cocostudio::ActionFrame::getEasingAction(cocos2d::ActionInterval*) */

ActionInterval * __thiscall
cocostudio::ActionFrame::getEasingAction(ActionFrame *this,ActionInterval *param_1)

{
  ActionInterval *pAVar1;
  undefined4 *puVar2;
  
  if (param_1 != (ActionInterval *)0x0) {
    switch(*(undefined4 *)(this + 0x30)) {
    case 1:
      pAVar1 = (ActionInterval *)cocos2d::EaseSineIn::create(param_1);
      return pAVar1;
    case 2:
      pAVar1 = (ActionInterval *)cocos2d::EaseSineOut::create(param_1);
      return pAVar1;
    case 3:
      pAVar1 = (ActionInterval *)cocos2d::EaseSineInOut::create(param_1);
      return pAVar1;
    case 4:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuadraticActionIn::create(param_1);
      return pAVar1;
    case 5:
    case 0xb:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuadraticActionOut::create(param_1);
      return pAVar1;
    case 6:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuadraticActionInOut::create(param_1);
      return pAVar1;
    case 7:
      pAVar1 = (ActionInterval *)cocos2d::EaseCubicActionIn::create(param_1);
      return pAVar1;
    case 8:
      pAVar1 = (ActionInterval *)cocos2d::EaseCubicActionOut::create(param_1);
      return pAVar1;
    case 9:
      pAVar1 = (ActionInterval *)cocos2d::EaseCubicActionInOut::create(param_1);
      return pAVar1;
    case 10:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuarticActionIn::create(param_1);
      return pAVar1;
    case 0xc:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuarticActionInOut::create(param_1);
      return pAVar1;
    case 0xd:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuinticActionIn::create(param_1);
      return pAVar1;
    case 0xe:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuinticActionOut::create(param_1);
      return pAVar1;
    case 0xf:
      pAVar1 = (ActionInterval *)cocos2d::EaseQuinticActionInOut::create(param_1);
      return pAVar1;
    case 0x10:
      pAVar1 = (ActionInterval *)cocos2d::EaseExponentialIn::create(param_1);
      return pAVar1;
    case 0x11:
      pAVar1 = (ActionInterval *)cocos2d::EaseExponentialOut::create(param_1);
      return pAVar1;
    case 0x12:
      pAVar1 = (ActionInterval *)cocos2d::EaseExponentialInOut::create(param_1);
      return pAVar1;
    case 0x13:
      pAVar1 = (ActionInterval *)cocos2d::EaseCircleActionIn::create(param_1);
      return pAVar1;
    case 0x14:
      pAVar1 = (ActionInterval *)cocos2d::EaseCircleActionOut::create(param_1);
      return pAVar1;
    case 0x15:
      pAVar1 = (ActionInterval *)cocos2d::EaseCircleActionInOut::create(param_1);
      return pAVar1;
    case 0x16:
      pAVar1 = (ActionInterval *)cocos2d::EaseElasticIn::create(param_1,0.3);
      return pAVar1;
    case 0x17:
      pAVar1 = (ActionInterval *)cocos2d::EaseElasticOut::create(param_1,0.3);
      return pAVar1;
    case 0x18:
      pAVar1 = (ActionInterval *)cocos2d::EaseElasticInOut::create(param_1,0.3);
      return pAVar1;
    case 0x19:
      pAVar1 = (ActionInterval *)cocos2d::EaseBackIn::create(param_1);
      return pAVar1;
    case 0x1a:
      pAVar1 = (ActionInterval *)cocos2d::EaseBackOut::create(param_1);
      return pAVar1;
    case 0x1b:
      pAVar1 = (ActionInterval *)cocos2d::EaseBackInOut::create(param_1);
      return pAVar1;
    case 0x1c:
      pAVar1 = (ActionInterval *)cocos2d::EaseBounceIn::create(param_1);
      return pAVar1;
    case 0x1d:
      pAVar1 = (ActionInterval *)cocos2d::EaseBounceOut::create(param_1);
      return pAVar1;
    case 0x1e:
      pAVar1 = (ActionInterval *)cocos2d::EaseBounceInOut::create(param_1);
      return pAVar1;
    case 0xffffffff:
      param_1 = (ActionInterval *)cocos2d::EaseBezierAction::create(param_1);
      puVar2 = *(undefined4 **)(this + 0x38);
      (**(code **)(*(long *)param_1 + 0x58))(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    }
  }
  return param_1;
}

