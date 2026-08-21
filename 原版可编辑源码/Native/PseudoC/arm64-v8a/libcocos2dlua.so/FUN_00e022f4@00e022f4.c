
void FUN_00e022f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00e022f4 to 00f022ff has its CatchHandler @ 00e02494 */
  puVar1 = (void *)param_1[2];
                    /* try { // try from 00e0230c to 00f02317 has its CatchHandler @ 00e02488 */
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
                    /* try { // try from 00e02338 to 00f02343 has its CatchHandler @ 00e02484 */
    }
    operator_delete(puVar1);
                    /* try { // try from 00e02320 to 00f0232b has its CatchHandler @ 00e024e0 */
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
                    /* try { // try from 00e02350 to 00f0235b has its CatchHandler @ 00e02480 */
    operator_delete(pvVar2);
    return;
  }
                    /* try { // try from 00e02364 to 00f0236f has its CatchHandler @ 00e024dc */
  return;
}

