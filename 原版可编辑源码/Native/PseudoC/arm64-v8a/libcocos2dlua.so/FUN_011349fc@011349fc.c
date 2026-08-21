
undefined8 FUN_011349fc(long param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
                    /* try { // try from 01134a08 to 01234a0b has its CatchHandler @ 01134a14 */
                    /* try { // try from 01134a0c to 01234a17 has its CatchHandler @ 01134894 */
  lVar3 = *(long *)(param_1 + 0x350);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01134a08 with catch @ 01134a14
                        */
  if (*(int *)(lVar3 + 0x4c) != 8) {
    if (*(long *)(param_1 + 0x370) <= *(long *)(param_1 + 0x390)) {
      TIFFFlushData1(param_1);
    }
    puVar2 = *(undefined1 **)(param_1 + 0x388);
    uVar1 = *(undefined4 *)(lVar3 + 0x48);
    *(undefined1 **)(param_1 + 0x388) = puVar2 + 1;
    *puVar2 = (char)uVar1;
    *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) + 1;
    *(undefined8 *)(lVar3 + 0x48) = 0x800000000;
  }
  return 1;
}

