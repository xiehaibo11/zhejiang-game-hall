
/* cocos2d::renderer::ForwardRenderer::ForwardRenderer() */

void __thiscall cocos2d::renderer::ForwardRenderer::ForwardRenderer(ForwardRenderer *this)

{
  long lVar1;
  RecyclePool<float> *pRVar2;
  long lVar3;
  code *pcVar4;
  piecewise_construct_t local_b8;
  undefined5 uStack_b7;
  undefined2 uStack_b2;
  undefined1 uStack_b0;
  undefined5 uStack_af;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined4 uStack_a7;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  piecewise_construct_t *local_98;
  Value aVStack_90 [16];
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009c9700 to 00ac9743 has its CatchHandler @ 009c9798 */
  BaseRenderer::BaseRenderer((BaseRenderer *)this);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR__ForwardRenderer_01c6b2e8;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  pRVar2 = operator_new(0x60);
                    /* try { // try from 009c9744 to 00ac9817 has its CatchHandler @ 009c9544 */
  local_80[0] = &PTR_FUN_01c6b320;
  local_60 = local_80;
  RecyclePool<float>::RecyclePool(pRVar2,local_80,8);
  *(RecyclePool<float> **)(this + 0xf0) = pRVar2;
  if (local_80 == local_60) {
    pcVar4 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_009c9784;
    pcVar4 = (code *)(*local_60)[5];
  }
  (*pcVar4)();
LAB_009c9784:
  cocos2d::Value::Value(aVStack_90,0);
                    /* catch() { ... } // from try @ 009c95c4 with catch @ 009c9790 */
                    /* catch() { ... } // from try @ 009c95b8 with catch @ 009c9794 */
                    /* catch() { ... } // from try @ 009c9610 with catch @ 009c9798
                       catch() { ... } // from try @ 009c9700 with catch @ 009c9798 */
  local_98 = &local_b8;
  uStack_a9 = 0;
                    /* catch() { ... } // from try @ 009c9598 with catch @ 009c97b0 */
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  local_b8 = (piecewise_construct_t)0x1a;
  uStack_af = 0x5354484749;
  uStack_b7 = 0x554e5f4343;
  uStack_b2 = 0x5f4d;
  uStack_b0 = 0x4c;
                    /* catch() { ... } // from try @ 009c95d0 with catch @ 009c97c0
                       catch() { ... } // from try @ 009c9648 with catch @ 009c97c0 */
  uStack_aa = 0;
  lVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x78),&local_b8,(tuple *)&DAT_0188bcff,
                     (tuple *)&local_98);
  cocos2d::Value::operator=((Value *)(lVar3 + 0x38),aVStack_90);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,uStack_a8))));
  }
  cocos2d::Value::~Value(aVStack_90);
  cocos2d::Value::Value(aVStack_90,0);
                    /* try { // try from 009c9818 to 00ac9873 has its CatchHandler @ 009c9818
                       catch() { ... } // from try @ 009c9818 with catch @ 009c9818
                       catch() { ... } // from try @ 009c9c10 with catch @ 009c9818 */
  local_98 = &local_b8;
  uStack_a2 = 0;
  local_b8 = (piecewise_construct_t)0x28;
  uStack_a7 = 0x53544847;
  uStack_af = 0x574f444148;
  uStack_aa = 0x5f;
  uStack_a9 = 0x4c;
  uStack_a8 = 0x49;
  uStack_b7 = 0x554e5f4343;
  uStack_b2 = 0x5f4d;
  uStack_b0 = 0x53;
  uStack_a3 = 0;
  lVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x78),&local_b8,(tuple *)&DAT_0188bcff,
                     (tuple *)&local_98);
  cocos2d::Value::operator=((Value *)(lVar3 + 0x38),aVStack_90);
                    /* try { // try from 009c9874 to 00ac988b has its CatchHandler @ 009c9c20 */
  if (((byte)local_b8 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,uStack_a8))));
  }
  cocos2d::Value::~Value(aVStack_90);
  *(undefined8 *)(this + 0x90) = 0;
                    /* try { // try from 009c9894 to 00ac989f has its CatchHandler @ 009c9c1c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009c98a0 to 00ac98ab has its CatchHandler @ 009c9c18 */
                    /* try { // try from 009c98ac to 00ac9c0f has its CatchHandler @ 009c9c30 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

