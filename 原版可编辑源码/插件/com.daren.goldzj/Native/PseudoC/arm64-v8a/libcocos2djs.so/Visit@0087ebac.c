
/* cocos2d::XmlSaxHander::Visit(tinyxml2::XMLText const&) */

undefined8 __thiscall cocos2d::XmlSaxHander::Visit(XmlSaxHander *this,XMLText *param_1)

{
  undefined8 uVar1;
  char *__s;
  size_t sVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 8);
  uVar1 = tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 0x18));
  __s = (char *)tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 0x18));
  sVar2 = strlen(__s);
  plVar3 = (long *)*puVar4;
  (**(code **)(*plVar3 + 0x20))(plVar3,puVar4,uVar1,sVar2);
  return 1;
}

