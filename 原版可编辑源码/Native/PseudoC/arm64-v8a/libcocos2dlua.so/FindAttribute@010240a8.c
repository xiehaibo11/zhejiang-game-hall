
/* tinyxml2::XMLElement::FindAttribute(char const*) */

long __thiscall tinyxml2::XMLElement::FindAttribute(XMLElement *this,char *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0x60);
  do {
    if ((lVar7 == 0) ||
       (pcVar2 = (char *)StrPair::GetStr((StrPair *)(lVar7 + 8)), pcVar2 == param_1)) {
      return lVar7;
    }
    cVar5 = *pcVar2;
    pcVar6 = param_1;
    if (cVar5 == '\0') {
LAB_010240cc:
      if (*pcVar6 == '\0') {
        return lVar7;
      }
    }
    else {
      lVar4 = 0;
      do {
        iVar3 = (int)lVar4;
        if (((iVar3 == 0x7fffffff) || (param_1[lVar4] == '\0')) || (param_1[lVar4] != cVar5)) {
          bVar1 = false;
          goto joined_r0x01024144;
        }
        cVar5 = pcVar2[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (cVar5 != '\0');
      bVar1 = true;
      iVar3 = (int)lVar4;
joined_r0x01024144:
      if (iVar3 == 0x7fffffff) {
        return lVar7;
      }
      pcVar6 = param_1 + lVar4;
      if (bVar1) goto LAB_010240cc;
    }
    lVar7 = *(long *)(lVar7 + 0x38);
  } while( true );
}

