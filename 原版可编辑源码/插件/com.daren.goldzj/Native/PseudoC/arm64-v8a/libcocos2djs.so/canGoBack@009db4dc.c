
/* cocos2d::WebView::canGoBack() */

bool __thiscall cocos2d::WebView::canGoBack(WebView *this)

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
  
                    /* try { // try from 009db4e8 to 00adb4f3 has its CatchHandler @ 009db620 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009db4fc to 00adb50b has its CatchHandler @ 009db6f4 */
  uStack_35 = 0;
  local_40 = (basic_string)0x12;
  local_30 = (void *)0x0;
  local_37 = 0x6b;
  uStack_3f = 0x61426f476e6163;
  uStack_38 = 99;
  bVar2 = JniHelper::callStaticBooleanMethod<int>
                    ((basic_string *)&DAT_01d38750,&local_40,*(int *)(*(long *)(this + 0xd0) + 8));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009db54c to 00adb58f has its CatchHandler @ 009db648 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

