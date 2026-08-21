
undefined4 FUN_008a3454(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  ulong __n;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  size_t sVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_98;
  ulong uStack_90;
  long *local_88;
  ulong local_80;
  ulong uStack_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,"");
  pcVar9 = (char *)tolua_tostring(param_1,2,0);
  sVar10 = strlen(pcVar9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80
         ,pcVar9,sVar10);
  uVar5 = local_80;
  plVar2 = (long *)((ulong)&local_80 | 1);
  uVar17 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    plVar2 = local_70;
    uVar17 = uStack_78;
  }
  __n = uVar17 - 2;
  if (1 < (long)uVar17) {
    plVar1 = (long *)((long)plVar2 + uVar17);
    plVar11 = plVar2;
    uVar15 = uVar17;
    do {
      if ((uVar15 - 1 == 0) || (plVar11 = memchr(plVar11,0x43,uVar15 - 1), plVar11 == (long *)0x0))
      break;
      if ((short)*plVar11 == 0x4343) {
        if ((plVar11 != plVar1) && (plVar13 = plVar2, uVar15 = uVar17, plVar11 == plVar2))
        goto joined_r0x008a353c;
        break;
      }
      plVar11 = (long *)((long)plVar11 + 1);
      uVar15 = (long)plVar1 - (long)plVar11;
    } while (1 < (long)uVar15);
  }
LAB_008a37a8:
  pcVar9 = (char *)tolua_tostring(param_1,2,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,pcVar9);
  lVar14 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                       *)g_typeCast,(basic_string *)&local_98);
  if (lVar14 != 0) {
    if ((*(byte *)(lVar14 + 0x28) & 1) == 0) {
      lVar14 = lVar14 + 0x29;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x38);
    }
    tolua_pushstring(param_1,lVar14);
    lua_insert(param_1,2);
    lua_settop(param_1,0xfffffffe);
  }
  uVar8 = tolua_bnd_cast(param_1);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  goto joined_r0x008a3998;
joined_r0x008a353c:
  plVar11 = plVar2;
  uVar16 = uVar17;
  if (((long)uVar15 < 0x13) ||
     ((uVar15 - 0x12 == 0 || (plVar12 = memchr(plVar13,0x43,uVar15 - 0x12), plVar12 == (long *)0x0))
     )) goto joined_r0x008a35a4;
  iVar7 = memcmp(plVar12,"CCBAnimationManager",0x13);
  if (iVar7 == 0) {
    if ((plVar12 != plVar1) && ((long)plVar12 - (long)plVar2 != -1)) goto LAB_008a37a8;
    goto joined_r0x008a35a4;
  }
  plVar13 = (long *)((long)plVar12 + 1);
  uVar15 = (long)plVar1 - ((long)plVar12 + 1);
  goto joined_r0x008a353c;
joined_r0x008a35a4:
  plVar13 = plVar2;
  uVar15 = uVar17;
  if (((long)uVar16 < 8) ||
     ((uVar16 - 7 == 0 || (plVar12 = memchr(plVar11,0x43,uVar16 - 7), plVar12 == (long *)0x0))))
  goto joined_r0x008a360c;
  if (*plVar12 == 0x676e697274534343) {
    if ((plVar12 != plVar1) && ((long)plVar12 - (long)plVar2 != -1)) goto LAB_008a37a8;
    goto joined_r0x008a360c;
  }
  plVar11 = (long *)((long)plVar12 + 1);
  uVar16 = (long)plVar1 - ((long)plVar12 + 1);
  goto joined_r0x008a35a4;
joined_r0x008a360c:
  if (((long)uVar15 < 7) ||
     ((uVar15 - 6 == 0 || (plVar11 = memchr(plVar13,0x43,uVar15 - 6), plVar11 == (long *)0x0))))
  goto LAB_008a3670;
  iVar7 = memcmp(plVar11,(void *)0x129ccb1,7);
  if (iVar7 != 0) {
    plVar13 = (long *)((long)plVar11 + 1);
    uVar15 = (long)plVar1 - ((long)plVar11 + 1);
    goto joined_r0x008a360c;
  }
  if ((plVar11 != plVar1) && ((long)plVar11 - (long)plVar2 != -1)) goto LAB_008a37a8;
