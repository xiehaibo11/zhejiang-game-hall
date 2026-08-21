
/* WARNING: Removing unreachable block (ram,0x00114f84) */

void FUN_00114df8(logic_error *param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  bVar3 = (~((x_106 + -1) * x_106) | 0xfffffffeU) == 0xffffffff;
  bVar1 = y_107 < 10;
  iVar5 = 0x5ade372;
  while( true ) {
    while (iVar5 < -0x3ccdb821) {
      while (iVar5 == -0x75e852d3) {
        std::logic_error::logic_error(param_1,param_2);
        *(undefined ***)param_1 = &PTR__invalid_argument_00136d70;
        iVar5 = -0x52e24aee;
      }
      if (iVar5 == -0x52e24aee) {
        std::logic_error::logic_error(param_1,param_2);
        *(undefined ***)param_1 = &PTR__invalid_argument_00136d70;
        bVar4 = (~((x_106 + -1) * x_106) | 0xfffffffeU) != 0xffffffff;
        iVar5 = -0x3ccdb821;
        if (9 < y_107 == bVar4 && (9 < y_107 || bVar4)) {
          iVar5 = -0x75e852d3;
        }
      }
    }
    if (iVar5 == -0x3ccdb821) break;
    if ((iVar5 == 0x5ade372) && (iVar5 = -0x52e24aee, (!bVar3 || !bVar1) && bVar3 == bVar1)) {
      iVar5 = -0x75e852d3;
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

