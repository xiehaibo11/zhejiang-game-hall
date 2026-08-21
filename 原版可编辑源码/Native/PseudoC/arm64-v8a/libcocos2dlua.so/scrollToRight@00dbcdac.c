
/* cocos2d::ui::ScrollView::scrollToRight(float, bool) */

void __thiscall cocos2d::ui::ScrollView::scrollToRight(ScrollView *this,float param_1,bool param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_38;
  undefined4 local_34;
  
  fVar4 = *(float *)(this + 0x80);
  pfVar1 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
  fVar3 = *pfVar1;
  lVar2 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))(*(long **)(this + 0x7b8));
  local_34 = *(undefined4 *)(lVar2 + 4);
  local_38 = fVar4 - fVar3;
  startAutoScrollToDestination(this,(Vec2 *)&local_38,param_1,param_2);
  return;
}

