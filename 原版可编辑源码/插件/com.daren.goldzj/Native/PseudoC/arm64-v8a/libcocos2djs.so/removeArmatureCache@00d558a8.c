
/* dragonBones::ArmatureCacheMgr::removeArmatureCache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
dragonBones::ArmatureCacheMgr::removeArmatureCache(ArmatureCacheMgr *this,basic_string *param_1)

{
  size_t __n;
  void *pvVar1;
  basic_string *__s2;
  basic_string bVar2;
  long lVar3;
  size_t __n_00;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  void *local_80 [2];
  char local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long **)(this + 0x10) != (long *)0x0) {
    plVar7 = *(long **)(this + 0x10);
    do {
      while( true ) {
        if ((*(byte *)(plVar7 + 2) & 1) == 0) {
          pvVar9 = (void *)((long)plVar7 + 0x11);
          uVar6 = (ulong)(*(byte *)(plVar7 + 2) >> 1);
        }
        else {
          uVar6 = plVar7[3];
          pvVar9 = (void *)plVar7[4];
        }
        __s2 = param_1 + 1;
        __n_00 = (ulong)((byte)*param_1 >> 1);
        if (((byte)*param_1 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
          __n_00 = *(size_t *)(param_1 + 8);
        }
        if (__n_00 == 0) break;
        if ((long)__n_00 <= (long)uVar6) {
          bVar2 = *__s2;
          pvVar1 = (void *)((long)pvVar9 + uVar6);
          pvVar5 = pvVar9;
          do {
            __n = (uVar6 - __n_00) + 1;
            if ((__n == 0) || (pvVar5 = memchr(pvVar5,(uint)(byte)bVar2,__n), pvVar5 == (void *)0x0)
               ) break;
            iVar4 = memcmp(pvVar5,__s2,__n_00);
            if (iVar4 == 0) {
              if ((pvVar5 != pvVar1) && ((long)pvVar5 - (long)pvVar9 != -1)) goto LAB_00d5598c;
              break;
            }
            pvVar5 = (void *)((long)pvVar5 + 1);
            uVar6 = (long)pvVar1 - (long)pvVar5;
          } while ((long)__n_00 <= (long)uVar6);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00d559e8;
      }
LAB_00d5598c:
      cocos2d::Ref::release((Ref *)plVar7[5]);
      plVar8 = (long *)*plVar7;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ArmatureCache*>>>
      ::remove(local_80,this,plVar7);
      pvVar9 = local_80[0];
      local_80[0] = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        if ((local_70 != '\0') && ((*(byte *)((long)pvVar9 + 0x10) & 1) != 0)) {
          operator_delete(*(void **)((long)pvVar9 + 0x20));
        }
        operator_delete(pvVar9);
      }
      plVar7 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB_00d559e8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

