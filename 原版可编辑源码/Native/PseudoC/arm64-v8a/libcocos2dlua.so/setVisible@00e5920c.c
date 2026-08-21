
/* cocos2d::PUParticle3DBeamVisualData::setVisible(bool, float) */

void __thiscall
cocos2d::PUParticle3DBeamVisualData::setVisible
          (PUParticle3DBeamVisualData *this,bool param_1,float param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_80;
  undefined4 uStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long **)(this + 0x998) != (long *)0x0) {
    if (!param_1) {
      param_2 = 0.0;
    }
    lVar2 = (**(code **)(**(long **)(this + 0x998) + 0x18))();
    PUBillboardChain::Element::Element((Element *)&local_80);
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        puVar3 = (undefined8 *)
                 (**(code **)(**(long **)(this + 0x998) + 0x98))
                           (*(long **)(this + 0x998),*(undefined8 *)(this + 0x28),lVar4);
        local_80 = *puVar3;
        uStack_68 = puVar3[3];
        uStack_70 = puVar3[2];
        local_50 = *(undefined4 *)(puVar3 + 6);
        uStack_58 = puVar3[5];
        local_60 = puVar3[4];
        _uStack_78 = CONCAT44(param_2,(int)puVar3[1]);
        (**(code **)(**(long **)(this + 0x998) + 0x90))
                  (*(long **)(this + 0x998),*(undefined8 *)(this + 0x28),lVar4,&local_80);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    Quaternion::~Quaternion((Quaternion *)((long)&local_60 + 4));
    Vec4::~Vec4((Vec4 *)((long)&uStack_70 + 4));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

