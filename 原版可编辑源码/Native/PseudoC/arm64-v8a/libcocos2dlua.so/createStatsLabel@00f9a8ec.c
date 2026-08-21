
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Director::createStatsLabel() */

void cocos2d::Director::createStatsLabel(void)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  undefined4 uVar3;
  long in_x0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long *plVar5;
  ulong uVar6;
  Image *this;
  Texture2D *pTVar7;
  Director *pDVar8;
  Ref *pRVar9;
  long *plVar10;
  TextureCache *pTVar11;
  float fVar12;
  float in_s1;
  float fVar13;
  undefined8 local_b8;
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_a0 [16];
  void *pvStack_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_88 [16];
  void *pvStack_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_70 [16];
  void *pvStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a864 with catch @ 00f9a910
                        */
  local_58 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a8d0 with catch @ 00f9a924
                        */
                    /* try { // try from 00f9a928 to 0109a977 has its CatchHandler @ 00f9a928
                       catch() { ... } // from try @ 00f9a928 with catch @ 00f9a928
                       catch() { ... } // from try @ 00f9a984 with catch @ 00f9a928
                       catch() { ... } // from try @ 00f9a9c0 with catch @ 00f9a928 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_70,"00.0");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_88,"000");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_a0,"00000");
  if (*(long **)(in_x0 + 0x130) != (long *)0x0) {
    pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (**(code **)(**(long **)(in_x0 + 0x130) + 0x560))();
    if (abStack_70 != pbVar4) {
      uVar6 = *(ulong *)(pbVar4 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar4 + 0x10);
                    /* try { // try from 00f9a978 to 0109a983 has its CatchHandler @ 00f9a9f0 */
      if (((byte)*pbVar4 & 1) == 0) {
        pbVar1 = pbVar4 + 1;
        uVar6 = (ulong)((byte)*pbVar4 >> 1);
      }
                    /* try { // try from 00f9a984 to 0109a9b7 has its CatchHandler @ 00f9a928 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(abStack_70,(char *)pbVar1,uVar6);
    }
    pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (**(code **)(**(long **)(in_x0 + 0x138) + 0x560))();
    if (abStack_88 != pbVar4) {
      uVar6 = *(ulong *)(pbVar4 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar4 + 0x10);
                    /* try { // try from 00f9a9b8 to 0109a9bf has its CatchHandler @ 00f9aa0c */
      if (((byte)*pbVar4 & 1) == 0) {
        pbVar1 = pbVar4 + 1;
        uVar6 = (ulong)((byte)*pbVar4 >> 1);
      }
                    /* try { // try from 00f9a9c0 to 0109aa1f has its CatchHandler @ 00f9a928 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(abStack_88,(char *)pbVar1,uVar6);
    }
    pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (**(code **)(**(long **)(in_x0 + 0x140) + 0x560))();
    if (abStack_a0 != pbVar4) {
      uVar6 = *(ulong *)(pbVar4 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar4 + 0x10);
                    /* catch() { ... } // from try @ 00f9a978 with catch @ 00f9a9f0 */
      if (((byte)*pbVar4 & 1) == 0) {
        pbVar1 = pbVar4 + 1;
        uVar6 = (ulong)((byte)*pbVar4 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(abStack_a0,(char *)pbVar1,uVar6);
    }
    if (*(Ref **)(in_x0 + 0x130) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00f9a9b8 with catch @ 00f9aa0c */
      Ref::release(*(Ref **)(in_x0 + 0x130));
      *(undefined8 *)(in_x0 + 0x130) = 0;
    }
    if (*(Ref **)(in_x0 + 0x138) != (Ref *)0x0) {
      Ref::release(*(Ref **)(in_x0 + 0x138));
                    /* try { // try from 00f9aa20 to 0109aa57 has its CatchHandler @ 00f9aa20
                       catch() { ... } // from try @ 00f9aa20 with catch @ 00f9aa20
                       catch() { ... } // from try @ 00f9aac8 with catch @ 00f9aa20 */
      *(undefined8 *)(in_x0 + 0x138) = 0;
    }
    if (*(Ref **)(in_x0 + 0x140) != (Ref *)0x0) {
      Ref::release(*(Ref **)(in_x0 + 0x140));
      *(undefined8 *)(in_x0 + 0x140) = 0;
    }
    pTVar11 = *(TextureCache **)(in_x0 + 0x110);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b8,"/cc_fps_images");
    TextureCache::removeTextureForKey(pTVar11,(basic_string *)&local_b8);
                    /* try { // try from 00f9aa58 to 0109aa5b has its CatchHandler @ 00f9ab08 */
    if ((local_b8 & 1) != 0) {
                    /* try { // try from 00f9aa5c to 0109aa63 has its CatchHandler @ 00f9aaf8 */
      operator_delete(local_a8);
    }
    plVar5 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar5 + 0x10))();
  }
  uVar3 = Texture2D::getDefaultAlphaPixelFormat();
  Texture2D::setDefaultAlphaPixelFormat(8);
  uVar6 = cc_fps_images_len();
                    /* try { // try from 00f9aa88 to 0109aac7 has its CatchHandler @ 00f9aac8 */
  this = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this == (Image *)0x0) goto joined_r0x00f9ae44;
  Image::Image(this);
  uVar6 = Image::initWithImageData(this,&cc_fps_images_png,uVar6 & 0xffffffff);
  if ((uVar6 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    goto joined_r0x00f9ae44;
  }
  pTVar11 = *(TextureCache **)(in_x0 + 0x110);
                    /* catch() { ... } // from try @ 00f9aa88 with catch @ 00f9aac8
                       try { // try from 00f9aac8 to 0109ab1b has its CatchHandler @ 00f9aa20 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b8,"/cc_fps_images");
  pTVar7 = (Texture2D *)TextureCache::addImage(pTVar11,this,(basic_string *)&local_b8);
  if (((byte)local_b8._0_1_ & 1) != 0) {
    operator_delete(local_a8);
  }
                    /* catch() { ... } // from try @ 00f9aa5c with catch @ 00f9aaf8 */
  Ref::release((Ref *)this);
                    /* catch() { ... } // from try @ 00f9aa58 with catch @ 00f9ab08 */
  if (DAT_0178fc40 == (Director *)0x0) {
    pDVar8 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f9ab1c to 0109ac7f has its CatchHandler @ 00f9ab1c
                       catch() { ... } // from try @ 00f9ab1c with catch @ 00f9ab1c
                       catch() { ... } // from try @ 00f9ad0c with catch @ 00f9ab1c
                       catch() { ... } // from try @ 00f9ada0 with catch @ 00f9ab1c */
    if (pDVar8 != (Director *)0x0) {
      Director(pDVar8);
    }
    DAT_0178fc40 = pDVar8;
    init(pDVar8);
  }
  fVar13 = *(float *)(DAT_0178fc40 + 0x1a0);
  pRVar9 = (Ref *)LabelAtlas::create();
  *(Ref **)(in_x0 + 0x130) = pRVar9;
  Ref::retain(pRVar9);
  AtlasNode::setIgnoreContentScaleFactor(*(AtlasNode **)(in_x0 + 0x130),true);
  LabelAtlas::initWithString
            (*(LabelAtlas **)(in_x0 + 0x130),(basic_string *)abStack_70,pTVar7,0xc,0x20,0x2e);
  fVar13 = 1.0 / fVar13;
  (**(code **)(**(long **)(in_x0 + 0x130) + 0x80))(fVar13);
  pRVar9 = (Ref *)LabelAtlas::create();
  *(Ref **)(in_x0 + 0x138) = pRVar9;
  Ref::retain(pRVar9);
  AtlasNode::setIgnoreContentScaleFactor(*(AtlasNode **)(in_x0 + 0x138),true);
  LabelAtlas::initWithString
            (*(LabelAtlas **)(in_x0 + 0x138),(basic_string *)abStack_88,pTVar7,0xc,0x20,0x2e);
  (**(code **)(**(long **)(in_x0 + 0x138) + 0x80))(fVar13);
  pRVar9 = (Ref *)LabelAtlas::create();
  *(Ref **)(in_x0 + 0x140) = pRVar9;
  Ref::retain(pRVar9);
  AtlasNode::setIgnoreContentScaleFactor(*(AtlasNode **)(in_x0 + 0x140),true);
  LabelAtlas::initWithString
            (*(LabelAtlas **)(in_x0 + 0x140),(basic_string *)abStack_a0,pTVar7,0xc,0x20,0x2e);
  (**(code **)(**(long **)(in_x0 + 0x140) + 0x80))(fVar13);
  Texture2D::setDefaultAlphaPixelFormat(uVar3);
  if (DAT_0178fc40 == (Director *)0x0) {
    pDVar8 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (pDVar8 != (Director *)0x0) {
      Director(pDVar8);
    }
    DAT_0178fc40 = pDVar8;
    init(pDVar8);
  }
  fVar13 = *(float *)(DAT_0178fc40 + 0x1a0);
  plVar5 = *(long **)(in_x0 + 0x140);
  if (DAT_0178fc40 == (Director *)0x0) {
    pDVar8 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f9ac80 to 0109ac87 has its CatchHandler @ 00f9adac */
    if (pDVar8 != (Director *)0x0) {
      Director(pDVar8);
    }
    DAT_0178fc40 = pDVar8;
    init(pDVar8);
  }
  if (*(long **)(DAT_0178fc40 + 0x108) == (long *)0x0) {
    fVar12 = 0.0;
    in_s1 = 0.0;
  }
  else {
    fVar12 = (float)(**(code **)(**(long **)(DAT_0178fc40 + 0x108) + 0xa8))();
  }
  in_s1 = in_s1 + (float)((int)(22.0 / fVar13) << 1);
  local_b8 = CONCAT44(in_s1,fVar12 + 0.0);
  (**(code **)(*plVar5 + 0x98))(plVar5,&local_b8);
  plVar5 = *(long **)(in_x0 + 0x138);
  if (DAT_0178fc40 == (Director *)0x0) {
    pDVar8 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (pDVar8 != (Director *)0x0) {
      Director(pDVar8);
    }
    DAT_0178fc40 = pDVar8;
    init(pDVar8);
    plVar10 = *(long **)(DAT_0178fc40 + 0x108);
    if (plVar10 == (long *)0x0) goto LAB_00f9ad90;
LAB_00f9ad48:
    fVar12 = (float)(**(code **)(*plVar10 + 0xa8))();
  }
  else {
    plVar10 = *(long **)(DAT_0178fc40 + 0x108);
    if (plVar10 != (long *)0x0) goto LAB_00f9ad48;
LAB_00f9ad90:
    fVar12 = 0.0;
    in_s1 = 0.0;
  }
  in_s1 = in_s1 + (float)(int)(22.0 / fVar13);
  local_b8 = CONCAT44(in_s1,fVar12 + 0.0);
  (**(code **)(*plVar5 + 0x98))(plVar5,&local_b8);
  plVar5 = *(long **)(in_x0 + 0x130);
  if (DAT_0178fc40 == (Director *)0x0) {
    pDVar8 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (pDVar8 != (Director *)0x0) {
      Director(pDVar8);
    }
    DAT_0178fc40 = pDVar8;
    init(pDVar8);
    plVar10 = *(long **)(DAT_0178fc40 + 0x108);
    if (plVar10 == (long *)0x0) goto LAB_00f9ae1c;
LAB_00f9add0:
    fVar13 = (float)(**(code **)(*plVar10 + 0xa8))();
  }
  else {
    plVar10 = *(long **)(DAT_0178fc40 + 0x108);
    if (plVar10 != (long *)0x0) goto LAB_00f9add0;
LAB_00f9ae1c:
    fVar13 = 0.0;
    in_s1 = 0.0;
  }
  local_b8 = CONCAT44(in_s1 + 0.0,fVar13 + 0.0);
  (**(code **)(*plVar5 + 0x98))(plVar5,&local_b8);
joined_r0x00f9ae44:
  if (((byte)abStack_a0[0] & 1) != 0) {
    operator_delete(pvStack_90);
  }
  if (((byte)abStack_88[0] & 1) != 0) {
    operator_delete(pvStack_78);
  }
  if (((byte)abStack_70[0] & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

