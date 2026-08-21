
/* cocos2d::renderer::Technique::copy(cocos2d::renderer::Technique const&) */

void __thiscall cocos2d::renderer::Technique::copy(Technique *this,Technique *param_1)

{
  long lVar1;
  Ref *this_00;
  vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *this_01;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Ref *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_01 = (vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)
            (this + 0x18);
  puVar2 = *(undefined8 **)this_01;
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  if (puVar2 != *(undefined8 **)(this + 0x20)) {
    do {
      puVar3 = puVar2 + 1;
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar3;
    } while (puVar3 != *(undefined8 **)(this + 0x20));
    puVar2 = *(undefined8 **)this_01;
  }
  *(undefined8 **)(this + 0x20) = puVar2;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != *(undefined8 **)(param_1 + 0x20)) {
    do {
      this_00 = operator_new(0x108);
      Ref::Ref(this_00);
      *(undefined ***)this_00 = &PTR__Pass_01c69448;
      *(undefined8 *)(this_00 + 0x50) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined4 *)(this_00 + 0x58) = 0x3f800000;
      *(undefined8 *)(this_00 + 0x70) = 0;
      *(undefined8 *)(this_00 + 0x78) = 0;
      *(undefined8 *)(this_00 + 0x68) = 0;
      *(undefined8 *)(this_00 + 0xf8) = 0;
      *(undefined8 *)(this_00 + 0x100) = 0;
      *(Ref **)(this_00 + 0x60) = this_00 + 0x68;
      *(undefined8 *)(this_00 + 0xf0) = 0;
      Ref::autorelease(this_00);
      Pass::copy((Pass *)this_00,(Pass *)*puVar2);
      local_60 = this_00;
      if (*(undefined8 **)(this + 0x20) == *(undefined8 **)(this + 0x28)) {
        std::__ndk1::
        vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>::
        __push_back_slow_path<cocos2d::renderer::Pass*const&>(this_01,(Pass **)&local_60);
      }
      else {
        **(undefined8 **)(this + 0x20) = this_00;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
      }
      Ref::retain(local_60);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x20));
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

