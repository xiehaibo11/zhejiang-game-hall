
/* cocos2d::PUMaterialCache::loadMaterialsFromSearchPaths(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 cocos2d::PUMaterialCache::loadMaterialsFromSearchPaths(basic_string *param_1)

{
  __ndk1 *p_Var1;
  ulong uVar2;
  void *__s1;
  __ndk1 *p_Var3;
  __ndk1 _Var4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__n;
  long lVar5;
  bool bVar6;
  int iVar7;
  __ndk1 *p_Var8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  ulong *puVar13;
  PUScriptCompiler *this;
  list *plVar14;
  PUTranslateManager *this_00;
  __ndk1 *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x2;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  ulong local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_90;
  undefined1 *local_88;
  ulong local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar15 = *(ulong *)(in_x1 + 8);
  p_Var3 = *(__ndk1 **)(in_x1 + 0x10);
  if (((byte)*in_x1 & 1) == 0) {
    p_Var3 = in_x1 + 1;
    uVar15 = (ulong)((byte)*in_x1 >> 1);
  }
  if (6 < (long)uVar15) {
    p_Var1 = p_Var3 + uVar15;
    p_Var8 = p_Var3;
    do {
      in_x2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (uVar15 - 6);
      if ((in_x2 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)0x0) || (p_Var8 = memchr(p_Var8,0x61,(size_t)in_x2), p_Var8 == (__ndk1 *)0x0)
         ) break;
      in_x2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x7;
      iVar7 = memcmp(p_Var8,"assets/",7);
      if (iVar7 == 0) {
        if (p_Var8 != p_Var1) {
          lVar16 = (long)p_Var8 - (long)p_Var3;
          goto LAB_00e404b4;
        }
        break;
      }
      p_Var8 = p_Var8 + 1;
      uVar15 = (long)p_Var1 - (long)p_Var8;
    } while (6 < (long)uVar15);
  }
  lVar16 = -1;
LAB_00e404b4:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(basic_string *)in_x1);
  if (lVar16 == -1) goto LAB_00e405b0;
  lVar9 = __strlen_chk("assets/",8);
  pbStack_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
  ;
  local_88 = (undefined1 *)0x0;
  local_98 = 0;
  _Var4 = *in_x1;
  uVar15 = lVar9 + lVar16;
  uVar2 = (ulong)((byte)_Var4 >> 1);
  if (((byte)_Var4 & 1) != 0) {
    uVar2 = *(ulong *)(in_x1 + 8);
  }
  __n = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (uVar2 - uVar15);
  if (uVar2 < uVar15) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  p_Var3 = in_x1 + 1;
  if (((byte)_Var4 & 1) != 0) {
    p_Var3 = *(__ndk1 **)(in_x1 + 0x10);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x17)
  {
    puVar17 = (undefined1 *)((ulong)&local_98 | 1);
    local_98 = (ulong)(byte)((int)__n << 1);
    if (__n != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
       ) goto LAB_00e4055c;
  }
  else {
    puVar17 = operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
    local_98 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
    pbStack_90 = __n;
    local_88 = puVar17;
LAB_00e4055c:
    in_x2 = __n;
    memcpy(puVar17,p_Var3 + uVar15,(size_t)__n);
  }
  puVar17[(long)__n] = 0;
  if (((byte)local_80._0_1_ & 1) != 0) {
    *local_70 = 0;
    pbStack_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
    if (((byte)local_80._0_1_ & 1) != 0) {
      operator_delete(local_70);
    }
  }
  pbStack_78 = pbStack_90;
  local_80 = local_98;
  local_70 = local_88;
LAB_00e405b0:
  puVar17 = (undefined1 *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    puVar17 = local_70;
  }
  uVar10 = AAssetManager_openDir(FileUtilsAndroid::assetmanager,puVar17);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,"/");
LAB_00e40604:
  do {
    pcVar11 = (char *)AAssetDir_getNextFileName(uVar10);
    if (pcVar11 == (char *)0x0) {
      AAssetDir_close(uVar10);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    plVar12 = (long *)FileUtils::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_c8,pcVar11);
    (**(code **)(*plVar12 + 0x138))(&local_b0,plVar12,local_c8);
    uVar2 = local_b0;
    uVar15 = local_b0 >> 1 & 0x7f;
    if ((local_b0 & 1) != 0) {
      uVar15 = uStack_a8;
    }
    if (uVar15 == 9) {
      in_x2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x9;
      __s1 = (void *)((ulong)&local_b0 | 1);
      if ((local_b0 & 1) != 0) {
        __s1 = local_a0;
      }
      iVar7 = memcmp(__s1,".material",9);
      bVar6 = iVar7 == 0;
    }
    else {
      bVar6 = false;
    }
    if ((uVar2 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((byte)local_c8[0] & 1) != 0) goto LAB_00e406a4;
  } while (!bVar6);
  goto LAB_00e406b0;
LAB_00e406a4:
  operator_delete(local_b8);
  if (bVar6) {
LAB_00e406b0:
    std::__ndk1::operator+(in_x1,(basic_string *)&local_98,(basic_string *)in_x2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_e0,pcVar11);
    uVar15 = (ulong)((byte)local_e0[0] >> 1);
    pcVar11 = (char *)((ulong)local_e0 | 1);
    if (((byte)local_e0[0] & 1) != 0) {
      uVar15 = local_d8;
      pcVar11 = local_d0;
    }
    puVar13 = (ulong *)std::__ndk1::
                       basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::append(local_c8,pcVar11,uVar15);
    local_a0 = (void *)puVar13[2];
    uStack_a8 = puVar13[1];
    local_b0 = *puVar13;
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    if (((byte)local_e0[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00e40804 with catch @ 00e4070c */
      operator_delete(local_d0);
    }
    if (((byte)local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    local_c8[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                  0x1;
    this = (PUScriptCompiler *)PUScriptCompiler::Instance();
    in_x2 = local_c8;
    plVar14 = (list *)PUScriptCompiler::compile(this,(basic_string *)&local_b0,(bool *)in_x2);
    if (((plVar14 != (list *)0x0) && (*(long *)(plVar14 + 0x10) != 0)) &&
       (local_c8[0] !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0)) {
      this_00 = (PUTranslateManager *)PUTranslateManager::Instance();
      PUTranslateManager::translateMaterialSystem(this_00,(PUMaterialCache *)param_1,plVar14);
      in_x2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              plVar14;
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  goto LAB_00e40604;
}

