
/* fairygui::TweenManager::getTween(cocos2d::Ref*, fairygui::TweenPropType) */

long fairygui::TweenManager::getTween(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((param_1 == 0) || (uVar2 = (ulong)_totalActiveTweens, (int)_totalActiveTweens < 1)) {
LAB_00ac27d0:
    lVar1 = 0;
  }
  else {
    lVar1 = *_activeTweens;
    plVar3 = _activeTweens;
    if (lVar1 != 0) goto LAB_00ac27a8;
    do {
      do {
        uVar2 = uVar2 - 1;
        plVar3 = plVar3 + 1;
        if (uVar2 == 0) goto LAB_00ac27d0;
        lVar1 = *plVar3;
      } while (lVar1 == 0);
LAB_00ac27a8:
    } while (((*(long *)(lVar1 + 0x88) != param_1) || (*(char *)(lVar1 + 0x9c) != '\0')) ||
            ((param_2 != 0 && (*(int *)(lVar1 + 0x98) != param_2))));
  }
  return lVar1;
}

