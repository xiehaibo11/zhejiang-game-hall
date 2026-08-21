
/* void std::__ndk1::__stable_sort_move<bool (*&)(cocos2d::Camera const*, cocos2d::Camera const*),
   std::__ndk1::__wrap_iter<cocos2d::Camera**> >(std::__ndk1::__wrap_iter<cocos2d::Camera**>,
   std::__ndk1::__wrap_iter<cocos2d::Camera**>, bool (*&)(cocos2d::Camera const*, cocos2d::Camera
   const*), std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::Camera**>
   >::difference_type, std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::Camera**>
   >::value_type*) */

void std::__ndk1::
     __stable_sort_move<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
               undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar1 = (*(code *)*param_3)(param_2[-1],*param_1);
      if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f3d9b4 with catch @ 00f3d9f0 */
        *param_5 = *param_1;
        uVar2 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar2 = *param_1;
      }
      param_5[1] = uVar2;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        puVar6 = param_1 + 1;
        uVar2 = *param_1;
        *param_5 = uVar2;
        if (puVar6 != param_2) {
          lVar8 = 0;
          puVar9 = param_5;
          do {
                    /* catch() { ... } // from try @ 00f3d9b8 with catch @ 00f3d96c */
            puVar7 = puVar9 + 1;
            uVar1 = (*(code *)*param_3)(*puVar6,uVar2);
            if ((uVar1 & 1) == 0) {
              *puVar7 = *puVar6;
            }
            else {
              puVar9[1] = *puVar9;
              puVar4 = param_5;
              if (puVar9 != param_5) {
                lVar11 = 0;
                do {
                  puVar4 = (undefined8 *)((long)puVar9 + lVar11);
                    /* try { // try from 00f3d994 to 0103d99b has its CatchHandler @ 00f3da00 */
                  uVar1 = (*(code *)*param_3)(*puVar6,puVar4[-1]);
                  if ((uVar1 & 1) == 0) break;
                  lVar11 = lVar11 + -8;
                  *puVar4 = puVar4[-1];
                  puVar4 = param_5;
                    /* try { // try from 00f3d9b4 to 0103d9b7 has its CatchHandler @ 00f3d9f0 */
                } while (lVar8 != lVar11);
              }
              *puVar4 = *puVar6;
            }
            puVar6 = puVar6 + 1;
            if (puVar6 == param_2) {
              return;
            }
            uVar2 = *puVar7;
            lVar8 = lVar8 + -8;
            puVar9 = puVar7;
          } while( true );
        }
      }
    }
    else {
      uVar1 = param_4 >> 1;
      puVar6 = param_1 + uVar1;
      __stable_sort<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
                (param_1,puVar6,param_3,uVar1,param_5,uVar1);
      __stable_sort<bool(*&)(cocos2d::Camera_const*,cocos2d::Camera_const*),std::__ndk1::__wrap_iter<cocos2d::Camera**>>
                (puVar6,param_2,param_3,param_4 - uVar1,param_5 + uVar1,param_4 - uVar1);
      puVar9 = puVar6;
      puVar7 = param_5;
      puVar4 = param_1;
      if (uVar1 != 0) {
        do {
          if (puVar9 == param_2) {
            if (puVar4 == puVar6) {
              return;
            }
            uVar3 = (long)param_1 + (uVar1 * 8 - (long)puVar4) + -8;
            uVar1 = (uVar3 >> 3) + 1;
            if ((3 < uVar1) &&
               ((uVar3 = uVar3 & 0xfffffffffffffff8,
                (undefined8 *)((long)puVar4 + uVar3 + 8) <= puVar7 ||
                ((undefined8 *)((long)puVar7 + uVar3 + 8) <= puVar4)))) {
              uVar5 = uVar1 & 0x3ffffffffffffffc;
              lVar8 = 0;
              uVar3 = uVar5;
              do {
                puVar9 = (undefined8 *)((long)puVar4 + lVar8);
                uVar2 = *puVar9;
                uVar13 = puVar9[3];
                uVar12 = puVar9[2];
                puVar10 = (undefined8 *)((long)puVar7 + lVar8);
                uVar3 = uVar3 - 4;
                lVar8 = lVar8 + 0x20;
                puVar10[1] = puVar9[1];
                *puVar10 = uVar2;
                puVar10[3] = uVar13;
                puVar10[2] = uVar12;
              } while (uVar3 != 0);
              puVar4 = puVar4 + uVar5;
              puVar7 = puVar7 + (uVar1 & 0x1ffffffffffffffc);
              if (uVar1 == uVar5) {
                return;
              }
            }
            do {
              puVar9 = puVar4 + 1;
              *puVar7 = *puVar4;
              puVar4 = puVar9;
              puVar7 = puVar7 + 1;
            } while (puVar6 != puVar9);
            return;
          }
          uVar3 = (*(code *)*param_3)(*puVar9,*puVar4);
          if ((uVar3 & 1) == 0) {
            puVar10 = puVar4 + 1;
            uVar2 = *puVar4;
          }
          else {
            uVar2 = *puVar9;
            puVar10 = puVar4;
            puVar9 = puVar9 + 1;
          }
          param_5 = puVar7 + 1;
          *puVar7 = uVar2;
          puVar7 = param_5;
          puVar4 = puVar10;
        } while (puVar10 != puVar6);
      }
      if (puVar9 != param_2) {
        uVar3 = (long)param_2 + (-8 - (long)puVar9);
        uVar1 = (uVar3 >> 3) + 1;
        if ((3 < uVar1) &&
           ((lVar8 = (uVar3 & 0xfffffffffffffff8) + 8,
            (undefined8 *)((long)puVar9 + lVar8) <= param_5 ||
            ((undefined8 *)((long)param_5 + lVar8) <= puVar9)))) {
          uVar5 = uVar1 & 0x3ffffffffffffffc;
          puVar6 = puVar9 + 2;
          puVar9 = puVar9 + uVar5;
          puVar7 = param_5 + 2;
          uVar3 = uVar5;
          do {
            puVar4 = puVar6 + -1;
            uVar2 = puVar6[-2];
            uVar13 = puVar6[1];
            uVar12 = *puVar6;
            puVar6 = puVar6 + 4;
            uVar3 = uVar3 - 4;
            puVar7[-1] = *puVar4;
            puVar7[-2] = uVar2;
            puVar7[1] = uVar13;
            *puVar7 = uVar12;
            puVar7 = puVar7 + 4;
          } while (uVar3 != 0);
          param_5 = param_5 + uVar5;
          if (uVar1 == uVar5) {
            return;
          }
        }
        do {
          puVar6 = puVar9 + 1;
          *param_5 = *puVar9;
          param_5 = param_5 + 1;
          puVar9 = puVar6;
        } while (param_2 != puVar6);
      }
    }
  }
                    /* catch() { ... } // from try @ 00f3d994 with catch @ 00f3da00 */
  return;
}

