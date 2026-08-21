
void FUN_010aca88(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 010ac93c with catch @ 010aca9c
                       catch() { ... } // from try @ 010aca84 with catch @ 010aca9c
                       try { // try from 010aca9c to 011acb17 has its CatchHandler @ 010ac564 */
                    /* catch() { ... } // from try @ 010ac9a0 with catch @ 010acaa0 */
                    /* catch() { ... } // from try @ 010ac8d4 with catch @ 010acaa4 */
  if (*(int *)(param_1 + 1) == 0) {
    iVar2 = *(int *)(param_1 + 3);
    uVar3 = *param_1;
    iVar1 = *(int *)(param_1 + 9);
                    /* catch() { ... } // from try @ 010ac878 with catch @ 010acadc */
    if ((iVar1 + iVar2 == param_3) &&
       ((iVar2 = FUN_010acbb8(param_1 + 3,param_4,iVar1,iVar2,param_2,uVar3), iVar2 != 0 ||
        (iVar2 = FUN_010acbb8(param_1 + 9,param_4,0,iVar1,param_2,uVar3), iVar2 != 0)))) {
                    /* catch() { ... } // from try @ 010ac750 with catch @ 010acb08 */
      *(int *)(param_1 + 1) = iVar2;
    }
  }
                    /* catch() { ... } // from try @ 010acb98 with catch @ 010acb18 */
  return;
}

