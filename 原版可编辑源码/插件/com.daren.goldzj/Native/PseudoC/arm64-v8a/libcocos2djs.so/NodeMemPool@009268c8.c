
/* cocos2d::renderer::NodeMemPool::NodeMemPool() */

void __thiscall cocos2d::renderer::NodeMemPool::NodeMemPool(NodeMemPool *this)

{
  MemPool::MemPool((MemPool *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__NodeMemPool_01c696d8;
  _instance = this;
  return;
}

