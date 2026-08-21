
/* cocos2d::renderer::MeshAssembler::MeshAssembler() */

void __thiscall cocos2d::renderer::MeshAssembler::MeshAssembler(MeshAssembler *this)

{
  CustomAssembler::CustomAssembler((CustomAssembler *)this);
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 009d0a60 to 00ad0a67 has its CatchHandler @ 009d0cac */
  *(undefined ***)this = &PTR__MeshAssembler_01c6ba80;
  Ref::Ref((Ref *)(this + 0x78));
                    /* try { // try from 009d0a68 to 00ad0a7b has its CatchHandler @ 009d0c9c */
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)(this + 0x78) = &PTR__RenderDataList_01c69758;
  this[0x28] = (MeshAssembler)0x1;
  return;
}

