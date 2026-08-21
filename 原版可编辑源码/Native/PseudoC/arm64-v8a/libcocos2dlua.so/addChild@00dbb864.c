
/* cocos2d::ui::ScrollView::addChild(cocos2d::Node*) */

void __thiscall cocos2d::ui::ScrollView::addChild(ScrollView *this,Node *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
                    /* try { // try from 00dbb8a8 to 00ebbab7 has its CatchHandler @ 00dbb8a8
                       catch() { ... } // from try @ 00dbb8a8 with catch @ 00dbb8a8
                       catch() { ... } // from try @ 00dbbac0 with catch @ 00dbb8a8 */
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
                    /* WARNING: Could not recover jumptable at 0x00dbb8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x7b8) + 0x218))(*(long **)(this + 0x7b8),param_1,uVar1,uVar2);
  return;
}

