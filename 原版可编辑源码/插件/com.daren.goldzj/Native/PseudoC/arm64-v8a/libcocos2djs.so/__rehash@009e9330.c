
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::network::SIOClientImpl*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::network::SIOClientImpl*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::network::SIOClientImpl*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::network::SIOClientImpl*>
   > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>>>
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
  
  if (param_1 == 0) {
    pvVar9 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
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
      if ((uVar16 & param_1) == 0) {
                    /* try { // try from 009e93e4 to 00ae941b has its CatchHandler @ 009e93e4
                       catch() { ... } // from try @ 009e93e4 with catch @ 009e93e4
                       catch() { ... } // from try @ 009eac20 with catch @ 009e93e4 */
        uVar11 = uVar11 & uVar16;
      }
      else if (param_1 <= uVar11) {
        uVar17 = 0;
        if (param_1 != 0) {
          uVar17 = uVar11 / param_1;
        }
        uVar11 = uVar11 - uVar17 * param_1;
      }
      *(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>>>
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
                    /* try { // try from 009e9434 to 00ae9443 has its CatchHandler @ 009ead70 */
          if (*(long *)(*(long *)this + uVar17 * 8) == 0) {
            *(long **)(*(long *)this + uVar17 * 8) = plVar14;
            uVar11 = uVar17;
          }
          else {
                    /* try { // try from 009e9444 to 00ae9467 has its CatchHandler @ 009ead60 */
            plVar13 = plVar15;
            if ((long *)*plVar15 != (long *)0x0) {
              bVar3 = *(byte *)(plVar15 + 2);
              __n = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                __n = plVar15[3];
              }
              plVar7 = (long *)*plVar15;
              do {
                    /* try { // try from 009e9470 to 00ae9477 has its CatchHandler @ 009ead58 */
                plVar12 = plVar7;
                bVar2 = *(byte *)(plVar12 + 2);
                    /* try { // try from 009e947c to 00ae9483 has its CatchHandler @ 009ead50 */
                    /* try { // try from 009e9484 to 00ae9497 has its CatchHandler @ 009ead48 */
                sVar1 = (ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  sVar1 = plVar12[3];
                }
                if (__n != sVar1) break;
                    /* try { // try from 009e9498 to 00ae949f has its CatchHandler @ 009ead40 */
                __s2 = (char *)plVar12[4];
                __s1 = (char *)((long)plVar15 + 0x11);
                if ((bVar3 & 1) != 0) {
                  __s1 = (char *)plVar15[4];
                }
                    /* try { // try from 009e94a4 to 00ae94af has its CatchHandler @ 009ead38 */
                if ((bVar2 & 1) == 0) {
                  __s2 = (char *)((long)plVar12 + 0x11);
                }
                pcVar5 = (char *)((long)plVar15 + 0x11);
                sVar1 = -(ulong)(bVar3 >> 1);
                sVar6 = __n;
                if ((bVar3 & 1) == 0) {
                  while (sVar6 != 0) {
                    if (*pcVar5 != *__s2) goto LAB_009e9514;
                    __s2 = __s2 + 1;
                    sVar1 = sVar1 + 1;
                    pcVar5 = pcVar5 + 1;
                    sVar6 = sVar1;
                  }
                }
                else if ((__n != 0) && (iVar8 = memcmp(__s1,__s2,__n), iVar8 != 0)) break;
                    /* try { // try from 009e9508 to 00ae9513 has its CatchHandler @ 009ead20 */
                plVar7 = (long *)*plVar12;
                plVar13 = plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
            }
LAB_009e9514:
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
  return;
}

