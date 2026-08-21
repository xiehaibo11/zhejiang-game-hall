
/* tinyxml2::XMLAttribute::QueryBoolValue(bool*) const */

undefined4 __thiscall tinyxml2::XMLAttribute::QueryBoolValue(XMLAttribute *this,bool *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  uVar2 = XMLUtil::ToBool(pcVar1,param_1);
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    uVar3 = 2;
  }
  return uVar3;
}

