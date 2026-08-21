
/* universe::TanGaoXiong::isDirectoryExist(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

uint universe::TanGaoXiong::isDirectoryExist(basic_string *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  basic_string *in_x1;
  basic_string *in_x2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)((byte)*in_x1 >> 1);
  if (((byte)*in_x1 & 1) != 0) {
    uVar3 = *(ulong *)(in_x1 + 8);
  }
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1 + 0x40))();
    if ((uVar3 & 1) != 0) {
      uVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
      if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_009dbaac;
      goto LAB_009dba74;
    }
    std::__ndk1::operator+((__ndk1 *)(param_1 + 8),in_x1,in_x2);
    uVar3 = (**(code **)(*(long *)param_1 + 0x50))(param_1,local_50);
    if ((uVar3 & 1) == 0) {
      uVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    }
    else {
      uVar2 = 1;
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
LAB_009dbaac:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_009dba74:
  return uVar2 & 1;
}

