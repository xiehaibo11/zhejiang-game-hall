
undefined8 FUN_010b5bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x18);
                    /* try { // try from 010b5bf8 to 011b5bff has its CatchHandler @ 010b5c44 */
  if (((long)*(short *)(lVar3 + 0x1a) + (long)*(short *)(lVar3 + 0x62) + 1U <=
       (ulong)*(uint *)(lVar3 + 8)) ||
     (uVar4 = FT_GlyphLoader_CheckPoints(lVar3,1,0), (int)uVar4 == 0)) {
                    /* try { // try from 010b5c1c to 011b5c23 has its CatchHandler @ 010b5c40 */
    lVar3 = *(long *)(param_1 + 0x28);
                    /* try { // try from 010b5c24 to 011b5c57 has its CatchHandler @ 010b5ba8 */
    if (*(char *)(param_1 + 0x84) != '\0') {
      sVar2 = *(short *)(lVar3 + 2);
      lVar6 = *(long *)(lVar3 + 8);
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar5 = FT_RoundFix(param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b5c1c with catch @ 010b5c40
                        */
      plVar1 = (long *)(lVar6 + (long)sVar2 * 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b5bf8 with catch @ 010b5c44
                        */
      *plVar1 = lVar5 >> 0x10;
      lVar5 = FT_RoundFix(param_3);
      plVar1[1] = lVar5 >> 0x10;
      *(undefined1 *)(lVar7 + sVar2) = 1;
    }
    uVar4 = 0;
    *(short *)(lVar3 + 2) = *(short *)(lVar3 + 2) + 1;
  }
  return uVar4;
}

