
/* cocos2d::PUParticleSystem3D::pauseParticleSystem() */

void __thiscall cocos2d::PUParticleSystem3D::pauseParticleSystem(PUParticleSystem3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
                    /* try { // try from 00e1d014 to 00f1d34f has its CatchHandler @ 00e1d014
                       catch() { ... } // from try @ 00e1d014 with catch @ 00e1d014
                       catch() { ... } // from try @ 00e1d4b4 with catch @ 00e1d014 */
  if (*(int *)(this + 0x300) == 1) {
    puVar6 = *(undefined8 **)(this + 0x388);
    for (puVar5 = *(undefined8 **)(this + 0x380); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x30))();
    }
    puVar6 = *(undefined8 **)(this + 0x318);
    for (puVar5 = *(undefined8 **)(this + 0x310); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x28))();
    }
    *(undefined4 *)(this + 0x300) = 2;
  }
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar1 != plVar2) {
    lVar3 = *plVar1;
    while( true ) {
      if ((lVar3 != 0) &&
         (plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)
         ) {
        (**(code **)(*plVar4 + 0x550))();
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar3 = *plVar1;
    }
  }
  return;
}

