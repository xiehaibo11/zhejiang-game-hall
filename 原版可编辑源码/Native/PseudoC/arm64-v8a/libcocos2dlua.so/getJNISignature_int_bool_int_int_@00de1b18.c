
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, bool, int, int>(int, bool, int, int) */

void __thiscall
cocos2d::JniHelper::getJNISignature<int,bool,int,int>
          (JniHelper *this,int param_1,bool param_2,int param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *in_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_78 [8];
  ulong local_70;
  char *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00de1b70 with catch @ 00de1b38 */
  local_48 = *(long *)(lVar2 + 0x28);
  iVar5 = param_3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"I");
                    /* try { // try from 00de1b68 to 00ee1b6f has its CatchHandler @ 00de1b9c */
                    /* try { // try from 00de1b70 to 00ee1bb7 has its CatchHandler @ 00de1b38 */
  getJNISignature<bool,int,int>((JniHelper *)(ulong)(param_1 & 1),param_2,param_3,iVar5);
  uVar1 = (ulong)(local_78[0] >> 1);
  pcVar3 = (char *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    uVar1 = local_70;
    pcVar3 = local_68;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (local_60,pcVar3,uVar1);
                    /* catch() { ... } // from try @ 00de1b68 with catch @ 00de1b9c */
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_78[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00de1bf0 with catch @ 00de1bb8 */
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00de1be8 to 00ee1bef has its CatchHandler @ 00de1c1c */
                    /* try { // try from 00de1bf0 to 00ee1c37 has its CatchHandler @ 00de1bb8 */
  return;
}

