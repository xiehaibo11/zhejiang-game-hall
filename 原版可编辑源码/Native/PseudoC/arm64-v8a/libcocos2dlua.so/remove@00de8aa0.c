
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::ui::WebViewImpl*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::experimental::ui::WebViewImpl*>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::experimental::ui::WebViewImpl*>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::ui::WebViewImpl*> >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::experimental::ui::WebViewImpl*>, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::WebViewImpl*>>>
     ::remove(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
                    /* catch() { ... } // from try @ 00de8a58 with catch @ 00de8aa0 */
  uVar3 = param_2[1];
                    /* catch() { ... } // from try @ 00de8444 with catch @ 00de8aa4 */
  uVar4 = param_3[1];
                    /* catch() { ... } // from try @ 00de846c with catch @ 00de8aa8
                       catch() { ... } // from try @ 00de8508 with catch @ 00de8aa8 */
                    /* catch() { ... } // from try @ 00de83e8 with catch @ 00de8aac */
  uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar3 >> 8)
                                                                                 ),
                                                                         POPCOUNT((char)uVar3)))))))
                  );
                    /* catch() { ... } // from try @ 00de8414 with catch @ 00de8ab0
                       catch() { ... } // from try @ 00de84f0 with catch @ 00de8ab0 */
  uVar8 = NEON_uaddlv(uVar9,1);
                    /* catch() { ... } // from try @ 00de81b8 with catch @ 00de8ab4 */
  uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
                    /* catch() { ... } // from try @ 00de770c with catch @ 00de8ab8 */
                    /* catch() { ... } // from try @ 00de8164 with catch @ 00de8abc */
  if (uVar6 < 2) {
                    /* catch() { ... } // from try @ 00de75b8 with catch @ 00de8ad8 */
    uVar4 = uVar3 - 1 & uVar4;
  }
  else {
                    /* catch() { ... } // from try @ 00de7f48 with catch @ 00de8ac0 */
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar4 / uVar3;
    }
                    /* catch() { ... } // from try @ 00de7cf0 with catch @ 00de8ac4 */
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar7 * uVar3;
    }
  }
                    /* catch() { ... } // from try @ 00de7268 with catch @ 00de8adc */
  plVar2 = *(long **)(*param_2 + uVar4 * 8);
  do {
    plVar5 = plVar2;
                    /* catch() { ... } // from try @ 00de7258 with catch @ 00de8aec */
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
                    /* catch() { ... } // from try @ 00de7248 with catch @ 00de8afc */
  if (plVar5 != param_2 + 2) {
    uVar7 = plVar5[1];
    if (uVar6 < 2) {
                    /* catch() { ... } // from try @ 00de7218 with catch @ 00de8b2c */
      uVar7 = uVar7 & uVar3 - 1;
    }
    else {
                    /* catch() { ... } // from try @ 00de7238 with catch @ 00de8b0c */
      if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
                    /* catch() { ... } // from try @ 00de7228 with catch @ 00de8b1c */
      }
    }
    if (uVar7 == uVar4) goto LAB_00de8b7c;
  }
                    /* catch() { ... } // from try @ 00de7208 with catch @ 00de8b3c */
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
                    /* catch() { ... } // from try @ 00de71d8 with catch @ 00de8b6c */
      uVar7 = uVar7 & uVar3 - 1;
    }
    else {
                    /* catch() { ... } // from try @ 00de71f8 with catch @ 00de8b4c */
      if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
                    /* catch() { ... } // from try @ 00de71e8 with catch @ 00de8b5c */
      }
    }
    if (uVar7 == uVar4) goto LAB_00de8b7c;
  }
  *(undefined8 *)(*param_2 + uVar4 * 8) = 0;
LAB_00de8b7c:
                    /* catch() { ... } // from try @ 00de71c8 with catch @ 00de8b7c */
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
                    /* catch() { ... } // from try @ 00de71b8 with catch @ 00de8b8c */
    if (uVar6 < 2) {
                    /* catch() { ... } // from try @ 00de719c with catch @ 00de8bac */
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar7 / uVar3;
      }
                    /* catch() { ... } // from try @ 00de71a8 with catch @ 00de8b9c */
      uVar7 = uVar7 - uVar6 * uVar3;
    }
    if (uVar7 != uVar4) {
                    /* catch() { ... } // from try @ 00de7f6c with catch @ 00de8bbc
                       catch() { ... } // from try @ 00de84c4 with catch @ 00de8bbc */
                    /* catch() { ... } // from try @ 00de81e4 with catch @ 00de8bc0
                       catch() { ... } // from try @ 00de84d8 with catch @ 00de8bc0 */
      *(long **)(*param_2 + uVar7 * 8) = plVar5;
    }
  }
                    /* catch() { ... } // from try @ 00de7734 with catch @ 00de8bc4
                       catch() { ... } // from try @ 00de84b0 with catch @ 00de8bc4 */
                    /* catch() { ... } // from try @ 00de8188 with catch @ 00de8bc8
                       catch() { ... } // from try @ 00de8498 with catch @ 00de8bc8 */
                    /* catch() { ... } // from try @ 00de838c with catch @ 00de8bcc */
  *plVar5 = *param_3;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
                    /* catch() { ... } // from try @ 00de8108 with catch @ 00de8be0 */
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

