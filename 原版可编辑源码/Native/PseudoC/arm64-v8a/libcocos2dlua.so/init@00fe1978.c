
/* cocos2d::QuadCommand::init(float, unsigned int, cocos2d::GLProgramState*, cocos2d::BlendFunc
   const&, cocos2d::V3F_C4B_T2F_Quad*, long, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::QuadCommand::init
          (QuadCommand *this,float param_1,uint param_2,GLProgramState *param_3,BlendFunc *param_4,
          V3F_C4B_T2F_Quad *param_5,long param_6,Mat4 *param_7,uint param_8)

{
  int iVar1;
  long lVar2;
  undefined4 in_register_00005004;
  V3F_C4B_T2F_Quad *local_90;
  undefined8 uStack_88;
  int local_80;
  int iStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00fe1a18 with catch @ 00fe19e0 */
  iVar1 = (int)param_6 * 6;
  if (param_6 * 6 - (long)*(int *)(this + 0x8c) != 0 && (long)*(int *)(this + 0x8c) <= param_6 * 6)
  {
    reIndex(this,iVar1);
  }
  local_80 = (int)param_6 << 2;
  uStack_88 = __indices;
                    /* try { // try from 00fe1a10 to 010e1a17 has its CatchHandler @ 00fe1a7c */
                    /* try { // try from 00fe1a18 to 010e1a97 has its CatchHandler @ 00fe19e0 */
  local_90 = param_5;
  iStack_7c = iVar1;
  TrianglesCommand::init
            ((TrianglesCommand *)CONCAT44(in_register_00005004,param_1),this,param_2,param_3,
             *(undefined8 *)param_4,&local_90,param_7,param_8);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

