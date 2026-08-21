
/* cocos2d::__Dictionary::removeAllObjects() */

void __thiscall cocos2d::__Dictionary::removeAllObjects(__Dictionary *this)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  pvVar8 = *(void **)(this + 0x30);
                    /* try { // try from 00ffa060 to 010fa06f has its CatchHandler @ 00ffa13c */
  if (pvVar8 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00ff9f40 with catch @ 00ffa1a4
                       catch() { ... } // from try @ 00ffa010 with catch @ 00ffa1a4 */
    return;
  }
  lVar6 = *(long *)((long)pvVar8 + 0x118);
  pvVar3 = *(void **)((long)pvVar8 + 0x120);
  do {
    if ((lVar6 == 0) && (*(long *)((long)pvVar8 + 0x120) == 0)) {
                    /* catch() { ... } // from try @ 00ffa0b8 with catch @ 00ffa178 */
      free((void *)**(undefined8 **)(*(long *)(this + 0x30) + 0x110));
      free(*(void **)(*(long *)(this + 0x30) + 0x110));
      *(undefined8 *)(this + 0x30) = 0;
    }
    else {
      lVar5 = *(long *)(this + 0x30);
      lVar7 = *(long *)(lVar5 + 0x110);
      lVar2 = *(long *)(lVar7 + 0x20);
                    /* try { // try from 00ffa0b8 to 010fa0f7 has its CatchHandler @ 00ffa178 */
      if (pvVar8 == (void *)(*(long *)(lVar7 + 0x18) - lVar2)) {
                    /* catch() { ... } // from try @ 00ffa034 with catch @ 00ffa140
                       catch() { ... } // from try @ 00ffa10c with catch @ 00ffa140 */
        *(long *)(lVar7 + 0x18) = lVar2 + lVar6;
        lVar7 = *(long *)((long)pvVar8 + 0x120);
        if (lVar6 != 0) goto LAB_00ffa0c8;
LAB_00ffa150:
        *(long *)(this + 0x30) = lVar7;
        lVar5 = lVar7;
      }
      else {
        lVar7 = *(long *)((long)pvVar8 + 0x120);
        if (lVar6 == 0) goto LAB_00ffa150;
LAB_00ffa0c8:
        *(long *)(lVar2 + lVar6 + 0x10) = lVar7;
        lVar7 = *(long *)((long)pvVar8 + 0x120);
      }
      if (lVar7 != 0) {
        *(long *)(*(long *)(*(long *)(lVar5 + 0x110) + 0x20) + lVar7 + 8) = lVar6;
      }
      plVar4 = *(long **)(lVar5 + 0x110);
      plVar1 = (long *)(*plVar4 +
                       (ulong)((int)plVar4[1] - 1U & *(uint *)((long)pvVar8 + 0x144)) * 0x10);
                    /* try { // try from 00ffa10c to 010fa113 has its CatchHandler @ 00ffa140 */
                    /* try { // try from 00ffa114 to 010fa1c7 has its CatchHandler @ 00ff9f04 */
      *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
                    /* catch() { ... } // from try @ 00ffa080 with catch @ 00ffa11c */
      if (*plVar1 == (long)pvVar8 + 0x110) {
        *plVar1 = *(long *)((long)pvVar8 + 0x130);
        lVar6 = *(long *)((long)pvVar8 + 0x128);
      }
      else {
                    /* catch() { ... } // from try @ 00ffa024 with catch @ 00ffa120 */
        lVar6 = *(long *)((long)pvVar8 + 0x128);
                    /* catch() { ... } // from try @ 00ffa088 with catch @ 00ffa124 */
      }
                    /* catch() { ... } // from try @ 00ff9f74 with catch @ 00ffa170 */
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((long)pvVar8 + 0x130);
      }
      if (*(long *)((long)pvVar8 + 0x130) != 0) {
        *(long *)(*(long *)((long)pvVar8 + 0x130) + 0x18) = lVar6;
                    /* catch() { ... } // from try @ 00ffa060 with catch @ 00ffa13c */
      }
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
                    /* try { // try from 00ffa080 to 010fa087 has its CatchHandler @ 00ffa11c */
    Ref::release(*(Ref **)((long)pvVar8 + 0x108));
                    /* try { // try from 00ffa088 to 010fa0a7 has its CatchHandler @ 00ffa124 */
    operator_delete(pvVar8);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = *(long *)((long)pvVar3 + 0x118);
    pvVar8 = pvVar3;
    pvVar3 = *(void **)((long)pvVar3 + 0x120);
  } while( true );
}

