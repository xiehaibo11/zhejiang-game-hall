
/* cocos2d::LabelAtlas::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int, int) */

AtlasNode *
cocos2d::LabelAtlas::create
          (basic_string *param_1,basic_string *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  AtlasNode *this;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar2;
  ulong uVar3;
  
  this = operator_new(0x410,(nothrow_t *)&std::nothrow);
  if (this != (AtlasNode *)0x0) {
    AtlasNode::AtlasNode(this);
    *(undefined ***)this = &PTR__LabelAtlas_016fe328;
    *(undefined ***)(this + 0x2f8) = &PTR__LabelAtlas_016fe8a0;
    *(undefined ***)(this + 1000) = &PTR__LabelAtlas_016fe8e0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x3f0),"");
    this_00 = (Director *)Director::getInstance();
    this_01 = (TextureCache *)Director::getTextureCache(this_00);
    pTVar2 = (Texture2D *)TextureCache::addImage(this_01,param_2);
    uVar1 = (uint)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    uVar3 = AtlasNode::initWithTexture(this,pTVar2,param_3,param_4,uVar1);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AtlasNode *)0x0;
    }
    else {
      *(int *)(this + 0x408) = param_5;
      (**(code **)(*(long *)this + 0x558))(this,param_1);
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00f1097c to 010109a3 has its CatchHandler @ 00f109b4 */
  return this;
}

