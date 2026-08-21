
void FUN_00a64b34(long param_1,undefined1 *param_2)

{
  int iVar1;
  
                    /* try { // try from 00a64b44 to 00b64b8f has its CatchHandler @ 00a64b44
                       catch() { ... } // from try @ 00a64b44 with catch @ 00a64b44
                       catch() { ... } // from try @ 00a64b94 with catch @ 00a64b44 */
  *param_2 = 0;
  FUN_00a26ce8(param_1,0);
  *(undefined8 *)(param_1 + 0x668) = 1800000;
  *(code **)(param_1 + 0x678) = FUN_00a651fc;
  *(code **)(param_1 + 0x680) = FUN_00a66708;
  *(long *)(param_1 + 0x670) = param_1;
                    /* try { // try from 00a64b90 to 00b64b93 has its CatchHandler @ 00a64bc8 */
                    /* try { // try from 00a64b94 to 00b64bdb has its CatchHandler @ 00a64b44 */
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) == 0) ||
     (iVar1 = FUN_00a2d590(param_1,0), iVar1 == 0)) {
    FUN_00a54bf8(param_1 + 0x618);
    *(undefined4 *)(param_1 + 0x6c8) = 1;
    FUN_00a54a20(param_1 + 0x618,0);
                    /* catch() { ... } // from try @ 00a64b90 with catch @ 00a64bc8 */
    *param_2 = *(int *)(param_1 + 0x6c8) == 0;
  }
  return;
}

