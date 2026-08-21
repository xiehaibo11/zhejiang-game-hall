
/* void std::__ndk1::__stable_sort<bool (*&)(cocos2d::RenderCommand*, cocos2d::RenderCommand*),
   std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>
   >(std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>,
   std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>, bool (*&)(cocos2d::RenderCommand*,
   cocos2d::RenderCommand*),
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::RenderCommand**> >::value_type*,
   long) */

void std::__ndk1::
     __stable_sort<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
               undefined8 *param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar1 = (*(code *)*param_3)(param_2[-1],*param_1);
      if ((uVar1 & 1) != 0) {
        uVar6 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar6;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (puVar9 = param_1 + 1, puVar9 != param_2)) {
        lVar10 = 0;
        do {
          uVar6 = *puVar9;
          puVar2 = param_1;
          lVar11 = lVar10;
          if (puVar9 != param_1) {
            do {
              uVar1 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar11));
              if ((uVar1 & 1) == 0) {
                puVar2 = (undefined8 *)((long)param_1 + lVar11 + 8);
                break;
              }
              lVar12 = lVar11 + -8;
              ((undefined8 *)((long)param_1 + lVar11))[1] = *(undefined8 *)((long)param_1 + lVar11);
              lVar11 = lVar12;
            } while (lVar12 != -8);
          }
          puVar9 = puVar9 + 1;
          lVar10 = lVar10 + 8;
          *puVar2 = uVar6;
        } while (puVar9 != param_2);
      }
    }
    else {
      uVar1 = param_4 >> 1;
      puVar9 = param_1 + uVar1;
      if (param_6 < (long)param_4) {
        __stable_sort<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
                  ();
        __stable_sort<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
                  (puVar9,param_2,param_3,param_4 - uVar1,param_5,param_6);
        __inplace_merge<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
                  (param_1,puVar9,param_2,param_3,uVar1,param_4 - uVar1,param_5,param_6);
        return;
      }
      __stable_sort_move<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
                (param_1,puVar9,param_3,uVar1);
      puVar2 = param_5 + uVar1;
      __stable_sort_move<bool(*&)(cocos2d::RenderCommand*,cocos2d::RenderCommand*),std::__ndk1::__wrap_iter<cocos2d::RenderCommand**>>
                (puVar9,param_2,param_3,param_4 - uVar1,puVar2);
      puVar9 = param_5 + param_4;
      puVar4 = puVar2;
      puVar5 = param_5;
      do {
        if (puVar4 == puVar9) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe5e6c with catch @ 00fe5dfc
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5e9c with catch @ 00fe5dfc
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5ecc with catch @ 00fe5dfc
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5ef4 with catch @ 00fe5dfc
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5f20 with catch @ 00fe5dfc
                        */
          if (puVar5 == puVar2) {
            return;
          }
          uVar3 = (long)param_5 + (uVar1 * 8 - (long)puVar5) + -8;
          uVar1 = (uVar3 >> 3) + 1;
                    /* try { // try from 00fe5e90 to 010e5e9b has its CatchHandler @ 00fe5f60 */
                    /* try { // try from 00fe5e9c to 010e5ec3 has its CatchHandler @ 00fe5dfc */
          if ((3 < uVar1) &&
             ((uVar3 = uVar3 & 0xfffffffffffffff8,
              (undefined8 *)((long)puVar5 + uVar3 + 8) <= param_1 ||
              ((undefined8 *)((long)param_1 + uVar3 + 8) <= puVar5)))) {
            uVar7 = uVar1 & 0x3ffffffffffffffc;
            lVar10 = 0;
            uVar3 = uVar7;
            do {
                    /* try { // try from 00fe5f14 to 010e5f1f has its CatchHandler @ 00fe5f5c */
              puVar9 = (undefined8 *)((long)puVar5 + lVar10);
              uVar6 = *puVar9;
              uVar15 = puVar9[3];
              uVar14 = puVar9[2];
              puVar4 = (undefined8 *)((long)param_1 + lVar10);
                    /* try { // try from 00fe5f20 to 010e5f63 has its CatchHandler @ 00fe5dfc */
              uVar3 = uVar3 - 4;
              lVar10 = lVar10 + 0x20;
              puVar4[1] = puVar9[1];
              *puVar4 = uVar6;
              puVar4[3] = uVar15;
              puVar4[2] = uVar14;
            } while (uVar3 != 0);
            puVar5 = puVar5 + uVar7;
            param_1 = param_1 + (uVar1 & 0x1ffffffffffffffc);
            if (uVar1 == uVar7) {
              return;
            }
          }
          do {
            puVar9 = puVar5 + 1;
            *param_1 = *puVar5;
            puVar5 = puVar9;
            param_1 = param_1 + 1;
          } while (puVar2 != puVar9);
          return;
        }
        uVar3 = (*(code *)*param_3)(*puVar4,*puVar5);
        if ((uVar3 & 1) == 0) {
          puVar13 = puVar5 + 1;
          uVar6 = *puVar5;
        }
        else {
          uVar6 = *puVar4;
          puVar13 = puVar5;
          puVar4 = puVar4 + 1;
        }
        puVar8 = param_1 + 1;
        *param_1 = uVar6;
        puVar5 = puVar13;
        param_1 = puVar8;
      } while (puVar13 != puVar2);
      if (puVar4 == puVar9) {
        return;
      }
      uVar3 = (long)param_5 + (param_4 * 8 - (long)puVar4) + -8;
      uVar1 = (uVar3 >> 3) + 1;
                    /* try { // try from 00fe5e64 to 010e5e6b has its CatchHandler @ 00fe5f60 */
      if ((3 < uVar1) &&
         ((uVar3 = uVar3 & 0xfffffffffffffff8, (undefined8 *)((long)puVar4 + uVar3 + 8) <= puVar8 ||
          ((undefined8 *)((long)puVar8 + uVar3 + 8) <= puVar4)))) {
        uVar7 = uVar1 & 0x3ffffffffffffffc;
        lVar10 = 0;
                    /* try { // try from 00fe5ec4 to 010e5ecb has its CatchHandler @ 00fe5f5c */
        uVar3 = uVar7;
        do {
                    /* try { // try from 00fe5ecc to 010e5eeb has its CatchHandler @ 00fe5dfc */
          puVar2 = (undefined8 *)((long)puVar4 + lVar10);
          uVar6 = *puVar2;
          uVar15 = puVar2[3];
          uVar14 = puVar2[2];
          puVar5 = (undefined8 *)((long)puVar8 + lVar10);
          uVar3 = uVar3 - 4;
          lVar10 = lVar10 + 0x20;
          puVar5[1] = puVar2[1];
          *puVar5 = uVar6;
          puVar5[3] = uVar15;
          puVar5[2] = uVar14;
        } while (uVar3 != 0);
        puVar4 = puVar4 + uVar7;
        puVar8 = puVar8 + (uVar1 & 0x1ffffffffffffffc);
                    /* try { // try from 00fe5eec to 010e5ef3 has its CatchHandler @ 00fe5f5c */
        if (uVar1 == uVar7) {
          return;
        }
      }
      do {
        puVar2 = puVar4 + 1;
        *puVar8 = *puVar4;
        puVar4 = puVar2;
        puVar8 = puVar8 + 1;
      } while (puVar9 != puVar2);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe5ec4 with catch @ 00fe5f5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5eec with catch @ 00fe5f5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5f14 with catch @ 00fe5f5c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe5e64 with catch @ 00fe5f60
                       catch(type#1 @ 00000000) { ... } // from try @ 00fe5e90 with catch @ 00fe5f60
                        */
  return;
}

