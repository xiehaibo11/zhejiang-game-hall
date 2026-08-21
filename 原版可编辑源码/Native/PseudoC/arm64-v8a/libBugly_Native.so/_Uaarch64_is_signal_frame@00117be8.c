
bool _Uaarch64_is_signal_frame(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = param_1[1];
  lVar3 = _Uaarch64_get_accessors(uVar4);
  iVar2 = (**(code **)(lVar3 + 0x18))(uVar4,param_1[3] + 4,&local_40,0,*param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_40 == -0x2bfffffe2d7fee98 && -1 < iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

