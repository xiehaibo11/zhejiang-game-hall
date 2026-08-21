
/* cocos2d::renderer::Effect::copy(cocos2d::renderer::Effect const*) */

void __thiscall cocos2d::renderer::Effect::copy(Effect *this,Effect *param_1)

{
  long lVar1;
  Technique *this_00;
  undefined8 *puVar2;
  Technique *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != *(undefined8 **)(param_1 + 0x18)) {
    do {
      this_00 = operator_new(0x30);
                    /* try { // try from 009bfb7c to 00abfb93 has its CatchHandler @ 009bfd34 */
      Technique::Technique(this_00);
      Ref::autorelease((Ref *)this_00);
      Technique::copy(this_00,(Technique *)*puVar2);
                    /* try { // try from 009bfb9c to 00abfba7 has its CatchHandler @ 009bfd30 */
      local_60 = this_00;
      if (*(undefined8 **)(this + 0x18) == *(undefined8 **)(this + 0x20)) {
        std::__ndk1::
        vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
        ::__push_back_slow_path<cocos2d::renderer::Technique*const&>
                  ((vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
                    *)(this + 0x10),&local_60);
      }
      else {
                    /* try { // try from 009bfba8 to 00abfbb3 has its CatchHandler @ 009bfd2c */
        **(undefined8 **)(this + 0x18) = this_00;
                    /* try { // try from 009bfbb4 to 00abfcb7 has its CatchHandler @ 009bfd44 */
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
      }
      Ref::retain((Ref *)local_60);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x18));
  }
  if (0 < *(long *)(this + 0x18) - (long)*(undefined8 **)(this + 0x10)) {
    *(undefined8 *)(this + 0x28) = **(undefined8 **)(this + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

