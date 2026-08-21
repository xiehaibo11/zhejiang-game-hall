
/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::DataPool<cocos2d::Particle3D> >, void*> >
   >::__destroy<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::DataPool<cocos2d::Particle3D> >
   >(std::__ndk1::integral_constant<bool, false>,
   std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::DataPool<cocos2d::Particle3D> >, void*> >&,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::DataPool<cocos2d::Particle3D> >*) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,void*>>>
     ::
     __destroy<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::DataPool<cocos2d::Particle3D>>>
               (undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  
  if (*(long *)(param_3 + 0x48) != 0) {
    lVar1 = *(long *)(param_3 + 0x38);
    pbVar2 = *(byte **)(param_3 + 0x40);
    lVar3 = *(long *)pbVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_3[0x48] = 0;
    param_3[0x49] = 0;
    param_3[0x4a] = 0;
    param_3[0x4b] = 0;
    param_3[0x4c] = 0;
    param_3[0x4d] = 0;
    param_3[0x4e] = 0;
    param_3[0x4f] = 0;
    while (pbVar2 != param_3 + 0x38) {
      pbVar4 = *(byte **)(pbVar2 + 8);
      operator_delete(pbVar2);
      pbVar2 = pbVar4;
    }
  }
  if (*(long *)(param_3 + 0x30) != 0) {
    lVar1 = *(long *)(param_3 + 0x20);
    pbVar2 = *(byte **)(param_3 + 0x28);
                    /* try { // try from 00e202d8 to 00f202eb has its CatchHandler @ 00e205a8 */
    lVar3 = *(long *)pbVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_3[0x30] = 0;
    param_3[0x31] = 0;
    param_3[0x32] = 0;
    param_3[0x33] = 0;
    param_3[0x34] = 0;
    param_3[0x35] = 0;
    param_3[0x36] = 0;
    param_3[0x37] = 0;
    while (pbVar2 != param_3 + 0x20) {
      pbVar4 = *(byte **)(pbVar2 + 8);
      operator_delete(pbVar2);
                    /* try { // try from 00e20300 to 00f20307 has its CatchHandler @ 00e205a4 */
      pbVar2 = pbVar4;
    }
  }
  if ((*param_3 & 1) != 0) {
    operator_delete(*(void **)(param_3 + 0x10));
    return;
  }
                    /* try { // try from 00e20310 to 00f20333 has its CatchHandler @ 00e205d8 */
  return;
}

