
/* v8::internal::MapUpdater::Update() */

undefined8 __thiscall v8::internal::MapUpdater::Update(MapUpdater *this)

{
  int iVar1;
  
  iVar1 = FindRootMap(this);
  if (((iVar1 != 4) && (iVar1 = FindTargetMap(this), iVar1 != 4)) &&
     (iVar1 = ConstructNewMap(this), iVar1 == 3)) {
    ConstructNewMapWithIntegrityLevelTransition(this);
  }
  return *(undefined8 *)(this + 0x28);
}

