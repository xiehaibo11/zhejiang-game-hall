
/* cocos2d::TransitionPageTurn::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::TransitionPageTurn::draw
          (TransitionPageTurn *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
  if (this[900] == (TransitionPageTurn)0x0) {
    (**(code **)(**(long **)(this + 0x388) + 0x358))
              (*(long **)(this + 0x388),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x390);
  }
  else {
    (**(code **)(**(long **)(this + 0x390) + 0x358))
              (*(long **)(this + 0x390),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x388);
  }
                    /* WARNING: Could not recover jumptable at 0x00f60108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1,param_2,param_3);
  return;
}

