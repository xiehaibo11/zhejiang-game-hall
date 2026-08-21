
/* dragonBones::CCFactory::loadDragonBonesData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

long __thiscall
dragonBones::CCFactory::loadDragonBonesData
          (CCFactory *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  CCFactory *pCVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  size_t sVar8;
  void *pvVar9;
  long lVar10;
  undefined4 in_register_00005004;
  Data aDStack_a8 [16];
  undefined **local_98;
  Data *pDStack_90;
  void *local_88;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if (((uVar6 == 0) ||
      (pCVar4 = (CCFactory *)
                std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                            *)(this + 0x10),param_2), this + 0x18 == pCVar4)) ||
     (lVar10 = *(long *)(pCVar4 + 0x38), lVar10 == 0)) {
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar5 + 0x40))(local_80,plVar5,param_1);
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,param_1);
    if ((uVar6 & 1) == 0) {
      lVar10 = 0;
    }
    else {
      pvVar9 = (void *)((ulong)local_80 | 1);
      uVar6 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        pvVar9 = local_70;
        uVar6 = local_78;
      }
      if (4 < (long)uVar6) {
        pvVar1 = (void *)((long)pvVar9 + uVar6);
        pvVar7 = pvVar9;
        do {
          if ((uVar6 - 4 == 0) || (pvVar7 = memchr(pvVar7,0x2e,uVar6 - 4), pvVar7 == (void *)0x0))
          break;
          iVar3 = memcmp(pvVar7,&DAT_01949061,5);
          if (iVar3 == 0) {
            if ((pvVar7 != pvVar1) && ((long)pvVar7 - (long)pvVar9 != -1)) {
              plVar5 = (long *)cocos2d::FileUtils::getInstance();
              (**(code **)(*plVar5 + 0x18))(&local_98,plVar5,param_1);
              pvVar9 = (void *)((ulong)&local_98 | 1);
              if (((ulong)local_98 & 1) != 0) {
                pvVar9 = local_88;
              }
              lVar10 = (**(code **)(*(long *)this + 0x60))
                                 (CONCAT44(in_register_00005004,param_3),this,pvVar9,param_2);
              if (((ulong)local_98 & 1) != 0) {
                operator_delete(local_88);
              }
              goto joined_r0x00d518e0;
            }
            break;
          }
          pvVar7 = (void *)((long)pvVar7 + 1);
          uVar6 = (long)pvVar1 - (long)pvVar7;
        } while (4 < (long)uVar6);
      }
      cocos2d::Data::Data(aDStack_a8);
      plVar5 = (long *)cocos2d::FileUtils::getInstance();
      local_98 = &PTR__ResizableBuffer_01c66e48;
      pDStack_90 = aDStack_a8;
      (**(code **)(*plVar5 + 0x28))(plVar5,local_80,&local_98);
      sVar8 = cocos2d::Data::getSize(aDStack_a8);
      pvVar9 = malloc(sVar8);
      pvVar7 = (void *)cocos2d::Data::getBytes(aDStack_a8);
      sVar8 = cocos2d::Data::getSize(aDStack_a8);
      memcpy(pvVar9,pvVar7,sVar8);
      lVar10 = (**(code **)(*(long *)this + 0x60))
                         (CONCAT44(in_register_00005004,param_3),this,pvVar9,param_2);
      cocos2d::Data::~Data(aDStack_a8);
    }
joined_r0x00d518e0:
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}

