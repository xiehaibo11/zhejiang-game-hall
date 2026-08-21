
/* cocos2d::ui::ScrollView::processScrollEvent(cocos2d::ui::ScrollView::MoveDirection, bool) */

void __thiscall
cocos2d::ui::ScrollView::processScrollEvent(ScrollView *this,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(param_2 & 0xffffffff) {
  case 0:
    uVar1 = 5;
    if ((param_3 & 1) == 0) {
      uVar1 = 0;
    }
    dispatchEvent(this,uVar1,uVar1);
    return;
  case 1:
    uVar1 = 6;
    if ((param_3 & 1) == 0) {
      uVar1 = 1;
    }
    dispatchEvent(this,uVar1,uVar1);
    return;
  case 2:
    uVar2 = 2;
    uVar1 = 7;
    break;
  case 3:
    uVar2 = 3;
    uVar1 = 8;
    break;
  default:
    dispatchEvent(this,param_2,param_2 & 0xffffffff);
    return;
  }
  if ((param_3 & 1) == 0) {
    uVar1 = uVar2;
  }
  dispatchEvent(this,uVar1,uVar1);
  return;
}

