
/* btCompoundCompoundCollisionAlgorithm::removeChildAlgorithms() */

void __thiscall
btCompoundCompoundCollisionAlgorithm::removeChildAlgorithms
          (btCompoundCompoundCollisionAlgorithm *this)

{
  btHashedSimplePairCache *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  this_00 = *(btHashedSimplePairCache **)(this + 0x10);
  uVar2 = (ulong)*(uint *)(this_00 + 0xc);
  if (0 < (int)*(uint *)(this_00 + 0xc)) {
    lVar3 = 8;
    do {
      puVar1 = *(undefined8 **)(*(long *)(this_00 + 0x18) + lVar3);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        (**(code **)(**(long **)(this + 8) + 0x78))(*(long **)(this + 8),puVar1);
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 != 0);
    this_00 = *(btHashedSimplePairCache **)(this + 0x10);
  }
  btHashedSimplePairCache::removeAllPairs(this_00);
  return;
}

