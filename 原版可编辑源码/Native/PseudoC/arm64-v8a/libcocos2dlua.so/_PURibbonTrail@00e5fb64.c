
/* cocos2d::PURibbonTrail::~PURibbonTrail() */

void __thiscall cocos2d::PURibbonTrail::~PURibbonTrail(PURibbonTrail *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  Vec4 *pVVar3;
  Vec4 *pVVar4;
  Vec4 *pVVar5;
  
  pvVar2 = *(void **)(this + 0x1b0);
  *(undefined ***)this = &PTR__PURibbonTrail_016f3028;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1b8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x198);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a0) = pvVar2;
    operator_delete(pvVar2);
  }
  pVVar5 = *(Vec4 **)(this + 0x180);
  if (pVVar5 != (Vec4 *)0x0) {
    pVVar4 = *(Vec4 **)(this + 0x188);
    pVVar3 = pVVar5;
    if (pVVar4 != pVVar5) {
      do {
        pVVar4 = pVVar4 + -0x10;
        Vec4::~Vec4(pVVar4);
      } while (pVVar5 != pVVar4);
      pVVar3 = *(Vec4 **)(this + 0x180);
    }
    *(Vec4 **)(this + 0x188) = pVVar5;
    operator_delete(pVVar3);
  }
  pVVar5 = *(Vec4 **)(this + 0x168);
  if (pVVar5 != (Vec4 *)0x0) {
    pVVar4 = *(Vec4 **)(this + 0x170);
    pVVar3 = pVVar5;
    if (pVVar4 != pVVar5) {
      do {
        pVVar4 = pVVar4 + -0x10;
        Vec4::~Vec4(pVVar4);
      } while (pVVar5 != pVVar4);
      pVVar3 = *(Vec4 **)(this + 0x168);
    }
    *(Vec4 **)(this + 0x170) = pVVar5;
    operator_delete(pVVar3);
  }
  puVar1 = *(void **)(this + 0x140);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x130);
  *(undefined8 *)(this + 0x130) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x118);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x100);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xe8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar2;
    operator_delete(pvVar2);
  }
  PUBillboardChain::~PUBillboardChain((PUBillboardChain *)this);
  return;
}

