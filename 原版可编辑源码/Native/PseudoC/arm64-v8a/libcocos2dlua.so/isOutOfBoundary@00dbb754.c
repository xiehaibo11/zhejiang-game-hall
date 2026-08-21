
/* cocos2d::ui::ScrollView::isOutOfBoundary(cocos2d::ui::ScrollView::MoveDirection) */

bool cocos2d::ui::ScrollView::isOutOfBoundary
               (undefined1 param_1 [16],float param_2,long *param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = (float)(**(code **)(*param_3 + 0x7b8))(param_3,&Vec2::ZERO);
  switch(param_4) {
  case 0:
    bVar3 = NAN(param_2);
    bVar2 = param_2 == 0.0;
    bVar1 = param_2 < 0.0;
    goto LAB_00dbb7c8;
  case 1:
    bVar3 = param_2 < 0.0;
    break;
  case 2:
    bVar3 = fVar4 < 0.0;
    break;
  case 3:
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 0.0;
      bVar2 = fVar4 == 0.0;
      bVar3 = false;
    }
LAB_00dbb7c8:
    bVar3 = !bVar2 && bVar1 == bVar3;
    break;
  default:
    bVar3 = false;
  }
  return bVar3;
}

