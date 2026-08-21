
void FUN_009fcb38(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
                    /* try { // try from 009fcb40 to 00afcb63 has its CatchHandler @ 009fc998 */
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + -8);
    if ((ushort)((ulong)lVar2 >> 0x30) < 2) {
                    /* try { // try from 009fcb64 to 00afcb6f has its CatchHandler @ 009fcc28 */
                    /* try { // try from 009fcb70 to 00afccab has its CatchHandler @ 009fc998 */
      puVar3 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + (ulong)((uint)lVar2 & *(int *)(param_1 + 0x20) - 1U) * 8
               );
      puVar5 = (undefined8 *)*puVar3;
      if (puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar4 + -0x10);
        do {
          if (puVar5 == puVar1) {
            *puVar3 = *puVar1;
            free(puVar1);
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
            lVar4 = *param_2;
            if (lVar4 == 0) goto LAB_009fcc44;
            goto LAB_009fcbb0;
          }
          puVar6 = (undefined8 *)*puVar5;
          puVar3 = puVar5;
          puVar5 = puVar6;
        } while (puVar6 != (undefined8 *)0x0);
      }
    }
    else {
      *(long *)(lVar4 + -8) = lVar2 + -0x1000000000000;
    }
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
LAB_009fcbb0:
    lVar2 = *(long *)(lVar4 + -8);
    if ((ushort)((ulong)lVar2 >> 0x30) < 2) {
      puVar3 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + (ulong)((uint)lVar2 & *(int *)(param_1 + 0x20) - 1U) * 8
               );
      puVar5 = (undefined8 *)*puVar3;
      if (puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar4 + -0x10);
        do {
          if (puVar5 == puVar1) {
                    /* catch() { ... } // from try @ 009fcac8 with catch @ 009fcc2c */
            *puVar3 = *puVar1;
            free(puVar1);
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
            break;
          }
                    /* catch() { ... } // from try @ 009fca48 with catch @ 009fcbec */
          puVar6 = (undefined8 *)*puVar5;
          puVar3 = puVar5;
          puVar5 = puVar6;
        } while (puVar6 != (undefined8 *)0x0);
      }
    }
    else {
      *(long *)(lVar4 + -8) = lVar2 + -0x1000000000000;
    }
  }
LAB_009fcc44:
  *param_2 = *(long *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = param_2;
  return;
}

