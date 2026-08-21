
/* cocos2d::ui::ScrollView::scrollToBottomRight(float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToBottomRight(ScrollView *this,float param_1,bool param_2)

{
  float *pfVar1;
  float fVar2;
  float local_38 [2];
  
  if (*(int *)(this + 0x7c0) == 3) {
    fVar2 = *(float *)(this + 0x80);
    pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    local_38[0] = fVar2 - *pfVar1;
    local_38[1] = 0.0;
    startAutoScrollToDestination(this,(Vec2 *)local_38,param_1,param_2);
  }
  return;
}

