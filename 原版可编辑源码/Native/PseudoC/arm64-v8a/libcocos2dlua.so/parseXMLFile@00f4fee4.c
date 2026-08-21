
/* cocos2d::TMXMapInfo::parseXMLFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::TMXMapInfo::parseXMLFile(TMXMapInfo *this,basic_string *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  basic_string local_58 [16];
  void *local_48;
  SAXParser aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  SAXParser::SAXParser(aSStack_40);
  uVar3 = SAXParser::init((char *)aSStack_40);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    SAXParser::setDelegator(aSStack_40,(SAXDelegator *)(this + 0x28));
    plVar4 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar4 + 0x50))(local_58,plVar4,param_1);
    uVar2 = SAXParser::parse(aSStack_40,local_58);
                    /* try { // try from 00f4ff5c to 0104ff63 has its CatchHandler @ 00f508c0 */
    if (((byte)local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  SAXParser::~SAXParser(aSStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

