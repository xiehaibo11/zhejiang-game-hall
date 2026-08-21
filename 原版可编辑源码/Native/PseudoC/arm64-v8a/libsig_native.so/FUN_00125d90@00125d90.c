
void FUN_00125d90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    pcVar3 = "std::allocator";
    uVar2 = 0xf;
    break;
  case 1:
    pcVar3 = "std::basic_string";
    uVar2 = 0x12;
    break;
  case 2:
    pcVar3 = "std::basic_string<char, std::char_traits<char>, std::allocator<char> >";
    uVar2 = 0x47;
    break;
  case 3:
    pcVar3 = "std::basic_istream<char, std::char_traits<char> >";
    uVar2 = 0x32;
    break;
  case 4:
    pcVar3 = "std::basic_ostream<char, std::char_traits<char> >";
    uVar2 = 0x32;
    break;
  case 5:
    pcVar3 = "std::basic_iostream<char, std::char_traits<char> >";
    uVar2 = 0x33;
    break;
  default:
    return;
  }
  lVar1 = __strlen_chk(pcVar3,uVar2);
  FUN_0011bcc0(param_2,pcVar3,pcVar3 + lVar1);
  return;
}

