
/* cocos2d::renderer::ForwardRenderer::~ForwardRenderer() */

void __thiscall cocos2d::renderer::ForwardRenderer::~ForwardRenderer(ForwardRenderer *this)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  code *pcVar4;
  ForwardRenderer *pFVar5;
  ForwardRenderer *pFVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
                    /* try { // try from 009c9c10 to 00ac9c87 has its CatchHandler @ 009c9818 */
                    /* catch() { ... } // from try @ 009c98a0 with catch @ 009c9c18 */
                    /* catch() { ... } // from try @ 009c9894 with catch @ 009c9c1c */
                    /* catch() { ... } // from try @ 009c9874 with catch @ 009c9c20 */
  *(undefined ***)this = &PTR__ForwardRenderer_01c6b2e8;
  pFVar5 = this + 0xb0;
  puVar7 = *(undefined8 **)pFVar5;
                    /* catch() { ... } // from try @ 009c98ac with catch @ 009c9c30 */
  if (puVar7 != *(undefined8 **)(this + 0xb8)) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined8 **)(this + 0xb8));
    puVar7 = *(undefined8 **)pFVar5;
  }
  pFVar6 = this + 200;
  puVar9 = *(undefined8 **)pFVar6;
  *(undefined8 **)(this + 0xb8) = puVar7;
  if (puVar9 != *(undefined8 **)(this + 0xd0)) {
    do {
      Ref::release((Ref *)*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(undefined8 **)(this + 0xd0));
                    /* try { // try from 009c9c88 to 00ac9cdb has its CatchHandler @ 009c9c88
                       catch() { ... } // from try @ 009c9c88 with catch @ 009c9c88
                       catch() { ... } // from try @ 009ca040 with catch @ 009c9c88 */
    puVar9 = *(undefined8 **)pFVar6;
  }
  *(undefined8 **)(this + 0xd0) = puVar9;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
             *)(this + 0x78),*(__tree_node **)(this + 0x80));
  pvVar8 = *(void **)(this + 0xf0);
  *(ForwardRenderer **)(this + 0x78) = this + 0x80;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  if (pvVar8 == (void *)0x0) goto LAB_009c9d34;
  puVar7 = *(undefined8 **)((long)pvVar8 + 0x40);
  lVar1 = *(long *)((long)pvVar8 + 0x48) - (long)puVar7;
  if (lVar1 != 0) {
    uVar10 = 0;
    pvVar2 = (void *)*puVar7;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
                    /* try { // try from 009c9cdc to 00ac9cf3 has its CatchHandler @ 009ca050 */
        operator_delete(pvVar2);
      }
      uVar10 = uVar10 + 1;
      if ((ulong)(lVar1 >> 3) <= uVar10) break;
      pvVar2 = *(void **)(*(long *)((long)pvVar8 + 0x40) + uVar10 * 8);
    }
    puVar7 = *(undefined8 **)((long)pvVar8 + 0x40);
  }
  *(undefined8 **)((long)pvVar8 + 0x48) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)((long)pvVar8 + 0x48) = puVar7;
                    /* try { // try from 009c9cfc to 00ac9d07 has its CatchHandler @ 009ca04c */
    operator_delete(puVar7);
  }
  plVar3 = *(long **)((long)pvVar8 + 0x30);
                    /* try { // try from 009c9d08 to 00ac9d13 has its CatchHandler @ 009ca048 */
  if ((long *)((long)pvVar8 + 0x10) == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_009c9d28:
    (*pcVar4)();
  }
  else if (plVar3 != (long *)0x0) {
                    /* try { // try from 009c9d14 to 00aca03f has its CatchHandler @ 009ca060 */
    pcVar4 = *(code **)(*plVar3 + 0x28);
    goto LAB_009c9d28;
  }
  operator_delete(pvVar8);
LAB_009c9d34:
  puVar7 = *(undefined8 **)(this + 200);
  *(undefined8 *)(this + 0xf0) = 0;
  if (puVar7 != *(undefined8 **)(this + 0xd0)) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined8 **)(this + 0xd0));
    puVar7 = *(undefined8 **)pFVar6;
  }
  *(undefined8 **)(this + 0xd0) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xd0) = puVar7;
    operator_delete(puVar7);
  }
  puVar7 = *(undefined8 **)(this + 0xb0);
  if (puVar7 != *(undefined8 **)(this + 0xb8)) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined8 **)(this + 0xb8));
    puVar7 = *(undefined8 **)pFVar5;
  }
  *(undefined8 **)(this + 0xb8) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xb8) = puVar7;
    operator_delete(puVar7);
  }
  BaseRenderer::~BaseRenderer((BaseRenderer *)this);
  return;
}

