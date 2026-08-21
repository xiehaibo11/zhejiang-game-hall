
/* tinyxml2::XMLNode::PreviousSiblingElement(char const*) const */

undefined8 __thiscall tinyxml2::XMLNode::PreviousSiblingElement(XMLNode *this,char *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  
                    /* try { // try from 01022858 to 0112289b has its CatchHandler @ 01022858
                       catch() { ... } // from try @ 01022858 with catch @ 01022858
                       catch() { ... } // from try @ 010228a0 with catch @ 01022858 */
  puVar7 = *(undefined8 **)(this + 0x40);
  do {
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)*puVar7)(puVar7);
    if (lVar2 != 0) {
                    /* try { // try from 0102289c to 0112289f has its CatchHandler @ 010228b8 */
                    /* try { // try from 010228a0 to 011228cb has its CatchHandler @ 01022858 */
      if ((param_1 == (char *)0x0) ||
         (pcVar3 = (char *)StrPair::GetStr((StrPair *)(puVar7 + 3)), pcVar3 == param_1))
      goto LAB_01022908;
      cVar6 = *param_1;
      if (cVar6 != '\0') {
                    /* catch() { ... } // from try @ 0102289c with catch @ 010228b8 */
        lVar2 = 0;
        do {
          iVar5 = (int)lVar2;
          if (((iVar5 == 0x7fffffff) || (pcVar3[lVar2] == '\0')) || (pcVar3[lVar2] != cVar6)) {
            bVar1 = false;
            goto joined_r0x01022904;
          }
          cVar6 = param_1[lVar2 + 1];
          lVar2 = lVar2 + 1;
        } while (cVar6 != '\0');
        bVar1 = true;
        iVar5 = (int)lVar2;
joined_r0x01022904:
        if (iVar5 == 0x7fffffff) goto LAB_01022908;
        pcVar3 = pcVar3 + lVar2;
        if (!bVar1) goto LAB_01022880;
      }
      if (*pcVar3 == '\0') {
LAB_01022908:
                    /* WARNING: Could not recover jumptable at 0x01022920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)*puVar7)(puVar7);
        return uVar4;
      }
    }
LAB_01022880:
    puVar7 = (undefined8 *)puVar7[8];
  } while( true );
}

