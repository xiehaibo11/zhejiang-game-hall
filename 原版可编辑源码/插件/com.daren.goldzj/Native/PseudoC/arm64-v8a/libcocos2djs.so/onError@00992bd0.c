
/* JSB_SocketIODelegate::onError(cocos2d::network::SIOClient*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
JSB_SocketIODelegate::onError(JSB_SocketIODelegate *this,SIOClient *param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
                    /* try { // try from 00992be0 to 00a92bf7 has its CatchHandler @ 00992eb8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[1] = 0;
                    /* try { // try from 00992c00 to 00a92c0b has its CatchHandler @ 00992eb4 */
                    /* try { // try from 00992c0c to 00a92c17 has its CatchHandler @ 00992eb0 */
  local_30 = (void *)0x0;
  local_40[0] = 0x726f7272650a;
                    /* try { // try from 00992c18 to 00a92c4b has its CatchHandler @ 00992ec8 */
  (**(code **)(*(long *)this + 0x30))(this,param_1,local_40,param_2);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  lVar2 = se::NativePtrToObjectMap::find(param_1);
  lVar3 = se::NativePtrToObjectMap::end();
  if (lVar2 != lVar3) {
    se::Object::unroot(*(Object **)(lVar2 + 0x18));
  }
                    /* try { // try from 00992c58 to 00a92c73 has its CatchHandler @ 00992e90 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

