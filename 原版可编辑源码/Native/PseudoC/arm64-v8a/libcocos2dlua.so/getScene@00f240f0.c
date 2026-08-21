
/* cocos2d::Node::getScene() const */

undefined8 __thiscall cocos2d::Node::getScene(Node *this)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 400);
  if (*(long *)(this + 400) != 0) {
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 400);
    } while (lVar3 != 0);
    uVar1 = __dynamic_cast(lVar2,&typeinfo,&Scene::typeinfo,0);
    return uVar1;
  }
  return 0;
}

