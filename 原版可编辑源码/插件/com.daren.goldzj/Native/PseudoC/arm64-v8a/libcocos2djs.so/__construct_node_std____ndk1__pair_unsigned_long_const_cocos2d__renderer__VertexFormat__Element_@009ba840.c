
/* std::__ndk1::unique_ptr<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element>, void*>,
   std::__ndk1::__hash_node_destructor<std::__ndk1::allocator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::VertexFormat::Element>, void*> > > >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element> > >::__construct_node<std::__ndk1::pair<unsigned long
   const, cocos2d::renderer::VertexFormat::Element> const&>(std::__ndk1::pair<unsigned long const,
   cocos2d::renderer::VertexFormat::Element> const&) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
     ::
     __construct_node<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::VertexFormat::Element>const&>
               (pair *param_1)

{
  void *pvVar1;
  void *__dest;
  undefined8 *in_x1;
  undefined8 *in_x8;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar1 = operator_new(0x50);
  *in_x8 = pvVar1;
  in_x8[1] = param_1 + 0x10;
  *(undefined1 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)pvVar1 + 0x10) = *in_x1;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  if ((*(byte *)(in_x1 + 1) & 1) == 0) {
    uVar5 = in_x1[2];
    uVar4 = in_x1[1];
    *(undefined8 *)((long)pvVar1 + 0x28) = in_x1[3];
    *(undefined8 *)((long)pvVar1 + 0x20) = uVar5;
    *(undefined8 *)((long)pvVar1 + 0x18) = uVar4;
    goto LAB_009ba908;
  }
  __n = in_x1[2];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)in_x1[3];
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x19);
    *(char *)((long)pvVar1 + 0x18) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_009ba8f4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    *(ulong *)((long)pvVar1 + 0x20) = __n;
    *(void **)((long)pvVar1 + 0x28) = __dest;
    *(ulong *)((long)pvVar1 + 0x18) = uVar3 | 1;
LAB_009ba8f4:
    memcpy(__dest,__src,__n);
  }
                    /* try { // try from 009ba904 to 00aba9eb has its CatchHandler @ 009ba728 */
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_009ba908:
  uVar4 = *(undefined8 *)((long)in_x1 + 0x2b);
  uVar6 = in_x1[5];
  uVar5 = in_x1[4];
  puVar2 = (undefined8 *)*in_x8;
  *(undefined8 *)((long)pvVar1 + 0x43) = *(undefined8 *)((long)in_x1 + 0x33);
  *(undefined8 *)((long)pvVar1 + 0x3b) = uVar4;
  *(undefined8 *)((long)pvVar1 + 0x38) = uVar6;
  *(undefined8 *)((long)pvVar1 + 0x30) = uVar5;
  *(undefined1 *)(in_x8 + 2) = 1;
  *puVar2 = 0;
  puVar2[1] = puVar2[2];
  return;
}

