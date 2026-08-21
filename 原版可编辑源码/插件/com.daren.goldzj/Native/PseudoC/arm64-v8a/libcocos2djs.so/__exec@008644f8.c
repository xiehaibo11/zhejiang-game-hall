
/* std::__ndk1::__lookahead<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__lookahead<char,std::__ndk1::regex_traits<char>>::__exec
          (__lookahead<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  __lookahead<char,std::__ndk1::regex_traits<char>> _Var4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  local_a8 = 0;
  local_90 = 0;
  uStack_98 = local_a0;
  vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
  ::assign((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            *)&local_b8,(ulong)(*(int *)(this + 0x2c) + 1),(sub_match *)&local_a0);
  local_78 = 0;
  uStack_68 = uStack_98;
  local_70 = local_a0;
  local_60 = local_90;
  local_58 = 1;
  if (param_1[0x5c] == (__state)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_1 + 0x10) == *(long *)(param_1 + 8);
  }
  local_88 = uVar11;
  uStack_80 = uVar11;
  local_50 = uVar11;
  _Var4 = (__lookahead<char,std::__ndk1::regex_traits<char>>)
          basic_regex<char,std::__ndk1::regex_traits<char>>::
          __match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                    ((basic_regex<char,std::__ndk1::regex_traits<char>> *)(this + 0x10),
                     *(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_b8,
                     *(uint *)(param_1 + 0x58) & 0xfff | 0x40,bVar3);
  if (_Var4 == this[0x54]) {
    *(undefined4 *)param_1 = 0xfffffc1f;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_00864664:
    if (local_b8 == (void *)0x0) goto LAB_00864670;
  }
  else {
    *(undefined4 *)param_1 = 0xfffffc1e;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    uVar5 = ((long)local_b0 - (long)local_b8 >> 3) * -0x5555555555555555;
    if (uVar5 < 2) goto LAB_00864664;
    iVar1 = *(int *)(this + 0x50);
    lVar6 = *(long *)(param_1 + 0x20);
    uVar7 = 2;
    uVar8 = 1;
    do {
      puVar9 = (undefined8 *)((long)local_b8 + uVar8 * 0x18);
      uVar11 = *puVar9;
      puVar10 = (undefined8 *)(lVar6 + (ulong)((iVar1 + uVar7) - 2) * 0x18);
      puVar10[1] = puVar9[1];
      *puVar10 = uVar11;
      uVar8 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar9 + 2);
    } while (uVar8 <= uVar5 && uVar5 - uVar8 != 0);
  }
  local_b0 = local_b8;
  operator_delete(local_b8);
LAB_00864670:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

