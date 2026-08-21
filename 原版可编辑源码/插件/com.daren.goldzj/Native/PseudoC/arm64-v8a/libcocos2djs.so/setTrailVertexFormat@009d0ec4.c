
/* cocos2d::renderer::Particle3DAssembler::setTrailVertexFormat(cocos2d::renderer::VertexFormat*) */

void __thiscall
cocos2d::renderer::Particle3DAssembler::setTrailVertexFormat
          (Particle3DAssembler *this,VertexFormat *param_1)

{
  ulong uVar1;
  Ref *this_00;
  long lVar2;
  
  this_00 = *(Ref **)(this + 0xa0);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (VertexFormat *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0xa0);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(VertexFormat **)(this + 0xa0) = param_1;
    uVar1 = ATTRIB_NAME_POSITION_HASH;
    if (param_1 != (VertexFormat *)0x0) {
      *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x50);
      lVar2 = VertexFormat::getElement(*(VertexFormat **)(this + 0x70),uVar1);
      *(ulong *)(this + 0x90) = *(ulong *)(lVar2 + 0x18) >> 2;
    }
  }
  return;
}

