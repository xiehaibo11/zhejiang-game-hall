
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
LAB_009154b0:
        if (*pcVar3 == '\0') break;
      }
      else {
        lVar6 = 0;
        do {
          iVar5 = (int)lVar6;
          if (((iVar5 == 0x7fffffff) || (pcVar3[lVar6] == '\0')) || (pcVar3[lVar6] != cVar7)) {
            bVar2 = false;
            goto joined_r0x009154e4;
          }
          cVar7 = param_1[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (cVar7 != '\0');
        bVar2 = true;
        iVar5 = (int)lVar6;
joined_r0x009154e4:
        if (iVar5 == 0x7fffffff) break;
        pcVar3 = pcVar3 + lVar6;
        if (bVar2) goto LAB_009154b0;
      }
      puVar9 = (undefined8 *)puVar10[7];
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(puVar9 + 1));
      puVar4 = puVar10;
    } while (pcVar3 != param_1);
  }
  pXVar1 = this + 0x60;
  if (puVar4 != (undefined8 *)0x0) {
    pXVar1 = (XMLElement *)(puVar4 + 7);
  }
  *(undefined8 *)pXVar1 = puVar9[7];
  plVar8 = (long *)puVar9[8];
  (**(code **)*puVar9)(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00915554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8,puVar9);
  return;
}

