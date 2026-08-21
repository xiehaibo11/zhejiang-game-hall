
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Value>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Value>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value> >
   >::__construct_node_hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Value&>(unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Value&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
     ::
     __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Value&>
               (ulong param_1,basic_string *param_2,Value *param_3)

{
  void *pvVar1;
  void *__dest;
  Value *in_x3;
  undefined8 *in_x8;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar1 = operator_new(0x38);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  if (((byte)*param_3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)((long)pvVar1 + 0x20) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x10) = uVar4;
    goto LAB_008dfb64;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x11);
    *(char *)((long)pvVar1 + 0x10) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_008dfb50;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    *(ulong *)((long)pvVar1 + 0x18) = __n;
    *(void **)((long)pvVar1 + 0x20) = __dest;
    *(ulong *)((long)pvVar1 + 0x10) = uVar3 | 1;
LAB_008dfb50:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_008dfb64:
  cocos2d::Value::Value((Value *)((long)pvVar1 + 0x28),in_x3);
  puVar2 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = param_2;
  return;
}

