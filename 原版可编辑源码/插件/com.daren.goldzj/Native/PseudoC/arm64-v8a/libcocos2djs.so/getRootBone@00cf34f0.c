
/* spine::Skeleton::getRootBone() */

undefined8 __thiscall spine::Skeleton::getRootBone(Skeleton *this)

{
  if (*(long *)(this + 0x18) != 0) {
    return **(undefined8 **)(this + 0x28);
  }
  return 0;
}

