
/* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__push_loop(unsigned long,
   unsigned long, std::__ndk1::__owns_one_state<char>*, unsigned long, unsigned long, bool) */

void __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__push_loop
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,ulong param_1,ulong param_2,
          __owns_one_state *param_3,ulong param_4,ulong param_5,bool param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = operator_new(0x10);
  lVar4 = *(long *)(this + 0x38);
  uVar5 = *(undefined8 *)(lVar4 + 8);
  *puVar2 = &PTR____owns_one_state_016f4de0;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar4 + 8) = 0;
  puVar3 = operator_new(0x38);
  iVar1 = *(int *)(this + 0x20);
  uVar5 = *(undefined8 *)(param_3 + 8);
  puVar3[2] = puVar2;
  puVar3[3] = param_1;
  puVar3[4] = param_2;
  *(int *)((long)puVar3 + 0x2c) = (int)param_4;
  *(int *)(puVar3 + 6) = (int)param_5;
  *(bool *)((long)puVar3 + 0x34) = param_6;
  *puVar3 = &PTR____owns_two_states_016f5278;
  puVar3[1] = uVar5;
  *(int *)(puVar3 + 5) = iVar1;
  *(undefined8 *)(param_3 + 8) = 0;
  puVar2 = operator_new(0x10);
  *puVar2 = &PTR_FUN_016f5308;
  puVar2[1] = puVar3;
  *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar2;
  *(undefined8 *)(this + 0x38) = puVar3[2];
  *(undefined8 **)(param_3 + 8) = puVar3;
  *(int *)(this + 0x20) = iVar1 + 1;
  return;
}

