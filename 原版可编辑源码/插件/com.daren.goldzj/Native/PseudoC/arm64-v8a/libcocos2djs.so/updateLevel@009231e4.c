
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::renderer::NodeProxy::updateLevel() */

void __thiscall cocos2d::renderer::NodeProxy::updateLevel(NodeProxy *this)

{
  RenderFlow *this_00;
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  this_00 = RenderFlow::_instance;
  RenderFlow::removeNodeLevel(RenderFlow::_instance,*(ulong *)(this + 0x78),*(Mat4 **)(this + 0x98))
  ;
  DAT_01d37398 = *(undefined8 *)(this + 0x80);
  DAT_01d373d0 = this + 0x43;
  uRam0000000001d373c0 = *(undefined8 *)(this + 0x98);
  _DAT_01d373b8 = *(undefined8 *)(this + 0x90);
  DAT_01d373c8 = *(undefined8 *)(this + 0xb8);
  lVar2 = *(long *)(this + 0xe8);
  if (lVar2 == 0) {
    uVar1 = 0;
    *(undefined8 *)(this + 0x78) = 0;
    DAT_01d373a0 = 0;
    DAT_01d373a8 = 0;
    DAT_01d373b0 = 0;
  }
  else {
    uVar1 = *(long *)(lVar2 + 0x78) + 1;
    *(ulong *)(this + 0x78) = uVar1;
    DAT_01d373a8 = *(undefined8 *)(lVar2 + 0x98);
    DAT_01d373a0 = *(undefined8 *)(lVar2 + 0x80);
    DAT_01d373b0 = lVar2 + 0x43;
  }
  RenderFlow::insertNodeLevel(this_00,uVar1,(LevelInfo *)&DAT_01d37398);
  for (puVar3 = *(undefined8 **)(this + 0xf0); puVar3 != *(undefined8 **)(this + 0xf8);
      puVar3 = puVar3 + 1) {
    updateLevel((NodeProxy *)*puVar3);
  }
  return;
}

