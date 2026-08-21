
/* cocos2d::renderer::NodeProxy::updateRealOpacity() */

void __thiscall cocos2d::renderer::NodeProxy::updateRealOpacity(NodeProxy *this)

{
  uint uVar1;
  NodeProxy NVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0xe8);
  uVar1 = **(uint **)(this + 0x80);
  if (lVar3 == 0) {
    if ((uVar1 >> 5 & 1) == 0) {
      return;
    }
    NVar2 = **(NodeProxy **)(this + 0xb8);
  }
  else {
    if (((uVar1 >> 5 & 1) == 0) && (-1 < **(int **)(lVar3 + 0x80))) {
      return;
    }
    NVar2 = SUB41((int)((float)((uint)*(byte *)(lVar3 + 0x43) * (uint)**(byte **)(this + 0xb8)) /
                       255.0),0);
  }
  this[0x43] = NVar2;
  **(uint **)(this + 0x80) = uVar1 & 0xffffffdf | 0x80000000;
  return;
}

