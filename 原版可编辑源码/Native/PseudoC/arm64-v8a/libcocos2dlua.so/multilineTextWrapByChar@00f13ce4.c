
/* cocos2d::Label::multilineTextWrapByChar() */

undefined8 __thiscall cocos2d::Label::multilineTextWrapByChar(Label *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_60;
  code *local_58;
  undefined8 uStack_50;
  Label *local_48;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR_FUN_016ff588;
  uStack_50 = 0;
  local_58 = getFirstCharLen;
  local_48 = this;
  multilineTextWrap(this,(function *)&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00f13d5c;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_00f13d5c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

