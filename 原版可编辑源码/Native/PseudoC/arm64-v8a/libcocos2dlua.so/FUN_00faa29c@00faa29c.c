
void FUN_00faa29c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00faa2b4 to 010aa2bb has its CatchHandler @ 00faa38c */
                    /* try { // try from 00faa2bc to 010aa3ab has its CatchHandler @ 00faa1f4 */
  iVar1 = *(int *)(*param_2 + 0x38);
  if (3 < iVar1 - 1U) goto LAB_00faa31c;
  lVar4 = *(long *)(param_1 + 8);
  switch(iVar1) {
  case 1:
    plVar3 = *(long **)(lVar4 + 0xc0);
    break;
  case 2:
    plVar3 = *(long **)(lVar4 + 0xf0);
    break;
  case 3:
    plVar3 = *(long **)(lVar4 + 0x120);
    goto joined_r0x00faa304;
  case 4:
    plVar3 = *(long **)(lVar4 + 0x150);
joined_r0x00faa304:
    if (plVar3 == (long *)0x0) goto LAB_00faa31c;
    goto LAB_00faa308;
  }
  if (plVar3 != (long *)0x0) {
LAB_00faa308:
    local_30 = *param_2;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  }
LAB_00faa31c:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

