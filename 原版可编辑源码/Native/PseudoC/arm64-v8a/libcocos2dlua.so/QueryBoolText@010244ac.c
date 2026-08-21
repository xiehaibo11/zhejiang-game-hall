
/* tinyxml2::XMLElement::QueryBoolText(bool*) const */

undefined4 __thiscall tinyxml2::XMLElement::QueryBoolText(XMLElement *this,bool *param_1)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if ((*(long **)(this + 0x30) == (long *)0x0) ||
     (lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x38))(), lVar1 == 0)) {
    uVar4 = 0x13;
  }
  else {
    lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x38))();
    pcVar2 = (char *)StrPair::GetStr((StrPair *)(lVar1 + 0x18));
    uVar3 = XMLUtil::ToBool(pcVar2,param_1);
    uVar4 = 0;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0x12;
    }
  }
  return uVar4;
}

