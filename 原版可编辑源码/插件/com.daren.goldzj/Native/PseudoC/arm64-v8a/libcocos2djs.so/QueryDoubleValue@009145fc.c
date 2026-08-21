
/* tinyxml2::XMLAttribute::QueryDoubleValue(double*) const */

undefined4 __thiscall tinyxml2::XMLAttribute::QueryDoubleValue(XMLAttribute *this,double *param_1)

{
  int iVar1;
  char *__s;
  undefined4 uVar2;
  
  __s = (char *)StrPair::GetStr((StrPair *)(this + 0x20));
  iVar1 = sscanf(__s,"%lf",param_1);
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = 2;
  }
  return uVar2;
}

