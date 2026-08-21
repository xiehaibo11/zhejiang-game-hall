
/* cocos2d::renderer::EffectVariant::copy(cocos2d::renderer::EffectVariant const*) */

void __thiscall cocos2d::renderer::EffectVariant::copy(EffectVariant *this,EffectVariant *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  Ref *this_00;
  undefined8 uVar5;
  vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *this_01;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  Ref *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  this[0x18] = (EffectVariant)0x1;
  *(undefined8 *)(this + 0x20) = uVar5;
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
  this_01 = (vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)
            (this + 0x28);
  puVar6 = *(undefined8 **)this_01;
                    /* try { // try from 009d43b8 to 00ad43db has its CatchHandler @ 009d43fc */
  if (puVar6 != *(undefined8 **)(this + 0x30)) {
    do {
      puVar7 = puVar6 + 1;
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != *(undefined8 **)(this + 0x30));
    puVar6 = *(undefined8 **)this_01;
  }
  *(undefined8 **)(this + 0x30) = puVar6;
  lVar1 = *plVar4;
  lVar2 = plVar4[1];
  if (lVar2 - lVar1 != 0) {
    uVar8 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009d43b8 with catch @ 009d43fc
                        */
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
      Pass::copy((Pass *)this_00,*(Pass **)(*plVar4 + uVar8 * 8));
                    /* try { // try from 009d445c to 00ad447f has its CatchHandler @ 009d44a0 */
      local_70 = this_00;
      if (*(undefined8 **)(this + 0x30) == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::
        vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>::
        __push_back_slow_path<cocos2d::renderer::Pass*const&>(this_01,(Pass **)&local_70);
      }
      else {
        **(undefined8 **)(this + 0x30) = this_00;
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
      }
      Ref::retain(local_70);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)(lVar2 - lVar1 >> 3));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009d445c with catch @ 009d44a0
                        */
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

