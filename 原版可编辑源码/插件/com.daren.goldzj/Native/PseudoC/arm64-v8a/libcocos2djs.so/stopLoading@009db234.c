
/* cocos2d::WebView::stopLoading() */

void __thiscall cocos2d::WebView::stopLoading(WebView *this)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined3 uStack_33;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009db240 to 00adb253 has its CatchHandler @ 009db688 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009db254 to 00adb25f has its CatchHandler @ 009db684 */
  uStack_33 = 0;
  local_40 = (basic_string)0x16;
                    /* try { // try from 009db270 to 00adb283 has its CatchHandler @ 009db668 */
  local_30 = (void *)0x0;
  local_37 = 0x676e69;
  uStack_3f = 0x616f4c706f7473;
  uStack_38 = 100;
                    /* try { // try from 009db284 to 00adb28f has its CatchHandler @ 009db664 */
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01d38750,&local_40,*(int *)(*(long *)(this + 0xd0) + 8));
                    /* try { // try from 009db298 to 00adb2a7 has its CatchHandler @ 009db680 */
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009db2a8 to 00adb2b3 has its CatchHandler @ 009db67c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

