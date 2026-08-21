
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, char const*>(int, char const*) */

void cocos2d::JniHelper::getJNISignature<int,char_const*>(int param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [8];
  ulong local_60;
  char *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00dee2c0 to 00eee2c7 has its CatchHandler @ 00dee588 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00dee2d8 to 00eee2df has its CatchHandler @ 00dee578 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"I");
                    /* try { // try from 00dee2f8 to 00eee2ff has its CatchHandler @ 00dee558 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_68,"Ljava/lang/String;");
                    /* try { // try from 00dee310 to 00eee323 has its CatchHandler @ 00dee5ac */
  uVar1 = (ulong)((byte)local_68[0] >> 1);
  pcVar3 = (char *)((ulong)local_68 | 1);
  if (((byte)local_68[0] & 1) != 0) {
    uVar1 = local_60;
    pcVar3 = local_58;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (local_50,pcVar3,uVar1);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
                    /* try { // try from 00dee32c to 00eee333 has its CatchHandler @ 00dee554 */
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
                    /* try { // try from 00dee34c to 00eee353 has its CatchHandler @ 00dee550 */
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
                    /* try { // try from 00dee364 to 00eee377 has its CatchHandler @ 00dee5ac */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dee380 to 00eee387 has its CatchHandler @ 00dee54c */
    __stack_chk_fail();
  }
  return;
}

