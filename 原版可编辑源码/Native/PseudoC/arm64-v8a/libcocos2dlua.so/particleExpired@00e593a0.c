
/* cocos2d::PUBeamRender::particleExpired(cocos2d::PUParticleSystem3D*, cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUBeamRender::particleExpired
          (PUBeamRender *this,PUParticleSystem3D *param_1,PUParticle3D *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  PUParticle3DBeamVisualData *this_00;
  PUParticle3DBeamVisualData *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = *(PUParticle3DBeamVisualData **)(param_2 + 0x88);
  if (this_00 != (PUParticle3DBeamVisualData *)0x0) {
    local_40 = this_00;
    PUParticle3DBeamVisualData::setVisible(this_00,false,0.0);
    puVar1 = *(undefined8 **)(this + 200);
    if (puVar1 == *(undefined8 **)(this + 0xd0)) {
      std::__ndk1::
      vector<cocos2d::PUParticle3DBeamVisualData*,std::__ndk1::allocator<cocos2d::PUParticle3DBeamVisualData*>>
      ::__push_back_slow_path<cocos2d::PUParticle3DBeamVisualData*const&>
                ((vector<cocos2d::PUParticle3DBeamVisualData*,std::__ndk1::allocator<cocos2d::PUParticle3DBeamVisualData*>>
                  *)(this + 0xc0),&local_40);
    }
    else {
      *puVar1 = this_00;
      *(undefined8 **)(this + 200) = puVar1 + 1;
    }
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

