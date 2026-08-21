
/* cocos2d::MotionStreak3D::initWithFade(float, float, float, cocos2d::Color3B const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 __thiscall
cocos2d::MotionStreak3D::initWithFade
          (MotionStreak3D *this,float param_1,float param_2,float param_3,Color3B *param_4,
          basic_string *param_5)

{
  Director *this_00;
  TextureCache *this_01;
  Texture2D *pTVar1;
  
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  pTVar1 = (Texture2D *)TextureCache::addImage(this_01,param_5);
  initWithFade(this,param_1,param_2,param_3,param_4,pTVar1);
  return 1;
}

