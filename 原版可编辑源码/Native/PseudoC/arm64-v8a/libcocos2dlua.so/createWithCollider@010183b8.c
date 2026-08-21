
/* cocos2d::PhysicsSprite3D::createWithCollider(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::Physics3DColliderDes*, cocos2d::Vec3 const&, cocos2d::Quaternion const&) */

Sprite3D *
cocos2d::PhysicsSprite3D::createWithCollider
          (basic_string *param_1,Physics3DColliderDes *param_2,Vec3 *param_3,Quaternion *param_4)

{
  long lVar1;
  Sprite3D *this;
  ulong uVar2;
  Physics3DObject *pPVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x470,(nothrow_t *)&std::nothrow);
  if (this != (Sprite3D *)0x0) {
    Sprite3D::Sprite3D(this);
                    /* catch() { ... } // from try @ 01018398 with catch @ 0101841c */
    *(undefined8 *)(this + 0x460) = 0;
    *(undefined ***)this = &PTR__PhysicsSprite3D_01726970;
                    /* catch() { ... } // from try @ 01018354 with catch @ 0101842c */
    *(undefined ***)(this + 0x2f8) = &PTR__PhysicsSprite3D_01726ec0;
    uVar2 = Sprite3D::initWithFile(this,param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite3D *)0x0;
    }
    else {
      pPVar3 = (Physics3DObject *)Physics3DCollider::create(param_2);
                    /* catch() { ... } // from try @ 010184d4 with catch @ 01018448 */
      uVar4 = Physics3DComponent::create(pPVar3,param_3,param_4);
      *(undefined8 *)(this + 0x460) = uVar4;
      (**(code **)(*(long *)this + 0x460))(this,uVar4);
      (**(code **)(*(long *)this + 0x370))(auStack_58,this);
                    /* try { // try from 01018484 to 0111848b has its CatchHandler @ 01018544 */
      Size::operator=((Size *)(this + 0x80),aSStack_50);
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 010184c8 to 011184d3 has its CatchHandler @ 01018534 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010184d4 to 0111855f has its CatchHandler @ 01018448 */
  __stack_chk_fail();
}

