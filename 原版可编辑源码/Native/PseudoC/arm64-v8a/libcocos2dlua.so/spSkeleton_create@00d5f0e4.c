
long * spSkeleton_create(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 00d5f0f4 to 00e5f0ff has its CatchHandler @ 00d5f5c0 */
  plVar3 = (long *)_spCalloc(1,0xb8,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c"
                             ,0x3d);
                    /* try { // try from 00d5f118 to 00e5f127 has its CatchHandler @ 00d5f5b8 */
  *plVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x18);
                    /* try { // try from 00d5f128 to 00e5f13b has its CatchHandler @ 00d5f5b4 */
  *(int *)(plVar3 + 1) = iVar1;
  lVar4 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c",
                    0x42);
                    /* try { // try from 00d5f13c to 00e5f147 has its CatchHandler @ 00d5f5b0 */
  plVar3[2] = lVar4;
  __ptr = (void *)_spCalloc((long)(int)plVar3[1],4,
                            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c"
                            ,0x43);
                    /* try { // try from 00d5f160 to 00e5f16f has its CatchHandler @ 00d5f5a8 */
  if (0 < (int)plVar3[1]) {
    lVar4 = 0;
    do {
                    /* try { // try from 00d5f1b8 to 00e5f1cb has its CatchHandler @ 00d5f594 */
      lVar7 = *(long *)(*(long *)(*plVar3 + 0x20) + lVar4 * 8);
      if (*(int **)(lVar7 + 0x10) == (int *)0x0) {
                    /* try { // try from 00d5f1cc to 00e5f1d7 has its CatchHandler @ 00d5f590 */
        uVar5 = spBone_create(lVar7,plVar3,0);
      }
      else {
                    /* try { // try from 00d5f170 to 00e5f183 has its CatchHandler @ 00d5f5a4 */
        uVar5 = spBone_create(lVar7,plVar3,
                              *(undefined8 *)(plVar3[2] + (long)**(int **)(lVar7 + 0x10) * 8));
                    /* try { // try from 00d5f184 to 00e5f18f has its CatchHandler @ 00d5f5a0 */
        lVar7 = (long)**(int **)(lVar7 + 0x10) * 4;
        *(int *)((long)__ptr + lVar7) = *(int *)((long)__ptr + lVar7) + 1;
      }
      *(undefined8 *)(plVar3[2] + lVar4 * 8) = uVar5;
                    /* try { // try from 00d5f1a8 to 00e5f1b7 has its CatchHandler @ 00d5f598 */
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)plVar3[1]);
    if (0 < (int)plVar3[1]) {
      lVar4 = 0;
      do {
                    /* try { // try from 00d5f1f0 to 00e5f1ff has its CatchHandler @ 00d5f588 */
                    /* try { // try from 00d5f200 to 00e5f213 has its CatchHandler @ 00d5f584 */
        lVar7 = *(long *)(plVar3[2] + lVar4 * 8);
                    /* try { // try from 00d5f214 to 00e5f21f has its CatchHandler @ 00d5f580 */
        uVar5 = _spMalloc((long)*(int *)((long)__ptr +
                                        (long)**(int **)(*(long *)(*plVar3 + 0x20) + lVar4 * 8) * 4)
                          << 3,
                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c"
                          ,0x54);
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
        uVar2 = *(uint *)(plVar3 + 1);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)uVar2);
                    /* try { // try from 00d5f238 to 00e5f247 has its CatchHandler @ 00d5f578 */
      if (0 < (int)uVar2) {
        uVar6 = 0;
        do {
          lVar4 = *(long *)(plVar3[2] + uVar6 * 8);
                    /* try { // try from 00d5f25c to 00e5f267 has its CatchHandler @ 00d5f570 */
          lVar7 = *(long *)(lVar4 + 0x10);
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar7 + 0x18);
            *(int *)(lVar7 + 0x18) = iVar1 + 1;
            *(long *)(*(long *)(lVar7 + 0x20) + (long)iVar1 * 8) = lVar4;
          }
                    /* try { // try from 00d5f248 to 00e5f25b has its CatchHandler @ 00d5f574 */
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
                    /* try { // try from 00d5f280 to 00e5f28f has its CatchHandler @ 00d5f568 */
        if (0 < (int)uVar2) {
          lVar4 = *(long *)plVar3[2];
          goto LAB_00d5f294;
        }
      }
    }
  }
                    /* try { // try from 00d5f290 to 00e5f2a3 has its CatchHandler @ 00d5f564 */
  lVar4 = 0;
