
/* dragonBones::Animation::playConfig(dragonBones::AnimationConfig*) */

void __thiscall dragonBones::Animation::playConfig(Animation *this,AnimationConfig *param_1)

{
  long *plVar1;
  basic_string *pbVar2;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
  *this_00;
  undefined8 *puVar3;
  long lVar4;
  Animation *pAVar5;
  __tree_node_base **pp_Var6;
  AnimationState *pAVar7;
  void *pvVar8;
  long lVar9;
  __tree_node_base *p_Var10;
  size_t sVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  AnimationData *pAVar16;
  long *plVar17;
  long *plVar18;
  __tree_node_base *p_Var19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float __y;
  __tree_end_node *local_98;
  undefined8 local_90;
  void *local_88;
  AnimationState *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  pbVar2 = (basic_string *)(param_1 + 0x60);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
             *)(this + 0x50);
  pAVar5 = (Animation *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,pbVar2);
  if (this + 0x58 == pAVar5) {
    pAVar7 = (AnimationState *)0x0;
    goto LAB_00d72014;
  }
  pp_Var6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&local_98,pbVar2);
  p_Var19 = *pp_Var6;
  if (p_Var19 == (__tree_node_base *)0x0) {
    p_Var19 = operator_new(0x40);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var19 + 0x20),pbVar2);
    *(undefined8 *)(p_Var19 + 0x38) = 0;
    *(undefined8 *)p_Var19 = 0;
    *(undefined8 *)(p_Var19 + 8) = 0;
    *(__tree_end_node **)(p_Var19 + 0x10) = local_98;
    *pp_Var6 = p_Var19;
    p_Var10 = p_Var19;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var10 = *pp_Var6;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x58),p_Var10);
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
  }
  pAVar16 = *(AnimationData **)(p_Var19 + 0x38);
  if (*(int *)(param_1 + 0x10) == 5) {
    plVar17 = *(long **)(this + 0x38);
    do {
      if (plVar17 == *(long **)(this + 0x40)) goto LAB_00d71bb4;
      pAVar7 = (AnimationState *)*plVar17;
      plVar17 = plVar17 + 1;
    } while (*(AnimationData **)(pAVar7 + 0x80) != pAVar16);
    goto LAB_00d72014;
  }