LAB_008a3670:
  plVar13 = plVar2;
  uVar16 = uVar17;
  plVar11 = plVar2;
  uVar15 = uVar17;
  if (5 < (long)uVar17) {
    do {
      plVar12 = plVar2;
      uVar4 = uVar17;
      if ((uVar16 - 5 == 0) || (plVar13 = memchr(plVar13,0x43,uVar16 - 5), plVar13 == (long *)0x0))
      break;
      iVar7 = memcmp(plVar13,"CCRect",6);
      if (iVar7 == 0) {
        if ((plVar13 != plVar1) && ((long)plVar13 - (long)plVar2 != -1)) goto LAB_008a37a8;
        break;
      }
      uVar16 = (long)plVar1 - ((long)plVar13 + 1);
      plVar13 = (long *)((long)plVar13 + 1);
    } while (5 < (long)uVar16);
    do {
      if ((((long)uVar4 < 6) || (uVar4 - 5 == 0)) ||
         (plVar13 = memchr(plVar12,0x43,uVar4 - 5), plVar13 == (long *)0x0)) break;
      iVar7 = memcmp(plVar13,"CCSize",6);
      if (iVar7 == 0) {
        if ((plVar13 != plVar1) && ((long)plVar13 - (long)plVar2 != -1)) goto LAB_008a37a8;
        break;
      }
      plVar12 = (long *)((long)plVar13 + 1);
      uVar4 = (long)plVar1 - ((long)plVar13 + 1);
    } while( true );
  }
  do {
    if ((((long)uVar15 < 7) || (uVar15 - 6 == 0)) ||
       (plVar13 = memchr(plVar11,0x43,uVar15 - 6), plVar13 == (long *)0x0)) goto LAB_008a3870;
    iVar7 = memcmp(plVar13,"CCArray",7);
    if (iVar7 == 0) break;
    plVar11 = (long *)((long)plVar13 + 1);
    uVar15 = (long)plVar1 - ((long)plVar13 + 1);
  } while( true );
  if ((plVar13 != plVar1) && ((long)plVar13 - (long)plVar2 != -1)) goto LAB_008a37a8;
LAB_008a3870:
  uStack_90 = 0;
  local_88 = (long *)0x0;
  local_98 = 0;
  if (uVar17 < 2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    plVar11 = (long *)((ulong)&local_98 | 1);
    local_98 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_008a38c8;
  }
  else {
    uVar17 = uVar17 + 0xe & 0xfffffffffffffff0;
    plVar11 = operator_new(uVar17);
    local_98 = uVar17 | 1;
    uStack_90 = __n;
    local_88 = plVar11;
LAB_008a38c8:
    memcpy(plVar11,(short *)((long)plVar2 + 2),__n);
  }
  *(undefined1 *)((long)plVar11 + __n) = 0;
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)local_70 = 0;
    uStack_78 = 0;
    if (((byte)local_80._0_1_ & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  iVar7 = lua_type(param_1,1);
  if (iVar7 == 2) {
    lVar14 = tolua_touserdata(param_1,1,0);
  }
  else {
    lVar14 = tolua_tousertype(param_1,1,0);
  }
  if (lVar14 == 0) {
LAB_008a3988:
    lua_pushnil(param_1);
  }
  else {
    bVar6 = (local_80 & 1) != 0;
    uVar17 = local_80 >> 1 & 0x7f;
    if (bVar6) {
      uVar17 = uStack_78;
    }
    if (uVar17 == 0) goto LAB_008a3988;
    plVar2 = (long *)((ulong)&local_80 | 1);
    if (bVar6) {
      plVar2 = local_70;
    }
    tolua_pushusertype(param_1,lVar14,plVar2);
  }
  uVar8 = 1;
joined_r0x008a3998:
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

