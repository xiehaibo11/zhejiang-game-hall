
undefined4 readFloat(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
                    /* catch() { ... } // from try @ 00d612b4 with catch @ 00d61548 */
  puVar4 = (undefined1 *)*param_1;
                    /* catch() { ... } // from try @ 00d6129c with catch @ 00d6154c */
                    /* catch() { ... } // from try @ 00d61290 with catch @ 00d61550 */
  *param_1 = (long)(puVar4 + 1);
                    /* catch() { ... } // from try @ 00d61258 with catch @ 00d61558 */
  uVar1 = *puVar4;
  *param_1 = (long)(puVar4 + 2);
  uVar2 = puVar4[1];
                    /* catch() { ... } // from try @ 00d61244 with catch @ 00d6156c */
  *param_1 = (long)(puVar4 + 3);
  uVar3 = puVar4[2];
                    /* catch() { ... } // from try @ 00d6123c with catch @ 00d61574 */
  *param_1 = (long)(puVar4 + 4);
                    /* catch() { ... } // from try @ 00d61134 with catch @ 00d6157c */
                    /* catch() { ... } // from try @ 00d6110c with catch @ 00d61584 */
                    /* catch() { ... } // from try @ 00d61278 with catch @ 00d61588 */
  return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),puVar4[3]);
}

