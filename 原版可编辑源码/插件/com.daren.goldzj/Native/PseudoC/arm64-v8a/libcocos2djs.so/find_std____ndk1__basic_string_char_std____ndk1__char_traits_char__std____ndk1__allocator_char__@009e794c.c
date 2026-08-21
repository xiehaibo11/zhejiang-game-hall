
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::network::SIOClient*>,
   void*>*> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::network::SIOClient*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::network::SIOClient*>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::network::SIOClient*>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::network::SIOClient*> >
   >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
::find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
           *this,basic_string *param_1)

{
  size_t sVar1;
  basic_string *pbVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  basic_string *pbVar10;
  long lVar11;
  basic_string *pbVar12;
  void *__s1;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
                    /* try { // try from 009e7954 to 00ae795b has its CatchHandler @ 009e7af8 */
                    /* try { // try from 009e795c to 00ae796b has its CatchHandler @ 009e7ac0 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 009e797c to 00ae7983 has its CatchHandler @ 009e7af8 */
                    /* try { // try from 009e7984 to 00ae7993 has its CatchHandler @ 009e7abc */
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar7 = (ulong)((byte)*param_1 >> 1);
  }
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,pbVar2,uVar7);
  uVar13 = *(ulong *)(this + 8);
                    /* try { // try from 009e79a4 to 00ae79ab has its CatchHandler @ 009e7af8 */
  if (uVar13 != 0) {
    uVar14 = uVar13 - 1;
                    /* try { // try from 009e79ac to 00ae79bb has its CatchHandler @ 009e7ab8 */
    if ((uVar14 & uVar13) == 0) {
      uVar15 = uVar14 & uVar7;
    }
    else {
      uVar15 = uVar7;
      if (uVar13 <= uVar7) {
        uVar15 = 0;
        if (uVar13 != 0) {
          uVar15 = uVar7 / uVar13;
        }
        uVar15 = uVar7 - uVar15 * uVar13;
                    /* try { // try from 009e79cc to 00ae79d3 has its CatchHandler @ 009e7af8 */
      }
    }
                    /* try { // try from 009e79d4 to 00ae79e3 has its CatchHandler @ 009e7ab4 */
    plVar8 = *(long **)(*(long *)this + uVar15 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 009e79f4 to 00ae79fb has its CatchHandler @ 009e7af8 */
        __n = (ulong)((byte)*param_1 >> 1);
        pbVar2 = param_1 + 1;
                    /* try { // try from 009e79fc to 00ae7a0b has its CatchHandler @ 009e7ab0 */
        if (((byte)*param_1 & 1) != 0) {
          __n = *(size_t *)(param_1 + 8);
          pbVar2 = *(basic_string **)(param_1 + 0x10);
        }
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar7) {
                    /* try { // try from 009e7a14 to 00ae7a37 has its CatchHandler @ 009e7af8 */
            bVar3 = *(byte *)(plVar8 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar8[3];
            }
            if (sVar1 == __n) {
              __s1 = (void *)plVar8[4];
                    /* try { // try from 009e7a38 to 00ae7b4f has its CatchHandler @ 009e77f8 */
              if ((bVar3 & 1) == 0) {
                __s1 = (void *)((long)plVar8 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) break;
                pbVar10 = (basic_string *)((long)plVar8 + 0x11);
                lVar11 = -(ulong)(bVar3 >> 1);
                pbVar12 = pbVar2;
                while (*pbVar10 == *pbVar12) {
                  pbVar10 = pbVar10 + 1;
                  lVar11 = lVar11 + 1;
                  pbVar12 = pbVar12 + 1;
                  if (lVar11 == 0) goto LAB_009e7ac8;
                }
              }
              else {
                    /* catch() { ... } // from try @ 009e79fc with catch @ 009e7ab0 */
                    /* catch() { ... } // from try @ 009e79d4 with catch @ 009e7ab4 */
                    /* catch() { ... } // from try @ 009e79ac with catch @ 009e7ab8 */
                    /* catch() { ... } // from try @ 009e7984 with catch @ 009e7abc */
                if ((__n == 0) || (iVar6 = memcmp(__s1,pbVar2,__n), iVar6 == 0)) break;
              }
            }
          }
          else {
            if ((uVar14 & uVar13) == 0) {
              uVar9 = uVar9 & uVar14;
            }
            else if (uVar13 <= uVar9) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar9 / uVar13;
              }
              if (uVar9 - uVar4 * uVar13 == uVar15) goto LAB_009e7aa0;
              goto LAB_009e7ac4;
            }
            if (uVar9 != uVar15) goto LAB_009e7ac4;
          }
LAB_009e7aa0:
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_009e7ac8;
    }
  }
LAB_009e7ac4:
                    /* catch() { ... } // from try @ 009e7934 with catch @ 009e7ac4 */
  plVar8 = (long *)0x0;
LAB_009e7ac8:
                    /* catch() { ... } // from try @ 009e790c with catch @ 009e7ac8 */
                    /* catch() { ... } // from try @ 009e78e4 with catch @ 009e7acc */
                    /* catch() { ... } // from try @ 009e78bc with catch @ 009e7ad0 */
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 009e787c with catch @ 009e7ae0 */
                    /* catch() { ... } // from try @ 009e7870 with catch @ 009e7ae4 */
                    /* catch() { ... } // from try @ 009e7850 with catch @ 009e7ae8 */
                    /* catch() { ... } // from try @ 009e7894 with catch @ 009e7af8
                       catch() { ... } // from try @ 009e78dc with catch @ 009e7af8
                       catch() { ... } // from try @ 009e7904 with catch @ 009e7af8
                       catch() { ... } // from try @ 009e792c with catch @ 009e7af8
                       catch() { ... } // from try @ 009e7954 with catch @ 009e7af8
                       catch() { ... } // from try @ 009e797c with catch @ 009e7af8
                       catch() { ... } // from try @ 009e79a4 with catch @ 009e7af8
                       catch() { ... } // from try @ 009e79cc with catch @ 009e7af8
                       catch() { ... } // from try @ 009e79f4 with catch @ 009e7af8
                       catch() { ... } // from try @ 009e7a14 with catch @ 009e7af8 */
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

