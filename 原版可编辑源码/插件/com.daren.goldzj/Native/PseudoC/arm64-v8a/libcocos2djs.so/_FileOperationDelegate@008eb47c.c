
/* se::ScriptEngine::FileOperationDelegate::~FileOperationDelegate() */

void __thiscall
se::ScriptEngine::FileOperationDelegate::~FileOperationDelegate(FileOperationDelegate *this)

{
  FileOperationDelegate *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pFVar1 = *(FileOperationDelegate **)(this + 0xb0);
  if (this + 0x90 == pFVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x20);
LAB_008eb4b4:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (pFVar1 != (FileOperationDelegate *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x28);
    goto LAB_008eb4b4;
  }
  pFVar1 = *(FileOperationDelegate **)(this + 0x80);
  if (this + 0x60 == pFVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x20);
LAB_008eb4e0:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (pFVar1 != (FileOperationDelegate *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x28);
    goto LAB_008eb4e0;
  }
  pFVar1 = *(FileOperationDelegate **)(this + 0x50);
  if (this + 0x30 == pFVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x20);
  }
  else {
    if (pFVar1 == (FileOperationDelegate *)0x0) goto LAB_008eb510;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_008eb510:
  pFVar1 = *(FileOperationDelegate **)(this + 0x20);
  if (this == pFVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x20);
  }
  else {
    if (pFVar1 == (FileOperationDelegate *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pFVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x008eb53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

