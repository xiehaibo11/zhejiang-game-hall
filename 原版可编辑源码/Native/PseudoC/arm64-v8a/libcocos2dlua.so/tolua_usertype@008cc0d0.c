
void tolua_usertype(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_c0 = 0x2074736e6f63;
  __strncat_chk(&local_c0,param_2,0x78,0x80);
  iVar2 = FUN_008cb838(param_1,&local_c0);
  if ((iVar2 != 0) && (iVar2 = FUN_008cb838(param_1,param_2), iVar2 != 0)) {
    FUN_008cc188(param_1,param_2,&local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

