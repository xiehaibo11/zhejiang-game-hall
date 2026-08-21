
/* cocos2d::PUSphereSurfaceEmitter::clone() */

undefined8 __thiscall cocos2d::PUSphereSurfaceEmitter::clone(PUSphereSurfaceEmitter *this)

{
  undefined8 uVar1;
  
  uVar1 = create();
  (**(code **)(*(long *)this + 0x78))(this,uVar1);
  return uVar1;
}

