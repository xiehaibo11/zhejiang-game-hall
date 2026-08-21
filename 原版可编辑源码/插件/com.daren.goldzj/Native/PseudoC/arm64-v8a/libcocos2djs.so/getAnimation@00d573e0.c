
/* dragonBones::CCArmatureCacheDisplay::getAnimation() const */

undefined8 __thiscall
dragonBones::CCArmatureCacheDisplay::getAnimation(CCArmatureCacheDisplay *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)ArmatureCache::getArmatureDisplay(*(ArmatureCache **)(this + 0xd8));
  lVar2 = (**(code **)(*plVar1 + 0x60))();
  return *(undefined8 *)(lVar2 + 0xa8);
}

