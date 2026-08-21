
/* tinyxml2::XMLElement::ShallowEqual(tinyxml2::XMLNode const*) const */

bool __thiscall tinyxml2::XMLElement::ShallowEqual(XMLElement *this,XMLNode *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  
  lVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if (lVar2 == 0) {
    return false;
  }
  pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x18));
  pcVar4 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  if (pcVar3 == pcVar4) {
LAB_00915bec:
    lVar6 = *(long *)(this + 0x60);
    lVar2 = *(long *)(lVar2 + 0x60);
    while( true ) {
      if ((lVar2 == 0) || (lVar6 == 0)) break;
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar6 + 0x20));
      pcVar4 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x20));
      if (pcVar3 != pcVar4) {
        cVar8 = *pcVar3;
        if (cVar8 != '\0') {
          lVar7 = 0;
          do {
            iVar5 = (int)lVar7;
            if (((iVar5 == 0x7fffffff) || (pcVar4[lVar7] == '\0')) || (pcVar4[lVar7] != cVar8)) {
              bVar1 = false;
              goto joined_r0x00915c80;
            }
            cVar8 = pcVar3[lVar7 + 1];
            lVar7 = lVar7 + 1;
          } while (cVar8 != '\0');
          bVar1 = true;
          iVar5 = (int)lVar7;
joined_r0x00915c80:
          if (iVar5 == 0x7fffffff) goto LAB_00915c90;
          pcVar4 = pcVar4 + lVar7;
          if (!bVar1) goto LAB_00915cbc;
        }
        if (*pcVar4 != '\0') goto LAB_00915cbc;
      }
LAB_00915c90:
      lVar6 = *(long *)(lVar6 + 0x38);
      lVar2 = *(long *)(lVar2 + 0x38);
    }
    bVar1 = lVar2 == 0 && lVar6 == 0;
  }
  else {
    cVar8 = *pcVar3;
    if (cVar8 == '\0') {
LAB_00915be4:
      if (*pcVar4 == '\0') goto LAB_00915bec;
    }
    else {
      lVar6 = 0;
      do {
        if ((((int)lVar6 == 0x7fffffff) || (pcVar4[lVar6] == '\0')) || (pcVar4[lVar6] != cVar8)) {
          bVar1 = false;
          goto LAB_00915bd4;
        }
        cVar8 = pcVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (cVar8 != '\0');
      bVar1 = true;
LAB_00915bd4:
      pcVar4 = pcVar4 + lVar6;
      if ((int)lVar6 == 0x7fffffff) goto LAB_00915bec;
      if (bVar1) goto LAB_00915be4;
    }
LAB_00915cbc:
    bVar1 = false;
  }
  return bVar1;
}

