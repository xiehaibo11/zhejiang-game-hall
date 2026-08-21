
/* cocos2d::PUMeshSurfaceEmitter::PUMeshSurfaceEmitter() */

void __thiscall cocos2d::PUMeshSurfaceEmitter::PUMeshSurfaceEmitter(PUMeshSurfaceEmitter *this)

{
  undefined8 uVar1;
  
  PUEmitter::PUEmitter((PUEmitter *)this);
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined ***)this = &PTR__PUMeshSurfaceEmitter_016f0978;
  Quaternion::Quaternion((Quaternion *)(this + 0x218));
  uVar1 = DEFAULT_SCALE;
  *(undefined4 *)(this + 0x230) = DAT_01788f3c;
  *(undefined8 *)(this + 0x228) = uVar1;
  *(undefined8 *)(this + 0x23c) = 0;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined8 *)(this + 0x241) = 0;
  return;
}

