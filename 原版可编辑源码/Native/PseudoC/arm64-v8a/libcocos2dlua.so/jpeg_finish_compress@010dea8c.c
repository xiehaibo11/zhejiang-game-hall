
void jpeg_finish_compress(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 - 0x65U < 2) {
    if (*(uint *)(param_1 + 0x2b) < *(uint *)((long)param_1 + 0x34)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x45;
      (*(code *)*puVar3)(param_1);
    }
    (**(code **)(param_1[0x3e] + 0x10))(param_1);
  }
  else if (iVar1 != 0x67) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x15;
    *(int *)((long)puVar3 + 0x2c) = iVar1;
    (*(code *)*puVar3)(param_1);
  }
                    /* catch() { ... } // from try @ 010dea40 with catch @ 010deb0c */
  puVar3 = (undefined8 *)param_1[0x3e];
  iVar1 = *(int *)((long)puVar3 + 0x1c);
  while (iVar1 == 0) {
    (*(code *)*puVar3)(param_1);
                    /* try { // try from 010deb28 to 011deb87 has its CatchHandler @ 010deb28
                       catch() { ... } // from try @ 010deb28 with catch @ 010deb28
                       catch() { ... } // from try @ 010debb4 with catch @ 010deb28 */
    uVar2 = *(uint *)(param_1 + 0x2e);
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)param_1[2];
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = (ulong)uVar4;
          puVar3[2] = (ulong)uVar2;
          (*(code *)*puVar3)(param_1);
        }
        iVar1 = (**(code **)(param_1[0x41] + 8))(param_1,0);
        if (iVar1 == 0) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
        }
        uVar2 = *(uint *)(param_1 + 0x2e);
        uVar4 = uVar4 + 1;
                    /* try { // try from 010deb88 to 011deba3 has its CatchHandler @ 010dec34 */
      } while (uVar4 < uVar2);
    }
    (**(code **)(param_1[0x3e] + 0x10))(param_1);
    puVar3 = (undefined8 *)param_1[0x3e];
                    /* try { // try from 010deba4 to 011debb3 has its CatchHandler @ 010dec04 */
    iVar1 = *(int *)((long)puVar3 + 0x1c);
  }
                    /* try { // try from 010debb4 to 011dec4f has its CatchHandler @ 010deb28 */
  (**(code **)(param_1[0x42] + 0x18))(param_1);
  (**(code **)(param_1[5] + 0x20))(param_1);
  jpeg_abort(param_1);
  return;
}

