
/* cocos2d::PUMeshSurfaceEmitter::setScale(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUMeshSurfaceEmitter::setScale(PUMeshSurfaceEmitter *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x230) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x228) = uVar1;
  return;
}

