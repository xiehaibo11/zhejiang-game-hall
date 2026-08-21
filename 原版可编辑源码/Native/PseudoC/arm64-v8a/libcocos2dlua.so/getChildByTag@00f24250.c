
/* cocos2d::Node::getChildByTag(int) const */

long __thiscall cocos2d::Node::getChildByTag(Node *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x178);
  while( true ) {
    if (plVar1 == *(long **)(this + 0x180)) {
      return 0;
    }
    lVar2 = *plVar1;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1a0) == param_1)) break;
    plVar1 = plVar1 + 1;
  }
  return lVar2;
}

