
/* cocos2d::renderer::VertexBuffer::init(cocos2d::renderer::DeviceGraphics*,
   cocos2d::renderer::VertexFormat*, cocos2d::renderer::Usage, void const*, unsigned long, unsigned
   int) */

undefined8 __thiscall
cocos2d::renderer::VertexBuffer::init
          (VertexBuffer *this,undefined8 param_1,Ref *param_2,undefined2 param_4,void *param_5,
          ulong param_6,int param_7)

{
  Ref *this_00;
  
                    /* try { // try from 009b9178 to 00ab918f has its CatchHandler @ 009b9440 */
  this_00 = *(Ref **)(this + 0x18);
                    /* try { // try from 009b9198 to 00ab91a3 has its CatchHandler @ 009b943c */
                    /* try { // try from 009b91a4 to 00ab91af has its CatchHandler @ 009b9438 */
  *(undefined8 *)(this + 0x10) = param_1;
  if (this_00 != param_2) {
                    /* try { // try from 009b91b0 to 00ab93b7 has its CatchHandler @ 009b9450 */
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Ref **)(this + 0x18) = param_2;
    if (param_2 != (Ref *)0x0) {
      Ref::retain(param_2);
      param_2 = *(Ref **)(this + 0x18);
    }
  }
  *(undefined2 *)(this + 0x20) = param_4;
  *(int *)(this + 0x24) = param_7;
  this[0x2c] = (VertexBuffer)0x1;
  *(int *)(this + 0x28) = *(int *)(param_2 + 0x50) * param_7;
  glGenBuffers(1,this + 0xc);
  update(this,0,param_5,param_6);
  return 1;
}

