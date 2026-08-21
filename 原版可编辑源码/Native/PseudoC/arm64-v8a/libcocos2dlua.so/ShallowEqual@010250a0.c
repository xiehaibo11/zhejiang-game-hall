
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
  
                    /* try { // try from 010250a8 to 011250cb has its CatchHandler @ 01025164 */
  lVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if (lVar2 == 0) {
    return false;
  }
  pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x18));
  pcVar4 = (char *)StrPair::GetStr((StrPair *)(this + 0x18));
  if (pcVar3 == pcVar4) {
LAB_0102514c:
    lVar6 = *(long *)(this + 0x60);
    lVar2 = *(long *)(lVar2 + 0x60);
    while( true ) {
                    /* catch() { ... } // from try @ 010250a8 with catch @ 01025164 */
      if ((lVar2 == 0) || (lVar6 == 0)) break;
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar6 + 0x20));
                    /* try { // try from 01025178 to 011251bb has its CatchHandler @ 01025178
                       catch() { ... } // from try @ 01025178 with catch @ 01025178
                       catch() { ... } // from try @ 010251d8 with catch @ 01025178 */
      pcVar4 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x20));
      if (pcVar3 != pcVar4) {
        cVar8 = *pcVar3;
        if (cVar8 != '\0') {
          lVar7 = 0;
          do {
            iVar5 = (int)lVar7;
            if (((iVar5 == 0x7fffffff) || (pcVar4[lVar7] == '\0')) || (pcVar4[lVar7] != cVar8)) {
              bVar1 = false;
                    /* try { // try from 010251d8 to 0112522f has its CatchHandler @ 01025178 */
              goto joined_r0x010251e0;
            }
            cVar8 = pcVar3[lVar7 + 1];
            lVar7 = lVar7 + 1;
                    /* try { // try from 010251bc to 011251d7 has its CatchHandler @ 01025214 */
          } while (cVar8 != '\0');
          bVar1 = true;
          iVar5 = (int)lVar7;
joined_r0x010251e0:
          if (iVar5 == 0x7fffffff) goto LAB_010251f0;
          pcVar4 = pcVar4 + lVar7;
          if (!bVar1) goto LAB_0102521c;
        }
        if (*pcVar4 != '\0') goto LAB_0102521c;
      }
LAB_010251f0:
      lVar6 = *(long *)(lVar6 + 0x38);
      lVar2 = *(long *)(lVar2 + 0x38);
    }
                    /* catch() { ... } // from try @ 010251bc with catch @ 01025214 */
    bVar1 = lVar2 == 0 && lVar6 == 0;
  }
  else {
    cVar8 = *pcVar3;
    if (cVar8 == '\0') {
LAB_01025144:
      if (*pcVar4 == '\0') goto LAB_0102514c;
    }
    else {
      lVar6 = 0;
      do {
                    /* try { // try from 0102510c to 01125113 has its CatchHandler @ 01025124 */
        if ((((int)lVar6 == 0x7fffffff) || (pcVar4[lVar6] == '\0')) || (pcVar4[lVar6] != cVar8)) {
          bVar1 = false;
          goto LAB_01025134;
        }
                    /* try { // try from 01025114 to 01125177 has its CatchHandler @ 01025088 */
        cVar8 = pcVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (cVar8 != '\0');
                    /* catch() { ... } // from try @ 0102510c with catch @ 01025124 */
      bVar1 = true;
LAB_01025134:
      pcVar4 = pcVar4 + lVar6;
      if ((int)lVar6 == 0x7fffffff) goto LAB_0102514c;
      if (bVar1) goto LAB_01025144;
    }
LAB_0102521c:
    bVar1 = false;
  }
  return bVar1;
}

