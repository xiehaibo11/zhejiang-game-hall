
/* fairygui::TweenManager::killTweens(cocos2d::Ref*, fairygui::TweenPropType, bool) */

undefined4 fairygui::TweenManager::killTweens(long param_1,int param_2,byte param_3)

{
  GTweener *this;
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 == 0) || (uVar2 = (ulong)_totalActiveTweens, (int)_totalActiveTweens < 1)) {
    uVar1 = 0;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    do {
      this = *(GTweener **)(_activeTweens + uVar3 * 8);
      if ((((this != (GTweener *)0x0) && (*(long *)(this + 0x88) == param_1)) &&
          (this[0x9c] == (GTweener)0x0)) && ((param_2 == 0 || (*(int *)(this + 0x98) == param_2))))
      {
        GTweener::kill(this,(bool)(param_3 & 1));
        uVar1 = 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return uVar1;
}

