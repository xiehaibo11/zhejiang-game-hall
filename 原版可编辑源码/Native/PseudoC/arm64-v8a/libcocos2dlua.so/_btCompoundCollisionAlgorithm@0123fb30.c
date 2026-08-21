
/* btCompoundCollisionAlgorithm::~btCompoundCollisionAlgorithm() */

void __thiscall
btCompoundCollisionAlgorithm::~btCompoundCollisionAlgorithm(btCompoundCollisionAlgorithm *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(this + 0x14);
  *(undefined ***)this = &PTR__btCompoundCollisionAlgorithm_017341f0;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(this + 0x20) + uVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)();
        (**(code **)(**(long **)(this + 8) + 0x78))
                  (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x20) + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    if (this[0x28] != (btCompoundCollisionAlgorithm)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x20));
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (btCompoundCollisionAlgorithm)0x1;
  *(undefined8 *)(this + 0x14) = 0;
  btActivatingCollisionAlgorithm::~btActivatingCollisionAlgorithm
            ((btActivatingCollisionAlgorithm *)this);
  return;
}

