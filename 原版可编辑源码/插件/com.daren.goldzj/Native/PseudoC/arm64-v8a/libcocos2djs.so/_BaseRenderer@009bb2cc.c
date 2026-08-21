
/* cocos2d::renderer::BaseRenderer::~BaseRenderer() */

void __thiscall cocos2d::renderer::BaseRenderer::~BaseRenderer(BaseRenderer *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  ProgramLib *this_00;
  void *pvVar6;
  RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *this_01;
  Mat4 *this_02;
  ulong uVar7;
  
                    /* try { // try from 009bb2cc to 00abb2d7 has its CatchHandler @ 009bb4bc */
                    /* try { // try from 009bb2d8 to 00abb2e3 has its CatchHandler @ 009bb4b8 */
                    /* try { // try from 009bb2e4 to 00abb4af has its CatchHandler @ 009bb4d0 */
  *(undefined ***)this = &PTR__BaseRenderer_01c6af80;
  Ref::release(*(Ref **)(this + 0x10));
  this_00 = *(ProgramLib **)(this + 0x18);
  *(undefined8 *)(this + 0x10) = 0;
  if (this_00 != (ProgramLib *)0x0) {
    ProgramLib::~ProgramLib(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  pvVar6 = *(void **)(this + 0x58);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar6 != (void *)0x0) {
    puVar3 = *(undefined8 **)((long)pvVar6 + 0x40);
    lVar1 = *(long *)((long)pvVar6 + 0x48) - (long)puVar3;
    if (lVar1 != 0) {
      uVar7 = 0;
      pvVar2 = (void *)*puVar3;
      while( true ) {
        if (pvVar2 != (void *)0x0) {
          operator_delete(pvVar2);
        }
        uVar7 = uVar7 + 1;
        if ((ulong)(lVar1 >> 3) <= uVar7) break;
        pvVar2 = *(void **)(*(long *)((long)pvVar6 + 0x40) + uVar7 * 8);
      }
      puVar3 = *(undefined8 **)((long)pvVar6 + 0x40);
    }
    *(undefined8 **)((long)pvVar6 + 0x48) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)((long)pvVar6 + 0x48) = puVar3;
      operator_delete(puVar3);
    }
    plVar4 = *(long **)((long)pvVar6 + 0x30);
    if ((long *)((long)pvVar6 + 0x10) == plVar4) {
      pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_009bb3a8:
      (*pcVar5)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar4 + 0x28);
      goto LAB_009bb3a8;
    }
    operator_delete(pvVar6);
  }
  this_01 = *(RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> **)(this + 0x60);
  *(undefined8 *)(this + 0x58) = 0;
  if (this_01 != (RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *)0x0) {
    RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo>::~RecyclePool(this_01);
    operator_delete(this_01);
  }
  pvVar6 = *(void **)(this + 0x68);
  *(undefined8 *)(this + 0x60) = 0;
  if (pvVar6 == (void *)0x0) goto LAB_009bb468;
  plVar4 = *(long **)((long)pvVar6 + 0x40);
  lVar1 = *(long *)((long)pvVar6 + 0x48) - (long)plVar4;
  if (lVar1 != 0) {
    uVar7 = 0;
    plVar4 = (long *)*plVar4;
    while( true ) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      uVar7 = uVar7 + 1;
      if ((ulong)(lVar1 >> 3) <= uVar7) break;
      plVar4 = *(long **)(*(long *)((long)pvVar6 + 0x40) + uVar7 * 8);
    }
    plVar4 = *(long **)((long)pvVar6 + 0x40);
  }
  *(long **)((long)pvVar6 + 0x48) = plVar4;
  if (plVar4 != (long *)0x0) {
    *(long **)((long)pvVar6 + 0x48) = plVar4;
    operator_delete(plVar4);
  }
  plVar4 = *(long **)((long)pvVar6 + 0x30);
  if ((long *)((long)pvVar6 + 0x10) == plVar4) {
    pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_009bb45c:
    (*pcVar5)();
  }
  else if (plVar4 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    goto LAB_009bb45c;
  }
  operator_delete(pvVar6);
LAB_009bb468:
  this_02 = *(Mat4 **)(this + 0x70);
  *(undefined8 *)(this + 0x68) = 0;
  if (this_02 != (Mat4 *)0x0) {
    Mat4::~Mat4(this_02);
    operator_delete(this_02);
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (((byte)this[0x98] & 1) != 0) {
    operator_delete(*(void **)(this + 0xa8));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
             *)(this + 0x78),*(__tree_node **)(this + 0x80));
  puVar3 = *(void **)(this + 0x40);
  do {
    if (puVar3 == (void *)0x0) {
      pvVar6 = *(void **)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      Ref::~Ref((Ref *)this);
      return;
    }
    plVar4 = (long *)puVar3[10];
                    /* try { // try from 009bb4b0 to 00abb527 has its CatchHandler @ 009bb258 */
    pvVar6 = (void *)*puVar3;
                    /* catch() { ... } // from try @ 009bb2d8 with catch @ 009bb4b8 */
                    /* catch() { ... } // from try @ 009bb2cc with catch @ 009bb4bc */
    if (puVar3 + 6 == plVar4) {
                    /* catch() { ... } // from try @ 009bb2e4 with catch @ 009bb4d0 */
      pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_009bb4d8:
      (*pcVar5)();
    }
    else {
                    /* catch() { ... } // from try @ 009bb2ac with catch @ 009bb4c0 */
      if (plVar4 != (long *)0x0) {
        pcVar5 = *(code **)(*plVar4 + 0x28);
        goto LAB_009bb4d8;
      }
    }
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = pvVar6;
  } while( true );
}

