
/* fairygui::TweenManager::clean() */

void fairygui::TweenManager::clean(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = _tweenerPool;
  if (_tweenerPool != DAT_01782c00) {
    do {
      puVar2 = puVar1 + 1;
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != DAT_01782c00);
  }
  DAT_01782c00 = _tweenerPool;
  return;
}

