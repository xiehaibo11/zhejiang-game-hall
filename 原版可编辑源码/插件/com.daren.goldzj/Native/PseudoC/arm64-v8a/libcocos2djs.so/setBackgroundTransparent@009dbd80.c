
/* cocos2d::WebView::setBackgroundTransparent(bool) */

void __thiscall cocos2d::WebView::setBackgroundTransparent(WebView *this,bool param_1)

{
  long lVar1;
  long lVar2;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0xd0);
  local_40 = operator_new(0x20);
                    /* try { // try from 009dbdc4 to 00adbdd3 has its CatchHandler @ 009dc018 */
  local_50[1] = 0x18;
  local_50[0] = 0x21;
  builtin_strncpy(local_40,"setBackgroundTransparent",0x19);
                    /* try { // try from 009dbdec to 00adbe97 has its CatchHandler @ 009dbf90 */
  JniHelper::callStaticVoidMethod<int,bool>
            ((basic_string *)&DAT_01d38750,(basic_string *)local_50,*(int *)(lVar2 + 8),param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

