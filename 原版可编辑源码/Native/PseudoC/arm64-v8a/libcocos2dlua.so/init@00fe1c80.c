
/* cocos2d::QuadCommand::init(float, cocos2d::Texture2D*, cocos2d::GLProgramState*,
   cocos2d::BlendFunc const&, cocos2d::V3F_C4B_T2F_Quad*, long, cocos2d::Mat4 const&, unsigned int)
    */

void __thiscall
cocos2d::QuadCommand::init
          (QuadCommand *this,float param_1,Texture2D *param_2,GLProgramState *param_3,
          BlendFunc *param_4,V3F_C4B_T2F_Quad *param_5,long param_6,Mat4 *param_7,uint param_8)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 in_register_00005004;
  V3F_C4B_T2F_Quad *local_90;
  undefined8 uStack_88;
  int local_80;
  int iStack_7c;
  long local_78;
  
                    /* catch() { ... } // from try @ 00fe1c1c with catch @ 00fe1c8c */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = Texture2D::getName(param_2);
                    /* catch() { ... } // from try @ 00fe1d24 with catch @ 00fe1ce4 */
  iStack_7c = (int)param_6 * 6;
  if (param_6 * 6 - (long)*(int *)(this + 0x8c) != 0 && (long)*(int *)(this + 0x8c) <= param_6 * 6)
  {
    reIndex(this,iStack_7c);
  }
  local_80 = (int)param_6 << 2;
                    /* try { // try from 00fe1d1c to 010e1d23 has its CatchHandler @ 00fe1d8c */
  uStack_88 = __indices;
                    /* try { // try from 00fe1d24 to 010e1da7 has its CatchHandler @ 00fe1ce4 */
  local_90 = param_5;
  TrianglesCommand::init
            ((TrianglesCommand *)CONCAT44(in_register_00005004,param_1),this,uVar2,param_3,
             *(undefined8 *)param_4,&local_90,param_7,param_8);
  uVar2 = Texture2D::getAlphaTextureName(param_2);
  *(undefined4 *)(this + 0x88) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

