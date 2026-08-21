
void jpeg_write_tables(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x15;
    *(int *)((long)puVar2 + 0x2c) = iVar1;
    (*(code *)*puVar2)(param_1);
  }
                    /* try { // try from 010ded2c to 011dedbb has its CatchHandler @ 010ded2c
                       catch() { ... } // from try @ 010ded2c with catch @ 010ded2c
                       catch() { ... } // from try @ 010deef4 with catch @ 010ded2c */
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  jinit_marker_writer(param_1);
  (**(code **)(param_1[0x42] + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x010ded74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[5] + 0x20))(param_1);
  return;
}

