
/* se::ScriptEngine::FileOperationDelegate::TEMPNAMEPLACEHOLDERVALUE(se::ScriptEngine::FileOperationDelegate
   const&) */

FileOperationDelegate * __thiscall
se::ScriptEngine::FileOperationDelegate::operator=
          (FileOperationDelegate *this,FileOperationDelegate *param_1)

{
  long lVar1;
  FileOperationDelegate *pFVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pFVar2 = *(FileOperationDelegate **)(param_1 + 0x20);
  if (pFVar2 == (FileOperationDelegate *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_1 == pFVar2) {
    (**(code **)(*(long *)pFVar2 + 0x18))(pFVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pFVar2 + 0x10))(pFVar2);
  }
  FUN_008f7210(alStack_70,this);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_0090ca9c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_0090ca9c;
  }
  pFVar2 = *(FileOperationDelegate **)(param_1 + 0x50);
  if (pFVar2 == (FileOperationDelegate *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_1 + 0x30 == pFVar2) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pFVar2 + 0x18))(pFVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pFVar2 + 0x10))();
  }
  FUN_008f78a0(alStack_70,this + 0x30);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_0090cb1c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_0090cb1c;
  }
  pFVar2 = *(FileOperationDelegate **)(param_1 + 0x80);
  if (pFVar2 == (FileOperationDelegate *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_1 + 0x60 == pFVar2) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pFVar2 + 0x18))(pFVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pFVar2 + 0x10))();
  }
  FUN_008f7d64(alStack_70,this + 0x60);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_0090cb9c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_0090cb9c;
  }
  pFVar2 = *(FileOperationDelegate **)(param_1 + 0xb0);
  if (pFVar2 == (FileOperationDelegate *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_1 + 0x90 == pFVar2) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pFVar2 + 0x18))(pFVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pFVar2 + 0x10))();
  }
  FUN_008f78a0(alStack_70,this + 0x90);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0090cc20;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_0090cc20:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

