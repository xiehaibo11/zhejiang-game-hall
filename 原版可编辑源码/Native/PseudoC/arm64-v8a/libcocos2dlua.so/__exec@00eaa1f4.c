
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
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0x18);
  local_80 = 0;
  local_98 = 0;
  uStack_88 = local_90;
  vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
  ::assign((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            *)&local_a8,(ulong)(*(int *)(this + 0x2c) + 1),(sub_match *)&local_90);
  local_68 = 0;
  local_48 = 1;
  uStack_58 = uStack_88;
  local_60 = local_90;
  local_50 = local_80;
  if (param_1[0x5c] == (__state)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_1 + 0x10) == *(long *)(param_1 + 8);
  }
  local_78 = uVar11;
  uStack_70 = uVar11;
  local_40 = uVar11;
  _Var4 = (__lookahead<char,std::__ndk1::regex_traits<char>>)
          basic_regex<char,std::__ndk1::regex_traits<char>>::
          __match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                    ((basic_regex<char,std::__ndk1::regex_traits<char>> *)(this + 0x10),
                     *(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_a8,
                     *(uint *)(param_1 + 0x58) & 0xfff | 0x40,bVar3);
  if (_Var4 == this[0x54]) {
    *(undefined4 *)param_1 = 0xfffffc1f;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_00eaa358:
    if (local_a8 == (void *)0x0) goto LAB_00eaa364;
  }
  else {
    *(undefined4 *)param_1 = 0xfffffc1e;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
    uVar5 = ((long)local_a0 - (long)local_a8 >> 3) * -0x5555555555555555;
    if (uVar5 < 2) goto LAB_00eaa358;
    iVar1 = *(int *)(this + 0x50);
    lVar6 = *(long *)(param_1 + 0x20);
    uVar7 = 2;
    uVar8 = 1;
    do {
      puVar9 = (undefined8 *)((long)local_a8 + uVar8 * 0x18);
      uVar11 = *puVar9;
      puVar10 = (undefined8 *)(lVar6 + (ulong)((iVar1 + uVar7) - 2) * 0x18);
      puVar10[1] = puVar9[1];
      *puVar10 = uVar11;
      uVar8 = (ulong)uVar7;
      uVar7 = uVar7 + 1;
      *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar9 + 2);
    } while (uVar8 <= uVar5 && uVar5 - uVar8 != 0);
  }
  local_a0 = local_a8;
  operator_delete(local_a8);
LAB_00eaa364:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

