
/* cocos2d::WebViewImpl::reload() */

void __thiscall cocos2d::WebViewImpl::reload(WebViewImpl *this)

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
  local_3b = 0x6461;
  local_3f = 0x6f6c6572;
  local_39 = 0;
  JniHelper::callStaticVoidMethod<int>((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8));
  if (((byte)local_40 & 1) != 0) {
                    /* try { // try from 009db498 to 00adb4ab has its CatchHandler @ 009db640 */
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009db4ac to 00adb4b7 has its CatchHandler @ 009db628 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

