
/* cocos2d::Bone3D::removeChildBoneByIndex(int) */

void __thiscall cocos2d::Bone3D::removeChildBoneByIndex(Bone3D *this,int param_1)

{
  undefined8 *__dest;
  size_t __n;
  
  __dest = (undefined8 *)(*(long *)(this + 200) + (long)param_1 * 8);
  Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0xd0) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0xd0) = __dest + ((long)__n >> 3);
  return;
}

