
/* cocos2d::PUParticleSystem3D::unPrepared() */

void __thiscall cocos2d::PUParticleSystem3D::unPrepared(PUParticleSystem3D *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  PUEmitter *this_00;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
                    /* catch() { ... } // from try @ 00e1b164 with catch @ 00e1bed4 */
  if (this[0x438] != (PUParticleSystem3D)0x0) {
    if (*(long **)(this + 0x328) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e1b424 with catch @ 00e1bee8 */
                    /* catch() { ... } // from try @ 00e1b480 with catch @ 00e1beec */
      (**(code **)(**(long **)(this + 0x328) + 0x40))();
    }
                    /* catch() { ... } // from try @ 00e1ba08 with catch @ 00e1bef0 */
    puVar7 = *(undefined8 **)(this + 0x410);
    for (puVar5 = *(undefined8 **)(this + 0x408); puVar5 != puVar7; puVar5 = puVar5 + 1) {
      (**(code **)(*(long *)*puVar5 + 0x20))();
    }
                    /* catch() { ... } // from try @ 00e1b270 with catch @ 00e1bf18 */
    puVar7 = *(undefined8 **)(this + 0x388);
    for (puVar5 = *(undefined8 **)(this + 0x380); puVar5 != puVar7; puVar5 = puVar5 + 1) {
      this_00 = (PUEmitter *)*puVar5;
      uVar1 = PUEmitter::isEnabled(this_00);
      if ((uVar1 & 1) != 0) {
        (**(code **)(*(long *)this_00 + 0x50))(this_00);
      }
                    /* catch() { ... } // from try @ 00e1b3a4 with catch @ 00e1bf2c */
    }
                    /* catch() { ... } // from try @ 00e1b06c with catch @ 00e1bf5c */
                    /* catch() { ... } // from try @ 00e1ba4c with catch @ 00e1bf60
                       catch() { ... } // from try @ 00e1bd9c with catch @ 00e1bf60 */
    plVar8 = *(long **)(this + 0x318);
                    /* catch() { ... } // from try @ 00e1b0dc with catch @ 00e1bf64
                       catch() { ... } // from try @ 00e1b240 with catch @ 00e1bf64
                       catch() { ... } // from try @ 00e1b2c4 with catch @ 00e1bf64 */
    for (plVar6 = *(long **)(this + 0x310); plVar6 != plVar8; plVar6 = plVar6 + 1) {
      if ((char)((long *)*plVar6)[6] != '\0') {
        (**(code **)(*(long *)*plVar6 + 0x48))();
      }
    }
    lVar2 = *(long *)(this + 0x348);
    if (lVar2 != 0) {
      lVar3 = *(long *)(this + 0x338);
      plVar6 = *(long **)(this + 0x340);
      lVar4 = *plVar6;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
      **(long **)(lVar3 + 8) = lVar4;
      lVar4 = *(long *)(this + 0x350);
      *(long **)(lVar4 + 8) = plVar6;
      *plVar6 = lVar4;
      *(long *)(this + 0x350) = lVar3;
      *(PUParticleSystem3D **)(lVar3 + 8) = this + 0x350;
      *(undefined8 *)(this + 0x348) = 0;
      *(long *)(this + 0x360) = *(long *)(this + 0x360) + lVar2;
    }
    plVar6 = *(long **)(this + 0x3c0);
    *(undefined8 *)(this + 0x330) = *(undefined8 *)(this + 0x340);
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
                    /* catch() { ... } // from try @ 00e1bc0c with catch @ 00e1c00c */
      lVar2 = plVar6[7];
                    /* catch() { ... } // from try @ 00e1ba80 with catch @ 00e1c024 */
      while ((plVar6[5] = lVar2, plVar6 + 6 != (long *)lVar2 && (*(long *)(lVar2 + 0x10) != 0))) {
                    /* catch() { ... } // from try @ 00e1bc78 with catch @ 00e1c030 */
                    /* catch() { ... } // from try @ 00e1bbcc with catch @ 00e1c034 */
        (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + 0x78) + 0x50))();
                    /* catch() { ... } // from try @ 00e1bcf0 with catch @ 00e1c038 */
                    /* catch() { ... } // from try @ 00e1ba98 with catch @ 00e1c03c
                       catch() { ... } // from try @ 00e1bbb4 with catch @ 00e1c03c */
                    /* catch() { ... } // from try @ 00e1b538 with catch @ 00e1c040 */
        if ((long *)plVar6[5] == plVar6 + 6) break;
        lVar2 = *(long *)(plVar6[5] + 8);
      }
      lVar2 = plVar6[8];
                    /* catch() { ... } // from try @ 00e1bb40 with catch @ 00e1c050
                       catch() { ... } // from try @ 00e1bba8 with catch @ 00e1c050 */
      if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 00e1b74c with catch @ 00e1c054 */
        lVar3 = plVar6[6];
        plVar8 = (long *)plVar6[7];
                    /* catch() { ... } // from try @ 00e1bb80 with catch @ 00e1c058 */
        lVar4 = *plVar8;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar4;
        lVar4 = plVar6[9];
        *(long **)(lVar4 + 8) = plVar8;
        *plVar8 = lVar4;
        plVar6[9] = lVar3;
        *(long **)(lVar3 + 8) = plVar6 + 9;
        plVar6[8] = 0;
        plVar6[0xb] = plVar6[0xb] + lVar2;
      }
      plVar6[5] = plVar6[7];
    }
    for (plVar6 = *(long **)(this + 1000); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      lVar2 = plVar6[7];
      while ((plVar6[5] = lVar2, plVar6 + 6 != (long *)lVar2 && (*(long *)(lVar2 + 0x10) != 0))) {
        unPrepared(*(PUParticleSystem3D **)(*(long *)(lVar2 + 0x10) + 0x78));
        if ((long *)plVar6[5] == plVar6 + 6) break;
        lVar2 = *(long *)(plVar6[5] + 8);
      }
      lVar2 = plVar6[8];
      if (lVar2 != 0) {
        lVar3 = plVar6[6];
        plVar8 = (long *)plVar6[7];
        lVar4 = *plVar8;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar4;
        lVar4 = plVar6[9];
        *(long **)(lVar4 + 8) = plVar8;
        *plVar8 = lVar4;
        plVar6[9] = lVar3;
        *(long **)(lVar3 + 8) = plVar6 + 9;
        plVar6[8] = 0;
        plVar6[0xb] = plVar6[0xb] + lVar2;
      }
      plVar6[5] = plVar6[7];
    }
    this[0x438] = (PUParticleSystem3D)0x0;
  }
  return;
}

