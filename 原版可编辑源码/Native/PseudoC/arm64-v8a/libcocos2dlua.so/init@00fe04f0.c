
/* cocos2d::MeshCommand::init(float, unsigned int, cocos2d::GLProgramState*,
   cocos2d::RenderState::StateBlock*, unsigned int, unsigned int, unsigned int, unsigned int, long,
   cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::MeshCommand::init
          (MeshCommand *this,float param_1,uint param_2,GLProgramState *param_3,StateBlock *param_4,
          uint param_5,uint param_6,uint param_7,uint param_8,long param_9,Mat4 *param_10,
          uint param_11)

{
  RenderCommand::init((RenderCommand *)this,param_1,param_10,param_11);
  *(float *)(this + 0xc) = param_1;
                    /* catch() { ... } // from try @ 00fe04d8 with catch @ 00fe0550 */
  *(uint *)(this + 0xb0) = param_2;
  *(GLProgramState **)(this + 0xa0) = param_3;
  *(StateBlock **)(this + 0xa8) = param_4;
  *(uint *)(this + 0x3c) = param_5;
  *(uint *)(this + 0x40) = param_6;
  *(uint *)(this + 0x44) = param_7;
  *(uint *)(this + 0x48) = param_8;
  *(long *)(this + 0x50) = param_9;
  Mat4::set((Mat4 *)(this + 0x58),param_10);
                    /* catch() { ... } // from try @ 00fe05e0 with catch @ 00fe056c */
  this[0x12] = (MeshCommand)0x1;
  return;
}

