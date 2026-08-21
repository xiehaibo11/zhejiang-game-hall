
/* cocos2d::Sprite3DMaterial::clone() const */

Material * __thiscall cocos2d::Sprite3DMaterial::clone(Sprite3DMaterial *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Material *this_00;
  Technique *this_01;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Technique *local_70 [2];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this_00 != (Material *)0x0) {
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined8 *)(this_00 + 0x88) = 0;
    *(undefined8 *)(this_00 + 0x80) = 0;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    Material::Material(this_00);
    *(undefined ***)this_00 = &PTR__Material_016d3c98;
    RenderState::cloneInto((RenderState *)this,(RenderState *)this_00);
    puVar7 = *(undefined8 **)(this + 0x78);
    puVar2 = *(undefined8 **)(this + 0x80);
    if (puVar7 != puVar2) {
      do {
        this_01 = (Technique *)Technique::clone((Technique *)*puVar7);
        *(Material **)(this_01 + 0x38) = this_00;
        lVar4 = Technique::getPassCount(this_01);
        if (0 < lVar4) {
          lVar4 = 0;
          do {
            lVar5 = Technique::getPassByIndex(this_01,lVar4);
            *(Technique **)(lVar5 + 0x38) = this_01;
            lVar4 = lVar4 + 1;
            lVar5 = Technique::getPassCount(this_01);
          } while (lVar4 < lVar5);
        }
        puVar1 = *(undefined8 **)(this_00 + 0x80);
        local_70[0] = this_01;
        if (puVar1 == *(undefined8 **)(this_00 + 0x88)) {
          std::__ndk1::vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>>::
          __push_back_slow_path<cocos2d::Technique*const&>
                    ((vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>> *)
                     (this_00 + 0x78),local_70);
        }
        else {
          *puVar1 = this_01;
          *(undefined8 **)(this_00 + 0x80) = puVar1 + 1;
        }
        Ref::retain((Ref *)local_70[0]);
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar2);
    }
    Technique::getName();
    uVar6 = Material::getTechniqueByName(this_00,(basic_string *)local_70);
    *(undefined8 *)(this_00 + 0x90) = uVar6;
    *(undefined4 *)(this_00 + 0xa4) = *(undefined4 *)(this + 0xa4);
    Ref::autorelease((Ref *)this_00);
    if (((ulong)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

