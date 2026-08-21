
/* cocos2d::PUForceFieldAffector::preUpdateAffector(float) */

void __thiscall
cocos2d::PUForceFieldAffector::preUpdateAffector(PUForceFieldAffector *this,float param_1)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e2673c with catch @ 00e25eb8
                       catch() { ... } // from try @ 00e267d4 with catch @ 00e25eb8
                       catch() { ... } // from try @ 00e26884 with catch @ 00e25eb8
                       catch() { ... } // from try @ 00e269ec with catch @ 00e25eb8 */
  if ((this[0x158] != (PUForceFieldAffector)0x0) &&
     (fVar4 = *(float *)(this + 0x15c), param_1 <= fVar4)) {
    fVar2 = *(float *)(this + 0x160) + param_1;
    fVar5 = fVar2 - fVar4;
    if (fVar2 <= fVar4) {
      fVar5 = fVar2;
    }
    *(float *)(this + 0x160) = fVar5;
    dVar3 = sin(((double)fVar5 * 6.283185307179586) / (double)fVar4);
    fVar4 = (float)dVar3;
    fVar5 = (float)*(undefined8 *)(this + 0x14c) * fVar4;
    fVar2 = (float)((ulong)*(undefined8 *)(this + 0x14c) >> 0x20) * fVar4;
    *(ulong *)(this + 0x164) = CONCAT44(fVar2,fVar5);
    *(float *)(this + 0x16c) = *(float *)(this + 0x154) * fVar4;
    local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x170) >> 0x20) + fVar2,
                        (float)*(undefined8 *)(this + 0x170) + fVar5);
    local_30 = *(float *)(this + 0x178) + *(float *)(this + 0x154) * fVar4;
    PUForceField::setForceFieldPositionBase((PUForceField *)(this + 0xb0),(Vec3 *)&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

