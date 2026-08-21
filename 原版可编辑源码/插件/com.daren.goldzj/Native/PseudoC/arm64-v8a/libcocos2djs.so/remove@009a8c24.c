
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloadTaskAndroid*>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloadTaskAndroid*>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*> >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*>, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
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
                    /* try { // try from 009a8c30 to 00aa8c47 has its CatchHandler @ 009a8e18 */
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
                    /* try { // try from 009a8c50 to 00aa8c5b has its CatchHandler @ 009a8e14 */
    plVar7 = plVar5;
    plVar5 = (long *)*plVar7;
                    /* try { // try from 009a8c5c to 00aa8c67 has its CatchHandler @ 009a8e10 */
  } while ((long *)*plVar7 != param_3);
                    /* try { // try from 009a8c68 to 00aa8d9b has its CatchHandler @ 009a8e28 */
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
    if (uVar6 == uVar1) goto LAB_009a8cd8;
  }
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
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
    if (uVar6 == uVar1) goto LAB_009a8cd8;
  }
  *(undefined8 *)(*param_2 + uVar1 * 8) = 0;
LAB_009a8cd8:
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
    }
    else if (uVar2 <= uVar6) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar3 * uVar2;
    }
    if (uVar6 != uVar1) {
      *(long **)(*param_2 + uVar6 * 8) = plVar7;
    }
  }
  *plVar7 = *param_3;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

