
/* v8::internal::Map::TransitionRequiresSynchronizationWithGC(v8::internal::Map) const */

undefined8 __thiscall
v8::internal::Map::TransitionRequiresSynchronizationWithGC(Map *this,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = TransitionRemovesTaggedField();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = TransitionChangesTaggedFieldToUntaggedField(this,param_2);
  return uVar2;
}

