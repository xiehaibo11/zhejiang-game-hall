
/* cocos2d::TransitionFadeTR::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::TransitionFadeTR::draw(TransitionFadeTR *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
  if (this[900] == (TransitionFadeTR)0x0) {
                    /* try { // try from 00f5ed10 to 0105ed1f has its CatchHandler @ 00f5edec */
    (**(code **)(**(long **)(this + 0x370) + 0x358))
              (*(long **)(this + 0x370),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x390);
  }
  else {
                    /* try { // try from 00f5ece8 to 0105ecf7 has its CatchHandler @ 00f5ee1c */
                    /* try { // try from 00f5ecf8 to 0105ed0f has its CatchHandler @ 00f5ee04 */
    (**(code **)(**(long **)(this + 0x390) + 0x358))
              (*(long **)(this + 0x390),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x370);
  }
                    /* try { // try from 00f5ed3c to 0105ed43 has its CatchHandler @ 00f5ee58 */
                    /* WARNING: Could not recover jumptable at 0x00f5ed44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f5ed44 to 0105ef07 has its CatchHandler @ 00f5e7e8 */
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1,param_2,param_3);
  return;
}

