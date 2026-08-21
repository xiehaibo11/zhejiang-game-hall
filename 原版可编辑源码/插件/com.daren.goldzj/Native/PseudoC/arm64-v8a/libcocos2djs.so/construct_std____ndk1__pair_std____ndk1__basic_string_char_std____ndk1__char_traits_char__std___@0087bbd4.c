
/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>, void*> >
   >::construct<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Value>,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Value>
   const&>(std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>, void*> >&,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Value>*,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, cocos2d::Value> const&) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,void*>>>
     ::
     construct<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>const&>
               (allocator *param_1,pair *param_2,pair *param_3)

{
  ulong __n;
  void *__src;
  pair *__dest;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)param_2 = 0;
  if (((byte)*param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 8) = uVar3;
    *(undefined8 *)param_2 = uVar2;
    goto LAB_0087bc74;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = param_2 + 1;
    *param_2 = SUB41((int)__n << 1,0);
    if (__n != 0) goto LAB_0087bc60;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    *(ulong *)(param_2 + 8) = __n;
    *(pair **)(param_2 + 0x10) = __dest;
    *(ulong *)param_2 = uVar1 | 1;
LAB_0087bc60:
    memcpy(__dest,__src,__n);
  }
  __dest[__n] = (pair)0x0;
LAB_0087bc74:
  cocos2d::Value::Value((Value *)(param_2 + 0x18),(Value *)(param_3 + 0x18));
  return;
}

