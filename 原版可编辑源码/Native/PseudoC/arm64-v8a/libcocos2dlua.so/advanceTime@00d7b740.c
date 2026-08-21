
/* dragonBones::WorldClock::advanceTime(float) */

void __thiscall dragonBones::WorldClock::advanceTime(WorldClock *this,float param_1)

{
  float fVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>> *this_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_1 < 0.0) {
                    /* catch() { ... } // from try @ 00d7ae6c with catch @ 00d7b774 */
    param_1 = 0.0 - *(float *)(this + 0x10);
  }
  *(undefined4 *)(this + 0x10) = 0;
  fVar1 = param_1 * *(float *)(this + 0xc);
  if (*(float *)(this + 0xc) == 1.0) {
    fVar1 = param_1;
  }
  if (fVar1 != 0.0) {
    this_00 = (vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>> *
              )(this + 0x18);
    plVar3 = *(long **)this_00;
    fVar11 = -fVar1;
    if (0.0 <= fVar1) {
      fVar11 = fVar1;
    }
    lVar5 = *(long *)(this + 0x20) - (long)plVar3;
                    /* catch() { ... } // from try @ 00d7ad08 with catch @ 00d7b7d4 */
    *(float *)(this + 8) = fVar11 + *(float *)(this + 8);
    if (lVar5 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) goto LAB_00d7b81c;
      do {
        if (lVar8 != 0) {
          plVar3[uVar9 - lVar8] = (long)plVar2;
          *(undefined8 *)(*(long *)this_00 + uVar9 * 8) = 0;
        }
        (**(code **)(*plVar2 + 0x10))(fVar1);
        uVar10 = uVar9;
        while( true ) {
          uVar9 = uVar10 + 1;
          if ((ulong)(lVar5 >> 3) <= uVar9) {
            if (lVar8 == 0) {
              return;
            }
            lVar5 = *(long *)(this + 0x18);
            uVar4 = *(long *)(this + 0x20) - lVar5 >> 3;
            uVar6 = uVar4;
            if (uVar9 < uVar4) {
              while( true ) {
                lVar7 = *(long *)(lVar5 + uVar10 * 8 + 8);
                if (lVar7 == 0) {
                  lVar8 = lVar8 + 1;
                }
                else {
                  *(long *)(lVar5 + lVar8 * -8 + uVar10 * 8 + 8) = lVar7;
                }
                if (uVar4 - 2 == uVar10) break;
                lVar5 = *(long *)this_00;
                uVar10 = uVar10 + 1;
                    /* catch() { ... } // from try @ 00d7aa40 with catch @ 00d7b894 */
              }
              lVar5 = *(long *)(this + 0x18);
              uVar6 = *(long *)(this + 0x20) - lVar5 >> 3;
            }
            uVar4 = uVar4 - lVar8;
            if (uVar6 > uVar4 || uVar4 - uVar6 == 0) {
              if (uVar6 <= uVar4) {
                return;
              }
              *(ulong *)(this + 0x20) = lVar5 + uVar4 * 8;
              return;
            }
            std::__ndk1::
            vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>::
            __append(this_00,uVar4 - uVar6);
            return;
          }
          plVar3 = *(long **)this_00;
                    /* catch() { ... } // from try @ 00d7aba4 with catch @ 00d7b834 */
          plVar2 = (long *)plVar3[uVar9];
          if (plVar2 != (long *)0x0) break;
LAB_00d7b81c:
          lVar8 = lVar8 + 1;
          uVar10 = uVar9;
        }
      } while( true );
    }
  }
  return;
}

