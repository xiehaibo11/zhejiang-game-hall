
void FUN_00fa4f24(long *param_1,long *param_2,long *param_3,ulong param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_4 != 0) {
    if (param_4 == 2) {
      lVar14 = *param_3;
      lVar5 = *param_1;
      local_80[0] = *(undefined8 *)(param_2[-1] + 0x88);
      local_70 = local_80;
      lVar15 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
               ::
               __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                         ((Node **)(lVar14 + 0xa0),(piecewise_construct_t *)local_80,
                          (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
      local_88 = *(undefined8 *)(lVar5 + 0x88);
      iVar3 = *(int *)(lVar15 + 0x18);
      local_70 = &local_88;
      lVar15 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
               ::
               __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                         ((Node **)(lVar14 + 0xa0),(piecewise_construct_t *)&local_88,
                          (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
      if (*(int *)(lVar15 + 0x18) < iVar3) {
        *param_5 = param_2[-1];
        lVar15 = *param_1;
      }
      else {
        *param_5 = *param_1;
        lVar15 = param_2[-1];
      }
      param_5[1] = lVar15;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        plVar10 = param_1 + 1;
        lVar15 = *param_1;
        *param_5 = lVar15;
        if (plVar10 != param_2) {
          lVar14 = 0;
          plVar16 = param_5;
          do {
            lVar8 = *param_3;
            local_80[0] = *(undefined8 *)(*plVar10 + 0x88);
            local_70 = local_80;
            plVar7 = plVar16 + 1;
            lVar5 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)local_80,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            local_88 = *(undefined8 *)(lVar15 + 0x88);
            iVar3 = *(int *)(lVar5 + 0x18);
            local_70 = &local_88;
            lVar15 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                     ::
                     __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                               ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)&local_88,
                                (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            if (*(int *)(lVar15 + 0x18) < iVar3) {
              plVar16[1] = *plVar16;
              plVar12 = param_5;
              if (plVar16 != param_5) {
                lVar15 = 0;
                do {
                  lVar8 = *param_3;
                  plVar12 = (long *)((long)plVar16 + lVar15);
                  lVar11 = plVar12[-1];
                  local_80[0] = *(undefined8 *)(*plVar10 + 0x88);
                  local_70 = local_80;
                  lVar5 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                          ::
                          __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                                    ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)local_80,
                                     (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
                  local_88 = *(undefined8 *)(lVar11 + 0x88);
                  iVar3 = *(int *)(lVar5 + 0x18);
                  local_70 = &local_88;
                  lVar5 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                          ::
                          __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                                    ((Node **)(lVar8 + 0xa0),(piecewise_construct_t *)&local_88,
                                     (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
                  if (iVar3 <= *(int *)(lVar5 + 0x18)) break;
                  lVar15 = lVar15 + -8;
                  *plVar12 = plVar12[-1];
                  plVar12 = param_5;
                } while (lVar14 != lVar15);
              }
              *plVar12 = *plVar10;
            }
            else {
              *plVar7 = *plVar10;
            }
            plVar10 = plVar10 + 1;
            if (plVar10 == param_2) break;
            lVar15 = *plVar7;
            lVar14 = lVar14 + -8;
            plVar16 = plVar7;
          } while( true );
        }
      }
    }
    else {
      uVar13 = param_4 >> 1;
      plVar10 = param_1 + uVar13;
      FUN_00fa4a5c(param_1,plVar10,param_3,uVar13,param_5,uVar13);
      FUN_00fa4a5c(plVar10,param_2,param_3,param_4 - uVar13,param_5 + uVar13,param_4 - uVar13);
      plVar16 = plVar10;
      if (uVar13 != 0) {
        plVar12 = param_5;
        plVar7 = param_1;
        do {
          if (plVar16 == param_2) {
            if (plVar7 != plVar10) {
              uVar6 = (long)param_1 + (uVar13 * 8 - (long)plVar7) + -8;
              uVar13 = (uVar6 >> 3) + 1;
              if ((3 < uVar13) &&
                 ((uVar6 = uVar6 & 0xfffffffffffffff8, (long *)((long)plVar7 + uVar6 + 8) <= plVar12
                  || ((long *)((long)plVar12 + uVar6 + 8) <= plVar7)))) {
                uVar9 = uVar13 & 0x3ffffffffffffffc;
                lVar15 = 0;
                uVar6 = uVar9;
                do {
                  puVar1 = (undefined8 *)((long)plVar7 + lVar15);
                  uVar18 = *puVar1;
                  uVar20 = puVar1[3];
                  uVar19 = puVar1[2];
                  puVar2 = (undefined8 *)((long)plVar12 + lVar15);
                  uVar6 = uVar6 - 4;
                  lVar15 = lVar15 + 0x20;
                  puVar2[1] = puVar1[1];
                  *puVar2 = uVar18;
                  puVar2[3] = uVar20;
                  puVar2[2] = uVar19;
                } while (uVar6 != 0);
                plVar7 = plVar7 + uVar9;
                plVar12 = plVar12 + (uVar13 & 0x1ffffffffffffffc);
                if (uVar13 == uVar9) goto LAB_00fa51b0;
              }
              do {
                plVar16 = plVar7 + 1;
                *plVar12 = *plVar7;
                plVar7 = plVar16;
                plVar12 = plVar12 + 1;
              } while (plVar10 != plVar16);
            }
            goto LAB_00fa51b0;
          }
          lVar14 = *param_3;
          lVar5 = *plVar7;
          local_80[0] = *(undefined8 *)(*plVar16 + 0x88);
          local_70 = local_80;
          lVar15 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                   ::
                   __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                             ((Node **)(lVar14 + 0xa0),(piecewise_construct_t *)local_80,
                              (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
          local_88 = *(undefined8 *)(lVar5 + 0x88);
          iVar3 = *(int *)(lVar15 + 0x18);
          local_70 = &local_88;
          lVar15 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                   ::
                   __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                             ((Node **)(lVar14 + 0xa0),(piecewise_construct_t *)&local_88,
                              (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
          if (*(int *)(lVar15 + 0x18) < iVar3) {
            lVar15 = *plVar16;
            plVar16 = plVar16 + 1;
            plVar17 = plVar7;
          }
          else {
            plVar17 = plVar7 + 1;
            lVar15 = *plVar7;
          }
          param_5 = plVar12 + 1;
          *plVar12 = lVar15;
          plVar12 = param_5;
          plVar7 = plVar17;
        } while (plVar17 != plVar10);
      }
      if (plVar16 != param_2) {
        uVar6 = (long)param_2 + (-8 - (long)plVar16);
        uVar13 = (uVar6 >> 3) + 1;
        if ((3 < uVar13) &&
           ((lVar15 = (uVar6 & 0xfffffffffffffff8) + 8, (long *)((long)plVar16 + lVar15) <= param_5
            || ((long *)((long)param_5 + lVar15) <= plVar16)))) {
          uVar9 = uVar13 & 0x3ffffffffffffffc;
          plVar10 = plVar16 + 2;
          plVar16 = plVar16 + uVar9;
          plVar7 = param_5 + 2;
          uVar6 = uVar9;
          do {
            plVar12 = plVar10 + -1;
            lVar15 = plVar10[-2];
            lVar5 = plVar10[1];
            lVar14 = *plVar10;
            plVar10 = plVar10 + 4;
            uVar6 = uVar6 - 4;
            plVar7[-1] = *plVar12;
            plVar7[-2] = lVar15;
            plVar7[1] = lVar5;
            *plVar7 = lVar14;
            plVar7 = plVar7 + 4;
          } while (uVar6 != 0);
          param_5 = param_5 + uVar9;
          if (uVar13 == uVar9) goto LAB_00fa51b0;
        }
        do {
          plVar10 = plVar16 + 1;
          *param_5 = *plVar16;
          param_5 = param_5 + 1;
          plVar16 = plVar10;
        } while (param_2 != plVar10);
      }
    }
  }
LAB_00fa51b0:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

