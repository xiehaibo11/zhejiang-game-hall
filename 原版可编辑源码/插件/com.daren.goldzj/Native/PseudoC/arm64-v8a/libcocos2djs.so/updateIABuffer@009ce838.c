
/* cocos2d::renderer::CustomAssembler::updateIABuffer(unsigned long,
   cocos2d::renderer::VertexBuffer*, cocos2d::renderer::IndexBuffer*) */

void __thiscall
cocos2d::renderer::CustomAssembler::updateIABuffer
          (CustomAssembler *this,ulong param_1,VertexBuffer *param_2,IndexBuffer *param_3)

{
  InputAssembler *this_00;
  
  this_00 = (InputAssembler *)(**(code **)(*(long *)this + 0x40))();
  if (this_00 != (InputAssembler *)0x0) {
    InputAssembler::setVertexBuffer(this_00,param_2);
                    /* try { // try from 009ce87c to 00ace893 has its CatchHandler @ 009cec4c */
    InputAssembler::setIndexBuffer(this_00,param_3);
    return;
  }
  return;
}

