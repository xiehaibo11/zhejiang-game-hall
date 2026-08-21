
long * spTransformConstraint_create(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)_spCalloc(1,0x30,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/TransformConstraint.c"
                             ,0x25);
  *plVar2 = param_1;
  lVar3 = *(long *)(param_1 + 0x20);
  plVar2[5] = *(long *)(param_1 + 0x28);
  plVar2[4] = lVar3;
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(plVar2 + 1) = iVar1;
  lVar3 = _spMalloc((long)iVar1 << 3,
                    "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/TransformConstraint.c"
                    ,0x2c);
  lVar5 = *plVar2;
  plVar2[2] = lVar3;
  if (0 < (int)plVar2[1]) {
    lVar3 = 0;
    do {
      lVar6 = lVar3 * 8;
      uVar4 = spSkeleton_findBone(param_2,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar5 + 0x10) + lVar6) + 8));
      lVar3 = lVar3 + 1;
      *(undefined8 *)(plVar2[2] + lVar6) = uVar4;
      lVar5 = *plVar2;
    } while (lVar3 < (int)plVar2[1]);
  }
  lVar3 = spSkeleton_findBone(param_2,*(undefined8 *)(*(long *)(lVar5 + 0x18) + 8));
  plVar2[3] = lVar3;
  return plVar2;
}

