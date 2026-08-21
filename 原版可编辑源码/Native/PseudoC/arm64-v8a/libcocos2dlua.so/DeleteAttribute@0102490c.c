
/* tinyxml2::XMLElement::DeleteAttribute(char const*) */

void __thiscall tinyxml2::XMLElement::DeleteAttribute(XMLElement *this,char *param_1)

{
  XMLElement *pXVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = *(undefined8 **)(this + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  pcVar3 = (char *)StrPair::GetStr((StrPair *)(puVar9 + 1));
  if (pcVar3 == param_1) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    do {
      puVar10 = puVar9;
      cVar7 = *param_1;
      puVar9 = puVar10;
      if (cVar7 == '\0') {
LAB_01024994:
        if (*pcVar3 == '\0') break;
      }
      else {
        lVar6 = 0;
        do {
          iVar5 = (int)lVar6;
                    /* try { // try from 0102495c to 0112496f has its CatchHandler @ 01024a50 */
                    /* try { // try from 01024970 to 01124a93 has its CatchHandler @ 01024814 */
          if (((iVar5 == 0x7fffffff) || (pcVar3[lVar6] == '\0')) || (pcVar3[lVar6] != cVar7)) {
            bVar2 = false;
            goto joined_r0x010249c8;
          }
          cVar7 = param_1[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (cVar7 != '\0');
        bVar2 = true;
        iVar5 = (int)lVar6;
joined_r0x010249c8:
        if (iVar5 == 0x7fffffff) break;
        pcVar3 = pcVar3 + lVar6;
        if (bVar2) goto LAB_01024994;
      }
      puVar9 = (undefined8 *)puVar10[7];
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(puVar9 + 1));
      puVar4 = puVar10;
    } while (pcVar3 != param_1);
  }
                    /* catch() { ... } // from try @ 01024874 with catch @ 010249f8 */
  pXVar1 = this + 0x60;
  if (puVar4 != (undefined8 *)0x0) {
    pXVar1 = (XMLElement *)(puVar4 + 7);
  }
  *(undefined8 *)pXVar1 = puVar9[7];
                    /* catch() { ... } // from try @ 010248a0 with catch @ 01024a08 */
  plVar8 = (long *)puVar9[8];
  (**(code **)*puVar9)(puVar9);
                    /* WARNING: Could not recover jumptable at 0x01024a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8,puVar9);
  return;
}

