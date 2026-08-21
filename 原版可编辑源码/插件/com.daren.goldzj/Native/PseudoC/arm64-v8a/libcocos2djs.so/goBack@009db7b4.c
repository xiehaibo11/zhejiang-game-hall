
/* cocos2d::WebView::goBack() */

void __thiscall cocos2d::WebView::goBack(WebView *this)

{
  long lVar1;
  basic_string local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009db7b8 to 00adb7bf has its CatchHandler @ 009db894 */
                    /* try { // try from 009db7c0 to 00adb7fb has its CatchHandler @ 009db898 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0xc;
  local_3b = 0x6b63;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_3f = 0x61426f67;
  local_39 = 0;
                    /* try { // try from 009db7fc to 00adb8bb has its CatchHandler @ 009db70c */
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01d38750,&local_40,*(int *)(*(long *)(this + 0xd0) + 8));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

