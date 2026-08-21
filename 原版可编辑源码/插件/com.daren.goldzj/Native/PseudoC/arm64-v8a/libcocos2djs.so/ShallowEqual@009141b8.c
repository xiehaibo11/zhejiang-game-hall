
/* tinyxml2::XMLUnknown::ShallowEqual(tinyxml2::XMLNode const*) const */

undefined8 __thiscall tinyxml2::XMLUnknown::ShallowEqual(XMLUnknown *this,XMLNode *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  
  lVar2 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x18));
  pcVar4 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  if (pcVar3 == pcVar4) {
LAB_00914278:
    uVar5 = 1;
  }
  else {
    cVar6 = *pcVar3;
    if (cVar6 == '\0') {
LAB_00914268:
      if (*pcVar4 == '\0') goto LAB_00914278;
    }
    else {
      lVar2 = 0;
      do {
        if ((((int)lVar2 == 0x7fffffff) || (pcVar4[lVar2] == '\0')) || (pcVar4[lVar2] != cVar6)) {
          bVar1 = false;
          goto LAB_00914258;
        }
        cVar6 = pcVar3[lVar2 + 1];
        lVar2 = lVar2 + 1;
      } while (cVar6 != '\0');
      bVar1 = true;
LAB_00914258:
      pcVar4 = pcVar4 + lVar2;
      if ((int)lVar2 == 0x7fffffff) goto LAB_00914278;
      if (bVar1) goto LAB_00914268;
    }
    uVar5 = 0;
  }
  return uVar5;
}

