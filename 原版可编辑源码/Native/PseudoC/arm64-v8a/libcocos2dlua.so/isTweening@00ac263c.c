
/* fairygui::TweenManager::isTweening(cocos2d::Ref*, fairygui::TweenPropType) */

undefined8 fairygui::TweenManager::isTweening(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != 0) && (0 < _totalActiveTweens)) {
    lVar1 = 0;
    lVar2 = *_activeTweens;
    while( true ) {
      if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x88) == param_1)) &&
          (*(char *)(lVar2 + 0x9c) == '\0')) &&
         ((param_2 == 0 || (*(int *)(lVar2 + 0x98) == param_2)))) {
        return 1;
      }
      lVar1 = lVar1 + 1;
      if (_totalActiveTweens <= lVar1) break;
      lVar2 = _activeTweens[lVar1];
    }
  }
  return 0;
}

