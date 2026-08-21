
undefined8 FUN_00a14514(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
                    /* try { // try from 00a14514 to 00b1451f has its CatchHandler @ 00a1455c */
  if (param_3 < 0x28) goto LAB_00a1455c;
                    /* try { // try from 00a14520 to 00b14563 has its CatchHandler @ 00a1432c */
  if (param_3 < 0x30) {
    iVar1 = -0x28;
    puVar3 = &DAT_012fd16c;
  }
  else {
    if (param_3 < 0xa0) goto LAB_00a1455c;
    if (0xbf < param_3) {
      uVar2 = param_3 - 0x530;
      if (uVar2 < 0x60) {
        puVar3 = &DAT_013021c8;
      }
      else {
        uVar2 = param_3 - 0x2010;
        if (0x17 < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_01302228;
      }
      param_3 = (uint)(byte)puVar3[uVar2];
      if (param_3 == 0) {
        return 0xffffffff;
      }
      goto LAB_00a1455c;
    }
    iVar1 = -0xa0;
    puVar3 = &DAT_012fcb74;
  }
                    /* catch() { ... } // from try @ 00a143f4 with catch @ 00a14554 */
  param_3 = (uint)(byte)puVar3[param_3 + iVar1];
  if (param_3 == 0) {
    return 0xffffffff;
  }
LAB_00a1455c:
                    /* catch() { ... } // from try @ 00a14514 with catch @ 00a1455c */
  *param_2 = (char)param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a145d4 with catch @ 00a14564
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14604 with catch @ 00a14564
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14634 with catch @ 00a14564
                       catch(type#1 @ 00000000) { ... } // from try @ 00a1465c with catch @ 00a14564
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14688 with catch @ 00a14564
                        */
  return 1;
}

