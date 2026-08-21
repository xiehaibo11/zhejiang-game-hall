
/* fairygui::GComponent::addController(fairygui::GController*) */

void __thiscall fairygui::GComponent::addController(GComponent *this,GController *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  GController *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x200);
  local_30 = param_1;
  if (puVar2 == *(undefined8 **)(this + 0x208)) {
    std::__ndk1::vector<fairygui::GController*,std::__ndk1::allocator<fairygui::GController*>>::
    __push_back_slow_path<fairygui::GController*const&>
              ((vector<fairygui::GController*,std::__ndk1::allocator<fairygui::GController*>> *)
               (this + 0x1f8),&local_30);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x200) = puVar2 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00a7195c with catch @ 00a719f4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

