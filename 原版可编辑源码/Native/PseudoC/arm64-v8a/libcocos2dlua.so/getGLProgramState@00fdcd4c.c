
/* cocos2d::GLProgramStateCache::getGLProgramState(cocos2d::GLProgram*) */

GLProgramState * __thiscall
cocos2d::GLProgramStateCache::getGLProgramState(GLProgramStateCache *this,GLProgram *param_1)

{
  ulong uVar1;
  long lVar2;
  GLProgramState *this_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  GLProgram *local_48;
  GLProgramState *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = *(ulong *)(this + 8);
  local_48 = param_1;
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = (uVar4 ^ (ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if (uVar4 < 2) {
      uVar6 = uVar3 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)this + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((GLProgram *)plVar7[2] == param_1) {
            this_00 = (GLProgramState *)plVar7[3];
            goto LAB_00fdceb8;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else {
                    /* catch() { ... } // from try @ 00fdce70 with catch @ 00fdce38 */
            if (uVar3 <= uVar8) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar8 / uVar3;
              }
              uVar8 = uVar8 - uVar1 * uVar3;
            }
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  this_00 = operator_new(0x110,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00fdce68 to 010dce6f has its CatchHandler @ 00fdcf34 */
  if (this_00 != (GLProgramState *)0x0) {
                    /* try { // try from 00fdce70 to 010dcf4f has its CatchHandler @ 00fdce38 */
    GLProgramState::GLProgramState(this_00);
    uVar3 = GLProgramState::init(this_00,param_1);
    if ((uVar3 & 1) != 0) {
      local_40 = this_00;
      Ref::retain((Ref *)this_00);
      Map<cocos2d::GLProgram*,cocos2d::GLProgramState*>::erase
                ((Map<cocos2d::GLProgram*,cocos2d::GLProgramState*> *)this,&local_48);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
      ::
      __emplace_unique_key_args<cocos2d::GLProgram*,cocos2d::GLProgram*const&,cocos2d::GLProgramState*&>
                ((__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
                  *)this,&local_48,&local_48,&local_40);
    }
    Ref::release((Ref *)this_00);
  }
LAB_00fdceb8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

