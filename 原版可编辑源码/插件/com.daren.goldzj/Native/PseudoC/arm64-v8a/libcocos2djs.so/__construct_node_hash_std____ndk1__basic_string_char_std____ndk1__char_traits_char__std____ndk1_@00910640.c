
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::Node*>,
   void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::Node*>,
   void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::Node*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::Node*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::Node*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::EventDispatcher::Node*>
   > >::__construct_node_hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::EventDispatcher::Node*&>(unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::EventDispatcher::Node*&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::Node*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::Node*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::Node*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::Node*>>>
     ::
     __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::EventDispatcher::Node*&>
               (ulong param_1,basic_string *param_2,Node **param_3)

{
  void *pvVar1;
  void *__dest;
  undefined8 *in_x3;
  undefined8 *in_x8;
  undefined8 uVar2;
  undefined8 *puVar3;
  Node *pNVar4;
  Node *pNVar5;
  
  pvVar1 = operator_new(0x30);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  if (((ulong)*param_3 & 1) == 0) {
    pNVar5 = param_3[1];
    pNVar4 = *param_3;
    *(Node **)((long)pvVar1 + 0x20) = param_3[2];
    *(Node **)((long)pvVar1 + 0x18) = pNVar5;
    *(undefined8 *)((long)pvVar1 + 0x10) = pNVar4;
    goto LAB_00910704;
  }
  pNVar4 = param_3[1];
  if ((Node *)0xffffffffffffffef < pNVar4) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  pNVar5 = param_3[2];
  if (pNVar4 < (Node *)0x17) {
    __dest = (void *)((long)pvVar1 + 0x11);
    *(char *)((long)pvVar1 + 0x10) = (char)((int)pNVar4 << 1);
    if (pNVar4 != (Node *)0x0) goto LAB_009106f0;
  }
  else {
    __dest = operator_new((ulong)(pNVar4 + 0x10) & 0xfffffffffffffff0);
    *(Node **)((long)pvVar1 + 0x18) = pNVar4;
    *(void **)((long)pvVar1 + 0x20) = __dest;
    *(ulong *)((long)pvVar1 + 0x10) = (ulong)(pNVar4 + 0x10) & 0xfffffffffffffff0 | 1;
LAB_009106f0:
    memcpy(__dest,pNVar5,(size_t)pNVar4);
  }
  *(Node *)((long)__dest + (long)pNVar4) = (Node)0x0;
LAB_00910704:
  uVar2 = *in_x3;
  puVar3 = (undefined8 *)*in_x8;
  *(undefined1 *)(in_x8 + 2) = 1;
  *(undefined8 *)((long)pvVar1 + 0x28) = uVar2;
  *puVar3 = 0;
  puVar3[1] = param_2;
  return;
}

