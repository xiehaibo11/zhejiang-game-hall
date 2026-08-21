
/* cocos2d::ui::PageViewIndicator::setIndexNodesScale(float) */

void __thiscall
cocos2d::ui::PageViewIndicator::setIndexNodesScale(PageViewIndicator *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(float *)(this + 0x344) != param_1) {
    *(float *)(this + 0x344) = param_1;
    (**(code **)(**(long **)(this + 0x330) + 0x80))();
    puVar2 = *(undefined8 **)(this + 800);
    for (puVar1 = *(undefined8 **)(this + 0x318); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(code **)(*(long *)*puVar1 + 0x80))(*(undefined4 *)(this + 0x344));
    }
    rearrange(this);
    return;
  }
  return;
}

