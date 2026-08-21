
/* cocos2d::WebViewImpl::setFrame(float, float, float, float) */

void __thiscall
cocos2d::WebViewImpl::setFrame
          (WebViewImpl *this,float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  basic_string local_40;
  undefined6 uStack_3f;
  undefined2 local_39;
  undefined6 uStack_37;
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009de0b4 with catch @ 009de0f8 */
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1c;
  uStack_37 = 0x746365527765;
                    /* try { // try from 009de10c to 00ade14b has its CatchHandler @ 009de10c
                       catch() { ... } // from try @ 009de10c with catch @ 009de10c
                       catch() { ... } // from try @ 009de1d8 with catch @ 009de10c */
  uStack_3f = 0x626557746573;
  local_39 = 0x6956;
  local_31 = 0;
  JniHelper::callStaticVoidMethod<int,int,int,int,int>
            ((basic_string *)&DAT_01d38750,&local_40,*(int *)(this + 8),(int)param_1,(int)param_2,
             (int)param_3,(int)param_4);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009de14c to 00ade153 has its CatchHandler @ 009de230 */
                    /* try { // try from 009de154 to 00ade167 has its CatchHandler @ 009de220 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

