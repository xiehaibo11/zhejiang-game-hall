
/* cocos2d::ui::ListView::setDirection(cocos2d::ui::ScrollView::Direction) */

void __thiscall cocos2d::ui::ListView::setDirection(ListView *this,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
  case 3:
    goto switchD_00db66c0_caseD_0;
  case 1:
    lVar2 = *(long *)this;
    uVar1 = 1;
    break;
  case 2:
    lVar2 = *(long *)this;
    uVar1 = 2;
    break;
  default:
    return;
  }
  (**(code **)(lVar2 + 0x690))(this,uVar1);
switchD_00db66c0_caseD_0:
  ScrollView::setDirection((ScrollView *)this,param_2);
  return;
}

