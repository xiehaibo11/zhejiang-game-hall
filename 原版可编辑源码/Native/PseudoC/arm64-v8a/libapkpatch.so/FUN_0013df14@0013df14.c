
void FUN_0013df14(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar5 = param_2;
  while (puVar2 = (undefined8 *)FUN_00138300(param_2,1), puVar2 != (undefined8 *)0x0) {
    lVar3 = FUN_0013dfd8(*puVar2,puVar2[2],puVar2[1],puVar2[3],*(undefined4 *)(puVar2 + 5),
                         *(undefined4 *)((long)puVar2 + 0x2c),in_x6,in_x7,lVar5);
    if ((lVar3 == 0) || (lVar3 != puVar2[3])) {
      puVar2[3] = 0;
    }
    FUN_001381a4(param_2 + 8,puVar2,1);
  }
  FUN_001381a4(param_2 + 0x28,1,1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

