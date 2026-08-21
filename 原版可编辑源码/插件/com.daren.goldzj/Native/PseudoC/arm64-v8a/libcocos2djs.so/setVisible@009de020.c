
/* cocos2d::WebViewImpl::setVisible(bool) */

void __thiscall cocos2d::WebViewImpl::setVisible(WebViewImpl *this,bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 009ddedc with catch @ 009de024 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009dded0 with catch @ 009de040 */
  uStack_34 = 0;
  local_40 = (basic_string)0x14;
                    /* try { // try from 009de048 to 00ade0b3 has its CatchHandler @ 009de048
                       catch() { ... } // from try @ 009de048 with catch @ 009de048
                       catch() { ... } // from try @ 009de0c4 with catch @ 009de048 */
  local_30 = (void *)0x0;
  local_37 = 0x656c;
  uStack_3f = 0x69736956746573;
  uStack_38 = 0x62;
  local_35 = 0;
  JniHelper::callStaticVoidMethod<int,bool>
            ((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8),param_1);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

