
/* cocos2d::TransitionScene::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::TransitionScene::draw(TransitionScene *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
                    /* try { // try from 00f58580 to 01058667 has its CatchHandler @ 00f58580
                       catch() { ... } // from try @ 00f58580 with catch @ 00f58580
                       catch() { ... } // from try @ 00f586fc with catch @ 00f58580 */
  if (this[900] == (TransitionScene)0x0) {
    (**(code **)(**(long **)(this + 0x370) + 0x358))
              (*(long **)(this + 0x370),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x378);
  }
  else {
    (**(code **)(**(long **)(this + 0x378) + 0x358))
              (*(long **)(this + 0x378),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x370);
  }
                    /* WARNING: Could not recover jumptable at 0x00f585ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1,param_2,param_3);
  return;
}

