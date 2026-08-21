
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, int, int, int, int>(int, int, int, int, int) */

void __thiscall
cocos2d::JniHelper::getJNISignature<int,int,int,int,int>
          (JniHelper *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *in_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_88 [8];
  ulong local_80;
  char *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar5 = param_4;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,"I");
  getJNISignature<int,int,int,int>((JniHelper *)(ulong)(uint)param_1,param_2,param_3,param_4,iVar5);
  uVar1 = (ulong)(local_88[0] >> 1);
  pcVar3 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    uVar1 = local_80;
    pcVar3 = local_78;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (local_70,pcVar3,uVar1);
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar7;
  *in_x8 = uVar6;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

