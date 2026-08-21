
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::seekp(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::seekp
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar2;
  long extraout_x1;
  long lVar3;
  long lVar4;
  uint uVar5;
  sentry local_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar4 = *param_1;
  lVar3 = *(long *)(lVar4 + -0x18);
  uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20);
  local_40 = param_1;
  if (uVar5 == 0) {
    this = *(basic_ostream<char,std::__ndk1::char_traits<char>> **)((long)param_1 + lVar3 + 0x88);
    if (this != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(this);
      lVar4 = *param_1;
    }
    local_48[0] = (sentry)0x1;
    lVar3 = *(long *)(lVar4 + -0x18);
    uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20);
  }
  if (((uVar5 & 5) == 0) &&
     (plVar2 = *(long **)((long)param_1 + lVar3 + 0x28),
     (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,0x10), extraout_x1 == -1)) {
    lVar3 = *(long *)(*param_1 + -0x18);
    uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20) |
            (uint)(*(long *)((long)param_1 + lVar3 + 0x28) == 0) | 4;
    *(uint *)((long)param_1 + lVar3 + 0x20) = uVar5;
    if ((uVar5 & *(uint *)((long)param_1 + lVar3 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

