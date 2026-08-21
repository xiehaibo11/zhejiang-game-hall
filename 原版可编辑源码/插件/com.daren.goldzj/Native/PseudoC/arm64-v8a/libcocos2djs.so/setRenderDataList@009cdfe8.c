
/* cocos2d::renderer::Assembler::setRenderDataList(cocos2d::renderer::RenderDataList*) */

void __thiscall
cocos2d::renderer::Assembler::setRenderDataList(Assembler *this,RenderDataList *param_1)

{
  Ref *this_00;
  
                    /* try { // try from 009cdfe8 to 00acdff3 has its CatchHandler @ 009ce34c */
                    /* try { // try from 009cdff4 to 00ace29f has its CatchHandler @ 009ce364 */
  this_00 = *(Ref **)(this + 0x38);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(RenderDataList **)(this + 0x38) = param_1;
    if (param_1 != (RenderDataList *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

