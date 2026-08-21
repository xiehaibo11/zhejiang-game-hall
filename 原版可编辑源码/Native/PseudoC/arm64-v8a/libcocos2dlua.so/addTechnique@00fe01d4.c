
/* cocos2d::Material::addTechnique(cocos2d::Technique*) */

void __thiscall cocos2d::Material::addTechnique(Material *this,Technique *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Technique *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x80);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x88)) {
    std::__ndk1::vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>>::
    __push_back_slow_path<cocos2d::Technique*const&>
              ((vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>> *)
               (this + 0x78),&local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x80) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_30);
                    /* catch() { ... } // from try @ 00fe0268 with catch @ 00fe022c */
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

