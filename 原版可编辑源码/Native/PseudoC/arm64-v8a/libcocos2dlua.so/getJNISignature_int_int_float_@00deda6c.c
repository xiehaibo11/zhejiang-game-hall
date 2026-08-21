
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, int, float>(int, int, float) */

void __thiscall
cocos2d::JniHelper::getJNISignature<int,int,float>
          (JniHelper *this,int param_1,int param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_78 [8];
  ulong local_70;
  char *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00deda74 to 00eeda7f has its CatchHandler @ 00dee0a4 */
  lVar2 = tpidr_el0;
                    /* try { // try from 00deda88 to 00eeda8f has its CatchHandler @ 00dee09c */
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00deda98 to 00eeda9b has its CatchHandler @ 00dee08c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"I");
  getJNISignature<int,float>(param_1,param_3);
  uVar1 = (ulong)(local_78[0] >> 1);
  pcVar3 = (char *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_70;
    pcVar3 = local_68;
  }
                    /* try { // try from 00dedad8 to 00eedae3 has its CatchHandler @ 00dedff0 */
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (local_60,pcVar3,uVar1);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar6;
  *in_x8 = uVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00dedb40 to 00eedb4b has its CatchHandler @ 00dedff8 */
  return;
}

