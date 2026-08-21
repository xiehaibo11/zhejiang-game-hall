
void jpeg_write_m_header(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (((int)param_1[0x2b] != 0) || (2 < iVar1 - 0x65U)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x15;
    *(int *)((long)puVar2 + 0x2c) = iVar1;
    (*(code *)*puVar2)(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00d8283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x42] + 0x28))(param_1,param_2,param_3);
  return;
}

