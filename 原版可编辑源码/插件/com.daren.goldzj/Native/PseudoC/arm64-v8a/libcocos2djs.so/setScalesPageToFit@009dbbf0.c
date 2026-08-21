
/* cocos2d::WebView::setScalesPageToFit(bool) */

void __thiscall cocos2d::WebView::setScalesPageToFit(WebView *this,bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x24;
  uStack_2c = 0;
  uStack_37 = 0x6f546567615073;
  uStack_30 = 0x46;
  uStack_3f = 0x6c616353746573;
  uStack_38 = 0x65;
  uStack_2f = 0x7469;
  uStack_2d = 0;
  JniHelper::callStaticVoidMethod<int,bool>
            ((basic_string *)&DAT_01d38750,&local_40,*(int *)(*(long *)(this + 0xd0) + 8),param_1);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

