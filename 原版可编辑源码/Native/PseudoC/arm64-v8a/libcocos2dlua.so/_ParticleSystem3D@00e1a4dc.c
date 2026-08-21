
/* cocos2d::ParticleSystem3D::~ParticleSystem3D() */

void __thiscall cocos2d::ParticleSystem3D::~ParticleSystem3D(ParticleSystem3D *this)

{
  ParticleSystem3D *pPVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ParticleSystem3D *pPVar7;
  
  puVar5 = *(undefined8 **)(this + 0x310);
  puVar6 = *(undefined8 **)(this + 0x318);
  *(undefined ***)this = &PTR__ParticleSystem3D_016edf40;
  *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystem3D_016ee4b8;
  if (puVar5 != puVar6) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar6 != puVar5);
                    /* try { // try from 00e1a530 to 00f1a537 has its CatchHandler @ 00e1a53c */
    puVar5 = *(undefined8 **)(this + 0x310);
  }
                    /* try { // try from 00e1a538 to 00f1a53f has its CatchHandler @ 00e1a3ec */
  *(undefined8 **)(this + 0x318) = puVar5;
                    /* catch() { ... } // from try @ 00e1a498 with catch @ 00e1a53c
                       catch() { ... } // from try @ 00e1a530 with catch @ 00e1a53c */
  if (*(Ref **)(this + 0x308) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x308));
  }
  if (*(Ref **)(this + 0x328) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x328));
  }
  if (*(long *)(this + 0x360) != 0) {
    lVar3 = *(long *)(this + 0x350);
    pPVar1 = *(ParticleSystem3D **)(this + 0x358);
    lVar4 = *(long *)pPVar1;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(this + 0x360) = 0;
    while (pPVar1 != this + 0x350) {
      pPVar7 = *(ParticleSystem3D **)(pPVar1 + 8);
      operator_delete(pPVar1);
      pPVar1 = pPVar7;
    }
  }
  if (*(long *)(this + 0x348) != 0) {
    lVar3 = *(long *)(this + 0x338);
    pPVar1 = *(ParticleSystem3D **)(this + 0x340);
    lVar4 = *(long *)pPVar1;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(this + 0x348) = 0;
    while (pPVar1 != this + 0x338) {
      pPVar7 = *(ParticleSystem3D **)(pPVar1 + 8);
      operator_delete(pPVar1);
      pPVar1 = pPVar7;
    }
  }
  pvVar2 = *(void **)(this + 0x310);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x318) = pvVar2;
    operator_delete(pvVar2);
  }
  Node::~Node((Node *)this);
  return;
}

