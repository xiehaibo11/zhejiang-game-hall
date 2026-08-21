
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<float, cocos2d::Vec4>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::__map_value_compare<float, std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::less<float>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<float,
   cocos2d::Vec4> > >::__emplace_unique_key_args<float, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<float const&>, std::__ndk1::tuple<> >(float const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<float const&>&&,
   std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
::
__emplace_unique_key_args<float,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<float_const&>,std::__ndk1::tuple<>>
          (float *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  
  pfVar4 = param_1 + 2;
  pfVar5 = *(float **)pfVar4;
                    /* try { // try from 00e24da8 to 00f24daf has its CatchHandler @ 00e24dc0 */
                    /* try { // try from 00e24db0 to 00f24db7 has its CatchHandler @ 00e24dbc */
  pfVar7 = pfVar4;
  if (pfVar5 != (float *)0x0) {
                    /* try { // try from 00e24db8 to 00f24f1f has its CatchHandler @ 00e247ec */
    pfVar4 = param_1 + 2;
    do {
                    /* catch() { ... } // from try @ 00e24db0 with catch @ 00e24dbc */
                    /* catch() { ... } // from try @ 00e24da8 with catch @ 00e24dc0 */
                    /* catch() { ... } // from try @ 00e24830 with catch @ 00e24dc4 */
      while (pfVar6 = pfVar5, pfVar7 = pfVar6, *(float *)param_2 < pfVar6[7]) {
        pfVar4 = pfVar6;
        pfVar5 = *(float **)pfVar6;
        if (*(float **)pfVar6 == (float *)0x0) {
          p_Var3 = *(__tree_node_base **)pfVar6;
          goto joined_r0x00e24e00;
        }
      }
      if (*(float *)param_2 <= pfVar6[7]) break;
      pfVar4 = pfVar6 + 2;
                    /* catch() { ... } // from try @ 00e24bfc with catch @ 00e24dec */
      pfVar5 = *(float **)pfVar4;
    } while (*(float **)pfVar4 != (float *)0x0);
  }
  p_Var3 = *(__tree_node_base **)pfVar4;
  pfVar6 = pfVar4;
joined_r0x00e24e00:
  if (p_Var3 == (__tree_node_base *)0x0) {
                    /* catch() { ... } // from try @ 00e248c8 with catch @ 00e24e18 */
                    /* catch() { ... } // from try @ 00e24918 with catch @ 00e24e1c */
    p_Var3 = operator_new(0x30);
                    /* catch() { ... } // from try @ 00e24934 with catch @ 00e24e20
                       catch() { ... } // from try @ 00e24d40 with catch @ 00e24e20 */
    *(undefined4 *)(p_Var3 + 0x1c) = **(undefined4 **)param_4;
                    /* catch() { ... } // from try @ 00e24ad8 with catch @ 00e24e30 */
                    /* catch() { ... } // from try @ 00e24ab0 with catch @ 00e24e34 */
    cocos2d::Vec4::Vec4((Vec4 *)(p_Var3 + 0x20));
                    /* catch() { ... } // from try @ 00e24a88 with catch @ 00e24e38 */
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
                    /* catch() { ... } // from try @ 00e249e8 with catch @ 00e24e3c */
    *(float **)(p_Var3 + 0x10) = pfVar7;
                    /* catch() { ... } // from try @ 00e24a74 with catch @ 00e24e40
                       catch() { ... } // from try @ 00e24b30 with catch @ 00e24e40 */
    *(__tree_node_base **)pfVar6 = p_Var3;
    p_Var1 = p_Var3;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var1 = *(__tree_node_base **)pfVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),p_Var1);
    uVar2 = 1;
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
  }
  else {
                    /* catch() { ... } // from try @ 00e24b74 with catch @ 00e24e04 */
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}

