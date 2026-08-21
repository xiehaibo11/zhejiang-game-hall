
/* fairygui::UIPackage::getItemByURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

basic_string * fairygui::UIPackage::getItemByURL(basic_string *param_1)

{
  size_t __n;
  basic_string bVar1;
  long lVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  basic_string *pbVar6;
  ulong uVar7;
  basic_string *__s;
  ulong uVar8;
  long lVar9;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  __n = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n != 0) {
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    pvVar4 = memchr(pbVar6,0x2f,__n);
    __s = (basic_string *)0x0;
    if ((pvVar4 == (void *)0x0) || (lVar9 = (long)pvVar4 - (long)pbVar6, lVar9 == -1))
    goto LAB_00aa1280;
    uVar8 = lVar9 + 2;
    uVar7 = __n - uVar8;
    if ((__n < uVar8 || uVar7 == 0) || (uVar7 == 0)) {
LAB_00aa108c:
      if (__n < 0xe) goto LAB_00aa127c;
      __s = (basic_string *)(__n - 5);
      if ((basic_string *)0x7 < __s) {
        __s = (basic_string *)0x8;
      }
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (ulong)(byte)((int)__s << 1);
      __memcpy_chk((ulong)&local_80 | 1,pbVar6 + 5,__s,0x17);
      __s[(ulong)&local_80 | 1] = (basic_string)0x0;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
                          *)&_packageInstById,(basic_string *)&local_80);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0)) goto LAB_00aa1264;
      local_90 = 0;
      local_88 = (void *)0x0;
      local_98 = 0;
      bVar1 = *param_1;
      uVar8 = (ulong)((byte)bVar1 >> 1);
      if (((byte)bVar1 & 1) != 0) {
        uVar8 = *(ulong *)(param_1 + 8);
      }
      if (uVar8 < 0xd) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar7 = uVar8 - 0xd;
      pbVar6 = param_1 + 1;
      if (((byte)bVar1 & 1) != 0) {
        pbVar6 = *(basic_string **)(param_1 + 0x10);
      }
      if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar7 < 0x17) {
        pvVar4 = (void *)((ulong)&local_98 | 1);
        local_98 = (ulong)(byte)((int)uVar7 << 1);
        if (uVar7 != 0) goto LAB_00aa116c;
      }
      else {
        uVar8 = uVar8 + 3 & 0xfffffffffffffff0;
        pvVar4 = operator_new(uVar8);
        local_98 = uVar8 | 1;
        local_90 = uVar7;
        local_88 = pvVar4;
LAB_00aa116c:
        memcpy(pvVar4,pbVar6 + 0xd,uVar7);
      }
      *(undefined1 *)((long)pvVar4 + uVar7) = 0;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                          *)(lVar9 + 0x88),(basic_string *)&local_98);
      if (lVar9 == 0) {
LAB_00aa12f8:
        __s = (basic_string *)0x0;
      }
      else {
LAB_00aa1190:
        __s = *(basic_string **)(lVar9 + 0x28);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      bVar3 = false;
    }
    else {
      __s = pbVar6 + uVar8;
      pvVar4 = memchr(__s,0x2f,uVar7);
      if ((pvVar4 == (void *)0x0) ||
         (uVar8 = (long)pvVar4 - (long)pbVar6, uVar8 == 0xffffffffffffffff)) goto LAB_00aa108c;
      uVar5 = (uVar8 - lVar9) - 2;
      if (uVar5 <= uVar7) {
        uVar7 = uVar5;
      }
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar7 < 0x17) {
        pvVar4 = (void *)((ulong)&local_80 | 1);
        local_80 = (ulong)(byte)((int)uVar7 << 1);
        if (uVar7 != 0) goto LAB_00aa11d4;
      }
      else {
        uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
        pvVar4 = operator_new(uVar5);
        local_80 = uVar5 | 1;
        local_78 = uVar7;
        local_70 = pvVar4;
LAB_00aa11d4:
        memcpy(pvVar4,__s,uVar7);
      }
      *(undefined1 *)((long)pvVar4 + uVar7) = 0;
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
                          *)&_packageInstByName,(basic_string *)&local_80);
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
        local_90 = 0;
        local_88 = (void *)0x0;
        local_98 = 0;
        bVar1 = *param_1;
        uVar7 = (ulong)((byte)bVar1 >> 1);
        if (((byte)bVar1 & 1) != 0) {
          uVar7 = *(ulong *)(param_1 + 8);
        }
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar7 = uVar7 - (uVar8 + 1);
        pbVar6 = param_1 + 1;
        if (((byte)bVar1 & 1) != 0) {
          pbVar6 = *(basic_string **)(param_1 + 0x10);
        }
        if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar7 < 0x17) {
          pvVar4 = (void *)((ulong)&local_98 | 1);
          local_98 = (ulong)(byte)((int)uVar7 << 1);
          if (uVar7 != 0) goto LAB_00aa12d4;
        }
        else {
          uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
          pvVar4 = operator_new(uVar5);
          local_98 = uVar5 | 1;
          local_90 = uVar7;
          local_88 = pvVar4;
LAB_00aa12d4:
          memcpy(pvVar4,pbVar6 + uVar8 + 1,uVar7);
        }
        *(undefined1 *)((long)pvVar4 + uVar7) = 0;
        lVar9 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::PackageItem*>>>
                            *)(lVar9 + 0xb0),(basic_string *)&local_98);
        if (lVar9 != 0) goto LAB_00aa1190;
        goto LAB_00aa12f8;
      }
LAB_00aa1264:
      bVar3 = true;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (!bVar3) goto LAB_00aa1280;
  }
LAB_00aa127c:
  __s = (basic_string *)0x0;
LAB_00aa1280:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return __s;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