LAB_00d5f294:
  plVar3[3] = lVar4;
  iVar1 = *(int *)(param_1 + 0x28);
                    /* try { // try from 00d5f2a4 to 00e5f2af has its CatchHandler @ 00d5f560 */
  *(int *)(plVar3 + 4) = iVar1;
  lVar4 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c",
                    0x5f);
  uVar6 = (ulong)*(uint *)(plVar3 + 4);
  plVar3[5] = lVar4;
  if (0 < (int)*(uint *)(plVar3 + 4)) {
    lVar4 = 0;
    do {
                    /* try { // try from 00d5f2c8 to 00e5f2d7 has its CatchHandler @ 00d5f558 */
      lVar8 = lVar4 * 8;
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + lVar8);
                    /* try { // try from 00d5f2d8 to 00e5f2eb has its CatchHandler @ 00d5f554 */
      uVar5 = spSlot_create(lVar7,*(undefined8 *)(plVar3[2] + (long)**(int **)(lVar7 + 0x10) * 8));
                    /* try { // try from 00d5f2ec to 00e5f2f7 has its CatchHandler @ 00d5f550 */
      lVar4 = lVar4 + 1;
      *(undefined8 *)(plVar3[5] + lVar8) = uVar5;
      uVar6 = (ulong)(int)plVar3[4];
    } while (lVar4 < (long)uVar6);
  }
                    /* try { // try from 00d5f310 to 00e5f31f has its CatchHandler @ 00d5f548 */
  __dest = (void *)_spMalloc(-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c"
                             ,0x66);
                    /* try { // try from 00d5f320 to 00e5f333 has its CatchHandler @ 00d5f544 */
  plVar3[6] = (long)__dest;
  memcpy(__dest,(void *)plVar3[5],(long)(int)plVar3[4] << 3);
  iVar1 = *(int *)(param_1 + 0x70);
                    /* try { // try from 00d5f334 to 00e5f33f has its CatchHandler @ 00d5f540 */
  *(int *)(plVar3 + 7) = iVar1;
  lVar4 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c",
                    0x6a);
  lVar7 = *plVar3;
  plVar3[8] = lVar4;
  if (0 < *(int *)(lVar7 + 0x70)) {
                    /* try { // try from 00d5f358 to 00e5f367 has its CatchHandler @ 00d5f538 */
    lVar4 = 0;
    do {
      lVar8 = lVar4 * 8;
                    /* try { // try from 00d5f368 to 00e5f37b has its CatchHandler @ 00d5f534 */
      uVar5 = spIkConstraint_create(*(undefined8 *)(*(long *)(lVar7 + 0x78) + lVar8),plVar3);
      lVar4 = lVar4 + 1;
      *(undefined8 *)(plVar3[8] + lVar8) = uVar5;
                    /* try { // try from 00d5f37c to 00e5f387 has its CatchHandler @ 00d5f530 */
      lVar7 = *plVar3;
    } while (lVar4 < *(int *)(lVar7 + 0x70));
  }
  iVar1 = *(int *)(param_1 + 0x80);
                    /* try { // try from 00d5f3a0 to 00e5f3af has its CatchHandler @ 00d5f528 */
  *(int *)(plVar3 + 9) = iVar1;
  lVar4 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c",
                    0x6f);
  lVar7 = *plVar3;
  plVar3[10] = lVar4;
                    /* try { // try from 00d5f3b0 to 00e5f3c3 has its CatchHandler @ 00d5f524 */
  if (0 < *(int *)(lVar7 + 0x80)) {
    lVar4 = 0;
    do {
                    /* try { // try from 00d5f3c4 to 00e5f3cf has its CatchHandler @ 00d5f520 */
      lVar8 = lVar4 * 8;
      uVar5 = spTransformConstraint_create(*(undefined8 *)(*(long *)(lVar7 + 0x88) + lVar8),plVar3);
      lVar4 = lVar4 + 1;
      *(undefined8 *)(plVar3[10] + lVar8) = uVar5;
      lVar7 = *plVar3;
                    /* try { // try from 00d5f3e8 to 00e5f3f7 has its CatchHandler @ 00d5f518 */
    } while (lVar4 < *(int *)(lVar7 + 0x80));
  }
  iVar1 = *(int *)(param_1 + 0x90);
                    /* try { // try from 00d5f3f8 to 00e5f40b has its CatchHandler @ 00d5f514 */
  *(int *)(plVar3 + 0xb) = iVar1;
  lVar4 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c",
                    0x74);
                    /* try { // try from 00d5f40c to 00e5f417 has its CatchHandler @ 00d5f510 */
  lVar7 = *plVar3;
  plVar3[0xc] = lVar4;
  if (0 < *(int *)(lVar7 + 0x90)) {
    lVar4 = 0;
    do {
      lVar8 = lVar4 * 8;
                    /* try { // try from 00d5f430 to 00e5f43f has its CatchHandler @ 00d5f508 */
      uVar5 = spPathConstraint_create(*(undefined8 *)(*(long *)(lVar7 + 0x98) + lVar8),plVar3);
      lVar4 = lVar4 + 1;
                    /* try { // try from 00d5f440 to 00e5f453 has its CatchHandler @ 00d5f504 */
      *(undefined8 *)(plVar3[0xc] + lVar8) = uVar5;
      lVar7 = *plVar3;
    } while (lVar4 < *(int *)(lVar7 + 0x90));
  }
                    /* try { // try from 00d5f454 to 00e5f45f has its CatchHandler @ 00d5f500 */
  spColor_setFromFloats(0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3 + 0xe);
  spSkeleton_updateCache(plVar3);
                    /* try { // try from 00d5f478 to 00e5f487 has its CatchHandler @ 00d5f4f8 */
  _spFree(__ptr);
                    /* try { // try from 00d5f488 to 00e5f49b has its CatchHandler @ 00d5f4f4 */
  return plVar3;
}

