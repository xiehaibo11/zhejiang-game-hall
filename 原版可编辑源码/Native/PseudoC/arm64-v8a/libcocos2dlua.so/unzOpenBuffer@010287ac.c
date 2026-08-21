
/* cocos2d::unzOpenBuffer(void const*, unsigned long) */

void __thiscall cocos2d::unzOpenBuffer(cocos2d *this,void *param_1,ulong param_2)

{
  long lVar1;
  zlib_filefunc64_32_def_s azStack_b8 [88];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  FUN_01028820(&local_60,param_1,param_2,this,param_1);
  fill_memory_filefunc64_32(azStack_b8);
  FUN_01027d58(&local_60,azStack_b8,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

