
uint FUN_001190f8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = _Uaarch64_get_elf_image(param_1,auStack_78,param_2,param_3,&uStack_50,&local_58,0,param_7)
  ;
  if ((int)uVar3 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0011865c(uVar3,auStack_78,uStack_50,local_58,param_3,param_4,param_5,param_6);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

