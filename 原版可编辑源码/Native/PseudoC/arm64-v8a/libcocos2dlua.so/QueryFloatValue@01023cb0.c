
/* tinyxml2::XMLAttribute::QueryFloatValue(float*) const */

long __thiscall tinyxml2::XMLAttribute::QueryFloatValue(XMLAttribute *this,float *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  iVar1 = sscanf(__s,"%f",param_1);
  return (ulong)(iVar1 != 1) << 1;
}

