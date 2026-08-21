
void _spAtlasPage_createTexture(long param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  Director *this;
  TextureCache *this_00;
  Ref *this_01;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (Director *)cocos2d::Director::getInstance();
  this_00 = (TextureCache *)cocos2d::Director::getTextureCache(this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50,param_2);
  this_01 = (Ref *)cocos2d::TextureCache::addImage(this_00,(basic_string *)&local_50);
  if (((byte)local_50._0_1_ & 1) != 0) {
    operator_delete(local_40);
  }
  cocos2d::Ref::retain(this_01);
  uVar1 = *(int *)(param_1 + 0x14) - 1;
  if (uVar1 < 7) {
    local_50 = *(undefined4 *)(&DAT_0141a464 + (long)(int)uVar1 * 4);
  }
  else {
    local_50 = 0x2601;
  }
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  if (uVar1 < 7) {
    local_4c = *(undefined4 *)(&DAT_0141a464 + (long)(int)uVar1 * 4);
  }
  else {
    local_4c = 0x2601;
  }
  local_44 = 0x812f;
  local_48 = local_44;
  if (*(int *)(param_1 + 0x1c) != 1) {
    local_48 = 0x2901;
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    local_44 = 0x2901;
  }
  cocos2d::Texture2D::setTexParameters((Texture2D *)this_01,(_TexParams *)&local_50);
  *(Ref **)(param_1 + 0x28) = this_01;
  uVar3 = cocos2d::Texture2D::getPixelsWide((Texture2D *)this_01);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = cocos2d::Texture2D::getPixelsHigh((Texture2D *)this_01);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

