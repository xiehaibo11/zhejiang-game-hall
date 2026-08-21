
/* XMLHttpRequest::abort() */

void __thiscall XMLHttpRequest::abort(XMLHttpRequest *this)

{
  long lVar1;
  code *pcVar2;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x267] != (XMLHttpRequest)0x0) {
    this[0x266] = (XMLHttpRequest)0x1;
    this[0x26b] = (XMLHttpRequest)0x0;
    if (this[0x263] != (XMLHttpRequest)0x4) {
      this[0x263] = (XMLHttpRequest)0x4;
      if (*(long **)(this + 0xc0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xc0) + 0x30))();
      }
    }
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf0) + 0x30))();
    }
    this[0x268] = (XMLHttpRequest)0x1;
    if (*(long **)(this + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x90) + 0x30))();
    }
    this[0x263] = (XMLHttpRequest)0x0;
    local_40 = (long *)0x0;
    FUN_008fe56c(alStack_60,*(long *)(this + 0x250) + 0x60);
    if (alStack_60 == local_40) {
      pcVar2 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_008f9744;
      pcVar2 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar2)();
  }
LAB_008f9744:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

