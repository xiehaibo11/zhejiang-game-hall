
/* cocos2d::WebView::goForward() */

void __thiscall cocos2d::WebView::goForward(WebView *this)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined5 uStack_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_35 = 0;
  local_40 = (basic_string)0x12;
  local_30 = (void *)0x0;
  local_37 = 100;
  uStack_3f = 0x6177726f466f67;
  uStack_38 = 0x72;
                    /* try { // try from 009db94c to 00adb953 has its CatchHandler @ 009db9d0 */
                    /* try { // try from 009db954 to 00adb9ff has its CatchHandler @ 009db8bc */
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

