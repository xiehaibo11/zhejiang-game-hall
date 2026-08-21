
/* cocos2d::Sprite3D::~Sprite3D() */

void __thiscall cocos2d::Sprite3D::~Sprite3D(Sprite3D *this)

{
  Sprite3D *pSVar1;
  void *pvVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar6 = *(undefined8 **)(this + 0x350);
  puVar7 = *(undefined8 **)(this + 0x358);
  *(undefined ***)this = &PTR__Sprite3D_016d3dd0;
  *(undefined ***)(this + 0x2f8) = &PTR__Sprite3D_016d4320;
  if (puVar6 != puVar7) {
    do {
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x350);
  }
  puVar7 = *(undefined8 **)(this + 0x308);
  puVar9 = *(undefined8 **)(this + 0x310);
                    /* try { // try from 00d3f16c to 00e3f1e3 has its CatchHandler @ 00d3f16c
                       catch() { ... } // from try @ 00d3f16c with catch @ 00d3f16c
                       catch() { ... } // from try @ 00d3f22c with catch @ 00d3f16c */
  *(undefined8 **)(this + 0x358) = puVar6;
  if (puVar7 != puVar9) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar9 != puVar7);
    puVar7 = *(undefined8 **)(this + 0x308);
  }
  *(undefined8 **)(this + 0x310) = puVar7;
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
    *(undefined8 *)(this + 0x300) = 0;
  }
  for (plVar8 = *(long **)(this + 0x330); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    (**(code **)(*(long *)this + 0x280))(this,plVar8[5],1);
  }
  if (*(long *)(this + 0x338) != 0) {
    puVar6 = *(void **)(this + 0x330);
    while (puVar6 != (void *)0x0) {
                    /* try { // try from 00d3f1f8 to 00e3f207 has its CatchHandler @ 00d3f290 */
      pvVar2 = (void *)*puVar6;
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        operator_delete((void *)puVar6[4]);
      }
                    /* try { // try from 00d3f1e4 to 00e3f1f3 has its CatchHandler @ 00d3f2a8 */
      operator_delete(puVar6);
      puVar6 = pvVar2;
    }
                    /* try { // try from 00d3f20c to 00e3f21b has its CatchHandler @ 00d3f270 */
    lVar3 = *(long *)(this + 0x328);
    *(undefined8 *)(this + 0x330) = 0;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
                    /* try { // try from 00d3f220 to 00e3f22b has its CatchHandler @ 00d3f23c */
        *(undefined8 *)(*(long *)(this + 800) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
                    /* try { // try from 00d3f22c to 00e3f2bb has its CatchHandler @ 00d3f16c */
      } while (lVar3 != lVar5);
    }
    *(undefined8 *)(this + 0x338) = 0;
  }
  if (((byte)this[0x428] & 1) != 0) {
                    /* catch() { ... } // from try @ 00d3f220 with catch @ 00d3f23c */
    operator_delete(*(void **)(this + 0x438));
  }
  if (((byte)this[0x410] & 1) != 0) {
    operator_delete(*(void **)(this + 0x420));
  }
  pSVar1 = *(Sprite3D **)(this + 0x3f0);
  if (this + 0x3d0 == pSVar1) {
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (Sprite3D *)0x0) goto LAB_00d3f280;
    pcVar4 = *(code **)(*(long *)pSVar1 + 0x28);
                    /* catch() { ... } // from try @ 00d3f20c with catch @ 00d3f270 */
  }
  (*pcVar4)();
LAB_00d3f280:
  Mat4::~Mat4((Mat4 *)(this + 0x380));
  puVar6 = *(undefined8 **)(this + 0x350);
  puVar7 = *(undefined8 **)(this + 0x358);
                    /* catch() { ... } // from try @ 00d3f1f8 with catch @ 00d3f290 */
  if (puVar6 != puVar7) {
    do {
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
                    /* catch() { ... } // from try @ 00d3f1e4 with catch @ 00d3f2a8 */
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x350);
  }
  *(undefined8 **)(this + 0x358) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x358) = puVar6;
    operator_delete(puVar6);
  }
  puVar6 = *(void **)(this + 0x330);
  while (puVar6 != (void *)0x0) {
    pvVar2 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = pvVar2;
  }
  pvVar2 = *(void **)(this + 800);
  *(undefined8 *)(this + 800) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar6 = *(undefined8 **)(this + 0x308);
  puVar7 = *(undefined8 **)(this + 0x310);
  if (puVar6 != puVar7) {
    do {
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar7 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x308);
  }
  *(undefined8 **)(this + 0x310) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x310) = puVar6;
    operator_delete(puVar6);
  }
  Node::~Node((Node *)this);
  return;
}

