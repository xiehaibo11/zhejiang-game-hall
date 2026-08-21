
void FUN_00aa656c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00aa658c to 00ba658f has its CatchHandler @ 00aa65c4 */
  (**(code **)(*param_1 + 0x308))();
                    /* try { // try from 00aa6590 to 00ba65d7 has its CatchHandler @ 00aa6540 */
  plVar2 = (long *)(**(code **)(*param_1 + 0x240))(param_1);
  puVar1 = (undefined8 *)plVar2[1];
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    FUN_00aa656c(*puVar3,param_2);
  }
                    /* catch() { ... } // from try @ 00aa658c with catch @ 00aa65c4 */
  return;
}

