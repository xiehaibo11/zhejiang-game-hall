
/* cocos2d::SAXParser::parse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

uint __thiscall cocos2d::SAXParser::parse(SAXParser *this,basic_string *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  Data aDStack_2e8 [16];
  undefined **local_2d8;
  SAXParser *pSStack_2d0;
  XMLDocument aXStack_2c8 [640];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x28))(aDStack_2e8,plVar3,param_1);
  uVar4 = Data::isNull(aDStack_2e8);
  if ((uVar4 & 1) == 0) {
    pcVar5 = (char *)Data::getBytes(aDStack_2e8);
    uVar4 = Data::getSize(aDStack_2e8);
    tinyxml2::XMLDocument::XMLDocument(aXStack_2c8,1,0);
    tinyxml2::XMLDocument::Parse(aXStack_2c8,pcVar5,uVar4);
    local_2d8 = &PTR__XMLVisitor_01722070;
    pSStack_2d0 = this;
    uVar2 = tinyxml2::XMLDocument::Accept(aXStack_2c8,(XMLVisitor *)&local_2d8);
    tinyxml2::XMLDocument::~XMLDocument(aXStack_2c8);
  }
  else {
    uVar2 = 0;
  }
  Data::~Data(aDStack_2e8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

