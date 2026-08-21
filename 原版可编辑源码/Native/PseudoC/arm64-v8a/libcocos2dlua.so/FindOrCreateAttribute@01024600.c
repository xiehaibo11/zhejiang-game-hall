
/* tinyxml2::XMLElement::FindOrCreateAttribute(char const*) */

Block * __thiscall tinyxml2::XMLElement::FindOrCreateAttribute(XMLElement *this,char *param_1)

{
  XMLElement *pXVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  Block *pBVar6;
  long lVar7;
  char cVar8;
  char *pcVar9;
  Block *pBVar10;
  
                    /* try { // try from 01024604 to 01124647 has its CatchHandler @ 010243a8 */
  pBVar6 = *(Block **)(this + 0x60);
  if (pBVar6 == (Block *)0x0) {
    pBVar10 = (Block *)0x0;
  }
  else {
    do {
      pBVar10 = pBVar6;
                    /* try { // try from 01024648 to 0112464f has its CatchHandler @ 010247f8 */
      pcVar4 = (char *)StrPair::GetStr((StrPair *)(pBVar10 + 8));
                    /* try { // try from 01024650 to 01124667 has its CatchHandler @ 010247bc */
      if (pcVar4 == param_1) {
        return pBVar10;
      }
      cVar8 = *pcVar4;
      pcVar9 = param_1;
      if (cVar8 == '\0') {
LAB_01024630:
        if (*pcVar9 == '\0') {
          return pBVar10;
        }
      }
      else {
        lVar7 = 0;
        do {
          iVar5 = (int)lVar7;
                    /* try { // try from 01024668 to 011246ab has its CatchHandler @ 010243a8 */
          if (((iVar5 == 0x7fffffff) || (param_1[lVar7] == '\0')) || (param_1[lVar7] != cVar8)) {
            bVar3 = false;
                    /* try { // try from 010246ac to 011246b3 has its CatchHandler @ 01024760 */
            goto joined_r0x010246b0;
          }
          cVar8 = pcVar4[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (cVar8 != '\0');
        bVar3 = true;
        iVar5 = (int)lVar7;
joined_r0x010246b0:
        if (iVar5 == 0x7fffffff) {
          return pBVar10;
        }
        pcVar9 = param_1 + lVar7;
        if (bVar3) goto LAB_01024630;
      }
      pBVar6 = *(Block **)(pBVar10 + 0x38);
    } while (*(Block **)(pBVar10 + 0x38) != (Block *)0x0);
  }
  lVar7 = *(long *)(this + 8);
  pBVar6 = *(Block **)(lVar7 + 0x168);
  if (pBVar6 == (Block *)0x0) {
                    /* try { // try from 010246c8 to 01124757 has its CatchHandler @ 010243a8 */
    pBVar6 = operator_new(0x3f0);
    memset(pBVar6,0,0x3f0);
    DynArray<tinyxml2::MemPoolT<72>::Block*,10>::Push
              ((DynArray<tinyxml2::MemPoolT<72>::Block*,10> *)(lVar7 + 0x108),pBVar6);
    *(Block **)(pBVar6 + 0x48) = pBVar6 + 0x90;
    *(Block **)pBVar6 = pBVar6 + 0x48;
    *(Block **)(pBVar6 + 0x90) = pBVar6 + 0xd8;
    *(Block **)(pBVar6 + 0xd8) = pBVar6 + 0x120;
    *(Block **)(pBVar6 + 0x120) = pBVar6 + 0x168;
    *(Block **)(pBVar6 + 0x168) = pBVar6 + 0x1b0;
    *(Block **)(pBVar6 + 0x1b0) = pBVar6 + 0x1f8;
    *(Block **)(pBVar6 + 0x1f8) = pBVar6 + 0x240;
    *(Block **)(pBVar6 + 0x240) = pBVar6 + 0x288;
    *(Block **)(pBVar6 + 0x288) = pBVar6 + 0x2d0;
    *(Block **)(pBVar6 + 0x2d0) = pBVar6 + 0x318;
    *(Block **)(pBVar6 + 0x318) = pBVar6 + 0x360;
    *(Block **)(pBVar6 + 0x360) = pBVar6 + 0x3a8;
    *(undefined8 *)(pBVar6 + 0x3a8) = 0;
                    /* try { // try from 01024758 to 0112475f has its CatchHandler @ 010247f8 */
    *(Block **)(lVar7 + 0x168) = pBVar6;
  }
                    /* catch() { ... } // from try @ 010245b0 with catch @ 01024760
                       catch() { ... } // from try @ 010246ac with catch @ 01024760
                       try { // try from 01024760 to 01124813 has its CatchHandler @ 010243a8 */
  iVar2 = *(int *)(lVar7 + 0x170);
  *(undefined8 *)(lVar7 + 0x168) = *(undefined8 *)pBVar6;
  iVar5 = iVar2 + 1;
                    /* catch() { ... } // from try @ 010246b4 with catch @ 01024770 */
  *(int *)(lVar7 + 0x170) = iVar5;
  if (*(int *)(lVar7 + 0x178) <= iVar2) {
    *(int *)(lVar7 + 0x178) = iVar5;
  }
  *(int *)(lVar7 + 0x174) = *(int *)(lVar7 + 0x174) + 1;
  *(int *)(lVar7 + 0x17c) = *(int *)(lVar7 + 0x17c) + 1;
  pXVar1 = this + 0x60;
  if (pBVar10 != (Block *)0x0) {
    pXVar1 = (XMLElement *)(pBVar10 + 0x38);
  }
  *(undefined ***)pBVar6 = &PTR__XMLAttribute_017278f8;
                    /* catch() { ... } // from try @ 01024650 with catch @ 010247bc */
  *(undefined4 *)(pBVar6 + 8) = 0;
  *(undefined8 *)(pBVar6 + 0x10) = 0;
  *(undefined8 *)(pBVar6 + 0x18) = 0;
  *(undefined4 *)(pBVar6 + 0x20) = 0;
  *(undefined8 *)(pBVar6 + 0x30) = 0;
  *(undefined8 *)(pBVar6 + 0x38) = 0;
  *(undefined8 *)(pBVar6 + 0x28) = 0;
  *(long *)(pBVar6 + 0x40) = *(long *)(this + 8) + 0x100;
  *(Block **)pXVar1 = pBVar6;
  StrPair::SetStr((StrPair *)(pBVar6 + 8),param_1,0);
  (**(code **)(**(long **)(pBVar6 + 0x40) + 0x28))();
                    /* catch() { ... } // from try @ 01024538 with catch @ 010247f8
                       catch() { ... } // from try @ 010245fc with catch @ 010247f8
                       catch() { ... } // from try @ 01024648 with catch @ 010247f8
                       catch() { ... } // from try @ 01024758 with catch @ 010247f8 */
  return pBVar6;
}

