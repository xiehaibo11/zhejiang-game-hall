
int FUN_00a39548(long *param_1,int param_2)

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
    FUN_00a11300(param_1,1);
    goto LAB_00a3959c;
  }
  if ((*(char *)(lVar2 + 0x641) != '\0') || (*(long *)(puVar3 + 0xe) != 0)) {
LAB_00a39598:
    param_2 = 0;
    goto LAB_00a3959c;
  }
  if (*(long *)(puVar3 + 6) == 0) {
    if (*(char *)(lVar2 + 0x621) == '\0') goto LAB_00a39598;
LAB_00a3965c:
    param_2 = FUN_00a3e3a4(param_1 + 0xc3,"%s",&DAT_0189703a);
    if (param_2 != 0) goto LAB_00a3959c;
    uVar1 = 0xc;
  }
  else {
    if (*(char *)(lVar2 + 0x621) != '\0') goto LAB_00a3965c;
    uVar1 = 10;
  }
  *(undefined4 *)(param_1 + 0xd1) = uVar1;
  do {
    param_2 = FUN_00a3e038(param_1 + 0xc3,1);
    if (param_2 != 0) break;
  } while ((int)param_1[0xd1] != 0);
LAB_00a3959c:
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 2));
  *(undefined8 *)(puVar3 + 2) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 4));
  *(undefined8 *)(puVar3 + 4) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 6));
  *(undefined8 *)(puVar3 + 6) = 0;
                    /* try { // try from 00a395d4 to 00b395eb has its CatchHandler @ 00a397c4 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 8));
  *(undefined8 *)(puVar3 + 8) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 10));
  *(undefined8 *)(puVar3 + 10) = 0;
                    /* try { // try from 00a395f4 to 00b395ff has its CatchHandler @ 00a397c0 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 0xc));
                    /* try { // try from 00a39600 to 00b3960b has its CatchHandler @ 00a397bc */
  *(undefined8 *)(puVar3 + 0xc) = 0;
                    /* try { // try from 00a3960c to 00b39747 has its CatchHandler @ 00a397d4 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 0xe));
  *(undefined8 *)(puVar3 + 0xe) = 0;
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(puVar3 + 0x10));
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = 0;
  return param_2;
}

