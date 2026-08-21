
/* cocos2d::renderer::NodeMemPool::removeNodeData(unsigned long) */

void __thiscall cocos2d::renderer::NodeMemPool::removeNodeData(NodeMemPool *this,ulong param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(this + 0x38) + param_1 * 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    *(undefined8 *)(*(long *)(this + 0x38) + param_1 * 8) = 0;
  }
  return;
}

