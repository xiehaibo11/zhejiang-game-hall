
/* cocos2d::PURibbonTrailRender::particleExpired(cocos2d::PUParticleSystem3D*,
   cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PURibbonTrailRender::particleExpired
          (PURibbonTrailRender *this,PUParticleSystem3D *param_1,PUParticle3D *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x88);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e5ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    return;
  }
  return;
}

