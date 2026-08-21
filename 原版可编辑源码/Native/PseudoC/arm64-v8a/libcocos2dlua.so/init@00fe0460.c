
/* cocos2d::MeshCommand::init(float, cocos2d::Material*, unsigned int, unsigned int, unsigned int,
   unsigned int, long, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::MeshCommand::init
          (MeshCommand *this,float param_1,Material *param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,long param_7,Mat4 *param_8,uint param_9)

{
                    /* catch() { ... } // from try @ 00fe04e0 with catch @ 00fe04a8 */
  RenderCommand::init((RenderCommand *)this,param_1,param_8,param_9);
  *(float *)(this + 0xc) = param_1;
  *(Material **)(this + 0x98) = param_2;
  *(uint *)(this + 0x3c) = param_3;
  *(uint *)(this + 0x40) = param_4;
  *(uint *)(this + 0x44) = param_5;
  *(uint *)(this + 0x48) = param_6;
  *(long *)(this + 0x50) = param_7;
  Mat4::set((Mat4 *)(this + 0x58),param_8);
  this[0x12] = (MeshCommand)0x1;
                    /* try { // try from 00fe04d8 to 010e04df has its CatchHandler @ 00fe0550 */
                    /* try { // try from 00fe04e0 to 010e056b has its CatchHandler @ 00fe04a8 */
  return;
}

