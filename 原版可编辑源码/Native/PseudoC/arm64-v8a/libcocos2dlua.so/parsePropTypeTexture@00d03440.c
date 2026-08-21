
/* cocosbuilder::NodeLoader::parsePropTypeTexture(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

undefined8
cocosbuilder::NodeLoader::parsePropTypeTexture(Node *param_1,Node *param_2,CCBReader *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong *puVar5;
  Director *this;
  TextureCache *this_00;
  undefined8 uVar6;
  CCBReader *in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pbVar4 = (byte *)CCBReader::getCCBRootPath(in_x3);
  CCBReader::readCachedString();
  uVar1 = *(ulong *)(pbVar4 + 8);
  pbVar2 = *(byte **)(pbVar4 + 0x10);
  if ((*pbVar4 & 1) == 0) {
    pbVar2 = pbVar4 + 1;
    uVar1 = (ulong)(*pbVar4 >> 1);
  }
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_68,0,(char *)pbVar2,uVar1);
  local_40 = (void *)puVar5[2];
  uStack_48 = puVar5[1];
  local_50 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  uVar1 = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    uVar1 = uStack_48;
  }
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    this = (Director *)cocos2d::Director::getInstance();
    this_00 = (TextureCache *)cocos2d::Director::getTextureCache(this);
    uVar6 = cocos2d::TextureCache::addImage(this_00,(basic_string *)&local_50);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

