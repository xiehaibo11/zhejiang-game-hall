
int FUN_00d7da20(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar5 = *(int *)(param_1 + 0x170);
  uVar7 = param_2 & 0xffffffff;
  if (iVar5 != 0) {
    local_a8 = (undefined1)(uVar7 >> 0x18);
    local_a7 = (undefined1)(uVar7 >> 0x10);
    local_a6 = (undefined1)(uVar7 >> 8);
    local_a4 = 0x203a;
    local_a2 = (undefined1)((uint)iVar5 >> 0x18);
    local_a1 = (undefined1)((uint)iVar5 >> 0x10);
    local_a5 = (undefined1)param_2;
    local_a0 = (undefined1)((uint)iVar5 >> 8);
    local_9f = (undefined1)iVar5;
    png_safecat(&local_a8,0x40,10," using zstream");
    png_warning(param_1,&local_a8);
    if (*(int *)(param_1 + 0x170) == 0x49444154) {
      *(char **)(param_1 + 0x1a8) = "in use by IDAT";
      iVar5 = -2;
      goto LAB_00d7dc60;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if ((int)param_2 == 0x49444154) {
    iVar5 = *(int *)(param_1 + 500);
    iVar1 = *(int *)(param_1 + 0x1f8);
    iVar8 = *(int *)(param_1 + 0x1fc);
    iVar2 = *(int *)(param_1 + 0x200);
    if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
      uVar9 = (uint)(*(char *)(param_1 + 0x2ae) != '\b');
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x204);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x208);
    iVar1 = *(int *)(param_1 + 0x20c);
    iVar8 = *(int *)(param_1 + 0x210);
    iVar2 = *(int *)(param_1 + 0x214);
    uVar9 = *(uint *)(param_1 + 0x218);
  }
  if (param_3 < 0x4001) {
    for (uVar7 = (ulong)(uint)(1 << (ulong)(iVar8 - 1U & 0x1f)); param_3 + 0x106 <= uVar7;
        uVar7 = uVar7 >> 1) {
      iVar8 = iVar8 + -1;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x168);
  if (((uVar6 >> 1 & 1) != 0) &&
     ((((*(int *)(param_1 + 0x21c) != iVar5 || (*(int *)(param_1 + 0x220) != iVar1)) ||
       (*(int *)(param_1 + 0x224) != iVar8)) ||
      ((*(int *)(param_1 + 0x228) != iVar2 || (*(uint *)(param_1 + 0x22c) != uVar9)))))) {
    iVar4 = deflateEnd(param_1 + 0x178);
    if (iVar4 != 0) {
      png_warning(param_1,"deflateEnd failed (ignored)");
    }
    uVar6 = *(uint *)(param_1 + 0x168) & 0xfffffffd;
    *(uint *)(param_1 + 0x168) = uVar6;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if ((uVar6 >> 1 & 1) == 0) {
    iVar5 = deflateInit2_(param_1 + 0x178,iVar5,iVar1,iVar8,iVar2,uVar9,"1.2.8",0x70);
    if (iVar5 != 0) {
LAB_00d7dc48:
      png_zstream_error(param_1,iVar5);
      goto LAB_00d7dc60;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
  }
  else {
    iVar5 = deflateReset(param_1 + 0x178);
    if (iVar5 != 0) goto LAB_00d7dc48;
  }
  iVar5 = 0;
  *(int *)(param_1 + 0x170) = (int)param_2;
LAB_00d7dc60:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

