
void FUN_00fa92f8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)(*param_2 + 0x38);
  uStack_30 = *(undefined8 *)(*param_2 + 0x40);
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xc0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
                    /* try { // try from 00fa932c to 010a934f has its CatchHandler @ 00fa976c */
  (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_30,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

