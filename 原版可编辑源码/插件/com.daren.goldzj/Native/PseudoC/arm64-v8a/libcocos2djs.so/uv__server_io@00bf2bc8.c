
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__server_io(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  timespec local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uv__io_start(*(undefined8 *)(param_2 + -0x80),param_2,1);
LAB_00bf2c20:
  do {
    iVar2 = *(int *)(param_2 + 0x30);
    while( true ) {
      if (iVar2 == -1) goto LAB_00bf2c8c;
      iVar2 = uv__accept();
      if (iVar2 < 0) break;
      *(int *)(param_2 + 100) = iVar2;
      (**(code **)(param_2 + 0x58))(param_2 + -0x88,0);
      if (*(int *)(param_2 + 100) != -1) {
        uv__io_stop(param_1,param_2,1);
        goto LAB_00bf2c8c;
      }
      if ((*(int *)(param_2 + -0x78) != 0xc) || ((*(uint *)(param_2 + -0x30) >> 0xc & 1) == 0))
      goto LAB_00bf2c20;
      local_18.tv_sec = 0;
      local_18.tv_nsec = 1;
      nanosleep(&local_18,(timespec *)0x0);
      iVar2 = *(int *)(param_2 + 0x30);
    }
    if (iVar2 == -0xb) goto LAB_00bf2c8c;
    if (iVar2 != -0x67) {
      if (1 < iVar2 + 0x18U) goto LAB_00bf2cdc;
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      if (*(int *)(param_1 + 0x300) == -1) {
        iVar2 = -0x18;
        goto LAB_00bf2cdc;
      }
      uv__close();
      *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
      do {
        iVar2 = uv__accept(uVar1);
        while (-1 < iVar2) {
          uv__close();
          iVar2 = uv__accept(uVar1);
        }
      } while (iVar2 == -4);
      iVar3 = uv__open_cloexec(&DAT_018e1710,0);
      if (-1 < iVar3) {
        *(int *)(param_1 + 0x300) = iVar3;
      }
      if (iVar2 == -0xb) {
LAB_00bf2c8c:
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_00bf2cdc:
      (**(code **)(param_2 + 0x58))(param_2 + -0x88,iVar2);
    }
  } while( true );
}

