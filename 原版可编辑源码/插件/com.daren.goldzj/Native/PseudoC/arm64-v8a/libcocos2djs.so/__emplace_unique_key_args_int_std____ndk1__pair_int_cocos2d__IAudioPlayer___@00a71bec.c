
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::IAudioPlayer*>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::IAudioPlayer*> >
   >::__emplace_unique_key_args<int, std::__ndk1::pair<int, cocos2d::IAudioPlayer*> >(int const&,
   std::__ndk1::pair<int, cocos2d::IAudioPlayer*>&&) */

undefined1  [16] __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::IAudioPlayer*>>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
           *this,int *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
  *p_Var6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
                    /* try { // try from 00a71bfc to 00b71c23 has its CatchHandler @ 00a71d6c */
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
                    /* try { // try from 00a71c44 to 00b71c9b has its CatchHandler @ 00a71d94 */
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_00a71ca0;
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
            if (uVar7 - uVar1 * uVar9 == unaff_x24) goto LAB_00a71c8c;
            goto LAB_00a71ca0;
          }
          if (uVar7 != unaff_x24) goto LAB_00a71ca0;
        }
LAB_00a71c8c:
      } while ((int)plVar8[2] != *param_1);
      uVar2 = 0;
      goto LAB_00a71dc8;
    }
  }
LAB_00a71ca0:
  plVar8 = operator_new(0x20);
  *(undefined4 *)(plVar8 + 2) = *(undefined4 *)param_2;
  lVar4 = *(long *)(param_2 + 8);
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[3] = lVar4;
                    /* try { // try from 00a71cd4 to 00b71d17 has its CatchHandler @ 00a71d6c */
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    if (uVar9 < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = (ulong)((uVar9 - 1 & uVar9) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
                    /* try { // try from 00a71d18 to 00b71deb has its CatchHandler @ 00a71b4c */
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
                    /* catch() { ... } // from try @ 00a71bc0 with catch @ 00a71d68 */
                    /* catch() { ... } // from try @ 00a71bfc with catch @ 00a71d6c
                       catch() { ... } // from try @ 00a71cd4 with catch @ 00a71d6c */
    p_Var6 = this + 0x10;
    *plVar8 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::IAudioPlayer*>>>
      **)(lVar4 + unaff_x24 * 8) = p_Var6;
    if (*plVar8 != 0) {
                    /* catch() { ... } // from try @ 00a71ba0 with catch @ 00a71d84 */
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 - 1 & uVar9) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else {
                    /* catch() { ... } // from try @ 00a71bd8 with catch @ 00a71d94
                       catch() { ... } // from try @ 00a71c44 with catch @ 00a71d94 */
        if (uVar9 <= uVar10) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar10 / uVar9;
          }
          uVar10 = uVar10 - uVar3 * uVar9;
        }
      }
      plVar5 = (long *)(*(long *)this + uVar10 * 8);
      goto LAB_00a71db4;
    }
  }
  else {
    *plVar8 = *plVar5;
                    /* catch() { ... } // from try @ 00a71bcc with catch @ 00a71d64 */
LAB_00a71db4:
    *plVar5 = (long)plVar8;
  }
  uVar2 = 1;
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
LAB_00a71dc8:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}

