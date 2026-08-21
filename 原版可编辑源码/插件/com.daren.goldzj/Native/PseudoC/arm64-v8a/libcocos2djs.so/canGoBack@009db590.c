
/* cocos2d::WebViewImpl::canGoBack() */

bool __thiscall cocos2d::WebViewImpl::canGoBack(WebViewImpl *this)

{
  long lVar1;
  bool bVar2;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined5 uStack_35;
  void *local_30;
  long local_28;
  
                    /* try { // try from 009db594 to 00adb5d7 has its CatchHandler @ 009db61c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_35 = 0;
  local_40 = (basic_string)0x12;
  local_30 = (void *)0x0;
  local_37 = 0x6b;
  uStack_3f = 0x61426f476e6163;
  uStack_38 = 99;
                    /* try { // try from 009db5d8 to 00adb70b has its CatchHandler @ 009db0a4 */
  bVar2 = JniHelper::callStaticBooleanMethod<int>
                    ((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 009db594 with catch @ 009db61c */
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009db4e8 with catch @ 009db620 */
  __stack_chk_fail();
}

