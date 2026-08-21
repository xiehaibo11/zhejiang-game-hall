
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* jsb_init_file_operation_delegate() */

void jsb_init_file_operation_delegate(void)

{
  long lVar1;
  int iVar2;
  ScriptEngine *this;
  code *pcVar3;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_01d370b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d370b0), iVar2 != 0)) {
    DAT_01d37010 = 0;
    DAT_01d37040 = 0;
    DAT_01d37070 = 0;
    DAT_01d370a0 = 0;
    __cxa_atexit(se::ScriptEngine::FileOperationDelegate::~FileOperationDelegate,&DAT_01d36ff0,
                 &PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d370b0);
  }
  if ((((DAT_01d370a0 != 0) && (DAT_01d37010 != 0)) && (DAT_01d37040 != 0)) && (DAT_01d37070 != 0))
  goto LAB_008eb40c;
  local_60[0] = &PTR_FUN_01c67ea8;
  local_40 = (long *)local_60;
  FUN_008f7210(local_60,&DAT_01d36ff0);
  if (local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
LAB_008eb314:
    (*pcVar3)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar3 = *(code **)(*local_40 + 0x28);
    goto LAB_008eb314;
  }
  local_60[0] = &PTR_FUN_01c67f38;
  local_40 = (long *)local_60;
  FUN_008f78a0(local_60,&DAT_01d37020);
  if (local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
LAB_008eb360:
    (*pcVar3)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar3 = *(code **)(*local_40 + 0x28);
    goto LAB_008eb360;
  }
  local_60[0] = &PTR_FUN_01c67fc8;
  local_40 = (long *)local_60;
  FUN_008f78a0(local_60,&DAT_01d37080);
  if (local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
LAB_008eb3ac:
    (*pcVar3)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar3 = *(code **)(*local_40 + 0x28);
    goto LAB_008eb3ac;
  }
  local_60[0] = &PTR_FUN_01c68048;
  local_40 = (long *)local_60;
  FUN_008f7d64(local_60,&DAT_01d37050);
  if (local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
LAB_008eb3f8:
    (*pcVar3)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar3 = *(code **)(*local_40 + 0x28);
    goto LAB_008eb3f8;
  }
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  se::ScriptEngine::setFileOperationDelegate(this,(FileOperationDelegate *)&DAT_01d36ff0);
LAB_008eb40c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

