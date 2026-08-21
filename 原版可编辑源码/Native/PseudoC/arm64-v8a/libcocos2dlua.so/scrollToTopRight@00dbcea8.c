
/* cocos2d::ui::ScrollView::scrollToTopRight(float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToTopRight(ScrollView *this,float param_1,bool param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_38;
  float fStack_34;
  
  if (*(int *)(this + 0x7c0) == 3) {
    fVar4 = *(float *)(this + 0x80);
    pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
    fVar3 = *pfVar1;
    fVar5 = *(float *)(this + 0x84);
    lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
    fStack_34 = fVar5 - *(float *)(lVar2 + 4);
    local_38 = fVar4 - fVar3;
    startAutoScrollToDestination(this,(Vec2 *)&local_38,param_1,param_2);
  }
  return;
}

