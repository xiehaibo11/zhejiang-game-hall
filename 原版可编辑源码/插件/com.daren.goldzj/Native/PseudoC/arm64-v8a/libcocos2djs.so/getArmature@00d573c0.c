
/* dragonBones::CCArmatureCacheDisplay::getArmature() const */

void __thiscall dragonBones::CCArmatureCacheDisplay::getArmature(CCArmatureCacheDisplay *this)

{
  long *plVar1;
  
  plVar1 = (long *)ArmatureCache::getArmatureDisplay(*(ArmatureCache **)(this + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00d573dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))();
  return;
}

