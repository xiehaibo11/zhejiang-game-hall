
/* cocos2d::renderer::Scene::reset() */

void __thiscall cocos2d::renderer::Scene::reset(Scene *this)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
                    /* try { // try from 009c81d0 to 00ac8223 has its CatchHandler @ 009c81d0
                       catch() { ... } // from try @ 009c81d0 with catch @ 009c81d0
                       catch() { ... } // from try @ 009c837c with catch @ 009c81d0 */
  plVar5 = *(long **)(this + 0x30);
  plVar3 = *(long **)(this + 0x38);
  if (plVar5 != plVar3) {
    uVar2 = ((ulong)((long)plVar3 + (-8 - (long)plVar5)) >> 3) + 1;
    if (1 < uVar2) {
      uVar6 = uVar2 & 0x3ffffffffffffffe;
      plVar7 = plVar5 + 1;
      plVar5 = plVar5 + uVar6;
      uVar8 = uVar6;
      do {
        plVar1 = plVar7 + -1;
        lVar4 = *plVar7;
        uVar8 = uVar8 - 2;
        plVar7 = plVar7 + 2;
        *(undefined4 *)(*plVar1 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x74) = 0xffffffff;
      } while (uVar8 != 0);
                    /* try { // try from 009c8224 to 00ac823b has its CatchHandler @ 009c83f8 */
      if (uVar2 == uVar6) {
        return;
      }
    }
    do {
      plVar7 = plVar5 + 1;
      *(undefined4 *)(*plVar5 + 0x74) = 0xffffffff;
      plVar5 = plVar7;
    } while (plVar3 != plVar7);
  }
  return;
}

