
int FUN_00d767f0(long param_1,int param_2,undefined8 param_3,int *param_4,long param_5,
                ulong *param_6)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_468 [1024];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 0x170) != param_2) {
    iVar5 = -2;
    *(char **)(param_1 + 0x1a8) = "zstream unclaimed";
    goto LAB_00d76984;
  }
  uVar6 = *param_6;
  iVar5 = *param_4;
  lVar1 = param_1 + 0x178;
  *(undefined8 *)(param_1 + 0x178) = param_3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (param_5 == 0) {
    *(int *)(param_1 + 0x180) = iVar5;
    uVar2 = uVar6;
    if (0x3ff < uVar6) {
      uVar2 = 0x400;
    }
    lVar7 = uVar6 - uVar2;
    *(undefined1 **)(param_1 + 400) = auStack_468;
    *(int *)(param_1 + 0x198) = (int)uVar2;
    iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
    if (iVar5 == 0) {
      do {
        *(undefined1 **)(param_1 + 400) = auStack_468;
        uVar6 = lVar7 + (ulong)*(uint *)(param_1 + 0x198);
        uVar2 = uVar6;
        if (0x3ff < uVar6) {
          uVar2 = 0x400;
        }
        lVar7 = uVar6 - uVar2;
        *(int *)(param_1 + 0x198) = (int)uVar2;
        iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
      } while (iVar5 == 0);
      goto LAB_00d76944;
    }
LAB_00d76948:
    *(undefined8 *)(param_1 + 400) = 0;
  }
  else {
    *(int *)(param_1 + 0x180) = iVar5;
    uVar2 = uVar6;
    if (0xfffffffe < uVar6) {
      uVar2 = 0xffffffff;
    }
    lVar7 = uVar6 - uVar2;
    *(long *)(param_1 + 400) = param_5;
    *(int *)(param_1 + 0x198) = (int)uVar2;
    iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
    if (iVar5 == 0) {
      do {
        uVar6 = lVar7 + (ulong)*(uint *)(param_1 + 0x198);
        uVar2 = uVar6;
        if (0xfffffffe < uVar6) {
          uVar2 = 0xffffffff;
        }
        lVar7 = uVar6 - uVar2;
        *(int *)(param_1 + 0x198) = (int)uVar2;
        iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
      } while (iVar5 == 0);
LAB_00d76944:
      if (param_5 == 0) goto LAB_00d76948;
    }
  }
  iVar3 = *(int *)(param_1 + 0x180);
  lVar7 = lVar7 + (ulong)*(uint *)(param_1 + 0x198);
  if (lVar7 != 0) {
    *param_6 = *param_6 - lVar7;
  }
  if (iVar3 != 0) {
    *param_4 = *param_4 - iVar3;
  }
  png_zstream_error(param_1,iVar5);
LAB_00d76984:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

