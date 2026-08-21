
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,
   cocos2d::GLProgramState*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,
   cocos2d::GLProgramState*>, std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,
   std::__ndk1::__hash_value_type<cocos2d::GLProgram*, cocos2d::GLProgramState*>,
   std::__ndk1::hash<cocos2d::GLProgram*>, true>,
   std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,
   std::__ndk1::__hash_value_type<cocos2d::GLProgram*, cocos2d::GLProgramState*>,
   std::__ndk1::equal_to<cocos2d::GLProgram*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,
   cocos2d::GLProgramState*> > >::__emplace_unique_key_args<cocos2d::GLProgram*, cocos2d::GLProgram*
   const&, cocos2d::GLProgramState*&>(cocos2d::GLProgram* const&, cocos2d::GLProgram* const&,
   cocos2d::GLProgramState*&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
::__emplace_unique_key_args<cocos2d::GLProgram*,cocos2d::GLProgram*const&,cocos2d::GLProgramState*&>
          (__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
           *this,GLProgram **param_1,GLProgram **param_2,GLProgramState **param_3)

{
  ulong uVar1;
  GLProgram *pGVar2;
  GLProgramState *pGVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
  *p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined2 uVar12;
  undefined8 uVar13;
  
  pGVar2 = *param_1;
  uVar8 = ((ulong)(uint)((int)pGVar2 << 3) + 8 ^ (ulong)pGVar2 >> 0x20) * -0x622015f714c7d297;
  uVar11 = *(ulong *)(this + 8);
  uVar8 = (uVar8 ^ (ulong)pGVar2 >> 0x20 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  if (uVar11 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x25 = uVar8 & uVar11 - 1;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar11 <= uVar8) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar8 / uVar11;
        }
        unaff_x25 = uVar8 - uVar9 * uVar11;
      }
    }
    plVar10 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar10 != (long *)0x0) {
      for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 != uVar8) {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar11 - 1;
          }
          else if (uVar11 <= uVar9) {
            uVar1 = 0;
            if (uVar11 != 0) {
              uVar1 = uVar9 / uVar11;
            }
            if (uVar9 - uVar1 * uVar11 == unaff_x25) goto LAB_00fdd3f4;
            break;
          }
          if (uVar9 != unaff_x25) break;
        }
LAB_00fdd3f4:
        if ((GLProgram *)plVar10[2] == pGVar2) {
          return plVar10;
        }
      }
    }
  }
  plVar10 = operator_new(0x20);
  pGVar2 = *param_2;
  plVar10[1] = uVar8;
  plVar10[2] = (long)pGVar2;
  pGVar3 = *param_3;
  *plVar10 = 0;
  plVar10[3] = (long)pGVar3;
  if ((uVar11 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar11 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    rehash(this,uVar6);
    uVar11 = *(ulong *)(this + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar11 <= uVar8) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar8 / uVar11;
        }
        unaff_x25 = uVar8 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *(long *)this;
  plVar4 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar10 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar10;
    *(__hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
      **)(lVar7 + unaff_x25 * 8) = p_Var5;
    if (*plVar10 == 0) goto LAB_00fdd54c;
    uVar8 = *(ulong *)(*plVar10 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar8 = uVar8 & uVar11 - 1;
    }
    else if (uVar11 <= uVar8) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar8 / uVar11;
      }
      uVar8 = uVar8 - uVar6 * uVar11;
    }
    plVar4 = (long *)(*(long *)this + uVar8 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_00fdd54c:
                    /* try { // try from 00fdd550 to 010dd553 has its CatchHandler @ 00fdd564 */
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fdd550 with catch @ 00fdd564
                        */
  return plVar10;
}

