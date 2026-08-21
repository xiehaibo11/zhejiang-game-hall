
/* getPropertiesFromNamespacePath(cocos2d::Properties*,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const&) */

Properties * getPropertiesFromNamespacePath(Properties *param_1,vector *param_2)

{
  int iVar1;
  Properties *pPVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  Properties *pPVar5;
  ulong uVar6;
  ulong uVar7;
  
  pPVar2 = param_1;
  if (*(long *)(param_2 + 8) - *(long *)param_2 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x78);
    uVar6 = (*(long *)(param_2 + 8) - *(long *)param_2 >> 3) * -0x5555555555555555;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x90) = puVar4;
    if (*(undefined8 **)(param_1 + 0x80) == puVar4) {
      pPVar5 = (Properties *)0x0;
    }
    else {
      pPVar5 = (Properties *)*puVar4;
    }
    uVar7 = 0;
    while (pPVar2 = (Properties *)0x0, pPVar5 != (Properties *)0x0) {
      while( true ) {
        if (((byte)pPVar5[0x28] & 1) == 0) {
          pPVar2 = pPVar5 + 0x29;
        }
        else {
          pPVar2 = *(Properties **)(pPVar5 + 0x38);
        }
        pbVar3 = (byte *)(*(long *)param_2 + uVar7 * 0x18);
        if ((*pbVar3 & 1) == 0) {
          iVar1 = strcmp((char *)pPVar2,(char *)(pbVar3 + 1));
        }
        else {
          iVar1 = strcmp((char *)pPVar2,*(char **)(*(long *)param_2 + uVar7 * 0x18 + 0x10));
        }
        if (iVar1 == 0) break;
        if (*(undefined8 **)(param_1 + 0x90) == *(undefined8 **)(param_1 + 0x80)) {
          puVar4 = *(undefined8 **)(param_1 + 0x78);
        }
        else {
          puVar4 = *(undefined8 **)(param_1 + 0x90) + 1;
        }
        *(undefined8 **)(param_1 + 0x90) = puVar4;
        if (puVar4 == *(undefined8 **)(param_1 + 0x80)) {
          return (Properties *)0x0;
        }
        pPVar5 = (Properties *)*puVar4;
        if (pPVar5 == (Properties *)0x0) {
          return (Properties *)0x0;
        }
      }
                    /* try { // try from 00faf5e0 to 010af5e7 has its CatchHandler @ 00faf630 */
      param_1 = pPVar5;
      if (uVar7 != uVar6 - 1) {
                    /* try { // try from 00faf5e8 to 010af64b has its CatchHandler @ 00faf4a4 */
        if (*(undefined8 **)(pPVar5 + 0x90) == *(undefined8 **)(pPVar5 + 0x80)) {
          puVar4 = *(undefined8 **)(pPVar5 + 0x78);
        }
        else {
          puVar4 = *(undefined8 **)(pPVar5 + 0x90) + 1;
        }
        *(undefined8 **)(pPVar5 + 0x90) = puVar4;
        if (puVar4 == *(undefined8 **)(pPVar5 + 0x80)) {
          param_1 = (Properties *)0x0;
        }
        else {
          param_1 = (Properties *)*puVar4;
        }
      }
      uVar7 = uVar7 + 1;
      pPVar5 = param_1;
      if (uVar6 <= uVar7) {
        return param_1;
      }
    }
  }
                    /* try { // try from 00faf64c to 010af663 has its CatchHandler @ 00faf64c
                       catch() { ... } // from try @ 00faf64c with catch @ 00faf64c
                       catch() { ... } // from try @ 00faf66c with catch @ 00faf64c */
  return pPVar2;
}

