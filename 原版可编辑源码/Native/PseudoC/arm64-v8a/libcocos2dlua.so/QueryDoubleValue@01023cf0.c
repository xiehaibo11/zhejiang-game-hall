
/* tinyxml2::XMLAttribute::QueryDoubleValue(double*) const */

long __thiscall tinyxml2::XMLAttribute::QueryDoubleValue(XMLAttribute *this,double *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  iVar1 = sscanf(__s,"%lf",param_1);
  return (ulong)(iVar1 != 1) << 1;
}

