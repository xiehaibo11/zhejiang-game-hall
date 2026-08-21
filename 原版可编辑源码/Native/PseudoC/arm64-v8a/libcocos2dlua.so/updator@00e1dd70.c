
/* cocos2d::PUParticleSystem3D::updator(float) */

void __thiscall cocos2d::PUParticleSystem3D::updator(PUParticleSystem3D *this,float param_1)

{
  long *plVar1;
  bool local_28 [4];
  bool local_24 [4];
  
  local_24[0] = true;
  local_28[0] = true;
  processParticle(this,(DataPool *)(this + 0x330),local_24,local_28,param_1);
                    /* try { // try from 00e1dda4 to 00f1ddab has its CatchHandler @ 00e1e0ec */
  for (plVar1 = *(long **)(this + 0x3c0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    processParticle(this,(DataPool *)(plVar1 + 5),local_24,local_28,param_1);
  }
  for (plVar1 = *(long **)(this + 1000); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    processParticle(this,(DataPool *)(plVar1 + 5),local_24,local_28,param_1);
  }
  return;
}

