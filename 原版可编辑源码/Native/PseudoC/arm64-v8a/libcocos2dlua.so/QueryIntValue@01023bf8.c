
/* tinyxml2::XMLAttribute::QueryIntValue(int*) const */

long __thiscall tinyxml2::XMLAttribute::QueryIntValue(XMLAttribute *this,int *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  iVar1 = sscanf(__s,"%d",param_1);
  return (ulong)(iVar1 != 1) << 1;
}

