
/* cocos2d::unzOpen2_64(void const*, cocos2d::zlib_filefunc64_def_s*) */

void cocos2d::unzOpen2_64(void *param_1,zlib_filefunc64_def_s *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)(undefined1 *)0x0;
  if (param_2 != (zlib_filefunc64_def_s *)0x0) {
    uStack_58 = *(undefined8 *)(param_2 + 0x28);
    local_60 = *(undefined8 *)(param_2 + 0x20);
    uStack_48 = *(undefined8 *)(param_2 + 0x38);
    uStack_50 = *(undefined8 *)(param_2 + 0x30);
    uStack_78 = *(undefined8 *)(param_2 + 8);
    local_80 = *(undefined8 *)param_2;
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uStack_70 = *(undefined8 *)(param_2 + 0x10);
    local_38 = 0;
    uStack_30 = 0;
    puVar2 = &local_80;
  }
  FUN_01027d58(param_1,puVar2,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

