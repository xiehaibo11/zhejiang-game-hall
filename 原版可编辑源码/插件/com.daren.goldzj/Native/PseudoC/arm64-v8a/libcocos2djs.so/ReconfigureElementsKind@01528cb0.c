
/* v8::internal::MapUpdater::ReconfigureElementsKind(v8::internal::ElementsKind) */

undefined8 __thiscall
v8::internal::MapUpdater::ReconfigureElementsKind(MapUpdater *this,MapUpdater param_2)

{
  int iVar1;
  
  this[0x54] = param_2;
  this[0x55] = (MapUpdater)((byte)param_2 < 6 && param_2 != (MapUpdater)0x3);
  iVar1 = FindRootMap(this);
  if (((iVar1 != 4) && (iVar1 = FindTargetMap(this), iVar1 != 4)) &&
     (iVar1 = ConstructNewMap(this), iVar1 == 3)) {
    ConstructNewMapWithIntegrityLevelTransition(this);
  }
  return *(undefined8 *)(this + 0x28);
}

