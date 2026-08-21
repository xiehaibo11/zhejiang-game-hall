
/* void std::__ndk1::__inplace_merge<bool (*&)(cocos2d::Camera const*, cocos2d::Camera const*),
   std::__ndk1::__wrap_iter<cocos2d::Camera**> >(std::__ndk1::__wrap_iter<cocos2d::Camera**>,
   std::__ndk1::__wrap_iter<cocos2d::Camera**>, std::__ndk1::__wrap_iter<cocos2d::Camera**>, bool
   (*&)(cocos2d::Camera const*, cocos2d::Camera const*),
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::Camera**> >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::Camera**> >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::Camera**> >::value_type*, long) */

void std::__ndk1::
     __inplace_merge<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               long param_5,long param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  while( true ) {
    if (param_6 == 0) {
      return;
    }
                    /* try { // try from 00f3dc44 to 0103dcab has its CatchHandler @ 00f3dc14 */
    if ((param_6 <= param_8) || (param_5 <= param_8)) break;
    if (param_5 == 0) {
      return;
    }
    lVar8 = -param_5;
    while (uVar2 = (*(code *)*param_4)(*param_2,*param_1), (uVar2 & 1) == 0) {
      bVar1 = lVar8 == -1;
      lVar8 = lVar8 + 1;
      param_1 = param_1 + 1;
      if (bVar1) {
        return;
      }
    }
    param_5 = -lVar8;
    if (param_5 < param_6) {
                    /* catch() { ... } // from try @ 00f3dc3c with catch @ 00f3dc90 */
      lVar6 = param_6;
      if (param_6 < 0) {
        lVar6 = param_6 + 1;
      }
      lVar6 = lVar6 >> 1;
      puVar9 = param_2 + lVar6;
      puVar10 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar2 = (long)param_2 - (long)param_1 >> 3;
        do {
          uVar11 = uVar2 >> 1;
                    /* catch() { ... } // from try @ 00f3dd1c with catch @ 00f3dcc8
                       catch() { ... } // from try @ 00f3dd7c with catch @ 00f3dcc8 */
          uVar3 = (*(code *)*param_4)(*puVar9,puVar10[uVar11]);
          uVar4 = uVar2 + ~uVar11;
          uVar2 = uVar11;
          if ((uVar3 & 1) == 0) {
            puVar10 = puVar10 + uVar11 + 1;
            uVar2 = uVar4;
          }
        } while (uVar2 != 0);
      }
      param_5 = (long)puVar10 - (long)param_1 >> 3;
    }
    else {
      if (lVar8 == -1) {
        uVar7 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar7;
        return;
      }
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
      param_5 = param_5 >> 1;
      puVar10 = param_1 + param_5;
      puVar9 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar2 = (long)param_3 - (long)param_2 >> 3;
        puVar5 = param_2;
        do {
          uVar3 = uVar2 >> 1;
                    /* try { // try from 00f3dd18 to 0103dd1b has its CatchHandler @ 00f3dd7c */
                    /* try { // try from 00f3dd1c to 0103dd73 has its CatchHandler @ 00f3dcc8 */
          uVar4 = (*(code *)*param_4)(puVar5[uVar3],*puVar10);
          puVar9 = puVar5 + uVar3 + 1;
          uVar2 = uVar2 + ~uVar3;
          if ((uVar4 & 1) == 0) {
            puVar9 = puVar5;
            uVar2 = uVar3;
          }
          puVar5 = puVar9;
        } while (uVar2 != 0);
      }
      lVar6 = (long)puVar9 - (long)param_2 >> 3;
    }
                    /* try { // try from 00f3dd74 to 0103dd7b has its CatchHandler @ 00f3dd7c */
                    /* catch() { ... } // from try @ 00f3dd18 with catch @ 00f3dd7c
                       catch() { ... } // from try @ 00f3dd74 with catch @ 00f3dd7c
                       try { // try from 00f3dd7c to 0103dd9b has its CatchHandler @ 00f3dcc8 */
    puVar5 = puVar9;
    if ((puVar10 != param_2) && (puVar5 = puVar10, param_2 != puVar9)) {
      puVar5 = (undefined8 *)FUN_00f3e134(puVar10,param_2,puVar9);
    }
    if (param_5 + lVar6 < (param_6 - (param_5 + lVar6)) - lVar8) {
      __inplace_merge<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
                (param_1,puVar10,puVar5,param_4,param_5,lVar6,param_7,param_8);
      param_6 = param_6 - lVar6;
      param_5 = -(param_5 + lVar8);
      param_2 = puVar9;
      param_1 = puVar5;
    }
    else {
      __inplace_merge<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
                (puVar5,puVar9,param_3,param_4,-(param_5 + lVar8),param_6 - lVar6,param_7,param_8);
      param_6 = lVar6;
      param_3 = puVar5;
      param_2 = puVar10;
    }
  }
  __buffered_inplace_merge<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

