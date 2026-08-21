
void FUN_001281e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (*(char *)((long)plVar2 + 9) != '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  lVar1 = __strlen_chk("<",2);
  FUN_0011bcc0(param_2,"<","operator<<" + lVar1 + 9);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar1 = __strlen_chk(">",2);
  FUN_0011bcc0(param_2,">",
               "std::basic_string<char, std::char_traits<char>, std::allocator<char> >" +
               lVar1 + 0x45);
  return;
}

