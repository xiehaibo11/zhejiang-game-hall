
/* cocos2d::network::HttpClient::sendImmediate(cocos2d::network::HttpRequest*) */

void __thiscall cocos2d::network::HttpClient::sendImmediate(HttpClient *this,HttpRequest *param_1)

{
  long lVar1;
  HttpClient *local_68;
  code *local_60;
  undefined8 uStack_58;
  thread atStack_50 [8];
  HttpResponse *local_48;
  HttpRequest *local_40;
  long local_38;
  
                    /* try { // try from 009abbd0 to 00aabc2b has its CatchHandler @ 009abbd0
                       catch() { ... } // from try @ 009abbd0 with catch @ 009abbd0
                       catch() { ... } // from try @ 009abe40 with catch @ 009abbd0
                       catch() { ... } // from try @ 009abfe8 with catch @ 009abbd0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1;
  if (param_1 != (HttpRequest *)0x0) {
    Ref::retain((Ref *)param_1);
    local_48 = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (local_48 != (HttpResponse *)0x0) {
      HttpResponse::HttpResponse(local_48,param_1);
    }
                    /* try { // try from 009abc2c to 00aabc43 has its CatchHandler @ 009ac0b8 */
    uStack_58 = 0;
    local_60 = networkThreadAlone;
    local_68 = this;
    FUN_009abcb4(atStack_50,&local_60,&local_68,&local_40,&local_48);
                    /* try { // try from 009abc4c to 00aabc57 has its CatchHandler @ 009ac0b4 */
    std::__ndk1::thread::detach(atStack_50);
                    /* try { // try from 009abc58 to 00aabc63 has its CatchHandler @ 009ac0b0 */
    std::__ndk1::thread::~thread(atStack_50);
  }
                    /* try { // try from 009abc64 to 00aabc7b has its CatchHandler @ 009ac0c8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

