
/* dragonBones::Animation::playConfig(dragonBones::AnimationConfig*) */

void __thiscall dragonBones::Animation::playConfig(Animation *this,AnimationConfig *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  Animation *pAVar3;
  long lVar4;
  AnimationState *pAVar5;
  vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>> *this_00
  ;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  AnimationData *pAVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float __y;
  basic_string *local_88;
  undefined8 uStack_80;
  void *local_78;
  AnimationState *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar1 = (basic_string *)(param_1 + 0x60);
  pAVar3 = (Animation *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                       *)(this + 0x50),pbVar1);
  if (this + 0x58 == pAVar3) {
    pAVar5 = (AnimationState *)0x0;
    goto LAB_00d1cda0;
  }
  local_88 = pbVar1;
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x50),(piecewise_construct_t *)pbVar1,
                     (tuple *)&DAT_01948326,(tuple *)&local_88);
  pAVar12 = *(AnimationData **)(lVar4 + 0x38);
  if (*(int *)(param_1 + 0x10) == 5) {
    plVar7 = *(long **)(this + 0x38);
    do {
      if (plVar7 == *(long **)(this + 0x40)) goto LAB_00d1ca5c;
      pAVar5 = (AnimationState *)*plVar7;
      plVar7 = plVar7 + 1;
    } while (*(AnimationData **)(pAVar5 + 0x80) != pAVar12);
    goto LAB_00d1cda0;
  }
LAB_00d1ca5c:
  fVar14 = *(float *)(param_1 + 0x40);
  if (fVar14 < 0.0) {
    if (*(long *)(this + 0x38) == *(long *)(this + 0x40)) {
      fVar14 = 0.0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      fVar14 = *(float *)(pAVar12 + 0x2c);
      *(float *)(param_1 + 0x40) = fVar14;
    }
  }
  if (*(float *)(param_1 + 0x18) < 0.0) {
    *(float *)(param_1 + 0x18) = fVar14;
  }
  if (*(float *)(param_1 + 0x38) <= -100.0) {
    *(float *)(param_1 + 0x38) = 1.0 / *(float *)(pAVar12 + 0x28);
  }
  if (*(uint *)(pAVar12 + 0x1c) < 2) {
    fVar14 = *(float *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (fVar14 <= 0.0) goto LAB_00d1cb78;
    *(undefined4 *)(param_1 + 0x34) = 0;
LAB_00d1cb80:
    *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  }
  else {
    fVar15 = *(float *)(param_1 + 0x30);
    __y = *(float *)(pAVar12 + 0x24);
    if (0.0 <= fVar15) {
      if (fVar15 == __y) {
        fVar15 = fVar15 + -1e-06;
        goto LAB_00d1cb40;
      }
      if (__y < fVar15) {
        fVar15 = fmodf(fVar15,__y);
        goto LAB_00d1cb40;
      }
    }
    else {
      fVar15 = fmodf(fVar15,__y);
      fVar15 = __y - fVar15;
LAB_00d1cb40:
      *(float *)(param_1 + 0x30) = fVar15;
    }
    fVar14 = *(float *)(param_1 + 0x34);
    if ((0.0 < fVar14) && (__y < fVar14 + fVar15)) {
      fVar14 = __y - fVar15;
      *(float *)(param_1 + 0x34) = fVar14;
    }
    if (*(int *)(param_1 + 0x28) < 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(pAVar12 + 0x20);
    }
LAB_00d1cb78:
    if (fVar14 == 0.0) goto LAB_00d1cb80;
  }
  _fadeOut(this,param_1);
  pAVar5 = BaseObject::borrowObject<dragonBones::AnimationState>();
  local_70 = pAVar5;
  AnimationState::init(pAVar5,*(Armature **)(this + 0x68),pAVar12,param_1);
  this[0x14] = (Animation)0x1;
  *(undefined4 *)(*(long *)(this + 0x68) + 0x18) = 0xffffffff;
  this_00 = (vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>
             *)(this + 0x38);
  plVar7 = *(long **)this_00;
  plVar9 = *(long **)(this + 0x40);
  if (plVar7 == plVar9) {
    if (plVar7 != *(long **)(this + 0x48)) {
      *plVar7 = (long)pAVar5;
      goto LAB_00d1cc4c;
    }
LAB_00d1cc5c:
    std::__ndk1::
    vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>::
    __push_back_slow_path<dragonBones::AnimationState*const&>(this_00,&local_70);
  }
  else {
    if ((long)plVar9 - (long)plVar7 != 0) {
      uVar11 = (long)plVar9 - (long)plVar7 >> 3;
      uVar10 = 0;
      do {
        lVar4 = plVar7[uVar10];
        if (*(uint *)(lVar4 + 0x18) < *(uint *)(pAVar5 + 0x18)) {
          plVar8 = plVar7;
          if (*plVar7 == lVar4) goto LAB_00d1ccd4;
          goto LAB_00d1cc78;
        }
        if ((uVar11 - 1 != uVar10) &&
           (*(uint *)(plVar7[uVar10 + 1] + 0x18) < *(uint *)(pAVar5 + 0x18))) {
          if (*plVar7 == lVar4) goto LAB_00d1ccbc;
          goto LAB_00d1cca4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
    if (plVar9 == *(long **)(this + 0x48)) goto LAB_00d1cc5c;
    *plVar9 = (long)pAVar5;
LAB_00d1cc4c:
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
  }
  goto LAB_00d1ccdc;
  while (plVar8 = plVar7, *plVar7 != lVar4) {
LAB_00d1cc78:
    plVar7 = plVar7 + 1;
    plVar8 = plVar9;
    if (plVar9 == plVar7) break;
  }
  goto LAB_00d1ccd4;
  while (*plVar7 != lVar4) {
LAB_00d1cca4:
    plVar7 = plVar7 + 1;
    if (plVar9 == plVar7) {
      plVar8 = plVar9 + 1;
      goto LAB_00d1ccd4;
    }
  }
LAB_00d1ccbc:
  plVar8 = plVar7 + 1;
LAB_00d1ccd4:
  std::__ndk1::
  vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>::insert
            (this_00,plVar8,&local_70);
LAB_00d1ccdc:
  plVar9 = *(long **)(*(long *)(this + 0x68) + 0x80);
  for (plVar7 = *(long **)(*(long *)(this + 0x68) + 0x78); plVar7 != plVar9; plVar7 = plVar7 + 1) {
    lVar4 = *(long *)(*plVar7 + 0x178);
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0xd) != '\0')) &&
       (lVar13 = *(long *)(lVar4 + 0xa8),
       lVar6 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                           *)(lVar13 + 0x50),pbVar1), lVar13 + 0x58 != lVar6)) {
      pAVar3 = *(Animation **)(lVar4 + 0xa8);
      lVar4 = getState(pAVar3,pbVar1);
      if (lVar4 == 0) {
        local_88 = (basic_string *)0x0;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        fadeIn((Animation *)0xbf800000,pAVar3,pbVar1,0xffffffff,0,&local_88,3);
        if (((ulong)local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
    }
  }
  if (*(float *)(param_1 + 0x40) <= 0.0) {
    (**(code **)(**(long **)(this + 0x68) + 0x20))(0);
  }
  *(AnimationState **)(this + 0x78) = local_70;
  pAVar5 = local_70;
LAB_00d1cda0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pAVar5);
  }
  return;
}

