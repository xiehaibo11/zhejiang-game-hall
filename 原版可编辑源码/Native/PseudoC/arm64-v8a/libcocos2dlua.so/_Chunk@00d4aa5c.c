
/* cocos2d::Terrain::Chunk::~Chunk() */

void __thiscall cocos2d::Terrain::Chunk::~Chunk(Chunk *this)

{
  void *pvVar1;
  
                    /* try { // try from 00d4aa70 to 00e4aa7b has its CatchHandler @ 00d4ae30 */
  glDeleteBuffers(1,this + 0x18);
  pvVar1 = *(void **)(this + 0x118);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x100);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

