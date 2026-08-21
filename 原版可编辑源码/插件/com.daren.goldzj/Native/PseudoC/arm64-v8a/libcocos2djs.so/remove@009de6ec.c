
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::WebViewImpl*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::WebViewImpl*> >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::WebViewImpl*>, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::WebViewImpl*>>>
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
                    /* try { // try from 009de6f8 to 00ade703 has its CatchHandler @ 009de790 */
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar6 / uVar2;
  }
                    /* try { // try from 009de704 to 00ade733 has its CatchHandler @ 009de4d0 */
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
                    /* try { // try from 009de734 to 00ade73f has its CatchHandler @ 009de7b4 */
    uVar6 = plVar7[1];
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
    }
    else {
                    /* try { // try from 009de740 to 00ade82b has its CatchHandler @ 009de4d0 */
      if (uVar2 <= uVar6) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar6 / uVar2;
        }
        uVar6 = uVar6 - uVar4 * uVar2;
      }
    }
    if (uVar6 == uVar1) goto LAB_009de7a0;
  }
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar3 == 0) {
                    /* catch() { ... } // from try @ 009de6f8 with catch @ 009de790 */
      uVar6 = uVar6 & uVar8;
                    /* catch() { ... } // from try @ 009de6d0 with catch @ 009de794 */
    }
    else if (uVar2 <= uVar6) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar4 * uVar2;
    }
                    /* catch() { ... } // from try @ 009de6a4 with catch @ 009de798 */
    if (uVar6 == uVar1) goto LAB_009de7a0;
  }
  *(undefined8 *)(*param_2 + uVar1 * 8) = 0;
LAB_009de7a0:
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
                    /* catch() { ... } // from try @ 009de674 with catch @ 009de7ac */
    if (uVar3 == 0) {
                    /* catch() { ... } // from try @ 009de5dc with catch @ 009de7f8 */
      uVar6 = uVar6 & uVar8;
    }
    else {
                    /* catch() { ... } // from try @ 009de658 with catch @ 009de7b0 */
                    /* catch() { ... } // from try @ 009de734 with catch @ 009de7b4 */
      if (uVar2 <= uVar6) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        uVar6 = uVar6 - uVar3 * uVar2;
      }
    }
    if (uVar6 != uVar1) {
                    /* catch() { ... } // from try @ 009de60c with catch @ 009de7c8 */
                    /* catch() { ... } // from try @ 009de5b4 with catch @ 009de7cc */
      *(long **)(*param_2 + uVar6 * 8) = plVar7;
    }
  }
  *plVar7 = *param_3;
  *param_3 = 0;
                    /* catch() { ... } // from try @ 009de57c with catch @ 009de7dc */
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
                    /* catch() { ... } // from try @ 009de5cc with catch @ 009de7f0 */
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

