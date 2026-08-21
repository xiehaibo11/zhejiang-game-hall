
void FUN_00a5cc40(long param_1,char *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ENGINE *e;
  undefined8 uVar4;
  ulong e_00;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a5cc60 to 00b5cc87 has its CatchHandler @ 00a5cebc */
  e = ENGINE_by_id(param_2);
  if (e == (ENGINE *)0x0) {
    FUN_00a38a08(param_1,"SSL Engine \'%s\' not found",param_2);
    uVar4 = 0x35;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x8c48);
    if ((ENGINE *)*puVar1 != (ENGINE *)0x0) {
      ENGINE_finish((ENGINE *)*puVar1);
      ENGINE_free((ENGINE *)*puVar1);
      *puVar1 = 0;
    }
    iVar3 = ENGINE_init(e);
                    /* try { // try from 00a5cca4 to 00b5cd53 has its CatchHandler @ 00a5cec8 */
    if (iVar3 == 0) {
      ENGINE_free(e);
      e_00 = ERR_get_error();
      ERR_error_string_n(e_00,acStack_148,0x100);
      FUN_00a38a08(param_1,"Failed to initialise SSL Engine \'%s\':\n%s",param_2,acStack_148);
      uVar4 = 0x42;
    }
    else {
      uVar4 = 0;
      *puVar1 = e;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

