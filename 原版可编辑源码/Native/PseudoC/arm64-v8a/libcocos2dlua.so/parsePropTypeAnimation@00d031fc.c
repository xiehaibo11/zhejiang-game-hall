
/* cocosbuilder::NodeLoader::parsePropTypeAnimation(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

undefined8
cocosbuilder::NodeLoader::parsePropTypeAnimation(Node *param_1,Node *param_2,CCBReader *param_3)

{
  CCBReader *pCVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong *puVar6;
  AnimationCache *this;
  undefined8 uVar7;
  char *extraout_x1;
  char *extraout_x1_00;
  char *extraout_x1_01;
  char *pcVar8;
  CCBReader *in_x3;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  CCBReader *local_60;
  ulong local_50;
  ulong uStack_48;
  CCBReader *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar5 = (byte *)CCBReader::getCCBRootPath(in_x3);
  CCBReader::readCachedString();
  uVar2 = *(ulong *)(pbVar5 + 8);
  pbVar3 = *(byte **)(pbVar5 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    pbVar3 = pbVar5 + 1;
    uVar2 = (ulong)(*pbVar5 >> 1);
  }
  puVar6 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,0,(char *)pbVar3,uVar2);
  local_40 = (CCBReader *)puVar6[2];
  uStack_48 = puVar6[1];
  local_50 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  CCBReader::readCachedString();
  pCVar1 = (CCBReader *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pCVar1 = local_60;
  }
  CCBReader::lastPathComponent(pCVar1,extraout_x1);
  pcVar8 = extraout_x1_00;
  if (((byte)local_70._0_1_ & 1) != 0) {
    *local_60 = (CCBReader)0x0;
    uStack_68 = 0;
    if (((byte)local_70._0_1_ & 1) != 0) {
      operator_delete(local_60);
      pcVar8 = extraout_x1_01;
    }
  }
  pCVar1 = (CCBReader *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pCVar1 = local_40;
  }
  uStack_68 = uStack_80;
  local_70 = local_88;
  local_60 = local_78;
  CCBReader::lastPathComponent(pCVar1,pcVar8);
  if ((local_50 & 1) != 0) {
    *local_40 = (CCBReader)0x0;
    uStack_48 = 0;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  uVar2 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar2 = uStack_68;
  }
  local_50 = local_88;
  local_40 = local_78;
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    this = (AnimationCache *)cocos2d::AnimationCache::getInstance();
    cocos2d::AnimationCache::addAnimationsWithFile(this,(basic_string *)&local_50);
    uVar7 = cocos2d::AnimationCache::getAnimation(this,(basic_string *)&local_70);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

