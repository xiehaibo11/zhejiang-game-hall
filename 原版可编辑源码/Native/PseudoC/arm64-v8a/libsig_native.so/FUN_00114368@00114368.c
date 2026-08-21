
/* WARNING: Removing unreachable block (ram,0x001144f0) */

void FUN_00114368(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 local_70;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  uVar2 = (x_78 + -1) * x_78;
  bVar4 = ((uVar2 ^ 0xfffffffe) & uVar2) == 0;
  bVar1 = y_79 < 10;
  iVar6 = 0x3151342c;
  while( true ) {
    while (iVar6 < 0x3151342c) {
      while (iVar6 == -0x6d29c0c2) {
        FUN_00114fbc(param_1,param_2,0);
        iVar6 = -0x54be29cf;
      }
      if ((iVar6 == -0x54be29cf) &&
         (local_70 = FUN_00114fbc(param_1,param_2,0),
         bVar5 = (~((x_78 + -1) * x_78) | 0xfffffffeU) == 0xffffffff, iVar6 = 0x66bfdf21,
         y_79 < 10 == bVar5 && (9 < y_79 || !bVar5))) {
        iVar6 = -0x6d29c0c2;
      }
    }
    if (iVar6 == 0x66bfdf21) break;
    if ((iVar6 == 0x3151342c) && (iVar6 = -0x54be29cf, (!bVar4 || !bVar1) && bVar4 == bVar1)) {
      iVar6 = -0x6d29c0c2;
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_70);
  }
  return;
}

