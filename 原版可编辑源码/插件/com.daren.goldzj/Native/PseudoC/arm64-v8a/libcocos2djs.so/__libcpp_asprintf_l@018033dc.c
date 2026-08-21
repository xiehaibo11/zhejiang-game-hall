
/* std::__ndk1::__libcpp_asprintf_l(char**, __locale_t*, char const*, ...) */

int std::__ndk1::__libcpp_asprintf_l(char **param_1,__locale_t *param_2,char *param_3,...)

{
  long lVar1;
  int iVar2;
  __locale_t __dataset;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_b8 = in_x3;
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  __dataset = uselocale((__locale_t)param_2);
  uStack_78 = 0xffffff80ffffffd8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_90;
  puStack_80 = auStack_c0;
  iVar2 = vasprintf(param_1,param_3,&local_90);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

