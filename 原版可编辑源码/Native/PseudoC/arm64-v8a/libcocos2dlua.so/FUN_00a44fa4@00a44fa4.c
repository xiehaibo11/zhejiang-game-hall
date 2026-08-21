
void FUN_00a44fa4(int param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5,
                 socklen_t param_6)

{
  size_t __n;
  long lVar1;
  int __fd;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined4 local_88 [2];
  undefined1 uStack_80;
  undefined1 auStack_7f [15];
  ushort local_70;
  undefined4 local_6c;
  long local_58;
  
                    /* catch() { ... } // from try @ 00a44eb4 with catch @ 00a44fb4 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((param_1 == 2) && (param_4 != (char *)0x0)) {
    sVar4 = strlen(param_4);
    if ((sVar4 < 0x10) && (__fd = socket(2,1,0), __fd != -1)) {
      __n = 0;
      if (sVar4 + 1 < 0x28) {
        __n = 0x27 - sVar4;
      }
      memset(auStack_7f + sVar4,0,__n);
      memcpy(&uStack_80,param_4,sVar4 + 1);
      local_70 = 2;
      iVar2 = ioctl(__fd,0x8915,&uStack_80);
      if (-1 < iVar2) {
        local_88[0] = local_6c;
        inet_ntop((uint)local_70,local_88,param_5,param_6);
        close(__fd);
        uVar3 = 2;
        goto LAB_00a450a4;
      }
      close(__fd);
    }
    uVar3 = 0;
  }
LAB_00a450a4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

