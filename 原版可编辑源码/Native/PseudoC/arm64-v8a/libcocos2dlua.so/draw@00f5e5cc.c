
/* cocos2d::TransitionSplitCols::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::TransitionSplitCols::draw
          (TransitionSplitCols *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
                    /* try { // try from 00f5e60c to 0105e617 has its CatchHandler @ 00f5e7c4 */
                    /* WARNING: Could not recover jumptable at 0x00f5e614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x390) + 0x358))(*(long **)(this + 0x390),param_1,param_2,param_3)
  ;
  return;
}

