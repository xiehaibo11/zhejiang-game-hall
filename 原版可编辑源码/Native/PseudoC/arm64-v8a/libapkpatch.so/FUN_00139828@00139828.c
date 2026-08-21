
ulong FUN_00139828(long param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0012e2ac(0,*(undefined8 *)(param_1 + 0x50),
                       (*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0xa0)) -
                       (int)*(undefined8 *)(param_1 + 0x50));
  for (; param_3 != 0; param_3 = param_3 + -1) {
    local_4c = FUN_0013d580(param_1,*param_2);
    uVar2 = FUN_0012e2ac(uVar2,&local_4c,4);
    param_2 = param_2 + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 0xffffffff;
}

