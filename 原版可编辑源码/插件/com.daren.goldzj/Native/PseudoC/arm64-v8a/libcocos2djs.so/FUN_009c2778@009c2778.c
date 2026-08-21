
void FUN_009c2778(ulong *param_1,ulong *param_2,long *param_3)

{
  basic_string *pbVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  long lVar4;
  __shared_weak_count *this;
  bool bVar5;
  __tree_node **pp_Var6;
  long *plVar7;
  __tree_node *p_Var8;
  long lVar9;
  __tree_node *p_Var10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  __tree_node *p_Var16;
  ulong uVar17;
  long *plVar18;
  byte local_e0 [16];
  void *local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  basic_regex<char,std::__ndk1::regex_traits<char>> abStack_b0 [48];
  __shared_weak_count *local_80;
  __tree_node *local_70;
  __tree_node *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_68 = (__tree_node *)0x0;
  local_60 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  local_70 = (__tree_node *)&local_68;
  if ((*param_2 & 1) == 0) {
    uVar17 = param_2[1];
    uVar11 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar17;
    *param_1 = uVar11;
    goto LAB_009c283c;
  }
  uVar11 = param_2[1];
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar12 = (void *)param_2[2];
  if (uVar11 < 0x17) {
    pbVar14 = (byte *)((long)param_1 + 1);
    *(byte *)param_1 = (byte)((int)uVar11 << 1);
    if (uVar11 != 0) goto LAB_009c2828;
  }
  else {
    uVar17 = uVar11 + 0x10 & 0xfffffffffffffff0;
    pbVar14 = operator_new(uVar17);
    param_1[1] = uVar11;
    param_1[2] = (ulong)pbVar14;
    *param_1 = uVar17 | 1;
LAB_009c2828:
    memcpy(pbVar14,pvVar12,uVar11);
  }
  pbVar14[uVar11] = 0;
LAB_009c283c:
  lVar9 = *param_3;
  if (0 < (int)((ulong)(param_3[1] - lVar9) >> 3)) {
    lVar13 = (param_3[1] - lVar9) * 0x20000000 >> 0x20;
    while( true ) {
      lVar13 = lVar13 + -1;
      puVar15 = *(undefined8 **)(lVar9 + lVar13 * 8);
      plVar18 = (long *)*puVar15;
      while (plVar18 != puVar15 + 1) {
        pbVar1 = (basic_string *)(plVar18 + 4);
        pp_Var6 = (__tree_node **)
                  std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                              *)&local_70,pbVar1);
        if (((__tree_node *)&local_68 == (__tree_node *)pp_Var6) &&
           ((*(uint *)(plVar18 + 8) & 0xfffffffe) == 2)) {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Value_const&>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                      *)&local_70,pbVar1,pbVar1,(Value *)(plVar18 + 7));
        }
        plVar7 = (long *)plVar18[1];
        if ((long *)plVar18[1] == (long *)0x0) {
          plVar7 = plVar18 + 2;
                    /* catch() { ... } // from try @ 009c2420 with catch @ 009c28d8 */
          bVar5 = *(long **)*plVar7 != plVar18;
          plVar18 = (long *)*plVar7;
                    /* catch() { ... } // from try @ 009c2414 with catch @ 009c28dc */
          if (bVar5) {
            do {
                    /* catch() { ... } // from try @ 009c23f4 with catch @ 009c28e0 */
              lVar9 = *plVar7;
              plVar7 = (long *)(lVar9 + 0x10);
              plVar18 = (long *)*plVar7;
                    /* catch() { ... } // from try @ 009c2430 with catch @ 009c28f0 */
            } while (*plVar18 != lVar9);
          }
        }
        else {
          do {
            plVar18 = plVar7;
            plVar7 = (long *)*plVar18;
          } while ((long *)*plVar18 != (long *)0x0);
        }
      }
      if (lVar13 < 1) break;
      lVar9 = *param_3;
    }
    if (local_70 != (__tree_node *)&local_68) {
      p_Var16 = local_70;
      do {
        while( true ) {
          std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
          basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    (abStack_b0,p_Var16 + 0x20,0);
          cocos2d::Value::asString();
          local_c8 = 0;
          uStack_c0 = 0;
                    /* try { // try from 009c2948 to 00ac299f has its CatchHandler @ 009c2948
                       catch() { ... } // from try @ 009c2948 with catch @ 009c2948
                       catch() { ... } // from try @ 009c2ba0 with catch @ 009c2948 */
          pbVar14 = (byte *)((long)param_1 + 1);
          uVar11 = (ulong)(byte)((byte)*param_1 >> 1);
          if (((byte)*param_1 & 1) != 0) {
            pbVar14 = (byte *)param_1[2];
            uVar11 = param_1[1];
          }
          local_b8 = 0;
          pvVar12 = (void *)((ulong)local_e0 | 1);
          if ((local_e0[0] & 1) != 0) {
            pvVar12 = local_d0;
          }
          std::__ndk1::
          regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::regex_traits<char>,char>
                    (&local_c8,pbVar14,pbVar14 + uVar11,abStack_b0,pvVar12,0);
          if ((*param_1 & 1) == 0) {
            *(undefined2 *)param_1 = 0;
          }
          else {
            *(undefined1 *)param_1[2] = 0;
            param_1[1] = 0;
            if ((*param_1 & 1) != 0) {
                    /* try { // try from 009c29a0 to 00ac29b7 has its CatchHandler @ 009c2c20 */
              operator_delete((void *)param_1[2]);
              *param_1 = 0;
            }
          }
          uVar17 = local_b8;
          uVar11 = uStack_c0;
          uStack_c0 = 0;
          local_b8 = 0;
          param_1[1] = uVar11;
          *param_1 = local_c8;
                    /* try { // try from 009c29c0 to 00ac29cb has its CatchHandler @ 009c2c1c */
          param_1[2] = uVar17;
          local_c8 = 0;
          if ((local_e0[0] & 1) != 0) {
                    /* try { // try from 009c29cc to 00ac29d7 has its CatchHandler @ 009c2c18 */
            operator_delete(local_d0);
          }
          this = local_80;
                    /* try { // try from 009c29d8 to 00ac2b9f has its CatchHandler @ 009c2c30 */
          if (local_80 != (__shared_weak_count *)0x0) {
            p_Var2 = local_80 + 8;
            do {
              lVar9 = *(long *)p_Var2;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
              if (bVar5) {
                *(long *)p_Var2 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*(long *)local_80 + 0x10))(local_80);
              std::__ndk1::__shared_weak_count::__release_weak(this);
            }
          }
          std::__ndk1::locale::~locale((locale *)abStack_b0);
          p_Var8 = *(__tree_node **)(p_Var16 + 8);
          if (*(__tree_node **)(p_Var16 + 8) == (__tree_node *)0x0) break;
          do {
            p_Var16 = p_Var8;
            p_Var8 = *(__tree_node **)p_Var16;
          } while (*(__tree_node **)p_Var16 != (__tree_node *)0x0);
LAB_009c2a58:
          if (p_Var16 == (__tree_node *)&local_68) goto LAB_009c2a70;
        }
        p_Var8 = p_Var16 + 0x10;
        p_Var10 = *(__tree_node **)p_Var8;
        if (*(__tree_node **)p_Var10 != p_Var16) {
          do {
            lVar9 = *(long *)p_Var8;
            p_Var8 = (__tree_node *)(lVar9 + 0x10);
            p_Var16 = *(__tree_node **)p_Var8;
          } while (*(long *)p_Var16 != lVar9);
          goto LAB_009c2a58;
        }
        p_Var16 = p_Var10;
      } while (p_Var10 != (__tree_node *)&local_68);
    }
  }
LAB_009c2a70:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
             *)&local_70,local_68);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

