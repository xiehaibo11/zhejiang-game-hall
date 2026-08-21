
/* cocos2d::Animation3D::init(cocos2d::Animation3DData const&) */

undefined8 __thiscall cocos2d::Animation3D::init(Animation3D *this,Animation3DData *param_1)

{
  piecewise_construct_t *ppVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  Ref *pRVar5;
  float *pfVar6;
  Animation3DData *pAVar7;
  Animation3DData *pAVar8;
  float *pfVar9;
  undefined8 *puVar10;
  Animation3DData *pAVar11;
  float *local_98;
  float *local_90;
  float *local_88;
  piecewise_construct_t *local_80;
  piecewise_construct_t *local_78;
  piecewise_construct_t *ppStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x48);
  if (*(Animation3DData **)param_1 != param_1 + 8) {
    pAVar11 = *(Animation3DData **)param_1;
    do {
      ppVar1 = (piecewise_construct_t *)(pAVar11 + 0x20);
      local_80 = ppVar1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x28),ppVar1,(tuple *)&DAT_014188b3,
                         (tuple *)&local_80);
      puVar10 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = operator_new(0x18,(nothrow_t *)&std::nothrow);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        local_80 = ppVar1;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 0x28),ppVar1,(tuple *)&DAT_014188b3,
                           (tuple *)&local_80);
        *(undefined8 **)(lVar4 + 0x28) = puVar10;
      }
      pfVar9 = *(float **)(pAVar11 + 0x38);
      pfVar2 = *(float **)(pAVar11 + 0x40);
      if (pfVar2 != pfVar9) {
        local_78 = (piecewise_construct_t *)0x0;
        ppStack_70 = (piecewise_construct_t *)0x0;
        local_88 = (float *)0x0;
        local_80 = (piecewise_construct_t *)0x0;
        local_98 = (float *)0x0;
        local_90 = (float *)0x0;
        if (pfVar9 != pfVar2) {
LAB_00d0d50c:
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,pfVar9);
          do {
            if (local_90 == local_88) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 1);
              pfVar6 = local_90;
              if (local_90 != local_88) goto LAB_00d0d538;
LAB_00d0d57c:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 2);
              if (local_90 != local_88) goto LAB_00d0d54c;
LAB_00d0d594:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 3);
              ppVar1 = local_78;
            }
            else {
              pfVar6 = local_90 + 1;
              *local_90 = pfVar9[1];
              local_90 = pfVar6;
              if (pfVar6 == local_88) goto LAB_00d0d57c;
LAB_00d0d538:
              local_90 = pfVar6 + 1;
              *pfVar6 = pfVar9[2];
              if (local_90 == local_88) goto LAB_00d0d594;
LAB_00d0d54c:
              *local_90 = pfVar9[3];
              local_90 = local_90 + 1;
              ppVar1 = local_78;
            }
            local_78 = ppVar1;
            if (pfVar2 + -4 == pfVar9) break;
            pfVar9 = pfVar9 + 4;
            if (ppVar1 == ppStack_70) goto LAB_00d0d50c;
            local_78 = ppVar1 + 4;
            *(float *)ppVar1 = *pfVar9;
          } while( true );
        }
        pRVar5 = (Ref *)AnimationCurve<3>::create
                                  ((float *)local_80,local_98,
                                   (int)((ulong)((long)local_78 - (long)local_80) >> 2));
        *puVar10 = pRVar5;
        if (pRVar5 != (Ref *)0x0) {
          Ref::retain(pRVar5);
        }
        if (local_98 != (float *)0x0) {
          local_90 = local_98;
          operator_delete(local_98);
        }
        if (local_80 != (piecewise_construct_t *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
      }
      pAVar7 = *(Animation3DData **)(pAVar11 + 8);
      if (*(Animation3DData **)(pAVar11 + 8) == (Animation3DData *)0x0) {
        pAVar7 = pAVar11 + 0x10;
        pAVar8 = *(Animation3DData **)pAVar7;
        if (*(Animation3DData **)pAVar8 != pAVar11) {
          do {
            lVar4 = *(long *)pAVar7;
            pAVar7 = (Animation3DData *)(lVar4 + 0x10);
            pAVar8 = *(Animation3DData **)pAVar7;
          } while (*(long *)pAVar8 != lVar4);
        }
      }
      else {
        do {
          pAVar8 = pAVar7;
          pAVar7 = *(Animation3DData **)pAVar8;
        } while (*(Animation3DData **)pAVar8 != (Animation3DData *)0x0);
      }
      pAVar11 = pAVar8;
    } while (pAVar8 != param_1 + 8);
  }
  if (*(Animation3DData **)(param_1 + 0x18) != param_1 + 0x20) {
    pAVar11 = *(Animation3DData **)(param_1 + 0x18);
    do {
      ppVar1 = (piecewise_construct_t *)(pAVar11 + 0x20);
      local_80 = ppVar1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x28),ppVar1,(tuple *)&DAT_014188b3,
                         (tuple *)&local_80);
      puVar10 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = operator_new(0x18,(nothrow_t *)&std::nothrow);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        local_80 = ppVar1;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 0x28),ppVar1,(tuple *)&DAT_014188b3,
                           (tuple *)&local_80);
        *(undefined8 **)(lVar4 + 0x28) = puVar10;
      }
      pfVar9 = *(float **)(pAVar11 + 0x38);
      pfVar2 = *(float **)(pAVar11 + 0x40);
      if (pfVar2 != pfVar9) {
        local_78 = (piecewise_construct_t *)0x0;
        ppStack_70 = (piecewise_construct_t *)0x0;
        local_88 = (float *)0x0;
        local_80 = (piecewise_construct_t *)0x0;
        local_98 = (float *)0x0;
        local_90 = (float *)0x0;
        if (pfVar9 != pfVar2) {
LAB_00d0d730:
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,pfVar9);
          do {
            if (local_90 == local_88) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 1);
              if (local_90 != local_88) goto LAB_00d0d75c;
LAB_00d0d7b4:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 2);
              pfVar6 = local_90;
              if (local_90 != local_88) goto LAB_00d0d770;
