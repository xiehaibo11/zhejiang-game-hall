
/* WARNING: Type propagation algorithm not settling */
/* tinyxml2::XMLDocument::Identify(char*, tinyxml2::XMLNode**) */

byte * __thiscall tinyxml2::XMLDocument::Identify(XMLDocument *this,char *param_1,XMLNode **param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  XMLNode *pXVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  
  uVar13 = (uint)*param_1;
  pbVar12 = (byte *)param_1;
  if (-1 < *param_1) {
    do {
      iVar3 = isspace(uVar13 & 0xff);
      if (iVar3 == 0) {
        if ((uVar13 & 0xff) == 0) {
          return pbVar12;
        }
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar13 = (uint)(char)*pbVar12;
    } while (-1 < (int)uVar13);
  }
  if (pbVar12 == &DAT_01868b2c) {
LAB_009123dc:
    pXVar4 = (XMLNode *)MemPoolT<88>::Alloc((MemPoolT<88> *)(this + 0x200));
    *(undefined8 *)(pXVar4 + 0x10) = 0;
    *(undefined4 *)(pXVar4 + 0x18) = 0;
    puVar9 = &XMLDeclaration::vtable;
  }
  else {
    lVar7 = 0;
    uVar11 = uVar13;
    do {
      lVar6 = lVar7;
      uVar5 = (uint)lVar6;
      if (((1 < uVar5) || ((byte)(&DAT_01868b2c)[lVar6] == 0)) ||
         ((uint)(byte)(&DAT_01868b2c)[lVar6] != (uVar11 & 0xff))) {
        bVar1 = false;
        puVar2 = &DAT_01868b2c;
        goto joined_r0x009123d8;
      }
      uVar11 = (uint)pbVar12[lVar6 + 1];
      lVar7 = lVar6 + 1;
    } while (pbVar12[lVar6 + 1] != 0);
    puVar2 = &DAT_01868b2d;
    bVar1 = true;
    uVar5 = (uint)(lVar6 + 1);
joined_r0x009123d8:
    if ((uVar5 == 2) || ((bVar1 && (puVar2[lVar6] == '\0')))) goto LAB_009123dc;
    if (pbVar12 == &DAT_01868b2f) {
LAB_00912444:
      pXVar4 = (XMLNode *)MemPoolT<88>::Alloc((MemPoolT<88> *)(this + 0x200));
      *(undefined8 *)(pXVar4 + 0x10) = 0;
      *(undefined4 *)(pXVar4 + 0x18) = 0;
      *(MemPoolT<88> **)(pXVar4 + 0x50) = (MemPoolT<88> *)(this + 0x200);
      *(undefined8 *)(pXVar4 + 0x38) = 0;
      *(undefined8 *)(pXVar4 + 0x30) = 0;
      *(undefined8 *)(pXVar4 + 0x48) = 0;
      *(undefined8 *)(pXVar4 + 0x40) = 0;
      *(undefined8 *)(pXVar4 + 0x28) = 0;
      *(undefined8 *)(pXVar4 + 0x20) = 0;
      *(undefined ***)pXVar4 = &PTR_ToElement_01c68cc8;
      *(XMLDocument **)(pXVar4 + 8) = this;
      param_1 = (char *)(pbVar12 + 4);
      goto LAB_00912414;
    }
    lVar7 = 0;
    uVar11 = uVar13;
    do {
      lVar6 = lVar7;
      uVar5 = (uint)lVar6;
      if (((3 < uVar5) || ((byte)(&DAT_01868b2f)[lVar6] == 0)) ||
         ((uint)(byte)(&DAT_01868b2f)[lVar6] != (uVar11 & 0xff))) {
        bVar1 = false;
        puVar2 = &DAT_01868b2f;
        goto joined_r0x00912440;
      }
      uVar11 = (uint)pbVar12[lVar6 + 1];
      lVar7 = lVar6 + 1;
    } while (pbVar12[lVar6 + 1] != 0);
    puVar2 = &DAT_01868b30;
    bVar1 = true;
    uVar5 = (uint)(lVar6 + 1);
joined_r0x00912440:
    if ((uVar5 == 4) || ((bVar1 && (puVar2[lVar6] == '\0')))) goto LAB_00912444;
    if (pbVar12 == &DAT_01868b37) {
LAB_009124f0:
      pXVar4 = (XMLNode *)MemPoolT<96>::Alloc((MemPoolT<96> *)(this + 0x180));
      *(undefined8 *)(pXVar4 + 0x10) = 0;
      *(undefined4 *)(pXVar4 + 0x18) = 0;
      *(MemPoolT<96> **)(pXVar4 + 0x50) = (MemPoolT<96> *)(this + 0x180);
      param_1 = (char *)(pbVar12 + 9);
      *(undefined8 *)(pXVar4 + 0x38) = 0;
      *(undefined8 *)(pXVar4 + 0x30) = 0;
      *(undefined8 *)(pXVar4 + 0x48) = 0;
      *(undefined8 *)(pXVar4 + 0x40) = 0;
      *(undefined8 *)(pXVar4 + 0x28) = 0;
      *(undefined8 *)(pXVar4 + 0x20) = 0;
      *(undefined ***)pXVar4 = &PTR_ToElement_01c69048;
      *(XMLDocument **)(pXVar4 + 8) = this;
      pXVar4[0x58] = (XMLNode)0x1;
      goto LAB_00912414;
    }
    lVar7 = 0;
    uVar11 = uVar13;
    do {
      uVar5 = (uint)lVar7;
      if (((8 < uVar5) || ((byte)(&DAT_01868b37)[lVar7] == 0)) ||
         ((uint)(byte)(&DAT_01868b37)[lVar7] != (uVar11 & 0xff))) {
        bVar1 = false;
        goto joined_r0x0091248c;
      }
      lVar6 = lVar7 + 1;
      uVar11 = (uint)pbVar12[lVar6];
      lVar7 = lVar7 + 1;
    } while (pbVar12[lVar6] != 0);
    bVar1 = true;
    uVar5 = (uint)lVar7;
joined_r0x0091248c:
    if ((uVar5 == 9) || ((bVar1 && ((&DAT_01868b37)[lVar7] == '\0')))) goto LAB_009124f0;
    if (pbVar12 != &DAT_01868b34) {
      lVar7 = 0;
      uVar11 = uVar13;
      do {
        uVar5 = (uint)lVar7;
        if (((1 < uVar5) || ((byte)(&DAT_01868b34)[lVar7] == 0)) ||
           ((uint)(byte)(&DAT_01868b34)[lVar7] != (uVar11 & 0xff))) {
          bVar1 = false;
          goto joined_r0x00912540;
        }
        lVar6 = lVar7 + 1;
        uVar11 = (uint)pbVar12[lVar6];
        lVar7 = lVar7 + 1;
      } while (pbVar12[lVar6] != 0);
      bVar1 = true;
      uVar5 = (uint)lVar7;
joined_r0x00912540:
      if ((uVar5 != 2) && ((!bVar1 || ((&DAT_01868b34)[lVar7] != '\0')))) {
        if (pbVar12 != &DAT_019d6d02) {
          bVar1 = false;
          pbVar10 = &DAT_019d6d02;
          pbVar8 = pbVar12;
          do {
            pbVar8 = pbVar8 + 1;
            if (((bVar1) || (*pbVar10 == 0)) || ((uint)*pbVar10 != (uVar13 & 0xff))) {
              if (!bVar1) {
                pXVar4 = (XMLNode *)MemPoolT<96>::Alloc((MemPoolT<96> *)(this + 0x180));
                *(undefined8 *)(pXVar4 + 0x10) = 0;
                *(undefined4 *)(pXVar4 + 0x18) = 0;
                pXVar4[0x58] = (XMLNode)0x0;
                *(undefined8 *)(pXVar4 + 0x38) = 0;
                *(undefined8 *)(pXVar4 + 0x30) = 0;
                *(undefined8 *)(pXVar4 + 0x48) = 0;
                *(undefined8 *)(pXVar4 + 0x40) = 0;
                *(undefined8 *)(pXVar4 + 0x28) = 0;
                *(undefined8 *)(pXVar4 + 0x20) = 0;
                *(undefined ***)pXVar4 = &PTR_ToElement_01c69048;
                *(XMLDocument **)(pXVar4 + 8) = this;
                *(MemPoolT<96> **)(pXVar4 + 0x50) = (MemPoolT<96> *)(this + 0x180);
                goto LAB_00912414;
              }
              break;
            }
            uVar13 = (uint)*pbVar8;
            pbVar10 = pbVar10 + 1;
            bVar1 = true;
          } while (uVar13 != 0);
        }
        pXVar4 = (XMLNode *)MemPoolT<104>::Alloc((MemPoolT<104> *)(this + 0x80));
        *(undefined8 *)(pXVar4 + 0x10) = 0;
        *(undefined4 *)(pXVar4 + 0x18) = 0;
        *(MemPoolT<104> **)(pXVar4 + 0x50) = (MemPoolT<104> *)(this + 0x80);
        *(undefined4 *)(pXVar4 + 0x58) = 0;
        *(undefined8 *)(pXVar4 + 0x60) = 0;
        *(undefined8 *)(pXVar4 + 0x38) = 0;
        *(undefined8 *)(pXVar4 + 0x30) = 0;
        *(undefined8 *)(pXVar4 + 0x48) = 0;
        *(undefined8 *)(pXVar4 + 0x40) = 0;
        *(undefined8 *)(pXVar4 + 0x28) = 0;
        *(undefined8 *)(pXVar4 + 0x20) = 0;
        *(undefined ***)pXVar4 = &PTR_ToElement_01c68ea8;
        *(XMLDocument **)(pXVar4 + 8) = this;
        param_1 = (char *)(pbVar12 + 1);
        goto LAB_00912414;
      }
    }
    pXVar4 = (XMLNode *)MemPoolT<88>::Alloc((MemPoolT<88> *)(this + 0x200));
    *(undefined8 *)(pXVar4 + 0x10) = 0;
    *(undefined4 *)(pXVar4 + 0x18) = 0;
    puVar9 = &XMLUnknown::vtable;
  }
  *(XMLDocument **)(pXVar4 + 0x50) = this + 0x200;
  *(undefined8 *)(pXVar4 + 0x38) = 0;
  *(undefined8 *)(pXVar4 + 0x30) = 0;
  *(undefined8 *)(pXVar4 + 0x48) = 0;
  *(undefined8 *)(pXVar4 + 0x40) = 0;
  *(undefined8 *)(pXVar4 + 0x28) = 0;
  *(undefined8 *)(pXVar4 + 0x20) = 0;
  *(undefined **)pXVar4 = puVar9 + 0x10;
  *(XMLDocument **)(pXVar4 + 8) = this;
  param_1 = (char *)(pbVar12 + 2);
LAB_00912414:
  *param_2 = pXVar4;
  return (byte *)param_1;
}

