
void FUN_0013f9b4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  do {
    if (param_2 == 0) {
      uVar4 = 1;
LAB_0013fa38:
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    uVar1 = param_2;
    if (0xf < param_2) {
      uVar1 = 0x10;
    }
    uVar3 = FUN_0013e3d8(param_1,&local_58,uVar1);
    if ((uVar3 & 1) == 0) {
      FUN_0013fb24(&DAT_0016ba80,"_write(self,_alignSkipBuf,wlen)",DAT_0016ba88);
      uVar4 = 0;
      goto LAB_0013fa38;
    }
    param_2 = param_2 - uVar1;
  } while( true );
}

