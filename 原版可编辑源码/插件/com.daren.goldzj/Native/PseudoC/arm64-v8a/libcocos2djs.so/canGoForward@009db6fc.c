
/* cocos2d::WebViewImpl::canGoForward() */

bool __thiscall cocos2d::WebViewImpl::canGoForward(WebViewImpl *this)

{
  long lVar1;
  bool bVar2;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined1 local_33;
  undefined2 uStack_32;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009db70c to 00adb7a3 has its CatchHandler @ 009db70c
                       catch() { ... } // from try @ 009db70c with catch @ 009db70c
                       catch() { ... } // from try @ 009db7fc with catch @ 009db70c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_32 = 0;
  local_40 = (basic_string)0x18;
  local_30 = (void *)0x0;
  local_37 = 0x64726177;
  uStack_3f = 0x6f466f476e6163;
  uStack_38 = 0x72;
  local_33 = 0;
  bVar2 = JniHelper::callStaticBooleanMethod<int>
                    ((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

