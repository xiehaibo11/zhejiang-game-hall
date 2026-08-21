
/* cocos2d::renderer::ModelBatcher::terminateBatch() */

void __thiscall cocos2d::renderer::ModelBatcher::terminateBatch(ModelBatcher *this)

{
  long *plVar1;
  
  flush(this);
  flushIA(this);
  for (plVar1 = *(long **)(this + 0xc0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    MeshBuffer::uploadData((MeshBuffer *)plVar1[3]);
  }
  this[9] = (ModelBatcher)0x0;
  return;
}

