
/* cocos2d::TransitionPageTurn::TransitionPageTurn() */

void __thiscall cocos2d::TransitionPageTurn::TransitionPageTurn(TransitionPageTurn *this)

{
  undefined8 uVar1;
  
  TransitionScene::TransitionScene((TransitionScene *)this);
                    /* try { // try from 00f5fe68 to 0105fe83 has its CatchHandler @ 00f5ff18 */
  *(undefined ***)this = &PTR__TransitionPageTurn_0171d228;
  uVar1 = NodeGrid::create();
  *(undefined8 *)(this + 0x388) = uVar1;
  uVar1 = NodeGrid::create();
  *(undefined8 *)(this + 0x390) = uVar1;
  Ref::retain(*(Ref **)(this + 0x388));
  Ref::retain(*(Ref **)(this + 0x390));
                    /* try { // try from 00f5fe94 to 0105fec3 has its CatchHandler @ 00f5ff2c */
  return;
}

