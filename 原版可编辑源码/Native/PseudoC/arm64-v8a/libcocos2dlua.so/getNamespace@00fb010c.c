
/* cocos2d::Properties::getNamespace(char const*, bool, bool) const */

Properties * __thiscall
cocos2d::Properties::getNamespace(Properties *this,char *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Properties *pPVar4;
  Properties *pPVar5;
  
                    /* try { // try from 00fb0110 to 010b013b has its CatchHandler @ 00fb00f0 */
  puVar1 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
  do {
                    /* catch() { ... } // from try @ 00fb0108 with catch @ 00fb0128 */
    if (puVar1 == puVar2) {
      return (Properties *)0x0;
    }
    pPVar5 = (Properties *)*puVar1;
    if (param_2) {
      pPVar4 = pPVar5 + 0x10;
      if (((byte)*pPVar4 & 1) == 0) {
LAB_00fb016c:
        pPVar4 = pPVar4 + 1;
      }
      else {
        pPVar4 = *(Properties **)(pPVar5 + 0x20);
      }
    }
    else {
      pPVar4 = pPVar5 + 0x28;
      if (((byte)*pPVar4 & 1) == 0) goto LAB_00fb016c;
      pPVar4 = *(Properties **)(pPVar5 + 0x38);
    }
    iVar3 = strcmp((char *)pPVar4,param_1);
    if (iVar3 == 0) {
      return pPVar5;
    }
    if ((param_3) &&
       (pPVar5 = (Properties *)getNamespace(pPVar5,param_1,param_2,true),
       pPVar5 != (Properties *)0x0)) {
      return pPVar5;
    }
    puVar1 = puVar1 + 1;
  } while( true );
}

