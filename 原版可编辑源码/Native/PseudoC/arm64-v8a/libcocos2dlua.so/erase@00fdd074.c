
/* cocos2d::Map<cocos2d::GLProgram*, cocos2d::GLProgramState*>::erase(cocos2d::GLProgram* const&) */

void __thiscall
cocos2d::Map<cocos2d::GLProgram*,cocos2d::GLProgramState*>::erase
          (Map<cocos2d::GLProgram*,cocos2d::GLProgramState*> *this,GLProgram **param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  GLProgram *pGVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined2 uVar12;
  void *local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 8);
                    /* try { // try from 00fdd098 to 010dd09b has its CatchHandler @ 00fdd0ac */
  if (uVar5 != 0) {
    pGVar6 = *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdd098 with catch @ 00fdd0ac
                        */
    uVar7 = ((ulong)(uint)((int)pGVar6 << 3) + 8 ^ (ulong)pGVar6 >> 0x20) * -0x622015f714c7d297;
    uVar4 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar12 = NEON_uaddlv(uVar4,1);
    uVar8 = (uVar7 ^ (ulong)pGVar6 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar12) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar8 & uVar5 - 1;
    }
    else {
                    /* try { // try from 00fdd0f4 to 010dd0f7 has its CatchHandler @ 00fdd108 */
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdd0f4 with catch @ 00fdd108
                        */
      }
    }
    plVar10 = *(long **)(*(long *)this + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
                    /* try { // try from 00fdd14c to 010dd14f has its CatchHandler @ 00fdd168 */
        if (uVar11 == uVar8) {
          if ((GLProgram *)plVar10[2] == pGVar6) {
            Ref::release((Ref *)plVar10[3]);
                    /* try { // try from 00fdd1b0 to 010dd1b3 has its CatchHandler @ 00fdd1cc */
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
            ::remove(local_50,this,plVar10);
            pvVar3 = local_50[0];
            local_50[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdd1b0 with catch @ 00fdd1cc
                        */
              operator_delete(pvVar3);
            }
            uVar4 = 1;
            goto LAB_00fdd184;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar1 * uVar5;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar4 = 0;
LAB_00fdd184:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

