
/* v8::internal::compiler::Type::PrintTo(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall v8::internal::compiler::Type::PrintTo(Type *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_48;
  
  puVar4 = *(undefined4 **)this;
  if (((ulong)puVar4 & 1) != 0) {
    BitsetType::Print(param_1,(uint)puVar4 ^ 1);
    return;
  }
  switch(*puVar4) {
  case 0:
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"HeapConstant(",0xd);
    param_1 = (basic_ostream *)compiler::operator<<(pbVar2,(ObjectRef *)(*(long *)this + 8));
    break;
  case 1:
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"OtherNumberConstant(",0x14);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                         *(double *)(*(long *)this + 8));
    break;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<",1);
    lVar5 = *(long *)this;
    uVar1 = *(uint *)(lVar5 + 4);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 8) + lVar7);
        if (lVar7 != 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2)
          ;
        }
        local_48 = uVar6;
        PrintTo((Type *)&local_48,param_1);
        if ((ulong)uVar1 * 8 + -8 == lVar7) break;
        lVar5 = *(long *)this;
        lVar7 = lVar7 + 8;
      }
    }
    pcVar3 = ">";
    goto LAB_0130c244;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"(",1);
    lVar5 = *(long *)this;
    uVar1 = *(uint *)(lVar5 + 4);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 8) + lVar7);
        if (lVar7 != 0) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1," | ",3);
        }
        local_48 = uVar6;
        PrintTo((Type *)&local_48,param_1);
        if ((ulong)uVar1 * 8 + -8 == lVar7) break;
        lVar5 = *(long *)this;
        lVar7 = lVar7 + 8;
      }
    }
    pcVar3 = ")";
    goto LAB_0130c244;
  case 4:
    uVar1 = *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8);
    *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = uVar1 | 4;
    uVar6 = *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10);
    *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 0;
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"Range(",6);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(double *)(*(long *)this + 8));
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,", ",2);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(double *)(*(long *)this + 0x10));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")",1);
    *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = uVar1;
    *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = uVar6;
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pcVar3 = ")";
LAB_0130c244:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,1);
  return;
}

