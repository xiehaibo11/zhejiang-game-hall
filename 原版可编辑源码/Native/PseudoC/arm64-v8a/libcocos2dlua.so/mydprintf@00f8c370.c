
/* cocos2d::Console::Utility::mydprintf(int, char const*, ...) */

long cocos2d::Console::Utility::mydprintf(int param_1,char *param_2,...)

{
  char *__s1;
  long lVar1;
  int iVar2;
  ulong __n;
  ssize_t sVar3;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  size_t __n_00;
  long lVar4;
  ulong uVar5;
  undefined8 local_40e0;
  undefined8 uStack_40d8;
  undefined8 local_40d0;
  undefined8 uStack_40c8;
  undefined8 local_40c0;
  undefined8 uStack_40b8;
  undefined1 *local_4090;
  undefined1 *puStack_4088;
  undefined8 *puStack_4080;
  undefined8 uStack_4078;
  char acStack_406c [16388];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puStack_4088 = &stack0xffffffffffffbf50;
  puStack_4080 = &local_40e0;
  uStack_4078 = 0xffffff80ffffffd0;
  local_40e0 = in_x2;
  uStack_40d8 = in_x3;
  local_40d0 = in_x4;
  uStack_40c8 = in_x5;
  local_40c0 = in_x6;
  uStack_40b8 = in_x7;
  local_4090 = (undefined1 *)register0x00000008;
  vsnprintf(acStack_406c,0x4002,param_2,&local_4090);
  __n = __strlen_chk(acStack_406c,0x4002);
  uVar5 = (ulong)(_prompt >> 1);
  if ((_prompt & 1) != 0) {
    uVar5 = DAT_0178fc00;
  }
  if (uVar5 == __n) {
    __s1 = DAT_0178fc08;
    if ((_prompt & 1) == 0) {
      __s1 = &DAT_0178fbf9;
    }
    iVar2 = strncmp(__s1,acStack_406c,__n);
    if (iVar2 != 0) goto LAB_00f8c454;
    fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
           (FILE *)pthread_rwlock_tryrdlock);
  }
  else {
LAB_00f8c454:
    if (__n != 0) {
      uVar5 = 0;
      lVar4 = 0;
      do {
        __n_00 = __n - uVar5;
        if (0x1ff < __n_00) {
          __n_00 = 0x200;
        }
        sVar3 = sendto(param_1,acStack_406c + uVar5,__n_00,0,(sockaddr *)0x0,0);
        uVar5 = __n_00 + uVar5;
        lVar4 = sVar3 + lVar4;
      } while (uVar5 < __n);
      goto LAB_00f8c4c8;
    }
  }
  lVar4 = 0;
LAB_00f8c4c8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}