LAB_00d0d7cc:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 3);
              if (local_90 != local_88) goto LAB_00d0d784;
LAB_00d0d7e4:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 4);
              ppVar1 = local_78;
            }
            else {
              pfVar6 = local_90 + 1;
              *local_90 = pfVar9[1];
              local_90 = pfVar6;
              if (pfVar6 == local_88) goto LAB_00d0d7b4;
LAB_00d0d75c:
              pfVar6 = local_90 + 1;
              *local_90 = pfVar9[2];
              local_90 = pfVar6;
              if (pfVar6 == local_88) goto LAB_00d0d7cc;
LAB_00d0d770:
              local_90 = pfVar6 + 1;
              *pfVar6 = pfVar9[3];
              if (local_90 == local_88) goto LAB_00d0d7e4;
LAB_00d0d784:
              *local_90 = pfVar9[4];
              local_90 = local_90 + 1;
              ppVar1 = local_78;
            }
            local_78 = ppVar1;
            if (pfVar2 + -5 == pfVar9) break;
            pfVar9 = pfVar9 + 5;
            if (ppVar1 == ppStack_70) goto LAB_00d0d730;
            local_78 = ppVar1 + 4;
            *(float *)ppVar1 = *pfVar9;
          } while( true );
        }
        pRVar5 = (Ref *)AnimationCurve<4>::create
                                  ((float *)local_80,local_98,
                                   (int)((ulong)((long)local_78 - (long)local_80) >> 2));
        puVar10[1] = pRVar5;
        if (pRVar5 != (Ref *)0x0) {
          Ref::retain(pRVar5);
        }
        if (local_98 != (float *)0x0) {
          local_90 = local_98;
          operator_delete(local_98);
        }
        if (local_80 != (piecewise_construct_t *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
      }
      pAVar7 = *(Animation3DData **)(pAVar11 + 8);
      if (*(Animation3DData **)(pAVar11 + 8) == (Animation3DData *)0x0) {
        pAVar7 = pAVar11 + 0x10;
        pAVar8 = *(Animation3DData **)pAVar7;
        if (*(Animation3DData **)pAVar8 != pAVar11) {
          do {
            lVar4 = *(long *)pAVar7;
            pAVar7 = (Animation3DData *)(lVar4 + 0x10);
            pAVar8 = *(Animation3DData **)pAVar7;
          } while (*(long *)pAVar8 != lVar4);
        }
      }
      else {
        do {
          pAVar8 = pAVar7;
          pAVar7 = *(Animation3DData **)pAVar8;
        } while (*(Animation3DData **)pAVar8 != (Animation3DData *)0x0);
      }
      pAVar11 = pAVar8;
    } while (pAVar8 != param_1 + 0x20);
  }
  if (*(Animation3DData **)(param_1 + 0x30) != param_1 + 0x38) {
    pAVar11 = *(Animation3DData **)(param_1 + 0x30);
    do {
      ppVar1 = (piecewise_construct_t *)(pAVar11 + 0x20);
      local_80 = ppVar1;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x28),ppVar1,(tuple *)&DAT_014188b3,
                         (tuple *)&local_80);
      puVar10 = *(undefined8 **)(lVar4 + 0x28);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = operator_new(0x18,(nothrow_t *)&std::nothrow);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        local_80 = ppVar1;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D::Curve*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 0x28),ppVar1,(tuple *)&DAT_014188b3,
                           (tuple *)&local_80);
        *(undefined8 **)(lVar4 + 0x28) = puVar10;
      }
      pfVar9 = *(float **)(pAVar11 + 0x38);
      pfVar2 = *(float **)(pAVar11 + 0x40);
      if (pfVar2 != pfVar9) {
        local_78 = (piecewise_construct_t *)0x0;
        ppStack_70 = (piecewise_construct_t *)0x0;
        local_88 = (float *)0x0;
        local_80 = (piecewise_construct_t *)0x0;
        local_98 = (float *)0x0;
        local_90 = (float *)0x0;
        if (pfVar9 != pfVar2) {
LAB_00d0d980:
          std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
          __push_back_slow_path<float_const&>
                    ((vector<float,std::__ndk1::allocator<float>> *)&local_80,pfVar9);
          do {
            if (local_90 == local_88) {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 1);
              pfVar6 = local_90;
              if (local_90 != local_88) goto LAB_00d0d9ac;
LAB_00d0d9f0:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 2);
              if (local_90 != local_88) goto LAB_00d0d9c0;
LAB_00d0da08:
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
              __push_back_slow_path<float_const&>
                        ((vector<float,std::__ndk1::allocator<float>> *)&local_98,pfVar9 + 3);
              ppVar1 = local_78;
            }
            else {
              pfVar6 = local_90 + 1;
              *local_90 = pfVar9[1];
              local_90 = pfVar6;
              if (pfVar6 == local_88) goto LAB_00d0d9f0;
LAB_00d0d9ac:
              local_90 = pfVar6 + 1;
              *pfVar6 = pfVar9[2];
              if (local_90 == local_88) goto LAB_00d0da08;
LAB_00d0d9c0:
              *local_90 = pfVar9[3];
              local_90 = local_90 + 1;
              ppVar1 = local_78;
            }
            local_78 = ppVar1;
            if (pfVar2 + -4 == pfVar9) break;
            pfVar9 = pfVar9 + 4;
            if (ppVar1 == ppStack_70) goto LAB_00d0d980;
            local_78 = ppVar1 + 4;
            *(float *)ppVar1 = *pfVar9;
          } while( true );
        }
        pRVar5 = (Ref *)AnimationCurve<3>::create
                                  ((float *)local_80,local_98,
                                   (int)((ulong)((long)local_78 - (long)local_80) >> 2));
        puVar10[2] = pRVar5;
        if (pRVar5 != (Ref *)0x0) {
          Ref::retain(pRVar5);
        }
        if (local_98 != (float *)0x0) {
          local_90 = local_98;
          operator_delete(local_98);
        }
        if (local_80 != (piecewise_construct_t *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
      }
      pAVar7 = *(Animation3DData **)(pAVar11 + 8);
      if (*(Animation3DData **)(pAVar11 + 8) == (Animation3DData *)0x0) {
        pAVar7 = pAVar11 + 0x10;
        pAVar8 = *(Animation3DData **)pAVar7;
        if (*(Animation3DData **)pAVar8 != pAVar11) {
          do {
            lVar4 = *(long *)pAVar7;
            pAVar7 = (Animation3DData *)(lVar4 + 0x10);
            pAVar8 = *(Animation3DData **)pAVar7;
          } while (*(long *)pAVar8 != lVar4);
        }
      }
      else {
        do {
          pAVar8 = pAVar7;
          pAVar7 = *(Animation3DData **)pAVar8;
        } while (*(Animation3DData **)pAVar8 != (Animation3DData *)0x0);
      }
      pAVar11 = pAVar8;
    } while (pAVar8 != param_1 + 0x38);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

