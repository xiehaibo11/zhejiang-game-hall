
/* LuaMinXmlHttpRequest::_sendRequest() */

void __thiscall LuaMinXmlHttpRequest::_sendRequest(LuaMinXmlHttpRequest *this)

{
  long lVar1;
  HttpClient *this_00;
  code *pcVar2;
  undefined **local_a0;
  LuaMinXmlHttpRequest *pLStack_98;
  long *local_80;
  undefined **local_70;
  LuaMinXmlHttpRequest *pLStack_68;
  undefined ***local_50;
  long local_38;
  
  local_80 = (long *)&local_a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a0 = &PTR_FUN_0169c348;
  local_70 = &PTR_FUN_0169c348;
  pLStack_98 = this;
  pLStack_68 = this;
  local_50 = &local_70;
  FUN_00914564(&local_70,*(long *)(this + 0xc0) + 0x90);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
LAB_009128f0:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
                    /* catch() { ... } // from try @ 00912780 with catch @ 009128e0 */
    pcVar2 = (code *)(*local_50)[5];
                    /* catch() { ... } // from try @ 00912720 with catch @ 009128e4
                       catch() { ... } // from try @ 009127fc with catch @ 009128e4 */
    goto LAB_009128f0;
  }
                    /* try { // try from 00912900 to 00a1295b has its CatchHandler @ 00912900
                       catch() { ... } // from try @ 00912900 with catch @ 00912900
                       catch() { ... } // from try @ 009129fc with catch @ 00912900
                       catch() { ... } // from try @ 00912aa8 with catch @ 00912900 */
  if (&local_a0 == (undefined ***)local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00912920;
    pcVar2 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar2)();
LAB_00912920:
  this_00 = (HttpClient *)cocos2d::network::HttpClient::getInstance();
  cocos2d::network::HttpClient::sendImmediate(this_00,*(HttpRequest **)(this + 0xc0));
  cocos2d::Ref::retain((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

