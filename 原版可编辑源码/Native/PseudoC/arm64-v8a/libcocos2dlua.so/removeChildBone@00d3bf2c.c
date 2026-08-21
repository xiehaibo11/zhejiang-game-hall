
/* cocos2d::Bone3D::removeChildBone(cocos2d::Bone3D*) */

void __thiscall cocos2d::Bone3D::removeChildBone(Bone3D *this,Bone3D *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 200);
  puVar2 = *(undefined8 **)(this + 0xd0);
  if (__dest != puVar2) {
    if ((Bone3D *)*__dest != param_1) {
      do {
        if (puVar2 + -1 == __dest) {
          return;
        }
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((Bone3D *)*puVar1 != param_1);
    }
    if (__dest != puVar2) {
      __n = (long)puVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0xd0) = __dest + ((long)__n >> 3);
      Ref::release((Ref *)param_1);
      return;
    }
  }
  return;
}

