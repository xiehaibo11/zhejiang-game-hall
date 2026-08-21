
/* cocos2d::ui::PageViewIndicator::setIndexNodesColor(cocos2d::Color3B const&) */

void __thiscall
cocos2d::ui::PageViewIndicator::setIndexNodesColor(PageViewIndicator *this,Color3B *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(this + 0x318);
  puVar3 = *(undefined8 **)(this + 800);
  uVar1 = *(undefined2 *)param_1;
  this[0x34a] = *(PageViewIndicator *)(param_1 + 2);
  *(undefined2 *)(this + 0x348) = uVar1;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x4c0))((long *)*puVar2,param_1);
  }
  return;
}

