
/* cocos2d::renderer::NodeProxy::setAssembler(cocos2d::renderer::AssemblerBase*) */

void __thiscall cocos2d::renderer::NodeProxy::setAssembler(NodeProxy *this,AssemblerBase *param_1)

{
  Ref *this_00;
  long lVar1;
  uint *puVar2;
  uint uVar3;
  
  this_00 = *(Ref **)(this + 0x108);
  if (this_00 == (Ref *)param_1) {
    return;
  }
  if (this_00 != (Ref *)0x0) {
    Ref::release(this_00);
  }
  *(AssemblerBase **)(this + 0x108) = param_1;
  if (param_1 != (AssemblerBase *)0x0) {
    Ref::retain((Ref *)param_1);
    if (*(long *)(this + 0x108) != 0) {
      lVar1 = __dynamic_cast(*(long *)(this + 0x108),&AssemblerBase::typeinfo,
                             &AssemblerSprite::typeinfo,0);
      puVar2 = *(uint **)(this + 0x80);
      uVar3 = *puVar2 & 0xefffffff;
      if (lVar1 != 0) {
        uVar3 = *puVar2 | 0x10000000;
      }
      goto LAB_009233a4;
    }
  }
  puVar2 = *(uint **)(this + 0x80);
  uVar3 = *puVar2 & 0xefffffff;
LAB_009233a4:
  *puVar2 = uVar3;
  return;
}

