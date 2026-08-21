
/* tinyxml2::XMLPrinter::Print(char const*, ...) */

void tinyxml2::XMLPrinter::Print(char *param_1,...)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  void *__dest;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  char *__src;
  int iVar7;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined1 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  local_130 = in_x2;
  uStack_128 = in_x3;
  local_120 = in_x4;
  uStack_118 = in_x5;
  local_110 = in_x6;
  uStack_108 = in_x7;
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    uStack_c8 = 0xffffff80ffffffd0;
    local_e0 = (undefined1 *)register0x00000008;
    ppuStack_d8 = &local_100;
    puStack_d0 = &local_130;
    iVar5 = vsnprintf((char *)0x0,0,in_x1,&local_e0);
    iVar7 = *(int *)(param_1 + 0x128);
    iVar4 = iVar7 + iVar5;
    if (*(int *)(param_1 + 0x124) < iVar4) {
      iVar2 = iVar4 * 2;
      iVar1 = iVar2;
      if (iVar4 < 0) {
        iVar1 = -1;
      }
      __dest = operator_new__((long)iVar1);
      __src = *(char **)(param_1 + 0x108);
      memcpy(__dest,__src,(long)iVar7);
      if ((__src != param_1 + 0x110) && (__src != (char *)0x0)) {
        operator_delete__(__src);
        iVar7 = *(int *)(param_1 + 0x128);
        iVar4 = iVar7 + iVar5;
      }
      *(void **)(param_1 + 0x108) = __dest;
      *(int *)(param_1 + 0x124) = iVar2;
    }
    else {
      __dest = *(void **)(param_1 + 0x108);
    }
    *(int *)(param_1 + 0x128) = iVar4;
    uStack_e8 = 0xffffff80ffffffd0;
    local_100 = (undefined1 *)register0x00000008;
    ppuStack_f8 = &local_100;
    puStack_f0 = &local_130;
    iVar4 = vsnprintf((char *)((long)__dest + (long)iVar7 + -1),(long)(iVar5 + 1),in_x1,&local_100);
  }
  else {
    uStack_a8 = 0xffffff80ffffffd0;
    local_c0 = (undefined1 *)register0x00000008;
    ppuStack_b8 = &local_100;
    puStack_b0 = &local_130;
    iVar4 = vfprintf(*(FILE **)(param_1 + 0x10),in_x1,&local_c0);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}

