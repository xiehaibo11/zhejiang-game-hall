
/* tinyxml2::XMLElement::ParseAttributes(char*) */

char * __thiscall tinyxml2::XMLElement::ParseAttributes(XMLElement *this,char *param_1)

{
  XMLElement *pXVar1;
  int iVar2;
  bool bVar3;
  XMLAttribute *pXVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  undefined4 uVar13;
  char *pcVar14;
  Block *this_00;
  long *plVar15;
  long lVar16;
  
                    /* catch() { ... } // from try @ 0102495c with catch @ 01024a50 */
  if (param_1 == (char *)0x0) {
                    /* try { // try from 01024d10 to 01124d13 has its CatchHandler @ 01024e20 */
    return (char *)0x0;
  }
  cVar12 = *param_1;
  pXVar4 = (XMLAttribute *)0x0;
  pcVar6 = param_1;
  do {
    if (-1 < cVar12) {
      uVar10 = (uint)cVar12;
      do {
        pcVar7 = pcVar6 + 1;
        uVar10 = uVar10 & 0xff;
        iVar5 = isspace(uVar10);
        if (iVar5 == 0) {
          if (uVar10 == 0) {
            lVar16 = *(long *)(this + 8);
            uVar9 = StrPair::GetStr((StrPair *)(this + 0x18));
                    /* try { // try from 01024d30 to 01124d37 has its CatchHandler @ 01024e98 */
            *(undefined4 *)(lVar16 + 0x5c) = 7;
            *(char **)(lVar16 + 0x68) = param_1;
            *(undefined8 *)(lVar16 + 0x70) = uVar9;
            return (char *)0x0;
          }
          iVar5 = isalpha(uVar10);
          if (iVar5 == 0) {
            if (uVar10 == 0x3e) {
              return pcVar7;
            }
                    /* try { // try from 01024d54 to 01124d5b has its CatchHandler @ 01024e20 */
            if ((uVar10 == 0x2f) && (*pcVar7 == '>')) {
                    /* try { // try from 01024d5c to 01124d6b has its CatchHandler @ 01024e30 */
              *(undefined4 *)(this + 0x58) = 1;
              return pcVar6 + 2;
            }
                    /* try { // try from 01024d6c to 01124e03 has its CatchHandler @ 01024a94 */
            lVar16 = *(long *)(this + 8);
            uVar13 = 7;
            goto LAB_01024cf8;
          }
          break;
        }
        uVar10 = (uint)*pcVar7;
        pcVar6 = pcVar7;
      } while (-1 < (int)uVar10);
    }
    lVar16 = *(long *)(this + 8);
    this_00 = *(Block **)(lVar16 + 0x168);
    if (this_00 == (Block *)0x0) {
      this_00 = operator_new(0x3f0);
      memset(this_00,0,0x3f0);
      DynArray<tinyxml2::MemPoolT<72>::Block*,10>::Push
                ((DynArray<tinyxml2::MemPoolT<72>::Block*,10> *)(lVar16 + 0x108),this_00);
      *(Block **)(this_00 + 0x48) = this_00 + 0x90;
      *(Block **)this_00 = this_00 + 0x48;
      *(Block **)(this_00 + 0x90) = this_00 + 0xd8;
      *(Block **)(this_00 + 0xd8) = this_00 + 0x120;
      *(Block **)(this_00 + 0x120) = this_00 + 0x168;
      *(Block **)(this_00 + 0x168) = this_00 + 0x1b0;
      *(Block **)(this_00 + 0x1b0) = this_00 + 0x1f8;
      *(Block **)(this_00 + 0x1f8) = this_00 + 0x240;
      *(Block **)(this_00 + 0x240) = this_00 + 0x288;
      *(Block **)(this_00 + 0x288) = this_00 + 0x2d0;
      *(Block **)(this_00 + 0x2d0) = this_00 + 0x318;
                    /* try { // try from 01024b7c to 01124b83 has its CatchHandler @ 01024e18 */
      *(Block **)(this_00 + 0x318) = this_00 + 0x360;
                    /* try { // try from 01024b84 to 01124c4b has its CatchHandler @ 01024a94 */
      *(Block **)(this_00 + 0x360) = this_00 + 0x3a8;
      *(undefined8 *)(this_00 + 0x3a8) = 0;
      *(Block **)(lVar16 + 0x168) = this_00;
    }
    iVar2 = *(int *)(lVar16 + 0x170);
    *(undefined8 *)(lVar16 + 0x168) = *(undefined8 *)this_00;
    iVar5 = iVar2 + 1;
    *(int *)(lVar16 + 0x170) = iVar5;
    if (*(int *)(lVar16 + 0x178) <= iVar2) {
      *(int *)(lVar16 + 0x178) = iVar5;
    }
    *(int *)(lVar16 + 0x174) = *(int *)(lVar16 + 0x174) + 1;
    *(int *)(lVar16 + 0x17c) = *(int *)(lVar16 + 0x17c) + 1;
    *(undefined ***)this_00 = &PTR__XMLAttribute_017278f8;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    lVar16 = *(long *)(this + 8);
    *(long *)(this_00 + 0x40) = lVar16 + 0x100;
    (**(code **)(*(long *)(lVar16 + 0x100) + 0x28))();
    pcVar6 = (char *)XMLAttribute::ParseDeep
                               ((XMLAttribute *)this_00,pcVar6,*(bool *)(*(long *)(this + 8) + 0x59)
                               );
    if (pcVar6 == (char *)0x0) {
LAB_01024cc4:
      plVar15 = *(long **)(this_00 + 0x40);
      (*(code *)**(undefined8 **)this_00)(this_00);
      (**(code **)(*plVar15 + 0x20))(plVar15,this_00);
LAB_01024cec:
                    /* try { // try from 01024cec to 01124cf7 has its CatchHandler @ 01024e98 */
      lVar16 = *(long *)(this + 8);
      uVar13 = 8;
LAB_01024cf8:
      *(undefined4 *)(lVar16 + 0x5c) = uVar13;
      *(char **)(lVar16 + 0x68) = param_1;
      *(char **)(lVar16 + 0x70) = pcVar6;
      return (char *)0x0;
    }
    pcVar7 = (char *)StrPair::GetStr((StrPair *)(this_00 + 8));
    for (lVar16 = *(long *)(this + 0x60); lVar16 != 0; lVar16 = *(long *)(lVar16 + 0x38)) {
      pcVar8 = (char *)StrPair::GetStr((StrPair *)(lVar16 + 8));
                    /* try { // try from 01024c4c to 01124c53 has its CatchHandler @ 01024e1c */
      if (pcVar8 == pcVar7) {
LAB_01024a90:
                    /* try { // try from 01024a94 to 01124b7b has its CatchHandler @ 01024a94
                       catch() { ... } // from try @ 01024a94 with catch @ 01024a94
                       catch() { ... } // from try @ 01024b84 with catch @ 01024a94
                       catch() { ... } // from try @ 01024c9c with catch @ 01024a94
                       catch() { ... } // from try @ 01024d6c with catch @ 01024a94
                       catch() { ... } // from try @ 01024e08 with catch @ 01024a94
                       catch() { ... } // from try @ 01024e14 with catch @ 01024a94 */
        lVar16 = StrPair::GetStr((StrPair *)(lVar16 + 0x20));
        if (lVar16 != 0) {
          if (this_00 != (Block *)0x0) goto LAB_01024cc4;
          goto LAB_01024cec;
        }
        break;
      }
      cVar12 = *pcVar8;
      pcVar14 = pcVar7;
      if (cVar12 == '\0') {
LAB_01024c34:
        if (*pcVar14 == '\0') {
LAB_01024a8c:
          if (lVar16 != 0) goto LAB_01024a90;
          break;
        }
      }
      else {
        lVar11 = 0;
        do {
          iVar5 = (int)lVar11;
                    /* try { // try from 01024c7c to 01124c8b has its CatchHandler @ 01024e9c */
          if (((iVar5 == 0x7fffffff) || (pcVar7[lVar11] == '\0')) || (pcVar7[lVar11] != cVar12)) {
            bVar3 = false;
            goto joined_r0x01024cb0;
          }
          cVar12 = pcVar8[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (cVar12 != '\0');
                    /* try { // try from 01024c90 to 01124c9b has its CatchHandler @ 01024eb8 */
        bVar3 = true;
        iVar5 = (int)lVar11;
joined_r0x01024cb0:
        if (iVar5 == 0x7fffffff) goto LAB_01024a8c;
        pcVar14 = pcVar7 + lVar11;
                    /* try { // try from 01024c9c to 01124ceb has its CatchHandler @ 01024a94 */
        if (bVar3) goto LAB_01024c34;
      }
    }
    pXVar1 = this + 0x60;
    if (pXVar4 != (XMLAttribute *)0x0) {
      pXVar1 = (XMLElement *)(pXVar4 + 0x38);
    }
    *(Block **)pXVar1 = this_00;
    cVar12 = *pcVar6;
    pXVar4 = (XMLAttribute *)this_00;
  } while( true );
}

