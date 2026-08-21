
void FUN_008f9d98(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_0169bd98;
                    /* try { // try from 008f9dbc to 009f9dd3 has its CatchHandler @ 008f9e7c */
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

