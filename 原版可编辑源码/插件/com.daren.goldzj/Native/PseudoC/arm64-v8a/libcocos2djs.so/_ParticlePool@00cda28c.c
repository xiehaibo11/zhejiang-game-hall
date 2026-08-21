
/* cocos2d::ParticlePool::~ParticlePool() */

void __thiscall cocos2d::ParticlePool::~ParticlePool(ParticlePool *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Vec3 *this_00;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      this_00 = (Vec3 *)*puVar2;
      if (this_00 != (Vec3 *)0x0) {
        Vec3::~Vec3(this_00 + 0x58);
        Vec3::~Vec3(this_00 + 0x4c);
        Vec3::~Vec3(this_00 + 0xc);
        Vec3::~Vec3(this_00);
        operator_delete(this_00);
      }
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

