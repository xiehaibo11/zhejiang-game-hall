
/* cocos2d::QuadCommand::init(float, unsigned int, cocos2d::GLProgramState*, cocos2d::BlendFunc
   const&, cocos2d::V3F_C4B_T2F_Quad*, long, cocos2d::Mat4 const&) */

void __thiscall
cocos2d::QuadCommand::init
          (QuadCommand *this,float param_1,uint param_2,GLProgramState *param_3,BlendFunc *param_4,
          V3F_C4B_T2F_Quad *param_5,long param_6,Mat4 *param_7)

{
  int iVar1;
  long lVar2;
  undefined4 in_register_00005004;
  V3F_C4B_T2F_Quad *local_80;
  undefined8 uStack_78;
  int local_70;
  int iStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00fe1c24 with catch @ 00fe1be0 */
  iVar1 = (int)param_6 * 6;
  if (param_6 * 6 - (long)*(int *)(this + 0x8c) != 0 && (long)*(int *)(this + 0x8c) <= param_6 * 6)
  {
    reIndex(this,iVar1);
  }
  local_70 = (int)param_6 << 2;
                    /* try { // try from 00fe1c1c to 010e1c23 has its CatchHandler @ 00fe1c8c */
  uStack_78 = __indices;
                    /* try { // try from 00fe1c24 to 010e1ca7 has its CatchHandler @ 00fe1be0 */
  local_80 = param_5;
  iStack_6c = iVar1;
  TrianglesCommand::init
            ((TrianglesCommand *)CONCAT44(in_register_00005004,param_1),this,param_2,param_3,
             *(undefined8 *)param_4,&local_80,param_7,0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

