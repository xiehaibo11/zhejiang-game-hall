
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*> >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
     ::remove(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_2[1];
  uVar6 = param_3[1];
  uVar8 = uVar2 - 1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar6 / uVar2;
  }
  uVar1 = uVar6;
  if (uVar2 <= uVar6) {
    uVar1 = uVar6 - uVar3 * uVar2;
  }
  uVar3 = uVar8 & uVar2;
  if (uVar3 == 0) {
    uVar1 = uVar8 & uVar6;
  }
  plVar5 = *(long **)(*param_2 + uVar1 * 8);
  do {
    plVar7 = plVar5;
    plVar5 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar6 = plVar7[1];
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
    }
    else if (uVar2 <= uVar6) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar4 * uVar2;
    }
    if (uVar6 == uVar1) goto LAB_00a7273c;
  }
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
                    /* try { // try from 00a72730 to 00b727cf has its CatchHandler @ 00a72544 */
    }
    else if (uVar2 <= uVar6) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar4 * uVar2;
    }
    if (uVar6 == uVar1) goto LAB_00a7273c;
  }
  *(undefined8 *)(*param_2 + uVar1 * 8) = 0;
LAB_00a7273c:
  if (*param_3 != 0) {
                    /* catch() { ... } // from try @ 00a725c4 with catch @ 00a72744 */
    uVar6 = *(ulong *)(*param_3 + 8);
                    /* catch() { ... } // from try @ 00a725b8 with catch @ 00a72748 */
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
    }
    else {
                    /* catch() { ... } // from try @ 00a72610 with catch @ 00a7274c
                       catch() { ... } // from try @ 00a726ec with catch @ 00a7274c */
      if (uVar2 <= uVar6) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        uVar6 = uVar6 - uVar3 * uVar2;
      }
    }
    if (uVar6 != uVar1) {
                    /* catch() { ... } // from try @ 00a72598 with catch @ 00a72768 */
      *(long **)(*param_2 + uVar6 * 8) = plVar7;
    }
  }
  *plVar7 = *param_3;
  *param_3 = 0;
                    /* catch() { ... } // from try @ 00a725d0 with catch @ 00a72778
                       catch() { ... } // from try @ 00a72640 with catch @ 00a72778 */
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

