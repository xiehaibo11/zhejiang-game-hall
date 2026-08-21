
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::ui::Scale9Sprite*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::ui::Scale9Sprite*>, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   cocos2d::ui::Scale9Sprite*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::ui::Scale9Sprite*> >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::ui::Scale9Sprite*>, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::Scale9Sprite*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::Scale9Sprite*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::Scale9Sprite*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::Scale9Sprite*>>>
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
  
  uVar3 = param_2[1];
  uVar4 = param_3[1];
                    /* try { // try from 00e0ddd0 to 00f0ddd7 has its CatchHandler @ 00e0de6c */
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
  uVar8 = NEON_uaddlv(uVar9,1);
                    /* try { // try from 00e0ddd8 to 00f0de87 has its CatchHandler @ 00e0dd9c */
  uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
  if (uVar6 < 2) {
    uVar4 = uVar3 - 1 & uVar4;
  }
  else {
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar4 / uVar3;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar7 * uVar3;
    }
  }
  plVar2 = *(long **)(*param_2 + uVar4 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar7 = plVar5[1];
    if (uVar6 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 == uVar4) goto LAB_00e0dea0;
  }
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
                    /* catch() { ... } // from try @ 00e0ddd0 with catch @ 00e0de6c */
    if (uVar6 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 == uVar4) goto LAB_00e0dea0;
  }
  *(undefined8 *)(*param_2 + uVar4 * 8) = 0;
LAB_00e0dea0:
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar7 / uVar3;
      }
                    /* try { // try from 00e0dec0 to 00f0dec7 has its CatchHandler @ 00e0df5c */
      uVar7 = uVar7 - uVar6 * uVar3;
                    /* try { // try from 00e0dec8 to 00f0df77 has its CatchHandler @ 00e0de88 */
    }
    if (uVar7 != uVar4) {
      *(long **)(*param_2 + uVar7 * 8) = plVar5;
    }
  }
  *plVar5 = *param_3;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

