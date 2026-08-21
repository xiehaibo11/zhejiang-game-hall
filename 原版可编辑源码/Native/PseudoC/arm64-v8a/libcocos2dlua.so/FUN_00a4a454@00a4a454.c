
void FUN_00a4a454(undefined4 *param_1)

{
                    /* try { // try from 00a4a454 to 00b4a457 has its CatchHandler @ 00a4a4f0 */
                    /* try { // try from 00a4a458 to 00b4a4bb has its CatchHandler @ 00a4a3c4 */
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if (*(long *)(param_1 + 6) != 0) {
      FUN_00a4ab10(*(long *)(param_1 + 6),0);
      *(undefined8 *)(param_1 + 6) = 0;
    }
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a4a438 with catch @ 00a4a4a8
                        */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
                    /* try { // try from 00a4a4bc to 00b4a4bf has its CatchHandler @ 00a4a4ec */
    *param_1 = 0;
  }
                    /* try { // try from 00a4a4c0 to 00b4a503 has its CatchHandler @ 00a4a3c4 */
  return;
}

