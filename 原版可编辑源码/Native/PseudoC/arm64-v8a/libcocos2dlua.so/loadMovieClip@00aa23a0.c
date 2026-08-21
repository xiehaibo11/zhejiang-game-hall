
/* fairygui::UIPackage::loadMovieClip(fairygui::PackageItem*) */

void __thiscall fairygui::UIPackage::loadMovieClip(UIPackage *this,PackageItem *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  Texture2D *pTVar5;
  undefined8 *puVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  Ref *this_00;
  long lVar12;
  basic_string *pbVar13;
  SpriteFrame *this_01;
  ByteBuffer *this_02;
  float fVar14;
  undefined8 local_d0;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  long local_88;
  
                    /* try { // try from 00aa23bc to 00ba244f has its CatchHandler @ 00aa23bc
                       catch() { ... } // from try @ 00aa23bc with catch @ 00aa23bc
                       catch() { ... } // from try @ 00aa2458 with catch @ 00aa23bc */
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  this_00 = (Ref *)cocos2d::Animation::create();
  *(Ref **)(param_1 + 200) = this_00;
  cocos2d::Ref::retain(this_00);
  this_02 = *(ByteBuffer **)(param_1 + 0x88);
  ByteBuffer::seek(this_02,0,0);
  iVar9 = ByteBuffer::readInt(this_02);
  bVar7 = ByteBuffer::readBool(this_02);
  param_1[0xd8] = (PackageItem)(bVar7 & 1);
  iVar10 = ByteBuffer::readInt(this_02);
  *(float *)(param_1 + 0xd4) = (float)iVar10 / 1000.0;
  ByteBuffer::seek(this_02,0,1);
                    /* try { // try from 00aa2450 to 00ba2457 has its CatchHandler @ 00aa2494 */
  sVar8 = ByteBuffer::readShort(this_02);
                    /* try { // try from 00aa2458 to 00ba24af has its CatchHandler @ 00aa23bc */
  puStack_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  if (sVar8 != 0) {
    if (sVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    puStack_98 = operator_new((long)sVar8 << 3);
    local_90 = puStack_98 + sVar8;
  }
                    /* catch() { ... } // from try @ 00aa2450 with catch @ 00aa2494 */
  local_a0 = puStack_98;
  cocos2d::Size::Size((Size *)&local_a8,(float)*(int *)(param_1 + 0x68),
                      (float)*(int *)(param_1 + 0x6c));
  lVar12 = cocos2d::Director::getInstance();
  fVar14 = *(float *)(lVar12 + 0x1a0);
  lVar12 = cocos2d::Director::getInstance();
  cocos2d::Size::Size((Size *)&local_b0,local_a8 / fVar14,local_a4 / *(float *)(lVar12 + 0x1a0));
  iVar10 = (int)sVar8;
  if (0 < iVar10) {
    do {
      sVar8 = ByteBuffer::readShort(this_02);
      iVar3 = *(int *)(this_02 + 0x1c);
      cocos2d::Rect::Rect((Rect *)&local_c0);
      iVar11 = ByteBuffer::readInt(this_02);
      local_c0 = (float)iVar11;
      iVar11 = ByteBuffer::readInt(this_02);
      local_bc = (float)iVar11;
      iVar11 = ByteBuffer::readInt(this_02);
      local_b8 = (float)iVar11;
      iVar11 = ByteBuffer::readInt(this_02);
      local_b4 = (float)iVar11;
      iVar11 = ByteBuffer::readInt(this_02);
      pbVar13 = (basic_string *)ByteBuffer::readS(this_02);
      uVar2 = (ulong)((byte)*pbVar13 >> 1);
      if (((byte)*pbVar13 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar13 + 8);
      }
      if (((uVar2 == 0) ||
          (lVar12 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
                                *)(this + 0xd8),pbVar13), lVar12 == 0)) ||
         (*(AtlasSprite **)(lVar12 + 0x28) == (AtlasSprite *)0x0)) {
        this_01 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
        if (this_01 != (SpriteFrame *)0x0) {
          cocos2d::SpriteFrame::SpriteFrame(this_01);
        }
        pTVar5 = _emptyTexture;
        cocos2d::Rect::Rect((Rect *)&local_d0);
        cocos2d::SpriteFrame::initWithTexture(this_01,pTVar5,(Rect *)&local_d0);
      }
      else {
        this_01 = (SpriteFrame *)createSpriteTexture(this,*(AtlasSprite **)(lVar12 + 0x28));
        cocos2d::Size::operator=((Size *)(this_01 + 0x84),(Size *)&local_a8);
        cocos2d::Size::operator=((Size *)(this_01 + 0x40),(Size *)&local_b0);
      }
      local_d0 = (Ref *)CONCAT44(-(local_bc - (fStack_ac - local_b4) * 0.5),
                                 local_c0 - (local_b0 - local_b8) * 0.5);
      cocos2d::SpriteFrame::setOffset(this_01,(Vec2 *)&local_d0);
      local_d0 = (Ref *)cocos2d::AnimationFrame::create
                                  (this_01,((float)iVar11 / 1000.0) / ((float)iVar9 / 1000.0) + 1.0,
                                   (unordered_map *)cocos2d::ValueMapNull);
      if (puStack_98 == local_90) {
        std::__ndk1::
        vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>::
        __push_back_slow_path<cocos2d::AnimationFrame*const&>
                  ((vector<cocos2d::AnimationFrame*,std::__ndk1::allocator<cocos2d::AnimationFrame*>>
                    *)&local_a0,(AnimationFrame **)&local_d0);
      }
      else {
        *puStack_98 = local_d0;
        puStack_98 = puStack_98 + 1;
      }
      cocos2d::Ref::retain(local_d0);
      cocos2d::Ref::release((Ref *)this_01);
      iVar10 = iVar10 + -1;
      *(int *)(this_02 + 0x1c) = iVar3 + sVar8;
    } while (iVar10 != 0);
  }
  cocos2d::Animation::initWithAnimationFrames
            (*(Animation **)(param_1 + 200),(Vector *)&local_a0,(float)iVar9 / 1000.0,1);
  if (this_02 != (ByteBuffer *)0x0) {
    ByteBuffer::~ByteBuffer(this_02);
    operator_delete(this_02);
  }
  puVar6 = puStack_98;
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* try { // try from 00aa26d8 to 00ba2773 has its CatchHandler @ 00aa26d8
                       catch() { ... } // from try @ 00aa26d8 with catch @ 00aa26d8
                       catch() { ... } // from try @ 00aa277c with catch @ 00aa26d8 */
  for (puVar1 = local_a0; puVar1 != puVar6; puVar1 = puVar1 + 1) {
    cocos2d::Ref::release((Ref *)*puVar1);
  }
  puStack_98 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

