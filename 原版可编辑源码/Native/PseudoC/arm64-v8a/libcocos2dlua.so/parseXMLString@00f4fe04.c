
/* cocos2d::TMXMapInfo::parseXMLString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::TMXMapInfo::parseXMLString(TMXMapInfo *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  basic_string *pbVar5;
  SAXParser aSStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    SAXParser::SAXParser(aSStack_40);
    uVar4 = SAXParser::init((char *)aSStack_40);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      SAXParser::setDelegator(aSStack_40,(SAXDelegator *)(this + 0x28));
      pbVar5 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar5 = param_1 + 1;
      }
      uVar3 = SAXParser::parse(aSStack_40,(char *)pbVar5,uVar1);
    }
    SAXParser::~SAXParser(aSStack_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

