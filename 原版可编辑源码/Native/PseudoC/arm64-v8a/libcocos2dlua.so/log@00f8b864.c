
/* cocos2d::log(char const*, ...) */

void cocos2d::log(char *param_1,...)

{
  long lVar1;
  int iVar2;
  char *__s;
  long lVar3;
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
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_e8 = in_x1;
  uStack_e0 = in_x2;
  local_d8 = in_x3;
  uStack_d0 = in_x4;
  local_c8 = in_x5;
  uStack_c0 = in_x6;
  local_b8 = in_x7;
  __s = operator_new__(0x4000,(nothrow_t *)&std::nothrow);
  if (__s != (char *)0x0) {
    iVar5 = 0x4000;
    do {
      uStack_78 = 0xffffff80ffffffc8;
      local_90 = (undefined1 *)register0x00000008;
      puStack_88 = &stack0xffffffffffffff50;
      puStack_80 = auStack_f0;
      iVar2 = vsnprintf(__s,(long)(iVar5 + -3),param_1,&local_90);
      if (iVar2 < 0) {
        iVar5 = iVar5 << 1;
      }
      else {
        if (iVar2 <= iVar5 + -3) {
          (__s + iVar2)[0] = '\n';
          (__s + iVar2)[1] = '\0';
          __android_log_print(3,"cocos2d-x debug info","%s",__s);
          lVar3 = Director::getInstance();
          Console::log(*(Console **)(lVar3 + 0x1b8),__s);
          operator_delete__(__s);
          break;
        }
        iVar5 = iVar2 + 3;
      }
      operator_delete__(__s);
      uVar4 = (ulong)iVar5;
      if ((long)uVar4 < 0) {
        uVar4 = 0xffffffffffffffff;
      }
      __s = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    } while (__s != (char *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

