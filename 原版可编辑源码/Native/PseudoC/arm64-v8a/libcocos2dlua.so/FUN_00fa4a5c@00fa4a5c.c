
void FUN_00fa4a5c(long *param_1,long *param_2,long *param_3,ulong param_4,long *param_5,long param_6
                 )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (1 < param_4) {
    if (param_4 == 2) {
      lVar11 = *param_3;
      lVar16 = *param_1;
      local_80[0] = *(undefined8 *)(param_2[-1] + 0x88);
      local_70 = local_80;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
              ::
              __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                        ((Node **)(lVar11 + 0xa0),(piecewise_construct_t *)local_80,
                         (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
      local_88 = *(undefined8 *)(lVar16 + 0x88);
      iVar3 = *(int *)(lVar5 + 0x18);
      local_70 = &local_88;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
              ::
              __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                        ((Node **)(lVar11 + 0xa0),(piecewise_construct_t *)&local_88,
                         (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
      if (*(int *)(lVar5 + 0x18) < iVar3) {
        lVar5 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = lVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (plVar18 = param_1 + 1, plVar18 != param_2)) {
        lVar5 = 0;
        do {
          lVar16 = *plVar18;
          plVar7 = param_1;
          lVar11 = lVar5;
          if (plVar18 != param_1) {
            do {
              lVar12 = *param_3;
              local_80[0] = *(undefined8 *)(lVar16 + 0x88);
              lVar15 = *(long *)((long)param_1 + lVar11);
              local_70 = local_80;
              lVar6 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                      ::
                      __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                                ((Node **)(lVar12 + 0xa0),(piecewise_construct_t *)local_80,
                                 (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
              local_88 = *(undefined8 *)(lVar15 + 0x88);
              iVar3 = *(int *)(lVar6 + 0x18);
              local_70 = &local_88;
              lVar6 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                      ::
                      __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                                ((Node **)(lVar12 + 0xa0),(piecewise_construct_t *)&local_88,
                                 (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
              if (iVar3 <= *(int *)(lVar6 + 0x18)) {
                plVar7 = (long *)((long)param_1 + lVar11 + 8);
                break;
              }
              lVar6 = lVar11 + -8;
              ((undefined8 *)((long)param_1 + lVar11))[1] = *(undefined8 *)((long)param_1 + lVar11);
              lVar11 = lVar6;
            } while (lVar6 != -8);
          }
          plVar18 = plVar18 + 1;
          lVar5 = lVar5 + 8;
          *plVar7 = lVar16;
        } while (plVar18 != param_2);
      }
    }
    else {
      uVar19 = param_4 >> 1;
      plVar18 = param_1 + uVar19;
      if (param_6 < (long)param_4) {
        FUN_00fa4a5c(param_1,plVar18,param_3,uVar19,param_5,param_6);
        FUN_00fa4a5c(plVar18,param_2,param_3,param_4 - uVar19,param_5,param_6);
        FUN_00fa544c(param_1,plVar18,param_2,param_3,uVar19,param_4 - uVar19,param_5,param_6);
      }
      else {
        FUN_00fa4f24(param_1,plVar18,param_3,uVar19,param_5);
        plVar7 = param_5 + uVar19;
        FUN_00fa4f24(plVar18,param_2,param_3,param_4 - uVar19,plVar7);
        plVar18 = param_5 + param_4;
        plVar14 = param_1;
        plVar9 = plVar7;
        plVar17 = param_5;
        plVar10 = param_5;
        if (plVar7 == plVar18) {
LAB_00fa4dbc:
          if (plVar10 != plVar7) {
            uVar8 = (long)param_5 + (uVar19 * 8 - (long)plVar10) + -8;
            uVar19 = (uVar8 >> 3) + 1;
            if ((3 < uVar19) &&
               ((uVar8 = uVar8 & 0xfffffffffffffff8, (long *)((long)plVar10 + uVar8 + 8) <= param_1
                || ((long *)((long)param_1 + uVar8 + 8) <= plVar10)))) {
              uVar13 = uVar19 & 0x3ffffffffffffffc;
              lVar5 = 0;
              uVar8 = uVar13;
              do {
                puVar1 = (undefined8 *)((long)plVar10 + lVar5);
                uVar20 = *puVar1;
                uVar22 = puVar1[3];
                uVar21 = puVar1[2];
                puVar2 = (undefined8 *)((long)param_1 + lVar5);
                uVar8 = uVar8 - 4;
                lVar5 = lVar5 + 0x20;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar20;
                puVar2[3] = uVar22;
                puVar2[2] = uVar21;
              } while (uVar8 != 0);
              plVar10 = plVar10 + uVar13;
              param_1 = param_1 + (uVar19 & 0x1ffffffffffffffc);
              if (uVar19 == uVar13) goto LAB_00fa4a94;
            }
            do {
              plVar18 = plVar10 + 1;
              *param_1 = *plVar10;
              plVar10 = plVar18;
              param_1 = param_1 + 1;
            } while (plVar7 != plVar18);
          }
        }
        else {
          while( true ) {
            lVar11 = *param_3;
            lVar16 = *plVar17;
            local_80[0] = *(undefined8 *)(*plVar9 + 0x88);
            local_70 = local_80;
            lVar5 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar11 + 0xa0),(piecewise_construct_t *)local_80,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            local_88 = *(undefined8 *)(lVar16 + 0x88);
            iVar3 = *(int *)(lVar5 + 0x18);
            local_70 = &local_88;
            lVar5 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,int>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,int>>>
                    ::
                    __emplace_unique_key_args<cocos2d::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<cocos2d::Node*&&>,std::__ndk1::tuple<>>
                              ((Node **)(lVar11 + 0xa0),(piecewise_construct_t *)&local_88,
                               (tuple *)&DAT_0144ae1e,(tuple *)&local_70);
            if (*(int *)(lVar5 + 0x18) < iVar3) {
              lVar5 = *plVar9;
              plVar9 = plVar9 + 1;
              plVar10 = plVar17;
            }
            else {
              plVar10 = plVar17 + 1;
              lVar5 = *plVar17;
            }
            param_1 = plVar14 + 1;
            *plVar14 = lVar5;
            if (plVar10 == plVar7) break;
            plVar14 = param_1;
            plVar17 = plVar10;
            if (plVar9 == plVar18) goto LAB_00fa4dbc;
          }
          if (plVar9 == plVar18) goto LAB_00fa4a94;
          uVar8 = (long)param_5 + (param_4 * 8 - (long)plVar9) + -8;
          uVar19 = (uVar8 >> 3) + 1;
          if ((uVar19 < 4) ||
             ((uVar8 = uVar8 & 0xfffffffffffffff8, param_1 < (long *)((long)plVar9 + uVar8 + 8) &&
              (plVar9 < (long *)((long)param_1 + uVar8 + 8))))) goto LAB_00fa4e40;
          uVar13 = uVar19 & 0x3ffffffffffffffc;
          lVar5 = 0;
          uVar8 = uVar13;
          do {
            puVar1 = (undefined8 *)((long)plVar9 + lVar5);
            uVar20 = *puVar1;
            uVar22 = puVar1[3];
            uVar21 = puVar1[2];
            puVar2 = (undefined8 *)((long)param_1 + lVar5);
            uVar8 = uVar8 - 4;
            lVar5 = lVar5 + 0x20;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar20;
            puVar2[3] = uVar22;
            puVar2[2] = uVar21;
          } while (uVar8 != 0);
          plVar9 = plVar9 + uVar13;
          param_1 = param_1 + (uVar19 & 0x1ffffffffffffffc);
          if (uVar19 != uVar13) {
LAB_00fa4e40:
            do {
              plVar7 = plVar9 + 1;
              *param_1 = *plVar9;
              plVar9 = plVar7;
              param_1 = param_1 + 1;
            } while (plVar18 != plVar7);
          }
        }
      }
    }
  }
LAB_00fa4a94:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

