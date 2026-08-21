
/* std::__ndk1::__libcpp_snprintf_l(char*, unsigned long, __locale_t*, char const*, ...) */

undefined4
std::__ndk1::__libcpp_snprintf_l(char *param_1,ulong param_2,__locale_t *param_3,char *param_4,...)

{
  long lVar1;
  undefined4 uVar2;
  __locale_t __dataset;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  __dataset = uselocale((__locale_t)param_3);
  uStack_58 = 0xffffff80ffffffe0;
  local_70 = (undefined1 *)register0x00000008;
  puStack_68 = &stack0xffffffffffffff70;
  puStack_60 = &local_b0;
  uVar2 = __vsnprintf_chk(param_1,param_2,0,0xffffffffffffffff,param_4,&local_70);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

