
/* cocos2d::PhysicsSprite3D::PhysicsSprite3D() */

void __thiscall cocos2d::PhysicsSprite3D::PhysicsSprite3D(PhysicsSprite3D *this)

{
                    /* catch() { ... } // from try @ 010184c8 with catch @ 01018534 */
  Sprite3D::Sprite3D((Sprite3D *)this);
                    /* catch() { ... } // from try @ 01018484 with catch @ 01018544 */
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined ***)this = &PTR__PhysicsSprite3D_01726970;
  *(undefined ***)(this + 0x2f8) = &PTR__PhysicsSprite3D_01726ec0;
  return;
}

