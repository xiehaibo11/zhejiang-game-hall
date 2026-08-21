
/* dragonBones::CCFactory::parseDragonBonesDataByPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

long __thiscall
dragonBones::CCFactory::parseDragonBonesDataByPath
          (CCFactory *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  long lVar3;
  int iVar4;
  CCFactory *pCVar5;
  long lVar6;
  basic_string *pbVar7;
  long *plVar8;
  size_t sVar9;
  void *__dest;
  void *__src;
  ulong uVar10;
  undefined4 in_register_00005004;
  Data aDStack_a0 [16];
  byte local_90 [16];
  void *local_80;
  undefined **local_78;
  undefined1 *puStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if (((uVar10 == 0) ||
      (pCVar5 = (CCFactory *)
                std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
                            *)(this + 0x10),param_2), this + 0x18 == pCVar5)) ||
     (lVar6 = *(long *)(pCVar5 + 0x38), lVar6 == 0)) {
    uVar10 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar10 = (ulong)((byte)*param_1 >> 1);
    }
    if (5 < (long)uVar10) {
      pbVar1 = pbVar2 + uVar10;
      pbVar7 = pbVar2;
      do {
        if ((uVar10 - 5 == 0) ||
           (pbVar7 = memchr(pbVar7,0x2e,uVar10 - 5), pbVar7 == (basic_string *)0x0)) break;
        iVar4 = memcmp(pbVar7,".dbbin",6);
        if (iVar4 == 0) {
          if ((pbVar7 != pbVar1) && ((long)pbVar7 - (long)pbVar2 != -1)) {
            plVar8 = (long *)cocos2d::FileUtils::getInstance();
            (**(code **)(*plVar8 + 0x40))(local_90,plVar8,param_1);
            plVar8 = (long *)cocos2d::FileUtils::getInstance();
            uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8,param_1);
            if ((uVar10 & 1) == 0) {
              lVar6 = 0;
            }
            else {
              cocos2d::Data::Data(aDStack_a0);
              plVar8 = (long *)cocos2d::FileUtils::getInstance();
              local_78 = &PTR__ResizableBuffer_01c66e48;
              puStack_70 = aDStack_a0;
              (**(code **)(*plVar8 + 0x28))(plVar8,local_90,&local_78);
              sVar9 = cocos2d::Data::getSize(aDStack_a0);
              __dest = malloc(sVar9);
              __src = (void *)cocos2d::Data::getBytes(aDStack_a0);
              sVar9 = cocos2d::Data::getSize(aDStack_a0);
              memcpy(__dest,__src,sVar9);
              lVar6 = (**(code **)(*(long *)this + 0x60))
                                (CONCAT44(in_register_00005004,param_3),this,__dest,param_2);
              cocos2d::Data::~Data(aDStack_a0);
            }
            if ((local_90[0] & 1) != 0) {
              operator_delete(local_80);
            }
            if (*(long *)(lVar3 + 0x28) == local_68) {
              return lVar6;
            }
            goto LAB_00d51bf8;
          }
          break;
        }
        pbVar7 = pbVar7 + 1;
        uVar10 = (long)pbVar1 - (long)pbVar7;
      } while (5 < (long)uVar10);
    }
    lVar6 = (**(code **)(*(long *)this + 0x60))
                      (CONCAT44(in_register_00005004,param_3),this,pbVar2,param_2);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return lVar6;
  }
LAB_00d51bf8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

