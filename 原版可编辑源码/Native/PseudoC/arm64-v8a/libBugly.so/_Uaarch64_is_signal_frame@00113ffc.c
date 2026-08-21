
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_is_signal_frame(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_10;
  long local_8;
  
  uVar3 = param_1[1];
  local_8 = ___stack_chk_guard;
  lVar2 = _Uaarch64_get_accessors(uVar3);
  iVar1 = (**(code **)(lVar2 + 0x18))(uVar3,param_1[3] + 4,&local_10,0,*param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(-1 < iVar1 && local_10 == -0x2bfffffe2d7fee98);
}

