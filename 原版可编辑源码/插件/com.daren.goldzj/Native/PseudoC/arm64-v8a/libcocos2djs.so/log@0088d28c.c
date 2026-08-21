
/* cocos2d::log(char const*, ...) */

void cocos2d::log(char *param_1,...)

{
  long lVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_a0 = auStack_f0;
  ppuStack_a8 = &local_b0;
  uStack_98 = 0xffffff80ffffffc8;
  local_e8 = in_x1;
  local_e0 = in_x2;
  uStack_d8 = in_x3;
  local_d0 = in_x4;
  uStack_c8 = in_x5;
  local_c0 = in_x6;
  uStack_b8 = in_x7;
  local_b0 = (undefined1 *)register0x00000008;
  __s = operator_new__(0x4000,(nothrow_t *)&std::nothrow);
  if (__s != (char *)0x0) {
    iVar5 = 0x4000;
    do {
      ppuStack_68 = ppuStack_a8;
      local_70 = local_b0;
      uStack_58 = uStack_98;
      puStack_60 = puStack_a0;
      iVar2 = vsnprintf(__s,(long)(iVar5 + -3),param_1,&local_70);
      if (-1 < iVar2) {
        sVar3 = strlen(__s);
        (__s + sVar3)[0] = '\n';
        (__s + sVar3)[1] = '\0';
        __android_log_print(3,"debug info","%s",__s);
        operator_delete__(__s);
        break;
      }
      iVar5 = iVar5 << 1;
      operator_delete__(__s);
      uVar4 = (ulong)iVar5;
      if ((long)uVar4 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      __s = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    } while (__s != (char *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

