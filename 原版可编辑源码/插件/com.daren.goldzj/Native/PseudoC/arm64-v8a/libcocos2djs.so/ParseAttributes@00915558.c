
/* tinyxml2::XMLElement::ParseAttributes(char*) */

char * __thiscall tinyxml2::XMLElement::ParseAttributes(XMLElement *this,char *param_1)

{
  XMLElement *pXVar1;
  bool bVar2;
  XMLAttribute *pXVar3;
  int iVar4;
  XMLAttribute *this_00;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  undefined4 uVar13;
  char *pcVar14;
  long *plVar15;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  cVar12 = *param_1;
  pXVar3 = (XMLAttribute *)0x0;
  pcVar5 = param_1;
  do {
    if (-1 < cVar12) {
      uVar9 = (uint)cVar12;
      do {
        pcVar6 = pcVar5 + 1;
        uVar9 = uVar9 & 0xff;
        iVar4 = isspace(uVar9);
        if (iVar4 == 0) {
          if (uVar9 == 0) {
            lVar10 = *(long *)(this + 8);
            uVar8 = StrPair::GetStr((StrPair *)(this + 0x18));
            *(undefined4 *)(lVar10 + 0x5c) = 7;
            *(char **)(lVar10 + 0x68) = param_1;
            *(undefined8 *)(lVar10 + 0x70) = uVar8;
            return (char *)0x0;
          }
          iVar4 = isalpha(uVar9);
          if (iVar4 == 0) {
            if (uVar9 == 0x3e) {
              return pcVar6;
            }
            if ((uVar9 == 0x2f) && (*pcVar6 == '>')) {
              *(undefined4 *)(this + 0x58) = 1;
              return pcVar5 + 2;
            }
            lVar10 = *(long *)(this + 8);
            uVar13 = 7;
            goto LAB_00915738;
          }
          break;
        }
        uVar9 = (uint)*pcVar6;
        pcVar5 = pcVar6;
      } while (-1 < (int)uVar9);
    }
    this_00 = (XMLAttribute *)MemPoolT<72>::Alloc((MemPoolT<72> *)(*(long *)(this + 8) + 0x100));
    *(undefined ***)this_00 = &PTR__XMLAttribute_01c691a0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    lVar10 = *(long *)(this + 8);
    *(long *)(this_00 + 0x40) = lVar10 + 0x100;
    (**(code **)(*(long *)(lVar10 + 0x100) + 0x28))();
    pcVar5 = (char *)XMLAttribute::ParseDeep(this_00,pcVar5,*(bool *)(*(long *)(this + 8) + 0x59));
    if (pcVar5 == (char *)0x0) {
LAB_00915700:
      if (this_00 != (XMLAttribute *)0x0) {
        plVar15 = *(long **)(this_00 + 0x40);
        (*(code *)**(undefined8 **)this_00)(this_00);
        (**(code **)(*plVar15 + 0x20))(plVar15,this_00);
      }
      lVar10 = *(long *)(this + 8);
      uVar13 = 8;
LAB_00915738:
      *(undefined4 *)(lVar10 + 0x5c) = uVar13;
      *(char **)(lVar10 + 0x68) = param_1;
      *(char **)(lVar10 + 0x70) = pcVar5;
      return (char *)0x0;
    }
    pcVar6 = (char *)StrPair::GetStr((StrPair *)(this_00 + 8));
    for (lVar10 = *(long *)(this + 0x60); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x38)) {
      pcVar7 = (char *)StrPair::GetStr((StrPair *)(lVar10 + 8));
      if (pcVar7 == pcVar6) {
LAB_009156f4:
        lVar10 = StrPair::GetStr((StrPair *)(lVar10 + 0x20));
        if (lVar10 != 0) goto LAB_00915700;
        break;
      }
      cVar12 = *pcVar7;
      pcVar14 = pcVar6;
      if (cVar12 == '\0') {
LAB_009156cc:
        if (*pcVar14 == '\0') {
LAB_009156f0:
          if (lVar10 != 0) goto LAB_009156f4;
          break;
        }
      }
      else {
        lVar11 = 0;
        do {
          iVar4 = (int)lVar11;
          if (((iVar4 == 0x7fffffff) || (pcVar6[lVar11] == '\0')) || (pcVar6[lVar11] != cVar12)) {
            bVar2 = false;
            goto joined_r0x009156ec;
          }
          cVar12 = pcVar7[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (cVar12 != '\0');
        bVar2 = true;
        iVar4 = (int)lVar11;
joined_r0x009156ec:
        if (iVar4 == 0x7fffffff) goto LAB_009156f0;
        pcVar14 = pcVar6 + lVar11;
        if (bVar2) goto LAB_009156cc;
      }
    }
    pXVar1 = this + 0x60;
    if (pXVar3 != (XMLAttribute *)0x0) {
      pXVar1 = (XMLElement *)(pXVar3 + 0x38);
    }
    *(XMLAttribute **)pXVar1 = this_00;
    cVar12 = *pcVar5;
    pXVar3 = this_00;
  } while( true );
}

