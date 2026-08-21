
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>
   > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
           *this,ulong param_1)

{
  size_t sVar1;
  size_t __n;
  char *__s1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  size_t sVar6;
  long *plVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  char *__s2;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5f62c with catch @ 00a5f66c
                        */
  if (param_1 == 0) {
    pvVar9 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5f450 with catch @ 00a5f670
                       catch(type#1 @ 00000000) { ... } // from try @ 00a5f540 with catch @ 00a5f670
                        */
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar9 = operator_new(param_1 << 3);
    pvVar10 = *(void **)this;
    *(void **)this = pvVar9;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    uVar11 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
    } while (param_1 != uVar11);
    plVar14 = *(long **)(this + 0x10);
    if (plVar14 != (long *)0x0) {
      uVar11 = plVar14[1];
      uVar16 = param_1 - 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a5f500 with catch @ 00a5f6c8
                        */
      if ((uVar16 & param_1) == 0) {
        uVar11 = uVar11 & uVar16;
      }
      else if (param_1 <= uVar11) {
        uVar17 = 0;
        if (param_1 != 0) {
          uVar17 = uVar11 / param_1;
        }
                    /* try { // try from 00a5f6dc to 00b5f72f has its CatchHandler @ 00a5f6dc
                       catch() { ... } // from try @ 00a5f6dc with catch @ 00a5f6dc
                       catch() { ... } // from try @ 00a5f9e0 with catch @ 00a5f6dc */
        uVar11 = uVar11 - uVar17 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
        **)(*(long *)this + uVar11 * 8) = this + 0x10;
      for (plVar15 = (long *)*plVar14; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar17 = plVar15[1];
        if ((uVar16 & param_1) == 0) {
          uVar17 = uVar17 & uVar16;
        }
        else if (param_1 <= uVar17) {
          uVar4 = 0;
          if (param_1 != 0) {
            uVar4 = uVar17 / param_1;
          }
          uVar17 = uVar17 - uVar4 * param_1;
        }
        if (uVar17 != uVar11) {
                    /* try { // try from 00a5f750 to 00b5f75b has its CatchHandler @ 00a5fa58 */
          if (*(long *)(*(long *)this + uVar17 * 8) == 0) {
            *(long **)(*(long *)this + uVar17 * 8) = plVar14;
            uVar11 = uVar17;
          }
          else {
                    /* try { // try from 00a5f75c to 00b5f767 has its CatchHandler @ 00a5fa54 */
            plVar13 = plVar15;
            if ((long *)*plVar15 != (long *)0x0) {
              bVar3 = *(byte *)(plVar15 + 2);
                    /* try { // try from 00a5f768 to 00b5f77f has its CatchHandler @ 00a5fa84 */
              __n = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                __n = plVar15[3];
              }
              plVar7 = (long *)*plVar15;
              do {
                plVar12 = plVar7;
                bVar2 = *(byte *)(plVar12 + 2);
                sVar1 = (ulong)(bVar2 >> 1);
                    /* try { // try from 00a5f7a0 to 00b5f7ef has its CatchHandler @ 00a5fa5c */
                if ((bVar2 & 1) != 0) {
                  sVar1 = plVar12[3];
                }
                if (__n != sVar1) break;
                __s2 = (char *)plVar12[4];
                __s1 = (char *)((long)plVar15 + 0x11);
                if ((bVar3 & 1) != 0) {
                  __s1 = (char *)plVar15[4];
                }
                if ((bVar2 & 1) == 0) {
                  __s2 = (char *)((long)plVar12 + 0x11);
                }
                pcVar5 = (char *)((long)plVar15 + 0x11);
                sVar1 = -(ulong)(bVar3 >> 1);
                sVar6 = __n;
                if ((bVar3 & 1) == 0) {
                  while (sVar6 != 0) {
                    if (*pcVar5 != *__s2) goto LAB_00a5f82c;
                    __s2 = __s2 + 1;
                    sVar1 = sVar1 + 1;
                    pcVar5 = pcVar5 + 1;
                    sVar6 = sVar1;
                  }
                }
                else {
                    /* try { // try from 00a5f804 to 00b5f86b has its CatchHandler @ 00a5fa84 */
                  if ((__n != 0) && (iVar8 = memcmp(__s1,__s2,__n), iVar8 != 0)) break;
                }
                plVar7 = (long *)*plVar12;
                plVar13 = plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
            }
LAB_00a5f82c:
            *plVar14 = *plVar13;
            *plVar13 = **(long **)(*(long *)this + uVar17 * 8);
            **(long **)(*(long *)this + uVar17 * 8) = (long)plVar15;
            plVar15 = plVar14;
          }
        }
        plVar14 = plVar15;
      }
    }
  }
                    /* try { // try from 00a5f870 to 00b5f98b has its CatchHandler @ 00a5fa5c */
  return;
}

