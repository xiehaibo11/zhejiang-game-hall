
/* cocos2d::Animate::initWithAnimation(cocos2d::Animation*) */

void __thiscall cocos2d::Animate::initWithAnimation(Animate *this,Animation *param_1)

{
  float *pfVar1;
  long *plVar2;
  long lVar3;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_1 == (Animation *)0x0) {
    log("Animate::initWithAnimation: argument Animation must be non-nullptr");
    uVar4 = 0;
  }
  else {
    fVar6 = (float)Animation::getDuration(param_1);
    uVar7 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined2 *)(this + 0x54) = 1;
    fVar8 = (float)NEON_ucvtf(uVar7);
    fVar9 = 1e-06;
    if (1e-06 < ABS(fVar6 * fVar8)) {
      fVar9 = fVar6 * fVar8;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x4c) = fVar9;
    *(undefined4 *)(this + 0x60) = 0;
    if (*(Animation **)(this + 0x78) != param_1) {
      Ref::retain((Ref *)param_1);
      if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x78));
      }
      *(Animation **)(this + 0x78) = param_1;
    }
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x74) = 0;
                    /* catch() { ... } // from try @ 00ee4124 with catch @ 00ee40f8 */
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::reserve
              (*(vector<float,std::__ndk1::allocator<float>> **)(this + 0x58),
               *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 3);
    plVar5 = *(long **)(param_1 + 0x40);
    plVar2 = *(long **)(param_1 + 0x48);
    if (plVar5 != plVar2) {
      fVar9 = *(float *)(param_1 + 0x30);
      fVar8 = 0.0;
                    /* try { // try from 00ee411c to 00fe4123 has its CatchHandler @ 00ee4168 */
      do {
        local_6c = ((fVar6 / fVar9) * fVar8) / fVar6;
        this_00 = *(vector<float,std::__ndk1::allocator<float>> **)(this + 0x58);
        pfVar1 = *(float **)(this_00 + 8);
        fVar10 = *(float *)(*plVar5 + 0x38);
        if (pfVar1 == *(float **)(this_00 + 0x10)) {
                    /* try { // try from 00ee4124 to 00fe4183 has its CatchHandler @ 00ee40f8 */
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>(this_00,&local_6c);
        }
        else {
          *pfVar1 = local_6c;
          *(float **)(this_00 + 8) = pfVar1 + 1;
                    /* catch() { ... } // from try @ 00ee411c with catch @ 00ee4168 */
        }
        plVar5 = plVar5 + 1;
        fVar8 = fVar8 + fVar10;
      } while (plVar2 != plVar5);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

