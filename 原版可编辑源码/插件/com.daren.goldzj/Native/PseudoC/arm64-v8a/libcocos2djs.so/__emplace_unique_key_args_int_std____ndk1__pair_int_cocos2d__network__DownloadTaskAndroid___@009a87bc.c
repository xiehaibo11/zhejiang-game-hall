
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*>, std::__ndk1::__unordered_map_hasher<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloadTaskAndroid*>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::network::DownloadTaskAndroid*>,
   std::__ndk1::equal_to<int>, true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,
   cocos2d::network::DownloadTaskAndroid*> > >::__emplace_unique_key_args<int,
   std::__ndk1::pair<int, cocos2d::network::DownloadTaskAndroid*> >(int const&,
   std::__ndk1::pair<int, cocos2d::network::DownloadTaskAndroid*>&&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::network::DownloadTaskAndroid*>>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
           *this,int *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
  *p_Var6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar9 = *(ulong *)(this + 8);
  uVar10 = (ulong)*param_1;
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar3 & uVar9) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_009a8870;
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if ((uVar3 & uVar9) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x24) goto LAB_009a885c;
            goto LAB_009a8870;
          }
                    /* try { // try from 009a8858 to 00aa893b has its CatchHandler @ 009a8698 */
          if (uVar7 != unaff_x24) goto LAB_009a8870;
        }
LAB_009a885c:
      } while ((int)plVar8[2] != *param_1);
      uVar2 = 0;
      goto LAB_009a8998;
    }
  }
LAB_009a8870:
  plVar8 = operator_new(0x20);
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)param_2;
  lVar4 = *(long *)(param_2 + 8);
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[3] = lVar4;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    if (uVar9 < 3) {
                    /* catch() { ... } // from try @ 009a870c with catch @ 009a88d0 */
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar9 - 1 & uVar9) != 0);
                    /* catch() { ... } // from try @ 009a8718 with catch @ 009a88cc */
    }
                    /* catch() { ... } // from try @ 009a86ec with catch @ 009a88d4 */
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
                    /* catch() { ... } // from try @ 009a8724 with catch @ 009a88e4 */
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    rehash(this,uVar9);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar4 = *(long *)this;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 009a893c to 00aa898f has its CatchHandler @ 009a893c
                       catch() { ... } // from try @ 009a893c with catch @ 009a893c
                       catch() { ... } // from try @ 009a8af8 with catch @ 009a893c */
    p_Var6 = this + 0x10;
    *plVar8 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
      **)(lVar4 + unaff_x24 * 8) = p_Var6;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 - 1 & uVar9) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar3 * uVar9;
      }
      plVar5 = (long *)(*(long *)this + uVar10 * 8);
      goto LAB_009a8984;
    }
  }
  else {
    *plVar8 = *plVar5;
LAB_009a8984:
    *plVar5 = (long)plVar8;
  }
  uVar2 = 1;
                    /* try { // try from 009a8990 to 00aa89a7 has its CatchHandler @ 009a8b74 */
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_009a8998:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}

