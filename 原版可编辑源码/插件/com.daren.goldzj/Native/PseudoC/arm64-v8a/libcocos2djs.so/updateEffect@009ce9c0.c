
/* cocos2d::renderer::CustomAssembler::updateEffect(unsigned long,
   cocos2d::renderer::EffectVariant*) */

void __thiscall
cocos2d::renderer::CustomAssembler::updateEffect
          (CustomAssembler *this,ulong param_1,EffectVariant *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  vector<cocos2d::renderer::EffectVariant*,std::__ndk1::allocator<cocos2d::renderer::EffectVariant*>>
  *this_00;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<cocos2d::renderer::EffectVariant*,std::__ndk1::allocator<cocos2d::renderer::EffectVariant*>>
             *)(this + 0x50);
  puVar2 = *(undefined8 **)(this + 0x58);
  uVar3 = (long)puVar2 - *(long *)this_00 >> 3;
  if (uVar3 == param_1) {
    local_40 = (Ref *)param_2;
    if (*(undefined8 **)(this + 0x60) == puVar2) {
      std::__ndk1::
      vector<cocos2d::renderer::EffectVariant*,std::__ndk1::allocator<cocos2d::renderer::EffectVariant*>>
      ::__push_back_slow_path<cocos2d::renderer::EffectVariant*const&>
                (this_00,(EffectVariant **)&local_40);
      param_2 = (EffectVariant *)local_40;
    }
    else {
      *puVar2 = param_2;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
    }
  }
  else {
    if (uVar3 <= param_1) {
                    /* try { // try from 009cea44 to 00acea53 has its CatchHandler @ 009cec70 */
      log("CustomAssembler:updateEffect index:%zu out of range");
      goto LAB_009cea68;
    }
    Ref::release(*(Ref **)(*(long *)this_00 + param_1 * 8));
                    /* try { // try from 009cea3c to 00acea43 has its CatchHandler @ 009cec68 */
    *(EffectVariant **)(*(long *)this_00 + param_1 * 8) = param_2;
  }
  Ref::retain((Ref *)param_2);
LAB_009cea68:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009cea7c to 00acea87 has its CatchHandler @ 009cec5c */
  return;
}

