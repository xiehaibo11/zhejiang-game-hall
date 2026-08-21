
/* cocos2d::renderer::EffectVariant::setEffect(cocos2d::renderer::Effect*) */

void __thiscall cocos2d::renderer::EffectVariant::setEffect(EffectVariant *this,Effect *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  Pass *this_00;
  long lVar4;
  vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *this_01;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Pass *pPVar7;
  ulong uVar8;
  Pass *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(Effect **)(this + 0x20) = param_1;
  this[0x18] = (EffectVariant)0x1;
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
  this_01 = (vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)
            (this + 0x28);
  puVar5 = *(undefined8 **)this_01;
  if (puVar5 != *(undefined8 **)(this + 0x30)) {
    do {
      puVar6 = puVar5 + 1;
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != *(undefined8 **)(this + 0x30));
    puVar5 = *(undefined8 **)this_01;
  }
  *(undefined8 **)(this + 0x30) = puVar5;
                    /* catch() { ... } // from try @ 009d4014 with catch @ 009d412c */
  lVar4 = *plVar3;
  lVar1 = plVar3[1] - lVar4;
  if (lVar1 != 0) {
    uVar8 = 0;
                    /* try { // try from 009d4140 to 00ad41bf has its CatchHandler @ 009d4140
                       catch() { ... } // from try @ 009d4140 with catch @ 009d4140
                       catch() { ... } // from try @ 009d41dc with catch @ 009d4140 */
    while( true ) {
      pPVar7 = *(Pass **)(lVar4 + uVar8 * 8);
      this_00 = operator_new(0x108);
      Pass::Pass(this_00,(basic_string *)(pPVar7 + 0x10),pPVar7);
      Ref::autorelease((Ref *)this_00);
      local_60 = this_00;
      if (*(undefined8 **)(this + 0x30) == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::
        vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>::
        __push_back_slow_path<cocos2d::renderer::Pass*const&>(this_01,&local_60);
      }
      else {
        **(undefined8 **)(this + 0x30) = this_00;
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
      }
      Ref::retain((Ref *)local_60);
      uVar8 = uVar8 + 1;
      if ((ulong)(lVar1 >> 3) <= uVar8) break;
      lVar4 = *plVar3;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 009d41c0 to 00ad41db has its CatchHandler @ 009d42d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009d41dc to 00ad42eb has its CatchHandler @ 009d4140 */
  __stack_chk_fail();
}