LAB_00d71bb4:
  fVar22 = *(float *)(param_1 + 0x40);
  if (fVar22 < 0.0) {
    if (*(long *)(this + 0x38) == *(long *)(this + 0x40)) {
      fVar22 = 0.0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      fVar22 = *(float *)(pAVar16 + 0x2c);
      *(float *)(param_1 + 0x40) = fVar22;
    }
  }
  if (*(float *)(param_1 + 0x18) < 0.0) {
    *(float *)(param_1 + 0x18) = fVar22;
  }
  if (*(float *)(param_1 + 0x38) <= -100.0) {
    *(float *)(param_1 + 0x38) = 1.0 / *(float *)(pAVar16 + 0x28);
  }
  if (*(uint *)(pAVar16 + 0x1c) < 2) {
    fVar22 = *(float *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (fVar22 <= 0.0) goto LAB_00d71cc4;
    *(undefined4 *)(param_1 + 0x34) = 0;
LAB_00d71ccc:
    *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  }
  else {
    fVar23 = *(float *)(param_1 + 0x30);
    __y = *(float *)(pAVar16 + 0x24);
    if (0.0 <= fVar23) {
      if (fVar23 == __y) {
        fVar23 = fVar23 + -1e-06;
        goto LAB_00d71c90;
      }
      if (__y < fVar23) {
        fVar23 = fmodf(fVar23,__y);
        goto LAB_00d71c90;
      }
    }
    else {
      fVar23 = fmodf(fVar23,__y);
      fVar23 = __y - fVar23;
                    /* try { // try from 00d71c44 to 00e71c4f has its CatchHandler @ 00d73074 */
LAB_00d71c90:
      *(float *)(param_1 + 0x30) = fVar23;
    }
    fVar22 = *(float *)(param_1 + 0x34);
    if ((0.0 < fVar22) && (__y < fVar22 + fVar23)) {
      fVar22 = __y - fVar23;
      *(float *)(param_1 + 0x34) = fVar22;
    }
    if (*(int *)(param_1 + 0x28) < 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(pAVar16 + 0x20);
    }
LAB_00d71cc4:
    if (fVar22 == 0.0) goto LAB_00d71ccc;
  }
  _fadeOut(this,param_1);
  pAVar7 = BaseObject::borrowObject<dragonBones::AnimationState>();
  local_80 = pAVar7;
                    /* try { // try from 00d71cf4 to 00e71d03 has its CatchHandler @ 00d732dc */
  AnimationState::init(pAVar7,*(Armature **)(this + 0x68),pAVar16,param_1);
  this[0x14] = (Animation)0x1;
  *(undefined4 *)(*(long *)(this + 0x68) + 0x18) = 0xffffffff;
  plVar17 = *(long **)(this + 0x38);
  plVar12 = *(long **)(this + 0x40);
  if (plVar17 == plVar12) {
    if (plVar17 != *(long **)(this + 0x48)) {
      *plVar17 = (long)pAVar7;
      *(long **)(this + 0x40) = plVar17 + 1;
      goto LAB_00d71f48;
    }
    sVar11 = (long)plVar12 - (long)plVar17;
    uVar21 = ((long)sVar11 >> 3) + 1;
    if (uVar21 >> 0x3d != 0) goto LAB_00d71e80;
    lVar13 = (long)*(long **)(this + 0x48) - (long)plVar17;
                    /* try { // try from 00d71e5c to 00e71e67 has its CatchHandler @ 00d73048 */
    if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
      uVar15 = lVar13 >> 2;
                    /* try { // try from 00d71e68 to 00e71e73 has its CatchHandler @ 00d73038 */
      if (uVar21 <= uVar15) {
        uVar21 = uVar15;
      }
      if (uVar21 != 0) {
        if (uVar21 >> 0x3d != 0) goto LAB_00d71e80;
        goto LAB_00d71ed0;
      }
      pvVar8 = (void *)0x0;
    }
    else {
      uVar21 = 0x1fffffffffffffff;
LAB_00d71ed0:
      pvVar8 = operator_new(uVar21 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar8 + ((long)sVar11 >> 3) * 8);
    *puVar3 = pAVar7;
    if (0 < (long)sVar11) {
      memcpy(pvVar8,plVar17,sVar11);
    }
    *(void **)(this + 0x38) = pvVar8;
    *(undefined8 **)(this + 0x40) = puVar3 + 1;
    *(void **)(this + 0x48) = (void *)((long)pvVar8 + uVar21 * 8);
    if (plVar17 == (long *)0x0) goto LAB_00d71f48;
LAB_00d71f0c:
    operator_delete(plVar17);
  }
  else {
    sVar11 = (long)plVar12 - (long)plVar17;
    uVar21 = (long)sVar11 >> 3;
    if (sVar11 != 0) {
      uVar15 = 0;
      do {
        lVar13 = plVar17[uVar15];
        if (*(uint *)(lVar13 + 0x18) < *(uint *)(pAVar7 + 0x18)) {
          if (*plVar17 == lVar13) goto LAB_00d71f44;
          plVar18 = plVar17;
          goto LAB_00d71de4;
        }
        if ((uVar21 - 1 != uVar15) &&
           (*(uint *)(plVar17[uVar15 + 1] + 0x18) < *(uint *)(pAVar7 + 0x18))) {
                    /* try { // try from 00d71d7c to 00e71d97 has its CatchHandler @ 00d732f4 */
          plVar18 = plVar17;
          if (*plVar17 == lVar13) goto LAB_00d71f3c;
          goto LAB_00d71d88;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar21);
    }
    if (plVar12 == *(long **)(this + 0x48)) {
      uVar15 = uVar21 + 1;
      if (uVar15 >> 0x3d != 0) {
LAB_00d71e80:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar13 = (long)*(long **)(this + 0x48) - (long)plVar17;
      if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar13 >> 2;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (uVar15 != 0) {
          if (uVar15 >> 0x3d != 0) goto LAB_00d71e80;
          goto LAB_00d71e88;
        }
        pvVar8 = (void *)0x0;
      }
      else {
        uVar15 = 0x1fffffffffffffff;
LAB_00d71e88:
                    /* try { // try from 00d71e88 to 00e71ea3 has its CatchHandler @ 00d731d8 */
        pvVar8 = operator_new(uVar15 << 3);
      }
      puVar3 = (undefined8 *)((long)pvVar8 + uVar21 * 8);
      *puVar3 = pAVar7;
      if (0 < (long)sVar11) {
                    /* try { // try from 00d71ea8 to 00e71eb7 has its CatchHandler @ 00d731d4 */
        memcpy(pvVar8,plVar17,sVar11);
      }
      *(void **)(this + 0x38) = pvVar8;
      *(undefined8 **)(this + 0x40) = puVar3 + 1;
      *(void **)(this + 0x48) = (void *)((long)pvVar8 + uVar15 * 8);
      if (plVar17 != (long *)0x0) goto LAB_00d71f0c;
    }
    else {
      *plVar12 = (long)pAVar7;
      *(long **)(this + 0x40) = plVar12 + 1;
    }
  }
  goto LAB_00d71f48;
  while (plVar1 = plVar18 + 1, plVar17 = plVar18 + 1, plVar18 = plVar17, *plVar1 != lVar13) {
LAB_00d71de4:
    plVar17 = plVar12;
    if (plVar12 + -1 == plVar18) break;
  }
  goto LAB_00d71f44;
  while (plVar18 = plVar17, *plVar17 != lVar13) {
LAB_00d71d88:
    plVar17 = plVar17 + 1;
    plVar18 = plVar12;
    if (plVar12 == plVar17) break;
  }
LAB_00d71f3c:
  plVar17 = plVar18 + 1;
LAB_00d71f44:
  std::__ndk1::
  vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>::insert
            ((vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>
              *)(this + 0x38),plVar17,&local_80);
LAB_00d71f48:
  plVar12 = *(long **)(*(long *)(this + 0x68) + 0x80);
  for (plVar17 = *(long **)(*(long *)(this + 0x68) + 0x78); plVar17 != plVar12;
      plVar17 = plVar17 + 1) {
    lVar13 = *(long *)(*plVar17 + 0x178);
                    /* try { // try from 00d71f74 to 00e72007 has its CatchHandler @ 00d731a4 */
    if (((lVar13 != 0) && (*(char *)(lVar13 + 0xd) != '\0')) &&
       (lVar20 = *(long *)(lVar13 + 0xa8),
       lVar9 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                           *)(lVar20 + 0x50),pbVar2), lVar20 + 0x58 != lVar9)) {
      pAVar5 = *(Animation **)(lVar13 + 0xa8);
      lVar13 = getState(pAVar5,pbVar2);
      if (lVar13 == 0) {
        local_90 = 0;
        local_88 = (void *)0x0;
        local_98 = (__tree_end_node *)0x0;
        fadeIn((Animation *)0xbf800000,pAVar5,pbVar2,0xffffffff,0,&local_98,3);
        if (((ulong)local_98 & 1) != 0) {
          operator_delete(local_88);
        }
      }
    }
  }
  if (*(float *)(param_1 + 0x40) <= 0.0) {
                    /* try { // try from 00d72008 to 00e7202b has its CatchHandler @ 00d71544 */
    (**(code **)(**(long **)(this + 0x68) + 0x20))(0);
  }
  *(AnimationState **)(this + 0x78) = local_80;
  pAVar7 = local_80;
LAB_00d72014:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pAVar7);
  }
                    /* try { // try from 00d7202c to 00e72033 has its CatchHandler @ 00d73150 */
  return;
}

