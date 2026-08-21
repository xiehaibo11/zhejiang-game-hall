
/* cocos2d::PUParticleSystem3D::emitParticles(float) */

void __thiscall cocos2d::PUParticleSystem3D::emitParticles(PUParticleSystem3D *this,float param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 in_register_00005004;
  
  puVar3 = *(undefined8 **)(this + 0x388);
                    /* try { // try from 00e1db5c to 00f1db6f has its CatchHandler @ 00e1e11c */
  for (puVar2 = *(undefined8 **)(this + 0x380); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    plVar1 = (long *)*puVar2;
    if ((char)plVar1[0x3f] == '\0') {
      (**(code **)(*plVar1 + 0x68))(CONCAT44(in_register_00005004,param_1),plVar1);
      executeEmitParticles((PUEmitter *)this,(uint)plVar1,param_1);
    }
  }
  return;
}

