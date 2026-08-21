
/* cocos2d::renderer::ModelPool::getOrCreateModel() */

undefined8 * cocos2d::renderer::ModelPool::getOrCreateModel(void)

{
  long lVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 009c0d64 to 00ac0e4b has its CatchHandler @ 009c0b74 */
  if (*(long *)_pool == 0) {
    puVar2 = operator_new(0x80);
    *puVar2 = 0;
    Mat4::Mat4((Mat4 *)(puVar2 + 1));
    puVar2[9] = 0;
    InputAssembler::InputAssembler((InputAssembler *)(puVar2 + 10));
    *(undefined1 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)((long)puVar2 + 0x74) = 0xffffffffffffffff;
  }
  else {
    lVar1 = *(long *)_pool + -1;
    puVar2 = *(undefined8 **)(*(long *)(_pool + 0x10) + lVar1 * 8);
    ccCArrayRemoveValueAtIndex(_pool,lVar1);
  }
  return puVar2;
}

