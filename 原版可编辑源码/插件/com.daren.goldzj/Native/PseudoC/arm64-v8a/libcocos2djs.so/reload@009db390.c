
/* cocos2d::WebView::reload() */

void __thiscall cocos2d::WebView::reload(WebView *this)

{
  long lVar1;
  basic_string local_40;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009db398 to 00adb39f has its CatchHandler @ 009db660 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009db3b0 to 00adb3c7 has its CatchHandler @ 009db678 */
  local_40 = (basic_string)0xc;
  local_3b = 0x6461;
                    /* try { // try from 009db3c8 to 00adb3d3 has its CatchHandler @ 009db674 */
  local_38 = 0;
  local_30 = (void *)0x0;
  local_3f = 0x6f6c6572;
  local_39 = 0;
                    /* try { // try from 009db3dc to 00adb3eb has its CatchHandler @ 009db650 */
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01d38750,&local_40,*(int *)(*(long *)(this + 0xd0) + 8));
                    /* try { // try from 009db3ec to 00adb3f7 has its CatchHandler @ 009db64c */
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009db40c to 00adb413 has its CatchHandler @ 009db6b8 */
                    /* try { // try from 009db414 to 00adb423 has its CatchHandler @ 009db6b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

