
/* dragonBones::SkinData::getDisplay(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long __thiscall
dragonBones::SkinData::getDisplay(SkinData *this,basic_string *param_1,basic_string *param_2)

{
  size_t sVar1;
  size_t __n;
  long *plVar2;
  basic_string *__s2;
  byte bVar3;
  int iVar4;
  SkinData *pSVar5;
  ulong uVar6;
  void *__s1;
  long lVar7;
  long *plVar8;
  
  pSVar5 = (SkinData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                       *)(this + 0x28),param_1);
  if (this + 0x30 != pSVar5) {
    plVar8 = *(long **)(pSVar5 + 0x38);
    plVar2 = *(long **)(pSVar5 + 0x40);
    if (plVar8 != plVar2) {
      __n = *(size_t *)(param_2 + 8);
      __s2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        __s2 = param_2 + 1;
        __n = (ulong)((byte)*param_2 >> 1);
      }
      do {
        lVar7 = *plVar8;
        if (lVar7 != 0) {
          bVar3 = *(byte *)(lVar7 + 0x18);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = *(size_t *)(lVar7 + 0x20);
          }
          if (sVar1 == __n) {
            __s1 = *(void **)(lVar7 + 0x28);
            if ((bVar3 & 1) == 0) {
              __s1 = (void *)(lVar7 + 0x19);
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return lVar7;
              }
              uVar6 = 0;
              while (*(basic_string *)(lVar7 + uVar6 + 0x19) == __s2[uVar6]) {
                uVar6 = uVar6 + 1;
                if (bVar3 >> 1 == uVar6) {
                  return lVar7;
                }
              }
            }
            else {
              if (__n == 0) {
                return lVar7;
              }
              iVar4 = memcmp(__s1,__s2,__n);
              if (iVar4 == 0) {
                return lVar7;
              }
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar2);
    }
  }
  return 0;
}

