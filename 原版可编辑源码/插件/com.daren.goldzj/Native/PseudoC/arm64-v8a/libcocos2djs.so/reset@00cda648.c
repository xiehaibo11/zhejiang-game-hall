
/* cocos2d::ParticleSimulator::reset() */

void __thiscall cocos2d::ParticleSimulator::reset(ParticleSimulator *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Particle *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar6 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  *(undefined2 *)(this + 0x30) = 0x101;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x32] = (ParticleSimulator)0x0;
  if (puVar6 != puVar1) {
    do {
      local_70 = (Particle *)*puVar6;
      if (DAT_01d3c4c8 == DAT_01d3c4d0) {
        std::__ndk1::vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>>::
        __push_back_slow_path<cocos2d::Particle*const&>
                  ((vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>> *)
                   &DAT_01d3c4c0,&local_70);
      }
      else {
        *DAT_01d3c4c8 = local_70;
        DAT_01d3c4c8 = DAT_01d3c4c8 + 1;
      }
      puVar6 = puVar6 + 1;
      local_70[0x7c] = (Particle)0x1;
      uVar3 = Vec3::ZERO;
      *(undefined4 *)(local_70 + 8) = DAT_01d37ca8;
      *(undefined8 *)local_70 = uVar3;
      uVar3 = Vec3::ZERO;
      *(undefined4 *)(local_70 + 0x14) = DAT_01d37ca8;
      *(undefined8 *)(local_70 + 0xc) = uVar3;
      uVar3 = Color4F::BLACK._0_8_;
      *(undefined8 *)(local_70 + 0x20) = Color4F::BLACK._8_8_;
      *(undefined8 *)(local_70 + 0x18) = uVar3;
      uVar5 = Color4F::BLACK._8_8_;
      uVar3 = Color4F::BLACK._0_8_;
      *(undefined8 *)(local_70 + 0x38) = 0;
      *(undefined8 *)(local_70 + 0x40) = 0;
      *(undefined4 *)(local_70 + 0x48) = 0;
      *(undefined8 *)(local_70 + 0x30) = uVar5;
      *(undefined8 *)(local_70 + 0x28) = uVar3;
      uVar3 = Vec3::ZERO;
      *(undefined4 *)(local_70 + 0x54) = DAT_01d37ca8;
      *(undefined8 *)(local_70 + 0x4c) = uVar3;
      uVar4 = DAT_01d37ca8;
      uVar3 = Vec3::ZERO;
      *(undefined8 *)(local_70 + 0x74) = 0;
      *(undefined8 *)(local_70 + 0x6c) = 0;
      *(undefined4 *)(local_70 + 0x60) = uVar4;
      *(undefined8 *)(local_70 + 0x58) = uVar3;
      *(undefined8 *)(local_70 + 100) = 0;
    } while (puVar1 != puVar6);
    puVar6 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar6;
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

