
/* cocos2d::Label::removeAllChildrenWithCleanup(bool) */

void __thiscall cocos2d::Label::removeAllChildrenWithCleanup(Label *this,bool param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  if (*(long *)(this + 0x658) != 0) {
    puVar1 = *(void **)(this + 0x650);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x648);
    *(undefined8 *)(this + 0x650) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x640) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x658) = 0;
  }
  return;
}

