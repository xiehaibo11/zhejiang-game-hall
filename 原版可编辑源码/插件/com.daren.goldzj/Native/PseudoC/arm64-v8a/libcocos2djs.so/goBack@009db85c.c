
/* cocos2d::WebViewImpl::goBack() */

void __thiscall cocos2d::WebViewImpl::goBack(WebViewImpl *this)

{
  long lVar1;
  basic_string local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0xc;
  local_3b = 0x6b63;
                    /* catch() { ... } // from try @ 009db7b8 with catch @ 009db894 */
  local_3f = 0x61426f67;
                    /* catch() { ... } // from try @ 009db7c0 with catch @ 009db898 */
  local_39 = 0;
                    /* catch() { ... } // from try @ 009db7a4 with catch @ 009db8a8 */
  JniHelper::callStaticVoidMethod<int>((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8));
  if (((byte)local_40 & 1) != 0) {
                    /* try { // try from 009db8bc to 00adb94b has its CatchHandler @ 009db8bc
                       catch() { ... } // from try @ 009db8bc with catch @ 009db8bc
                       catch() { ... } // from try @ 009db954 with catch @ 009db8bc */
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

