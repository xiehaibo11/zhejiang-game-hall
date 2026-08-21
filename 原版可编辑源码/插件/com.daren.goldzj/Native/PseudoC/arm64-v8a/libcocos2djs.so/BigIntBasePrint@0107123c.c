
/* v8::internal::BigIntBase::BigIntBasePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::BigIntBase::BigIntBasePrint(BigIntBase *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"BigInt");
  uVar3 = (ulong)(*(uint *)(*(long *)this + 3) >> 1) & 0x3fffffff;
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n- length: ",0xb);
  iVar2 = (int)uVar3;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,iVar2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n- sign: ",9);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
             (bool)((byte)*(undefined4 *)(*(long *)this + 3) & 1));
  if (iVar2 != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n- digits:",10);
    uVar4 = 0;
    do {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n    0x",7);
      *(uint *)(pbVar1 + *(long *)(*(long *)pbVar1 + -0x18) + 8) =
           *(uint *)(pbVar1 + *(long *)(*(long *)pbVar1 + -0x18) + 8) & 0xffffffb5 | 8;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                 *(ulong *)(*(long *)this + (uVar4 & 0xfffffff8 | 7)));
      uVar4 = uVar4 + 8;
    } while (uVar3 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) =
       *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0xffffffb5 | 2;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

