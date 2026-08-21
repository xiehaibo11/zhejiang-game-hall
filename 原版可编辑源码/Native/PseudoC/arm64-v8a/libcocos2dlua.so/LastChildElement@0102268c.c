
/* tinyxml2::XMLNode::LastChildElement(char const*) const */

long __thiscall tinyxml2::XMLNode::LastChildElement(XMLNode *this,char *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  undefined8 *puVar7;
  
                    /* try { // try from 0102268c to 011226e3 has its CatchHandler @ 010225f4 */
  puVar7 = *(undefined8 **)(this + 0x38);
  do {
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)*puVar7)(puVar7);
                    /* catch() { ... } // from try @ 01022684 with catch @ 010226d0 */
    if (lVar2 != 0) {
      if (param_1 == (char *)0x0) {
        return lVar2;
      }
      pcVar3 = (char *)StrPair::GetStr((StrPair *)(lVar2 + 0x18));
                    /* try { // try from 010226e4 to 0112273b has its CatchHandler @ 010226e4
                       catch() { ... } // from try @ 010226e4 with catch @ 010226e4
                       catch() { ... } // from try @ 01022774 with catch @ 010226e4 */
      if (pcVar3 == param_1) {
        return lVar2;
      }
      cVar5 = *pcVar3;
      pcVar6 = param_1;
      if (cVar5 != '\0') {
        lVar4 = 0;
        do {
          if ((((int)lVar4 == 0x7fffffff) || (param_1[lVar4] == '\0')) || (param_1[lVar4] != cVar5))
          {
                    /* try { // try from 0102273c to 01122743 has its CatchHandler @ 010227fc */
            bVar1 = false;
            if ((int)lVar4 == 0x7fffffff) {
              return lVar2;
            }
            goto LAB_01022734;
          }
          cVar5 = pcVar3[lVar4 + 1];
          lVar4 = lVar4 + 1;
        } while (cVar5 != '\0');
        bVar1 = true;
        if ((int)lVar4 == 0x7fffffff) {
          return lVar2;
        }
LAB_01022734:
        pcVar6 = param_1 + lVar4;
        if (!bVar1) goto LAB_010226b8;
      }
      if (*pcVar6 == '\0') {
        return lVar2;
      }
    }
LAB_010226b8:
    puVar7 = (undefined8 *)puVar7[8];
  } while( true );
}

