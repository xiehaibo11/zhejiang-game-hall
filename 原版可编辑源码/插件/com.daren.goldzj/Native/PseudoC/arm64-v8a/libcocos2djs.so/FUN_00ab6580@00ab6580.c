
void FUN_00ab6580(ulong *param_1)

{
  long lVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  char *__s;
  ulong *puVar10;
  ulong local_a8;
  uint local_a0 [2];
  char *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  piVar3 = (int *)__errno();
  *piVar3 = 6;
  __fd = socket(2,2,0);
  if (-1 < __fd) {
    pcVar4 = (char *)FUN_00aa8a78(0x2000,"getifaddrs2");
    if (pcVar4 != (char *)0x0) {
      lVar9 = 0x2000;
      do {
        local_a0[0] = (uint)lVar9;
        local_98 = pcVar4;
        iVar2 = ioctl(__fd,0x8912,local_a0);
        if ((iVar2 < 0) && (iVar2 = *piVar3, iVar2 != 0x16)) goto LAB_00ab6664;
        if ((int)local_a0[0] < (int)(uint)lVar9) {
          uVar8 = (ulong)local_a0[0];
          if ((int)local_a0[0] < 1) goto LAB_00ab6794;
          puVar10 = &local_a8;
          __s = local_98;
          goto LAB_00ab66d8;
        }
        thunk_FUN_00aa8a48(pcVar4,0,"lws_free");
        lVar9 = lVar9 << 1;
        pcVar4 = (char *)FUN_00aa8a78(lVar9,"getifaddrs2");
      } while (pcVar4 != (char *)0x0);
    }
    iVar2 = 0xc;
LAB_00ab6664:
    close(__fd);
    thunk_FUN_00aa8a48(pcVar4,0,"lws_free");
    *piVar3 = iVar2;
  }
  uVar5 = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
  goto LAB_00ab67c8;
  while( true ) {
    puVar6 = (undefined8 *)thunk_FUN_00aa8a48(0,0x38,"getifaddrs");
    *puVar10 = (ulong)puVar6;
    *puVar6 = 0;
    pcVar7 = strdup(__s);
    *(char **)(*puVar10 + 8) = pcVar7;
    *(int *)(*puVar10 + 0x10) = (int)(short)local_80;
    uVar5 = thunk_FUN_00aa8a48(0,0x10,"getifaddrs");
    *(undefined8 *)(*puVar10 + 0x18) = uVar5;
    pcVar7 = __s + 0x18;
    uVar5 = *(undefined8 *)(__s + 0x10);
    __s = __s + 0x28;
    puVar6 = *(undefined8 **)(*puVar10 + 0x18);
    puVar6[1] = *(undefined8 *)pcVar7;
    *puVar6 = uVar5;
    *(undefined8 *)(*puVar10 + 0x20) = 0;
    *(undefined8 *)(*puVar10 + 0x28) = 0;
    *(undefined8 *)(*puVar10 + 0x30) = 0;
    puVar10 = (ulong *)*puVar10;
    uVar8 = local_a8;
    if (local_98 + (int)local_a0[0] <= __s) break;
LAB_00ab66d8:
    local_78 = 0;
    uStack_70 = 0;
    local_80 = 0;
    uStack_88 = *(undefined8 *)(__s + 8);
    local_90 = *(undefined8 *)__s;
    iVar2 = ioctl(__fd,0x8913,&local_90);
    if (iVar2 < 0) {
      iVar2 = *piVar3;
      goto LAB_00ab6664;
    }
  }
LAB_00ab6794:
  *param_1 = uVar8;
  close(__fd);
  thunk_FUN_00aa8a48(pcVar4,0,"lws_free");
  uVar5 = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00ab67c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

