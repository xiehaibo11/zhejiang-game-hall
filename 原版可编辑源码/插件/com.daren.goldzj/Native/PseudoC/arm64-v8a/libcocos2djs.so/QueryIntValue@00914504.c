
/* tinyxml2::XMLAttribute::QueryIntValue(int*) const */

undefined4 __thiscall tinyxml2::XMLAttribute::QueryIntValue(XMLAttribute *this,int *param_1)

{
  int iVar1;
  char *__s;
  undefined4 uVar2;
  
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  iVar1 = sscanf(__s,"%d",param_1);
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = 2;
  }
  return uVar2;
}

