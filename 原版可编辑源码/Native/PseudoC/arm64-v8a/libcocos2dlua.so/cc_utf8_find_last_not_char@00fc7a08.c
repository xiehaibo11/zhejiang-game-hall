
/* cocos2d::cc_utf8_find_last_not_char(std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > const&, unsigned short) */

ulong cocos2d::cc_utf8_find_last_not_char(vector *param_1,ushort param_2)

{
  wchar16 *pwVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  wchar16 *pwVar6;
  wchar16 local_54 [2];
  wchar16 *local_50;
  wchar16 *local_48;
  wchar16 *pwStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48 = (wchar16 *)0x0;
  pwStack_40 = (wchar16 *)0x0;
  local_50 = (wchar16 *)0x0;
  pwVar6 = *(wchar16 **)param_1;
  pwVar1 = *(wchar16 **)(param_1 + 8);
  if (pwVar6 != pwVar1) {
    while( true ) {
      local_54[0] = *pwVar6;
      if (local_48 < pwStack_40) {
        *local_48 = local_54[0];
        local_48 = local_48 + 1;
      }
      else {
        std::__ndk1::vector<char16_t,std::__ndk1::allocator<char16_t>>::
        __push_back_slow_path<char16_t>
                  ((vector<char16_t,std::__ndk1::allocator<char16_t>> *)&local_50,local_54);
      }
      if (pwVar1 + -1 == pwVar6) break;
      pwVar6 = pwVar6 + 1;
    }
  }
  uVar5 = ((long)local_48 - (long)local_50) * 0x80000000 >> 0x20;
  do {
    uVar2 = uVar5 - 1;
    if ((long)uVar5 < 1) break;
    lVar4 = uVar5 - 1;
    uVar5 = uVar2;
  } while (local_50[lVar4] == param_2);
  if (local_50 != (wchar16 *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

