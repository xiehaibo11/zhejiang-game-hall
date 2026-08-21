
undefined8 hash_table_lookup(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar4 = (*(code *)param_1[2])(param_2);
  iVar3 = (int)param_1[1];
  iVar2 = 0;
  if ((long)iVar3 != 0) {
    iVar2 = (int)(uVar4 / (ulong)(long)iVar3);
  }
  uVar1 = (int)uVar4 - iVar2 * iVar3;
  puVar5 = *(undefined8 **)
            (*param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
  while( true ) {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    iVar3 = (*(code *)param_1[3])(param_2,*puVar5);
    if (iVar3 != 0) break;
    puVar5 = (undefined8 *)puVar5[2];
  }
  return puVar5[1];
}

