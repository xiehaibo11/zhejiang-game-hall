
/* non-virtual thunk to cocos2d::ui::Layout::createLayoutManager() */

undefined8 __thiscall cocos2d::ui::Layout::createLayoutManager(Layout *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(this + 0xb8);
  if (iVar1 == 3) {
    uVar2 = RelativeLayoutManager::create();
    return uVar2;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      uVar2 = LinearVerticalLayoutManager::create();
      return uVar2;
    }
    return 0;
  }
  uVar2 = LinearHorizontalLayoutManager::create();
  return uVar2;
}

