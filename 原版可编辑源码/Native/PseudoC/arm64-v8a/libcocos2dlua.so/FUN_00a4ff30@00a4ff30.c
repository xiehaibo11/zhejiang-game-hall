
int FUN_00a4ff30(long *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = *(undefined4 **)(lVar2 + 0x218);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 00a4fecc with catch @ 00a4ff58 */
                    /* catch() { ... } // from try @ 00a4fe4c with catch @ 00a4ff5c */
    FUN_00a26ce8(param_1,1);
    goto LAB_00a4ff84;
  }
                    /* catch() { ... } // from try @ 00a4fdc4 with catch @ 00a4ff70 */
                    /* catch() { ... } // from try @ 00a4fda0 with catch @ 00a4ff74 */
                    /* catch() { ... } // from try @ 00a4fd3c with catch @ 00a4ff78 */
  if ((*(char *)(lVar2 + 0x641) != '\0') || (*(long *)(puVar3 + 0xe) != 0)) {
LAB_00a4ff80:
    param_2 = 0;
    goto LAB_00a4ff84;
  }
  if (*(long *)(puVar3 + 6) == 0) {
    if (*(char *)(lVar2 + 0x621) == '\0') goto LAB_00a4ff80;
LAB_00a50044:
    param_2 = FUN_00a54d8c(param_1 + 0xc3,"%s",&DAT_013c996e);
    if (param_2 != 0) goto LAB_00a4ff84;
    uVar1 = 0xc;
  }
  else {
                    /* try { // try from 00a50030 to 00b50087 has its CatchHandler @ 00a50030
                       catch() { ... } // from try @ 00a50030 with catch @ 00a50030
                       catch() { ... } // from try @ 00a50254 with catch @ 00a50030 */
    if (*(char *)(lVar2 + 0x621) != '\0') goto LAB_00a50044;
    uVar1 = 10;
  }
  *(undefined4 *)(param_1 + 0xd1) = uVar1;
  do {
    param_2 = FUN_00a54a20(param_1 + 0xc3,1);
    if (param_2 != 0) break;
                    /* try { // try from 00a50088 to 00b5009f has its CatchHandler @ 00a50308 */
  } while ((int)param_1[0xd1] != 0);
LAB_00a4ff84:
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 2));
                    /* catch() { ... } // from try @ 00a4fd18 with catch @ 00a4ff98 */
  *(undefined8 *)(puVar3 + 2) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 4));
  *(undefined8 *)(puVar3 + 4) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 6));
  *(undefined8 *)(puVar3 + 6) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 8));
  *(undefined8 *)(puVar3 + 8) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 10));
  *(undefined8 *)(puVar3 + 10) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 0xc));
  *(undefined8 *)(puVar3 + 0xc) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 0xe));
  *(undefined8 *)(puVar3 + 0xe) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar3 + 0x10));
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = 0;
  return param_2;
}

