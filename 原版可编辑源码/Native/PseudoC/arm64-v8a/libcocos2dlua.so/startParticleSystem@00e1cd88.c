
/* cocos2d::PUParticleSystem3D::startParticleSystem() */

void __thiscall cocos2d::PUParticleSystem3D::startParticleSystem(PUParticleSystem3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  (**(code **)(*(long *)this + 0x548))();
  if (*(int *)(this + 0x300) != 1) {
    forceStopParticleSystem(this);
    if (*(long **)(this + 0x328) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x328) + 0x18))();
    }
    puVar6 = *(undefined8 **)(this + 0x3a0);
    for (puVar5 = *(undefined8 **)(this + 0x398); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x20))();
    }
    puVar6 = *(undefined8 **)(this + 0x388);
    for (puVar5 = *(undefined8 **)(this + 0x380); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x20))();
    }
    puVar6 = *(undefined8 **)(this + 0x318);
    for (puVar5 = *(undefined8 **)(this + 0x310); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x18))();
    }
    Node::scheduleUpdate((Node *)this);
                    /* try { // try from 00e1ce58 to 00f1cec3 has its CatchHandler @ 00e1c684 */
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
        plVar4[0x98] = (long)this;
        (**(code **)(*plVar4 + 0x540))();
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar3 = *plVar1;
    }
  }
                    /* try { // try from 00e1cec4 to 00f1cecb has its CatchHandler @ 00e1cecc */
                    /* catch() { ... } // from try @ 00e1cec4 with catch @ 00e1cecc
                       try { // try from 00e1cecc to 00f1d013 has its CatchHandler @ 00e1c684 */
  return;
}

