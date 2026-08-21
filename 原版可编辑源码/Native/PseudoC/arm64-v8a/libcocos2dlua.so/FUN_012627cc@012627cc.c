
void FUN_012627cc(long param_1,undefined8 param_2)

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
    pcVar3 = "std::string";
    uVar2 = 0xc;
    break;
  case 3:
    pcVar3 = "std::istream";
    uVar2 = 0xd;
    break;
  case 4:
    pcVar3 = "std::ostream";
    uVar2 = 0xd;
    break;
  case 5:
    pcVar3 = "std::iostream";
    uVar2 = 0xe;
    break;
  default:
    return;
  }
  lVar1 = __strlen_chk(pcVar3,uVar2);
  FUN_01258064(param_2,pcVar3,pcVar3 + lVar1);
  return;
}

