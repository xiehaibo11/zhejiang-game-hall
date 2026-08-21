
/* cocos2d::IMEDelegate::attachWithIME() */

void __thiscall cocos2d::IMEDelegate::attachWithIME(IMEDelegate *this)

{
  int iVar1;
  void *pvVar2;
  
  if (((DAT_0178fd10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178fd10), iVar1 != 0)) {
    pvVar2 = operator_new(0x20);
    *(void **)pvVar2 = pvVar2;
    *(void **)((long)pvVar2 + 8) = pvVar2;
    DAT_0178fd08 = pvVar2;
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
    *(undefined8 *)((long)pvVar2 + 0x18) = 0;
    __cxa_atexit(IMEDispatcher::~IMEDispatcher,&DAT_0178fd08,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178fd10);
  }
  IMEDispatcher::attachDelegateWithIME((IMEDispatcher *)&DAT_0178fd08,this);
  return;
}

