
/* cocos2d::ParticleSystem3D::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void cocos2d::ParticleSystem3D::draw(Renderer *param_1,Mat4 *param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00e1a9f4 with catch @ 00e1aae0 */
                    /* catch() { ... } // from try @ 00e1a7a0 with catch @ 00e1aafc */
  iVar1 = (**(code **)(*(long *)param_1 + 0x560))();
  if ((iVar1 != 0) && (plVar2 = *(long **)(param_1 + 0x328), plVar2 != (long *)0x0)) {
                    /* try { // try from 00e1ab10 to 00f1ac87 has its CatchHandler @ 00e1ab10
                       catch() { ... } // from try @ 00e1ab10 with catch @ 00e1ab10
                       catch() { ... } // from try @ 00e1ad30 with catch @ 00e1ab10
                       catch() { ... } // from try @ 00e1af84 with catch @ 00e1ab10
                       catch() { ... } // from try @ 00e1b16c with catch @ 00e1ab10
                       catch() { ... } // from try @ 00e1b1f4 with catch @ 00e1ab10
                       catch() { ... } // from try @ 00e1be68 with catch @ 00e1ab10
                       catch() { ... } // from try @ 00e1be7c with catch @ 00e1ab10 */
                    /* WARNING: Could not recover jumptable at 0x00e1ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_1);
    return;
  }
  return;
}

