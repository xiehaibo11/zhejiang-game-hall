
/* std::__ndk1::__libcpp_snprintf_l(char*, unsigned long, __locale_t*, char const*, ...) */

int std::__ndk1::__libcpp_snprintf_l
              (char *param_1,ulong param_2,__locale_t *param_3,char *param_4,...)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_c0 = in_x4;
  uStack_b8 = in_x5;
  local_b0 = in_x6;
  uStack_a8 = in_x7;
  __dataset = uselocale((__locale_t)param_3);
  uStack_88 = 0xffffff80ffffffe0;
  local_a0 = (undefined1 *)register0x00000008;
  ppuStack_98 = &local_a0;
  puStack_90 = &local_c0;
  iVar2 = vsnprintf(param_1,param_2,param_4,&local_a0);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

