
/* cocos2d::ui::ScrollView::isOutOfBoundary() */

bool cocos2d::ui::ScrollView::isOutOfBoundary(void)

{
  long *in_x0;
  float fVar1;
  float in_s1;
  
  fVar1 = (float)(**(code **)(*in_x0 + 0x7b8))(in_x0,&Vec2::ZERO);
  return 0.0001 < ABS(fVar1) || 0.0001 < ABS(in_s1);
}

