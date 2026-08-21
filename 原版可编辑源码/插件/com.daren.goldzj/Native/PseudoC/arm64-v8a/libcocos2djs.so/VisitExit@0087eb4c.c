
/* cocos2d::XmlSaxHander::VisitExit(tinyxml2::XMLElement const&) */

undefined8 __thiscall cocos2d::XmlSaxHander::VisitExit(XmlSaxHander *this,XMLElement *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 8);
  uVar1 = tinyxml2::StrPair::GetStr((StrPair *)(param_1 + 0x18));
  plVar2 = (long *)*puVar3;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar3,uVar1);
  return 1;
}

