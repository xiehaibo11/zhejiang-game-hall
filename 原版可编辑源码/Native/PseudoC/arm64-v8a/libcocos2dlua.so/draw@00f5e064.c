
/* cocos2d::TransitionTurnOffTiles::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::TransitionTurnOffTiles::draw
          (TransitionTurnOffTiles *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00f5e024 with catch @ 00f5e06c */
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
                    /* catch() { ... } // from try @ 00f5e0b4 with catch @ 00f5e088 */
  if (this[900] == (TransitionTurnOffTiles)0x0) {
                    /* try { // try from 00f5e0b4 to 0105e0fb has its CatchHandler @ 00f5e088 */
    (**(code **)(**(long **)(this + 0x370) + 0x358))
              (*(long **)(this + 0x370),param_1,param_2,param_3);
    plVar1 = *(long **)(this + 0x390);
  }
  else {
    (**(code **)(**(long **)(this + 0x390) + 0x358))
              (*(long **)(this + 0x390),param_1,param_2,param_3);
                    /* try { // try from 00f5e0ac to 0105e0b3 has its CatchHandler @ 00f5e0e0 */
    plVar1 = *(long **)(this + 0x370);
  }
                    /* catch() { ... } // from try @ 00f5e0ac with catch @ 00f5e0e0 */
                    /* WARNING: Could not recover jumptable at 0x00f5e0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1,param_2,param_3);
  return;
}

