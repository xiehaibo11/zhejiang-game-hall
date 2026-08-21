
void FUN_0012396c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = _Uaarch64_get_accessors();
    iVar2 = (**(code **)(lVar3 + 0x18))(param_1,*(undefined8 *)(param_1 + 0x58),&local_40,0,param_2)
    ;
    if ((iVar2 < 0) || (local_40 == *(long *)(param_1 + 0x50))) {
      uVar4 = 1;
    }
    else {
      _Uaarch64_flush_cache(param_1,0,0);
      uVar4 = 0xffffffff;
      *(long *)(param_1 + 0x50) = local_40;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

