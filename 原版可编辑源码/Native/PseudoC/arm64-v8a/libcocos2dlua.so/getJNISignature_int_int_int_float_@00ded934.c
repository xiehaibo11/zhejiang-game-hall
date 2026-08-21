
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, int, int, float>(int, int, int, float) */

void __thiscall
cocos2d::JniHelper::getJNISignature<int,int,int,float>
          (JniHelper *this,int param_1,int param_2,int param_3,float param_4)

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
                    /* try { // try from 00ded958 to 00eed95f has its CatchHandler @ 00dedfa0 */
  local_48 = *(long *)(lVar2 + 0x28);
  iVar5 = param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"I");
  getJNISignature<int,int,float>((JniHelper *)(ulong)(uint)param_1,param_2,iVar5,param_4);
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
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
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
                    /* try { // try from 00deda1c to 00eeda73 has its CatchHandler @ 00dee0a8 */
    __stack_chk_fail();
  }
  return;
}

