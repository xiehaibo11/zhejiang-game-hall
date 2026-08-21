
/* cocos2d::WebViewImpl::stopLoading() */

void __thiscall cocos2d::WebViewImpl::stopLoading(WebViewImpl *this)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined3 uStack_33;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009db2f4 to 00adb2ff has its CatchHandler @ 009db65c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_33 = 0;
  local_40 = (basic_string)0x16;
                    /* try { // try from 009db318 to 00adb323 has its CatchHandler @ 009db644 */
  local_30 = (void *)0x0;
  local_37 = 0x676e69;
  uStack_3f = 0x616f4c706f7473;
  uStack_38 = 100;
                    /* try { // try from 009db338 to 00adb33f has its CatchHandler @ 009db658 */
  JniHelper::callStaticVoidMethod<int>((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009db350 to 00adb367 has its CatchHandler @ 009db670 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009db368 to 00adb373 has its CatchHandler @ 009db66c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

