
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::Operator::PrintPropsTo(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
v8::internal::compiler::Operator::PrintPropsTo(Operator *this,basic_ostream *param_1)

{
  ulong uVar1;
  Operator OVar2;
  char *pcVar3;
  char *pcVar4;
  ulong local_48;
  ulong local_40;
  char *local_38;
  
  local_40 = 0;
  local_38 = (char *)0x0;
  local_48 = 0;
  OVar2 = this[0x12];
  pcVar4 = (char *)((ulong)&local_48 | 1);
  if (((byte)OVar2 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"Commutative",0xb);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
    OVar2 = this[0x12];
  }
  if (((byte)OVar2 >> 1 & 1) != 0) {
    uVar1 = local_48 >> 1 & 0x7f;
    pcVar3 = pcVar4;
    if ((local_48 & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,uVar1)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"Associative",0xb);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
    OVar2 = this[0x12];
  }
  if (((byte)OVar2 >> 2 & 1) != 0) {
    uVar1 = local_48 >> 1 & 0x7f;
    pcVar3 = pcVar4;
    if ((local_48 & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,uVar1)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"Idempotent",10);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
    OVar2 = this[0x12];
  }
  if (((byte)OVar2 >> 3 & 1) != 0) {
    uVar1 = local_48 >> 1 & 0x7f;
    pcVar3 = pcVar4;
    if ((local_48 & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,uVar1)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"NoRead",6);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
    OVar2 = this[0x12];
  }
  if (((byte)OVar2 >> 4 & 1) != 0) {
    uVar1 = local_48 >> 1 & 0x7f;
    pcVar3 = pcVar4;
    if ((local_48 & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,uVar1)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"NoWrite",7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
    OVar2 = this[0x12];
  }
  if (((byte)OVar2 >> 5 & 1) != 0) {
    uVar1 = local_48 >> 1 & 0x7f;
    pcVar3 = pcVar4;
    if ((local_48 & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar3,uVar1)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"NoThrow",7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
    OVar2 = this[0x12];
  }
  if (((byte)OVar2 >> 6 & 1) != 0) {
    uVar1 = local_48 >> 1 & 0x7f;
    if ((local_48 & 1) != 0) {
      uVar1 = local_40;
      pcVar4 = local_38;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar1)
    ;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"NoDeopt",7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_48,", ");
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return;
}

