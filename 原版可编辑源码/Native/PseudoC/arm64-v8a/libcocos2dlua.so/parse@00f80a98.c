
/* cocos2d::SAXParser::parse(char const*, unsigned long) */

uint __thiscall cocos2d::SAXParser::parse(SAXParser *this,char *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined **local_2d8;
  SAXParser *pSStack_2d0;
  XMLDocument aXStack_2c8 [640];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  tinyxml2::XMLDocument::XMLDocument(aXStack_2c8,1,0);
  tinyxml2::XMLDocument::Parse(aXStack_2c8,param_1,param_2);
  local_2d8 = &PTR__XMLVisitor_01722070;
  pSStack_2d0 = this;
  uVar2 = tinyxml2::XMLDocument::Accept(aXStack_2c8,(XMLVisitor *)&local_2d8);
  tinyxml2::XMLDocument::~XMLDocument(aXStack_2c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

