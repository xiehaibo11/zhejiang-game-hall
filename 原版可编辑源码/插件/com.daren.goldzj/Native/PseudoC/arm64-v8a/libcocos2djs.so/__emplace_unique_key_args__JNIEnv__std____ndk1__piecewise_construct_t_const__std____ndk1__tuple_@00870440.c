
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

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
::
__emplace_unique_key_args<_JNIEnv*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<_JNIEnv*const&>,std::__ndk1::tuple<>>
          (_JNIEnv **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  _JNIEnv **pp_Var3;
  _JNIEnv *p_Var4;
  ulong uVar5;
  _JNIEnv *p_Var6;
  _JNIEnv *p_Var7;
  _JNIEnv *p_Var8;
  _JNIEnv *p_Var9;
  _JNIEnv *unaff_x24;
  undefined1 auVar10 [16];
  
  uVar1 = *(ulong *)param_2;
  uVar5 = ((uVar1 & 0x1fffffff) * 8 + 8 ^ uVar1 >> 0x20) * -0x622015f714c7d297;
  p_Var8 = param_1[1];
  uVar5 = (uVar5 ^ uVar1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  p_Var9 = (_JNIEnv *)((uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297);
  if (p_Var8 != (_JNIEnv *)0x0) {
    p_Var4 = p_Var8 + -1;
    if (((ulong)p_Var4 & (ulong)p_Var8) == 0) {
      unaff_x24 = (_JNIEnv *)((ulong)p_Var9 & (ulong)p_Var4);
    }
    else {
      unaff_x24 = p_Var9;
      if (p_Var8 <= p_Var9) {
        uVar5 = 0;
        if (p_Var8 != (_JNIEnv *)0x0) {
          uVar5 = (ulong)p_Var9 / (ulong)p_Var8;
        }
        unaff_x24 = p_Var9 + -(uVar5 * (long)p_Var8);
      }
    }
    p_Var7 = *(_JNIEnv **)(*param_1 + (long)unaff_x24 * 8);
    if (p_Var7 != (_JNIEnv *)0x0) {
      do {
        p_Var7 = *(_JNIEnv **)p_Var7;
        if (p_Var7 == (_JNIEnv *)0x0) goto LAB_0087052c;
        p_Var6 = *(_JNIEnv **)(p_Var7 + 8);
        if (p_Var6 != p_Var9) {
          if (((ulong)p_Var4 & (ulong)p_Var8) == 0) {
            p_Var6 = (_JNIEnv *)((ulong)p_Var6 & (ulong)p_Var4);
          }
          else if (p_Var8 <= p_Var6) {
            uVar5 = 0;
            if (p_Var8 != (_JNIEnv *)0x0) {
              uVar5 = (ulong)p_Var6 / (ulong)p_Var8;
            }
            if (p_Var6 + -(uVar5 * (long)p_Var8) == unaff_x24) goto LAB_00870518;
            goto LAB_0087052c;
          }
          if (p_Var6 != unaff_x24) goto LAB_0087052c;
        }
LAB_00870518:
      } while (*(ulong *)(p_Var7 + 0x10) != uVar1);
      uVar2 = 0;
      goto LAB_00870654;
    }
  }
LAB_0087052c:
  p_Var7 = operator_new(0x30);
  uVar2 = **(undefined8 **)param_4;
  *(undefined8 *)(p_Var7 + 0x20) = 0;
  *(undefined8 *)(p_Var7 + 0x28) = 0;
  *(undefined8 *)p_Var7 = 0;
  *(_JNIEnv **)(p_Var7 + 8) = p_Var9;
  *(undefined8 *)(p_Var7 + 0x10) = uVar2;
  *(undefined8 *)(p_Var7 + 0x18) = 0;
  if ((p_Var8 == (_JNIEnv *)0x0) ||
     (*(float *)(param_1 + 4) * (float)p_Var8 < (float)(param_1[3] + 1))) {
    if (p_Var8 < (_JNIEnv *)0x3) {
      uVar1 = 1;
    }
    else {
      uVar1 = (ulong)(((ulong)(p_Var8 + -1) & (ulong)p_Var8) != 0);
    }
    uVar1 = uVar1 | (long)p_Var8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
            *)param_1,uVar5);
    p_Var8 = param_1[1];
    if (((ulong)(p_Var8 + -1) & (ulong)p_Var8) == 0) {
      unaff_x24 = (_JNIEnv *)((ulong)(p_Var8 + -1) & (ulong)p_Var9);
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
  }
  p_Var4 = *param_1;
  p_Var9 = *(_JNIEnv **)(p_Var4 + (long)unaff_x24 * 8);
  if (p_Var9 == (_JNIEnv *)0x0) {
    pp_Var3 = param_1 + 2;
    *(_JNIEnv **)p_Var7 = *pp_Var3;
    *pp_Var3 = p_Var7;
    *(_JNIEnv ***)(p_Var4 + (long)unaff_x24 * 8) = pp_Var3;
    if (*(long *)p_Var7 != 0) {
      p_Var9 = *(_JNIEnv **)(*(long *)p_Var7 + 8);
      if (((ulong)(p_Var8 + -1) & (ulong)p_Var8) == 0) {
        p_Var9 = (_JNIEnv *)((ulong)p_Var9 & (ulong)(p_Var8 + -1));
      }
      else if (p_Var8 <= p_Var9) {
        uVar1 = 0;
        if (p_Var8 != (_JNIEnv *)0x0) {
          uVar1 = (ulong)p_Var9 / (ulong)p_Var8;
        }
        p_Var9 = p_Var9 + -(uVar1 * (long)p_Var8);
      }
      p_Var9 = *param_1 + (long)p_Var9 * 8;
      goto LAB_00870640;
    }
  }
  else {
    *(undefined8 *)p_Var7 = *(undefined8 *)p_Var9;
LAB_00870640:
    *(_JNIEnv **)p_Var9 = p_Var7;
  }
  uVar2 = 1;
  param_1[3] = param_1[3] + 1;
LAB_00870654:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = p_Var7;
  return auVar10;
}

