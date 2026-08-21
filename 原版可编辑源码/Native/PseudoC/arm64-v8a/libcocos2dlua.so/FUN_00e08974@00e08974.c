
void FUN_00e08974(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 8);
  local_30 = 0;
  if (*param_2 != 0) {
    local_30 = __dynamic_cast(*param_2,&cocos2d::EventCustom::typeinfo,
                              &cocos2d::extension::EventAssetsManagerEx::typeinfo,0);
  }
  plVar2 = *(long **)(lVar3 + 0xf0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d64e4();
}

