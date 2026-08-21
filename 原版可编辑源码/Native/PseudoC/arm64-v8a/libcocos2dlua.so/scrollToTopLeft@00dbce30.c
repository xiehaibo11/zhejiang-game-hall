
/* cocos2d::ui::ScrollView::scrollToTopLeft(float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToTopLeft(ScrollView *this,float param_1,bool param_2)

{
  long lVar1;
  float fVar2;
  undefined4 local_38;
  float local_34;
  
  if (*(int *)(this + 0x7c0) == 3) {
    fVar2 = *(float *)(this + 0x84);
    lVar1 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    local_34 = fVar2 - *(float *)(lVar1 + 4);
    local_38 = 0;
    startAutoScrollToDestination(this,(Vec2 *)&local_38,param_1,param_2);
  }
  return;
}

