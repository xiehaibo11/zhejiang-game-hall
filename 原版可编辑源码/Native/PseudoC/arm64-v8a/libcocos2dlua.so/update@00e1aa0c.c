
/* cocos2d::ParticleSystem3D::update(float) */

void __thiscall cocos2d::ParticleSystem3D::update(ParticleSystem3D *this,float param_1)

{
  ParticleSystem3D *pPVar1;
  long *plVar2;
  ParticleSystem3D *pPVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 in_register_00005004;
  
                    /* try { // try from 00e1aa28 to 00f1ab0f has its CatchHandler @ 00e1a740 */
  if (*(int *)(this + 0x300) == 1) {
    pPVar3 = *(ParticleSystem3D **)(this + 0x340);
    pPVar1 = this + 0x338;
    *(ParticleSystem3D **)(this + 0x330) = pPVar3;
    if ((pPVar1 != pPVar3) && (lVar4 = *(long *)(pPVar3 + 0x10), lVar4 != 0)) {
      while( true ) {
        plVar2 = *(long **)(this + 0x308);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))(CONCAT44(in_register_00005004,param_1),plVar2,lVar4);
        }
        puVar6 = *(undefined8 **)(this + 0x318);
        for (puVar5 = *(undefined8 **)(this + 0x310); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          (**(code **)(*(long *)*puVar5 + 0x10))
                    (CONCAT44(in_register_00005004,param_1),(long *)*puVar5,lVar4);
        }
        if (*(ParticleSystem3D **)(this + 0x330) == pPVar1) break;
        pPVar3 = *(ParticleSystem3D **)(*(ParticleSystem3D **)(this + 0x330) + 8);
        *(ParticleSystem3D **)(this + 0x330) = pPVar3;
        if (pPVar1 == pPVar3) {
          return;
        }
        lVar4 = *(long *)(pPVar3 + 0x10);
        if (lVar4 == 0) {
          return;
        }
      }
    }
  }
  return;
}

