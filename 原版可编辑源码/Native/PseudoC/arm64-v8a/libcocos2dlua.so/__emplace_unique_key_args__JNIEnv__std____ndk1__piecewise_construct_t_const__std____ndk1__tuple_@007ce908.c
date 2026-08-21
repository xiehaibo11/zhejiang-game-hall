
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<_JNIEnv*,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<_JNIEnv*, std::__ndk1::vector<_jobject*,
   std::__ndk1::allocator<_jobject*> > >, std::__ndk1::__unordered_map_hasher<_JNIEnv*,
   std::__ndk1::__hash_value_type<_JNIEnv*, std::__ndk1::vector<_jobject*,
   std::__ndk1::allocator<_jobject*> > >, std::__ndk1::hash<_JNIEnv*>, true>,
   std::__ndk1::__unordered_map_equal<_JNIEnv*, std::__ndk1::__hash_value_type<_JNIEnv*,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> > >,
   std::__ndk1::equal_to<_JNIEnv*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*, std::__ndk1::vector<_jobject*,
   std::__ndk1::allocator<_jobject*> > > > >::__emplace_unique_key_args<_JNIEnv*,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<_JNIEnv* const&>,
   std::__ndk1::tuple<> >(_JNIEnv* const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<_JNIEnv* const&>&&, std::__ndk1::tuple<>&&) */

_JNIEnv * std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
          ::
          __emplace_unique_key_args<_JNIEnv*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<_JNIEnv*const&>,std::__ndk1::tuple<>>
                    (_JNIEnv **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  _JNIEnv **pp_Var4;
  _JNIEnv *p_Var5;
  ulong uVar6;
  _JNIEnv *p_Var7;
  _JNIEnv *p_Var8;
  _JNIEnv *p_Var9;
  _JNIEnv *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  p_Var8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  p_Var9 = (_JNIEnv *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (p_Var8 != (_JNIEnv *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)p_Var8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)p_Var8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)p_Var8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)p_Var8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)p_Var8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)p_Var8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  p_Var8 >> 8)),POPCOUNT((char)p_Var8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (_JNIEnv *)((ulong)p_Var9 & (ulong)(p_Var8 + -1));
    }
    else {
      unaff_x24 = p_Var9;
      if (p_Var8 <= p_Var9) {
        uVar1 = 0;
        if (p_Var8 != (_JNIEnv *)0x0) {
          uVar1 = (ulong)p_Var9 / (ulong)p_Var8;
        }
        unaff_x24 = p_Var9 + -(uVar1 * (long)p_Var8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (p_Var7 = (_JNIEnv *)**(long **)(*param_1 + (long)unaff_x24 * 8); p_Var7 != (_JNIEnv *)0x0
          ; p_Var7 = *(_JNIEnv **)p_Var7) {
        p_Var5 = *(_JNIEnv **)(p_Var7 + 8);
        if (p_Var5 != p_Var9) {
          if (uVar6 < 2) {
            p_Var5 = (_JNIEnv *)((ulong)p_Var5 & (ulong)(p_Var8 + -1));
          }
          else if (p_Var8 <= p_Var5) {
            uVar1 = 0;
            if (p_Var8 != (_JNIEnv *)0x0) {
              uVar1 = (ulong)p_Var5 / (ulong)p_Var8;
            }
            if (p_Var5 + -(uVar1 * (long)p_Var8) == unaff_x24) goto LAB_007ce9cc;
            break;
          }
          if (p_Var5 != unaff_x24) break;
        }
LAB_007ce9cc:
        if (*(ulong *)(p_Var7 + 0x10) == uVar2) {
          return p_Var7;
        }
      }
    }
  }
  p_Var7 = operator_new(0x30);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)(p_Var7 + 0x20) = 0;
  *(undefined8 *)(p_Var7 + 0x28) = 0;
  *(undefined8 *)p_Var7 = 0;
  *(_JNIEnv **)(p_Var7 + 8) = p_Var9;
  *(undefined8 *)(p_Var7 + 0x10) = uVar3;
  *(undefined8 *)(p_Var7 + 0x18) = 0;
  if ((p_Var8 == (_JNIEnv *)0x0) ||
     (*(float *)(param_1 + 4) * (float)p_Var8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(p_Var8 < (_JNIEnv *)0x3 || ((ulong)p_Var8 & (ulong)(p_Var8 + -1)) != 0) |
            (long)p_Var8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
            *)param_1,uVar6);
    p_Var8 = param_1[1];
    if (((ulong)p_Var8 & (ulong)(p_Var8 + -1)) == 0) {
      unaff_x24 = (_JNIEnv *)((ulong)(p_Var8 + -1) & (ulong)p_Var9);
    }
    else {
      unaff_x24 = p_Var9;
      if (p_Var8 <= p_Var9) {
        uVar2 = 0;
        if (p_Var8 != (_JNIEnv *)0x0) {
          uVar2 = (ulong)p_Var9 / (ulong)p_Var8;
        }
        unaff_x24 = p_Var9 + -(uVar2 * (long)p_Var8);
      }
    }
  }
  p_Var5 = *param_1;
  p_Var9 = *(_JNIEnv **)(p_Var5 + (long)unaff_x24 * 8);
  if (p_Var9 == (_JNIEnv *)0x0) {
    pp_Var4 = param_1 + 2;
    *(_JNIEnv **)p_Var7 = *pp_Var4;
    *pp_Var4 = p_Var7;
    *(_JNIEnv ***)(p_Var5 + (long)unaff_x24 * 8) = pp_Var4;
    if (*(long *)p_Var7 == 0) goto LAB_007ceb24;
    p_Var9 = *(_JNIEnv **)(*(long *)p_Var7 + 8);
    if (((ulong)p_Var8 & (ulong)(p_Var8 + -1)) == 0) {
      p_Var9 = (_JNIEnv *)((ulong)p_Var9 & (ulong)(p_Var8 + -1));
    }
    else if (p_Var8 <= p_Var9) {
      uVar2 = 0;
      if (p_Var8 != (_JNIEnv *)0x0) {
        uVar2 = (ulong)p_Var9 / (ulong)p_Var8;
      }
      p_Var9 = p_Var9 + -(uVar2 * (long)p_Var8);
    }
    p_Var9 = *param_1 + (long)p_Var9 * 8;
  }
  else {
    *(undefined8 *)p_Var7 = *(undefined8 *)p_Var9;
  }
  *(_JNIEnv **)p_Var9 = p_Var7;
LAB_007ceb24:
  param_1[3] = param_1[3] + 1;
  return p_Var7;
}

