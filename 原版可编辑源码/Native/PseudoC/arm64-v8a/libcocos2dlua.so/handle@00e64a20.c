
/* cocos2d::PUDoStopSystemEventHandler::handle(cocos2d::PUParticleSystem3D*, cocos2d::PUParticle3D*,
   float) */

void cocos2d::PUDoStopSystemEventHandler::handle
               (PUParticleSystem3D *param_1,PUParticle3D *param_2,float param_3)

{
  if (*(long **)(param_2 + 0x4c0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e64a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x4c0) + 0x548))();
    return;
  }
  return;
}

