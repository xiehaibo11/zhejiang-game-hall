
/* tinyxml2::XMLElement::QueryFloatText(float*) const */

undefined4 __thiscall tinyxml2::XMLElement::QueryFloatText(XMLElement *this,float *param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  undefined4 uVar3;
  
  if ((*(long **)(this + 0x30) == (long *)0x0) ||
     (lVar2 = (**(code **)(**(long **)(this + 0x30) + 0x38))(), lVar2 == 0)) {
    uVar3 = 0x13;
  }
  else {
    lVar2 = (**(code **)(**(long **)(this + 0x30) + 0x38))();
    __s = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x18));
    iVar1 = sscanf(__s,"%f",param_1);
    uVar3 = 0;
    if (iVar1 != 1) {
      uVar3 = 0x12;
    }
  }
  return uVar3;
}

