
/* cocos2d::network::SIOClient::send(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::network::SIOClient::send(SIOClient *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x40] == (SIOClient)0x0) {
    plVar2 = *(long **)(this + 0x50);
    local_40 = operator_new(0x20);
                    /* try { // try from 009e6a40 to 00ae6a93 has its CatchHandler @ 009e6a40
                       catch() { ... } // from try @ 009e6a40 with catch @ 009e6a40
                       catch() { ... } // from try @ 009e6b4c with catch @ 009e6a40 */
    local_50[1] = 0x18;
    local_50[0] = 0x21;
    builtin_strncpy(local_40,"Client not yet connected",0x19);
    (**(code **)(*plVar2 + 0x28))(plVar2,this,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    SIOClientImpl::send(*(SIOClientImpl **)(this + 0x48),(basic_string *)(this + 0x10),param_1);
  }
                    /* try { // try from 009e6a94 to 00ae6a9f has its CatchHandler @ 009e6b88 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009e6aa0 to 00ae6aa7 has its CatchHandler @ 009e6b84 */
                    /* try { // try from 009e6aa8 to 00ae6b4b has its CatchHandler @ 009e6b90 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

