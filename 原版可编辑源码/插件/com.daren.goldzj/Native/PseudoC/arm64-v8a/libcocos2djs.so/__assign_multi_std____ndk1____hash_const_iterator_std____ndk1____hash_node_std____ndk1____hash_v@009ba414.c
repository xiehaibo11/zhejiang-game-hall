
/* void std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::VertexFormat::Element>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::VertexFormat::Element> >
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::VertexFormat::Element>, void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::VertexFormat::Element>, void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::VertexFormat::Element>, void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,void*>*>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
           *this,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_60;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 8);
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    plVar7 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar7 != (long *)0x0) {
                    /* try { // try from 009ba470 to 00aba4b3 has its CatchHandler @ 009ba324 */
      if (param_2 == param_3) goto LAB_009ba4dc;
      plVar7[2] = param_2[2];
      if (param_2 != plVar7) {
        uVar1 = param_2[4];
        pcVar2 = (char *)param_2[5];
                    /* catch() { ... } // from try @ 009ba368 with catch @ 009ba4a0 */
        if ((*(byte *)(param_2 + 3) & 1) == 0) {
          pcVar2 = (char *)((long)param_2 + 0x19);
          uVar1 = (ulong)(*(byte *)(param_2 + 3) >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar7 + 3),pcVar2,uVar1);
      }
      uVar9 = *(undefined8 *)((long)param_2 + 0x3b);
      uVar11 = param_2[7];
      uVar10 = param_2[6];
                    /* try { // try from 009ba4b4 to 00aba507 has its CatchHandler @ 009ba4b4
                       catch() { ... } // from try @ 009ba4b4 with catch @ 009ba4b4
                       catch() { ... } // from try @ 009ba644 with catch @ 009ba4b4 */
      lVar5 = *plVar7;
      *(undefined8 *)((long)plVar7 + 0x43) = *(undefined8 *)((long)param_2 + 0x43);
      *(undefined8 *)((long)plVar7 + 0x3b) = uVar9;
      plVar7[7] = uVar11;
      plVar7[6] = uVar10;
      FUN_009ba5dc(this,plVar7);
      param_2 = (long *)*param_2;
      plVar7 = (long *)lVar5;
    }
  }
LAB_009ba508:
                    /* try { // try from 009ba508 to 00aba51f has its CatchHandler @ 009ba6c0 */
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    __construct_node<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::VertexFormat::Element>const&>
              ((pair *)this);
                    /* try { // try from 009ba528 to 00aba533 has its CatchHandler @ 009ba6bc */
    FUN_009ba5dc(this,local_60);
  }
                    /* try { // try from 009ba534 to 00aba53f has its CatchHandler @ 009ba6b8 */
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009ba540 to 00aba643 has its CatchHandler @ 009ba6d0 */
  return;
LAB_009ba4dc:
  do {
    pvVar8 = (void *)*plVar7;
    if ((*(byte *)(plVar7 + 3) & 1) != 0) {
      operator_delete((void *)plVar7[5]);
    }
    operator_delete(plVar7);
    plVar7 = pvVar8;
  } while (pvVar8 != (void *)0x0);
  goto LAB_009ba508;
}

