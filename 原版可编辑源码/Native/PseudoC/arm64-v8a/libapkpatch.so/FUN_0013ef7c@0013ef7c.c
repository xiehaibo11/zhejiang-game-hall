
uint FUN_0013ef7c(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 200) == 0) {
LAB_0013f0a4:
    uVar3 = 0;
    goto LAB_0013f0a8;
  }
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 == 0) {
LAB_0013eff0:
    if (*(long *)(param_1 + 0xb8) == *(long *)(param_1 + 0xa0)) {
      if (1 < *(int *)(param_1 + 0x124)) {
        lVar4 = *(long *)(param_1 + 0xd0);
        if (lVar4 != 0) {
          lVar5 = *(long *)(param_1 + 0x128);
          *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
          FUN_001381a4(lVar5,lVar4,1);
          *(undefined8 *)(param_1 + 0xd0) = 0;
        }
        uVar6 = FUN_0013f0d4(param_1,0);
        uVar3 = 0;
        if ((uVar6 & 1) == 0) goto LAB_0013f070;
      }
      if (*(long *)(param_1 + 0xd8) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_0013edc0(param_1,*(undefined4 *)(param_1 + 0x100),
                             *(undefined4 *)(param_1 + 0xc0));
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    if ((*(long *)(param_1 + 0xb8) == 0) && (*(long *)(param_1 + 0xc0) == 0)) {
      local_3c[0] = 0;
      iVar2 = (**(code **)(param_1 + 0xb0))(param_1 + 0x98,0,local_3c,local_3c);
      if (iVar2 == 0) {
        FUN_0013fb24(&DAT_0016ba80,"append_state->write(append_state,0,&emptyBuf,&emptyBuf)",
                     DAT_0016ba88);
        goto LAB_0013f0a4;
      }
      lVar4 = *(long *)(param_1 + 0xd8);
    }
    iVar2 = FUN_0013dbb0(lVar4);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_0013eff0;
  }
LAB_0013f070:
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
LAB_0013f0a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

