
/* cocos2d::PUParticleSystem3D::removeListener(cocos2d::PUListener*) */

void __thiscall
cocos2d::PUParticleSystem3D::removeListener(PUParticleSystem3D *this,PUListener *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x420);
  puVar2 = *(undefined8 **)(this + 0x428);
  if ((__dest != puVar2) && ((PUListener *)*__dest != param_1)) {
    do {
      if (puVar2 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((PUListener *)*puVar1 != param_1);
  }
  if (__dest != puVar2) {
    __n = (long)puVar2 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(undefined8 **)(this + 0x428) = __dest + ((long)__n >> 3);
  }
  return;
}

