
/* cocos2d::renderer::Assembler::setVertexFormat(cocos2d::renderer::VertexFormat*) */

void __thiscall cocos2d::renderer::Assembler::setVertexFormat(Assembler *this,VertexFormat *param_1)

{
  ulong uVar1;
  Ref *this_00;
  long lVar2;
  
  this_00 = *(Ref **)(this + 0x70);
  if (this_00 != (Ref *)param_1) {
                    /* try { // try from 009cdf64 to 00acdfbb has its CatchHandler @ 009cdf64
                       catch() { ... } // from try @ 009cdf64 with catch @ 009cdf64
                       catch() { ... } // from try @ 009ce320 with catch @ 009cdf64 */
    if (param_1 != (VertexFormat *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x70);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(VertexFormat **)(this + 0x70) = param_1;
    uVar1 = ATTRIB_NAME_POSITION_HASH;
    if (param_1 != (VertexFormat *)0x0) {
      *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x50);
      lVar2 = VertexFormat::getElement(param_1,uVar1);
      *(long *)(this + 0x78) = lVar2;
      uVar1 = ATTRIB_NAME_COLOR_HASH;
                    /* try { // try from 009cdfbc to 00acdfd3 has its CatchHandler @ 009ce354 */
      *(ulong *)(this + 0x60) = *(ulong *)(lVar2 + 0x18) >> 2;
      lVar2 = VertexFormat::getElement(*(VertexFormat **)(this + 0x70),uVar1);
      *(long *)(this + 0x80) = lVar2;
      if (lVar2 != 0) {
        *(long *)(this + 0x68) = *(long *)(lVar2 + 0x18) + 3;
      }
    }
  }
                    /* try { // try from 009cdfdc to 00acdfe7 has its CatchHandler @ 009ce350 */
  return;
}

