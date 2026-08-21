
/* std::__ndk1::__time_get_storage<char>::init(std::__ndk1::ctype<char> const&) */

void std::__ndk1::__time_get_storage<char>::init(ctype *param_1)

{
  long lVar1;
  char cVar2;
  ctype *this;
  long lVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  tm local_100;
  char acStack_bc [100];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_100.tm_zone = (char *)0x0;
  local_100.tm_mon = 0;
  local_100.tm_year = 0;
  local_100.tm_gmtoff = 0;
  local_100.tm_isdst = 0;
  local_100._36_4_ = 0;
  local_100.tm_hour = 0;
  local_100.tm_mday = 0;
  local_100.tm_sec = 0;
  local_100.tm_min = 0;
  local_100.tm_wday = 0;
  local_100.tm_yday = 0;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 8),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0xb0),acStack_bc);
  local_100.tm_wday = 1;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x20),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 200),acStack_bc);
  local_100.tm_wday = 2;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x38),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0xe0),acStack_bc);
  local_100.tm_wday = 3;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x50),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0xf8),acStack_bc);
  local_100.tm_wday = 4;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x68),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x110),acStack_bc);
  local_100.tm_wday = 5;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x80),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x128),acStack_bc);
  local_100.tm_wday = 6;
  strftime(acStack_bc,100,"%A",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x98),acStack_bc);
  strftime(acStack_bc,100,"%a",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x140),acStack_bc);
  lVar3 = 0;
  this = param_1 + 0x278;
  do {
    local_100.tm_mon = (int)lVar3;
    strftime(acStack_bc,100,"%B",&local_100);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + -0x120),acStack_bc);
    strftime(acStack_bc,100,"%b",&local_100);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               this,acStack_bc);
    lVar3 = lVar3 + 1;
    this = this + 0x18;
  } while (lVar3 != 0xc);
  local_100.tm_hour = 1;
  strftime(acStack_bc,100,"%p",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x398),acStack_bc);
  local_100.tm_hour = 0xd;
  strftime(acStack_bc,100,"%p",&local_100);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + 0x3b0),acStack_bc);
  cVar2 = (char)param_1;
  __analyze(cVar2,(ctype *)0x63);
  if (((byte)param_1[0x3c8] & 1) == 0) {
    *(undefined2 *)(param_1 + 0x3c8) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x3d8) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    if (((byte)param_1[0x3c8] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x3d8));
      *(undefined8 *)(param_1 + 0x3c8) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x3d8) = local_108;
  *(undefined8 *)(param_1 + 0x3d0) = uStack_110;
  *(undefined8 *)(param_1 + 0x3c8) = local_118;
  __analyze(cVar2,(ctype *)0x72);
  if (((byte)param_1[0x3e0] & 1) == 0) {
    *(undefined2 *)(param_1 + 0x3e0) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 1000) = 0;
    if (((byte)param_1[0x3e0] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x3f0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x3f0) = local_108;
  *(undefined8 *)(param_1 + 1000) = uStack_110;
  *(undefined8 *)(param_1 + 0x3e0) = local_118;
  __analyze(cVar2,(ctype *)0x78);
  if (((byte)param_1[0x3f8] & 1) == 0) {
    *(undefined2 *)(param_1 + 0x3f8) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    if (((byte)param_1[0x3f8] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x408));
      *(undefined8 *)(param_1 + 0x3f8) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x408) = local_108;
  *(undefined8 *)(param_1 + 0x400) = uStack_110;
  *(undefined8 *)(param_1 + 0x3f8) = local_118;
  __analyze(cVar2,(ctype *)0x58);
  if (((byte)param_1[0x410] & 1) == 0) {
    *(undefined2 *)(param_1 + 0x410) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x420) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    if (((byte)param_1[0x410] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x420));
      *(undefined8 *)(param_1 + 0x410) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x420) = local_108;
  *(undefined8 *)(param_1 + 0x418) = uStack_110;
  *(undefined8 *)(param_1 + 0x410) = local_118;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

