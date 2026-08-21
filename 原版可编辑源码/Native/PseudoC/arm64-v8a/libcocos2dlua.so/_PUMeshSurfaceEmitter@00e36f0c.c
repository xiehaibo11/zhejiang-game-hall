
/* cocos2d::PUMeshSurfaceEmitter::~PUMeshSurfaceEmitter() */

void __thiscall cocos2d::PUMeshSurfaceEmitter::~PUMeshSurfaceEmitter(PUMeshSurfaceEmitter *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x238);
  *(undefined ***)this = &PTR__PUMeshSurfaceEmitter_016f0978;
                    /* try { // try from 00e36f30 to 00f36f37 has its CatchHandler @ 00e373ec */
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    puVar2[1] = pvVar1;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
                    /* try { // try from 00e36f50 to 00f36f57 has its CatchHandler @ 00e373d8 */
    *(undefined8 *)(this + 0x238) = 0;
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0x218));
  if (((byte)this[0x200] & 1) != 0) {
    operator_delete(*(void **)(this + 0x210));
  }
  PUEmitter::~PUEmitter((PUEmitter *)this);
  operator_delete(this);
  return;
}

