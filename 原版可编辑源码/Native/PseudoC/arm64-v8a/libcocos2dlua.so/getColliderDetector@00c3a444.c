
/* cocostudio::Bone::getColliderDetector() const */

long __thiscall cocostudio::Bone::getColliderDetector(Bone *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x310) + 0x20))();
  if ((plVar1 != (long *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x40))(), lVar2 != 0)) {
    return lVar2;
  }
  return 0;
}

