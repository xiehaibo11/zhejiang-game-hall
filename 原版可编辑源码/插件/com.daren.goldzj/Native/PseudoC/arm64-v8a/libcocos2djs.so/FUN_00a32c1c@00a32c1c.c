
undefined8 FUN_00a32c1c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x908) == 0) {
    FUN_00a23020(param_1,"No URL set!");
    uVar3 = 3;
  }
  else {
                    /* try { // try from 00a32c38 to 00b32c8b has its CatchHandler @ 00a32c38
                       catch() { ... } // from try @ 00a32c38 with catch @ 00a32c38
                       catch() { ... } // from try @ 00a32df0 with catch @ 00a32c38 */
    uVar3 = FUN_00a185d4(param_1,*(undefined8 *)(param_1 + 0x5b8));
    if ((int)uVar3 == 0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined1 *)(param_1 + 0x8b18) = 0;
      *(undefined1 *)(param_1 + 0x8b60) = 0;
      *(undefined4 *)(param_1 + 0x8ca4) = 0;
      *(undefined1 *)(param_1 + 0x8c38) = 0;
      *(ulong *)(param_1 + 0x8bf8) = *(ulong *)(param_1 + 0x268);
                    /* try { // try from 00a32c8c to 00b32ca3 has its CatchHandler @ 00a32e6c */
      *(ulong *)(param_1 + 0x8c18) = *(ulong *)(param_1 + 0x270);
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8db8));
      *(undefined8 *)(param_1 + 0x8db8) = 0;
                    /* try { // try from 00a32cac to 00b32cb7 has its CatchHandler @ 00a32e68 */
      puVar1 = (undefined8 *)(param_1 + 0x388);
                    /* try { // try from 00a32cb8 to 00b32cc3 has its CatchHandler @ 00a32e64 */
      if (*(int *)(param_1 + 0x430) != 4) {
        puVar1 = (undefined8 *)(param_1 + 0x2a0);
      }
                    /* try { // try from 00a32cc4 to 00b32def has its CatchHandler @ 00a32e7c */
      *(undefined8 *)(param_1 + 0x8cf8) = *puVar1;
      if (*(long *)(param_1 + 0x928) != 0) {
        FUN_00a1b940(param_1);
      }
      if ((*(long *)(param_1 + 0x930) == 0) || (uVar3 = FUN_00a1a954(param_1), (int)uVar3 == 0)) {
        *(undefined1 *)(param_1 + 0x8b70) = 1;
        FUN_00a31288(param_1);
        FUN_00a1b49c(param_1);
        FUN_00a1b5fc(param_1);
        if (*(long *)(param_1 + 0x358) != 0) {
          FUN_00a11760(param_1);
        }
        if (*(long *)(param_1 + 0x360) != 0) {
          FUN_00a11760(param_1);
        }
        *(ulong *)(param_1 + 0x8c00) = *(ulong *)(param_1 + 0x8c00) & *(ulong *)(param_1 + 0x8bf8);
        *(ulong *)(param_1 + 0x8c20) = *(ulong *)(param_1 + 0x8c20) & *(ulong *)(param_1 + 0x8c18);
        if (((*(char *)(param_1 + 0x888) == '\0') || (*(long *)(param_1 + 0x8d48) != 0)) ||
           (iVar2 = FUN_00a33a30(param_1 + 0x8d30), iVar2 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x1b;
        }
      }
    }
  }
  return uVar3;
}

