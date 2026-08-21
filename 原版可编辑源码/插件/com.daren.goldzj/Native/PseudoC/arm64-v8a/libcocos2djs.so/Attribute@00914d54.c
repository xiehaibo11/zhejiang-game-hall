
/* tinyxml2::XMLElement::Attribute(char const*, char const*) const */

undefined8 __thiscall tinyxml2::XMLElement::Attribute(XMLElement *this,char *param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  char *pcVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 0x60);
  while( true ) {
    if (lVar8 == 0) {
      return 0;
    }
    pcVar2 = (char *)StrPair::GetStr((StrPair *)(lVar8 + 8));
    if (pcVar2 == param_1) break;
    cVar6 = *pcVar2;
    pcVar7 = param_1;
    if (cVar6 == '\0') {
LAB_00914dd4:
      if (*pcVar7 == '\0') {
LAB_00914df8:
        if (lVar8 == 0) {
          return 0;
        }
        break;
      }
    }
    else {
      lVar5 = 0;
      do {
        iVar4 = (int)lVar5;
        if (((iVar4 == 0x7fffffff) || (param_1[lVar5] == '\0')) || (param_1[lVar5] != cVar6)) {
          bVar1 = false;
          goto joined_r0x00914df4;
        }
        cVar6 = pcVar2[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (cVar6 != '\0');
      bVar1 = true;
      iVar4 = (int)lVar5;
joined_r0x00914df4:
      if (iVar4 == 0x7fffffff) goto LAB_00914df8;
      pcVar7 = param_1 + lVar5;
      if (bVar1) goto LAB_00914dd4;
    }
    lVar8 = *(long *)(lVar8 + 0x38);
  }
  if ((param_2 != (char *)0x0) &&
     (pcVar2 = (char *)StrPair::GetStr((StrPair *)(lVar8 + 0x20)), pcVar2 != param_2)) {
    cVar6 = *pcVar2;
    if (cVar6 != '\0') {
      lVar5 = 0;
      do {
        if ((((int)lVar5 == 0x7fffffff) || (param_2[lVar5] == '\0')) || (param_2[lVar5] != cVar6)) {
          bVar1 = false;
          goto LAB_00914e60;
        }
        cVar6 = pcVar2[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (cVar6 != '\0');
      bVar1 = true;
LAB_00914e60:
      param_2 = param_2 + lVar5;
      if ((int)lVar5 == 0x7fffffff) goto LAB_00914e8c;
      if (!bVar1) {
        return 0;
      }
    }
    if (*param_2 != '\0') {
      return 0;
    }
  }
LAB_00914e8c:
  uVar3 = StrPair::GetStr((StrPair *)(lVar8 + 0x20));
  return uVar3;
}

