
long * spIkConstraint_create(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 00d6dfec with catch @ 00d6e514
                       catch() { ... } // from try @ 00d6e204 with catch @ 00d6e514
                       catch() { ... } // from try @ 00d6e35c with catch @ 00d6e514 */
                    /* catch() { ... } // from try @ 00d6e27c with catch @ 00d6e518 */
  plVar2 = (long *)_spCalloc(1,0x28,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/IkConstraint.c"
                             ,0x27);
                    /* catch() { ... } // from try @ 00d6e288 with catch @ 00d6e51c */
  *plVar2 = param_1;
                    /* catch() { ... } // from try @ 00d6e3a8 with catch @ 00d6e520 */
                    /* catch() { ... } // from try @ 00d6e39c with catch @ 00d6e524 */
                    /* catch() { ... } // from try @ 00d6e394 with catch @ 00d6e528 */
                    /* catch() { ... } // from try @ 00d6e124 with catch @ 00d6e52c */
                    /* catch() { ... } // from try @ 00d6e130 with catch @ 00d6e530 */
  plVar2[4] = *(long *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(plVar2 + 1) = iVar1;
  lVar3 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/IkConstraint.c"
                    ,0x2d);
                    /* catch() { ... } // from try @ 00d6e43c with catch @ 00d6e544 */
  lVar5 = *plVar2;
  plVar2[2] = lVar3;
  if (0 < (int)plVar2[1]) {
    lVar3 = 0;
    do {
      lVar6 = lVar3 * 8;
                    /* catch() { ... } // from try @ 00d6e264 with catch @ 00d6e564 */
                    /* catch() { ... } // from try @ 00d6e254 with catch @ 00d6e568 */
                    /* catch() { ... } // from try @ 00d6e24c with catch @ 00d6e56c */
                    /* catch() { ... } // from try @ 00d6e0f4 with catch @ 00d6e570 */
      uVar4 = spSkeleton_findBone(param_2,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar5 + 0x10) + lVar6) + 8));
                    /* catch() { ... } // from try @ 00d6e0fc with catch @ 00d6e574 */
                    /* catch() { ... } // from try @ 00d6e10c with catch @ 00d6e578 */
      lVar3 = lVar3 + 1;
                    /* catch() { ... } // from try @ 00d6e23c with catch @ 00d6e57c
                       catch() { ... } // from try @ 00d6e274 with catch @ 00d6e57c
                       catch() { ... } // from try @ 00d6e2cc with catch @ 00d6e57c */
      *(undefined8 *)(plVar2[2] + lVar6) = uVar4;
                    /* catch() { ... } // from try @ 00d6e0e4 with catch @ 00d6e580
                       catch() { ... } // from try @ 00d6e11c with catch @ 00d6e580
                       catch() { ... } // from try @ 00d6e174 with catch @ 00d6e580 */
      lVar5 = *plVar2;
    } while (lVar3 < (int)plVar2[1]);
  }
  lVar3 = spSkeleton_findBone(param_2,*(undefined8 *)(*(long *)(lVar5 + 0x18) + 8));
  plVar2[3] = lVar3;
  return plVar2;
}

