
/* void std::__ndk1::__buffered_inplace_merge<bool (*&)(cocos2d::RenderCommand*,
   cocos2d::RenderCommand*), std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>
   >(std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>,
   std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>,
   std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>, bool (*&)(cocos2d::RenderCommand*,
   cocos2d::RenderCommand*),
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::RenderCommand**> >::value_type*)
    */

void std::__ndk1::
     __buffered_inplace_merge<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               long param_5,long param_6,undefined8 *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 00fe6594 to 010e65d3 has its CatchHandler @ 00fe650c */
  if (param_5 <= param_6) {
    if (param_1 == param_2) {
      return;
    }
    uVar6 = (long)param_2 + (-8 - (long)param_1);
    uVar2 = (uVar6 >> 3) + 1;
    puVar5 = param_1;
    puVar8 = param_7;
    if ((3 < uVar2) &&
       ((lVar1 = (uVar6 & 0xfffffffffffffff8) + 8, (undefined8 *)((long)param_1 + lVar1) <= param_7
        || ((undefined8 *)((long)param_7 + lVar1) <= param_1)))) {
      uVar7 = uVar2 & 0x3ffffffffffffffc;
      puVar5 = param_1 + 2;
      puVar10 = param_7 + uVar7;
      puVar8 = param_7 + 2;
      uVar6 = uVar7;
      do {
        puVar3 = puVar5 + -1;
        uVar4 = puVar5[-2];
        uVar12 = puVar5[1];
        uVar11 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar6 = uVar6 - 4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar4;
        puVar8[1] = uVar12;
        *puVar8 = uVar11;
        puVar8 = puVar8 + 4;
      } while (uVar6 != 0);
      puVar5 = param_1 + uVar7;
      puVar8 = puVar10;
      if (uVar2 == uVar7) goto LAB_00fe6734;
    }
    do {
      puVar3 = puVar5 + 1;
      puVar10 = puVar8 + 1;
      *puVar8 = *puVar5;
      puVar5 = puVar3;
      puVar8 = puVar10;
    } while (param_2 != puVar3);
LAB_00fe6734:
    if (puVar10 == param_7) {
      return;
    }
    pcVar9 = (code *)*param_4;
    do {
      if (param_2 == param_3) {
        if ((long)puVar10 - (long)param_7 == 0) {
          return;
        }
        memmove(param_1,param_7,(long)puVar10 - (long)param_7);
        return;
      }
      uVar2 = (*pcVar9)(*param_2,*param_7);
      if ((uVar2 & 1) == 0) {
        puVar5 = param_7 + 1;
        uVar4 = *param_7;
      }
      else {
        uVar4 = *param_2;
        puVar5 = param_7;
        param_2 = param_2 + 1;
      }
      *param_1 = uVar4;
      param_7 = puVar5;
      param_1 = param_1 + 1;
    } while (puVar5 != puVar10);
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  uVar6 = (long)param_3 + (-8 - (long)param_2);
  uVar2 = (uVar6 >> 3) + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe655c with catch @ 00fe65c0
                        */
  puVar5 = param_2;
  puVar8 = param_7;
                    /* try { // try from 00fe65d4 to 010e65d7 has its CatchHandler @ 00fe6604 */
                    /* try { // try from 00fe65d8 to 010e6617 has its CatchHandler @ 00fe650c */
  if ((3 < uVar2) &&
     ((lVar1 = (uVar6 & 0xfffffffffffffff8) + 8, (undefined8 *)((long)param_2 + lVar1) <= param_7 ||
      ((undefined8 *)((long)param_7 + lVar1) <= param_2)))) {
    uVar7 = uVar2 & 0x3ffffffffffffffc;
    puVar5 = param_2 + 2;
    puVar10 = param_7 + uVar7;
    puVar8 = param_7 + 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe65d4 with catch @ 00fe6604
                        */
    uVar6 = uVar7;
    do {
      puVar3 = puVar5 + -1;
      uVar4 = puVar5[-2];
      uVar12 = puVar5[1];
      uVar11 = *puVar5;
      puVar5 = puVar5 + 4;
      uVar6 = uVar6 - 4;
      puVar8[-1] = *puVar3;
      puVar8[-2] = uVar4;
      puVar8[1] = uVar12;
      *puVar8 = uVar11;
      puVar8 = puVar8 + 4;
    } while (uVar6 != 0);
    puVar5 = param_2 + uVar7;
    puVar8 = puVar10;
    if (uVar2 == uVar7) goto joined_r0x00fe663c;
  }
  do {
    puVar3 = puVar5 + 1;
    puVar10 = puVar8 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar3;
    puVar8 = puVar10;
  } while (param_3 != puVar3);
joined_r0x00fe663c:
  while( true ) {
    if (puVar10 == param_7) {
      return;
    }
    if (param_2 == param_1) break;
    puVar8 = param_2 + -1;
    puVar5 = puVar10 + -1;
    uVar2 = (*(code *)*param_4)(*puVar5,*puVar8);
    if ((uVar2 & 1) == 0) {
      uVar4 = *puVar5;
    }
    else {
      uVar4 = *puVar8;
      param_2 = puVar8;
      puVar5 = puVar10;
    }
    param_3[-1] = uVar4;
    param_3 = param_3 + -1;
    puVar10 = puVar5;
  }
  do {
    param_3 = param_3 + -1;
    puVar10 = puVar10 + -1;
    *param_3 = *puVar10;
  } while (param_7 != puVar10);
  return;
}

