
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf28d4(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int local_1c;
  socklen_t local_18 [4];
  long local_8;
  
  lVar4 = param_2 + -0x88;
  lVar3 = *(long *)(param_2 + -0x10);
  local_8 = ___stack_chk_guard;
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_2 + 0x60);
    local_18[0] = 4;
    if (iVar1 == 0) {
      getsockopt(*(int *)(param_2 + 0x30),1,4,&local_1c,local_18);
      iVar1 = -local_1c;
    }
    else {
      *(undefined4 *)(param_2 + 0x60) = 0;
    }
    local_1c = iVar1;
    if (iVar1 != -0x73) {
      *(undefined8 *)(param_2 + -0x10) = 0;
      **(undefined8 **)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x10);
      *(undefined8 *)(*(long *)(lVar3 + 0x10) + 8) = *(undefined8 *)(lVar3 + 0x18);
      if ((iVar1 < 0) || (*(long *)(param_2 + 0x38) == param_2 + 0x38)) {
        uv__io_stop(*(undefined8 *)(param_2 + -0x80),param_2,4);
      }
      if (*(code **)(lVar3 + 0x40) != (code *)0x0) {
        (**(code **)(lVar3 + 0x40))(lVar3,local_1c);
      }
      if ((*(int *)(param_2 + 0x30) != -1) && (local_1c < 0)) {
        uv__stream_flush_write_queue(lVar4,0xffffff83);
        FUN_00bf2190(lVar4);
      }
    }
    goto LAB_00bf297c;
  }
  if ((param_3 & 0x19) != 0) {
    FUN_00bf2278(lVar4);
  }
  if (*(int *)(param_2 + 0x30) == -1) goto LAB_00bf297c;
  if (((param_3 >> 4 & 1) != 0) && ((*(uint *)(param_2 + -0x30) & 0x304) == 0x104)) {
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    FUN_00bf1d90(lVar4,local_18);
    if (*(int *)(param_2 + 0x30) == -1) goto LAB_00bf297c;
  }
  if ((param_3 & 0x1c) == 0) goto LAB_00bf297c;
  FUN_00bf1ea8(lVar4);
  FUN_00bf2190(lVar4);
  if (*(long *)(param_2 + 0x38) != param_2 + 0x38) goto LAB_00bf297c;
  uv__io_stop(*(undefined8 *)(param_2 + -0x80),param_2,4);
  if ((*(uint *)(param_2 + -0x30) & 0x19) != 8) goto LAB_00bf297c;
  lVar3 = *(long *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = 0;
  *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) & 0xfffffff7;
  iVar1 = *(int *)(param_2 + 0x30);
  **(undefined8 **)(lVar3 + 0x18) = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(*(long *)(lVar3 + 0x10) + 8) = *(undefined8 *)(lVar3 + 0x18);
  iVar1 = shutdown(iVar1,1);
  if (iVar1 == 0) {
LAB_00bf2b0c:
    iVar1 = 0;
    *(uint *)(param_2 + -0x30) = *(uint *)(param_2 + -0x30) | 0x10;
  }
  else {
    piVar2 = (int *)__errno();
    iVar1 = -*piVar2;
    if (*piVar2 == 0) goto LAB_00bf2b0c;
  }
  if (*(code **)(lVar3 + 0x48) != (code *)0x0) {
    (**(code **)(lVar3 + 0x48))(lVar3,iVar1);
  }
LAB_00bf297c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

