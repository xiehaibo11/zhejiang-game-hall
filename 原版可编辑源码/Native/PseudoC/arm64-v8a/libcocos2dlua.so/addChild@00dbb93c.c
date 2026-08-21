
/* cocos2d::ui::ScrollView::addChild(cocos2d::Node*, int) */

void __thiscall cocos2d::ui::ScrollView::addChild(ScrollView *this,Node *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1,param_1,param_2);
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
                    /* WARNING: Could not recover jumptable at 0x00dbb9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x7b8) + 0x218))(*(long **)(this + 0x7b8),param_1,param_2,uVar1);
  return;
}

