
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element> >
   >::__move_assign(std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element> > >&, std::__ndk1::integral_constant<bool, true>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
     ::__move_assign(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  
                    /* catch() { ... } // from try @ 009ba7ac with catch @ 009ba97c */
  if (param_1[3] != 0) {
                    /* catch() { ... } // from try @ 009ba7a0 with catch @ 009ba980 */
    puVar2 = (void *)param_1[2];
                    /* catch() { ... } // from try @ 009ba780 with catch @ 009ba984 */
    while (puVar2 != (void *)0x0) {
      pvVar7 = (void *)*puVar2;
      if ((*(byte *)(puVar2 + 3) & 1) != 0) {
                    /* catch() { ... } // from try @ 009ba7b8 with catch @ 009ba994 */
        operator_delete((void *)puVar2[5]);
      }
      operator_delete(puVar2);
      puVar2 = pvVar7;
    }
    lVar3 = param_1[1];
    param_1[2] = 0;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
    }
    param_1[3] = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  pvVar7 = (void *)*param_1;
  *param_1 = lVar3;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
                    /* try { // try from 009ba9ec to 00abaa3f has its CatchHandler @ 009ba9ec
                       catch() { ... } // from try @ 009ba9ec with catch @ 009ba9ec
                       catch() { ... } // from try @ 009bac8c with catch @ 009ba9ec */
  param_1[1] = param_2[1];
  lVar5 = param_2[3];
  param_2[1] = 0;
  param_1[3] = lVar5;
  *(int *)(param_1 + 4) = (int)param_2[4];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar5 != 0) {
    uVar6 = param_1[1];
    uVar4 = *(ulong *)(lVar3 + 8);
    if ((uVar6 - 1 & uVar6) == 0) {
                    /* try { // try from 009baa40 to 00abaa57 has its CatchHandler @ 009bad08 */
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}

