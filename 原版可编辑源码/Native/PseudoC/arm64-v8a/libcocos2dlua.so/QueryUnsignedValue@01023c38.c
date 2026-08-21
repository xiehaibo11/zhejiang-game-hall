
/* tinyxml2::XMLAttribute::QueryUnsignedValue(unsigned int*) const */

long __thiscall tinyxml2::XMLAttribute::QueryUnsignedValue(XMLAttribute *this,uint *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  iVar1 = sscanf(__s,"%u",param_1);
  return (ulong)(iVar1 != 1) << 1;
}

