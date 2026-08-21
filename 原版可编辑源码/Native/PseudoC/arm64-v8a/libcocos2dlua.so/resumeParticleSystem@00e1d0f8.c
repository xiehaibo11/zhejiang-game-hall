
/* cocos2d::PUParticleSystem3D::resumeParticleSystem() */

void __thiscall cocos2d::PUParticleSystem3D::resumeParticleSystem(PUParticleSystem3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(int *)(this + 0x300) == 2) {
    puVar6 = *(undefined8 **)(this + 0x388);
    for (puVar5 = *(undefined8 **)(this + 0x380); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x38))();
    }
    puVar6 = *(undefined8 **)(this + 0x318);
    for (puVar5 = *(undefined8 **)(this + 0x310); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x30))();
    }
    *(undefined4 *)(this + 0x300) = 1;
  }
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar1 != plVar2) {
    lVar3 = *plVar1;
    while( true ) {
      if ((lVar3 != 0) &&
         (plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)
         ) {
        (**(code **)(*plVar4 + 0x558))();
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar3 = *plVar1;
    }
  }
  return;
}

