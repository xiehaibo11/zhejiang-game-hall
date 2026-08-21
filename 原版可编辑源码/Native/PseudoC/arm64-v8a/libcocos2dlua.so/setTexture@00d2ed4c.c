
/* cocos2d::Mesh::setTexture(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Mesh::setTexture(Mesh *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  Director *this_00;
  TextureCache *this_01;
  undefined8 uVar3;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x2a8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x2a8),(char *)pbVar2,uVar1);
  }
  this_00 = (Director *)Director::getInstance();
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  uVar3 = TextureCache::addImage(this_01,param_1);
  setTexture(this,uVar3,2,1);
  return;
}

