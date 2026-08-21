
/* std::__ndk1::system_error::__init(std::__ndk1::error_code const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
std::__ndk1::system_error::__init
          (undefined8 *param_1_00,system_error *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)this;
  if (iVar4 == 0) goto LAB_01211fc8;
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 != 0) {
LAB_01211f64:
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                (param_1,": ",2);
      iVar4 = *(int *)this;
    }
  }
  else if (*(long *)(param_1 + 8) != 0) goto LAB_01211f64;
  (**(code **)(**(long **)(this + 8) + 0x30))(local_50,*(long **)(this + 8),iVar4);
  uVar1 = (ulong)(local_50[0] >> 1);
  pcVar3 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pcVar3 = local_40;
  }
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
            (param_1,pcVar3,uVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_01211fc8:
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  param_1_00[2] = *(undefined8 *)(param_1 + 0x10);
  param_1_00[1] = uVar6;
  *param_1_00 = uVar5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

