
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012186c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_10;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar2 = _Uaarch64_get_accessors(param_1,0);
    iVar1 = (**(code **)(lVar2 + 0x18))(param_1,*(undefined8 *)(param_1 + 0x58),&local_10,0,param_2)
    ;
    if (iVar1 < 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      if (*(long *)(param_1 + 0x50) != local_10) {
        _Uaarch64_flush_cache(param_1,0,0);
        uVar3 = 0xffffffff;
        *(long *)(param_1 + 0x50) = local_10;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

