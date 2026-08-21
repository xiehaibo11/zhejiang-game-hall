
/* dragonBones::SkinData::getDisplay(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long __thiscall
dragonBones::SkinData::getDisplay(SkinData *this,basic_string *param_1,basic_string *param_2)

{
  size_t sVar1;
  long *plVar2;
  size_t __n;
  long *plVar3;
  basic_string *__s2;
  byte bVar4;
  int iVar5;
  SkinData *pSVar6;
  ulong uVar7;
  void *__s1;
  long lVar8;
  
  pSVar6 = (SkinData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                       *)(this + 0x28),param_1);
  if (this + 0x30 != pSVar6) {
    plVar2 = *(long **)(pSVar6 + 0x38);
    plVar3 = *(long **)(pSVar6 + 0x40);
    if (plVar2 != plVar3) {
      __n = *(size_t *)(param_2 + 8);
      __s2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        __s2 = param_2 + 1;
        __n = (ulong)((byte)*param_2 >> 1);
      }
      lVar8 = *plVar2;
      while( true ) {
        if (lVar8 != 0) {
          bVar4 = *(byte *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 00d88df0 with catch @ 00d89288 */
                    /* catch() { ... } // from try @ 00d88df8 with catch @ 00d8928c
                       catch() { ... } // from try @ 00d88f38 with catch @ 00d8928c
                       catch() { ... } // from try @ 00d890e8 with catch @ 00d8928c */
          sVar1 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar1 = *(size_t *)(lVar8 + 0x20);
          }
          if (sVar1 == __n) {
            __s1 = *(void **)(lVar8 + 0x28);
            if ((bVar4 & 1) == 0) {
              __s1 = (void *)(lVar8 + 0x19);
            }
            if ((bVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d88ea4 with catch @ 00d892ac */
              if (__n == 0) {
                return lVar8;
              }
                    /* catch() { ... } // from try @ 00d88e6c with catch @ 00d892b0 */
              uVar7 = 0;
                    /* catch() { ... } // from try @ 00d88d88 with catch @ 00d892b4 */
                    /* catch() { ... } // from try @ 00d88dc8 with catch @ 00d892c4
                       catch() { ... } // from try @ 00d88e24 with catch @ 00d892c4
                       catch() { ... } // from try @ 00d890bc with catch @ 00d892c4 */
              while (*(basic_string *)(lVar8 + uVar7 + 0x19) == __s2[uVar7]) {
                    /* catch() { ... } // from try @ 00d88eac with catch @ 00d892c8 */
                uVar7 = uVar7 + 1;
                if (bVar4 >> 1 == uVar7) {
                  return lVar8;
                }
              }
            }
            else {
              if (__n == 0) {
                return lVar8;
              }
              iVar5 = memcmp(__s1,__s2,__n);
              if (iVar5 == 0) {
                return lVar8;
              }
            }
          }
        }
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar3) break;
        lVar8 = *plVar2;
      }
    }
  }
  return 0;
}

