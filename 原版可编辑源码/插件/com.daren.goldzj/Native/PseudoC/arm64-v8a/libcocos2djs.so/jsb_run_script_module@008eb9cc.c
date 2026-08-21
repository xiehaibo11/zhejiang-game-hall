
/* jsb_run_script_module(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, se::Value*) */

uint jsb_run_script_module(basic_string *param_1,Value *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uVar2 = FUN_008eba24(param_1,param_2,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

