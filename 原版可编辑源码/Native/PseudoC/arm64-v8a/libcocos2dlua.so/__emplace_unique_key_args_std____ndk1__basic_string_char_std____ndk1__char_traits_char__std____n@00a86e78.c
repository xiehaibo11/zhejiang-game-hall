
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::Vector<fairygui::GObject*> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::Vector<fairygui::GObject*> >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Vector<fairygui::GObject*> >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Vector<fairygui::GObject*> >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::Vector<fairygui::GObject*> > >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&&>&&, std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                 (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
                 )

{
  basic_string *pbVar1;
  size_t sVar2;
  piecewise_construct_t *ppVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong unaff_x27;
  undefined2 uVar18;
  long lVar19;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
                    /* try { // try from 00a86e7c to 00b86e7f has its CatchHandler @ 00a86edc */
                    /* try { // try from 00a86e94 to 00b86e97 has its CatchHandler @ 00a86ecc */
                    /* try { // try from 00a86e98 to 00b86eef has its CatchHandler @ 00a86e30 */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  ppVar3 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar3 = param_2 + 1;
    uVar8 = (ulong)((byte)*param_2 >> 1);
  }
                    /* catch() { ... } // from try @ 00a86e94 with catch @ 00a86ecc */
  uVar8 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,ppVar3,uVar8);
  uVar17 = *(ulong *)(param_1 + 8);
  if (uVar17 != 0) {
                    /* catch() { ... } // from try @ 00a86e7c with catch @ 00a86edc */
    uVar9 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar17 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar17))))
                                               ))));
    uVar18 = NEON_uaddlv(uVar9,1);
    uVar15 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar18) & 0xffffffff;
                    /* try { // try from 00a86ef0 to 00b86fd3 has its CatchHandler @ 00a86ef0
                       catch() { ... } // from try @ 00a86ef0 with catch @ 00a86ef0
                       catch() { ... } // from try @ 00a87054 with catch @ 00a86ef0 */
    if (uVar15 < 2) {
      unaff_x27 = uVar17 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar17 <= uVar8) {
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar8 / uVar17;
        }
        unaff_x27 = uVar8 - uVar11 * uVar17;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)param_1 + unaff_x27 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar10, plVar16 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar3 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar3 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar11 = plVar16[1];
        if (uVar11 != uVar8) {
          if (uVar15 < 2) {
            uVar11 = uVar11 & uVar17 - 1;
          }
          else if (uVar17 <= uVar11) {
            uVar5 = 0;
            if (uVar17 != 0) {
              uVar5 = uVar11 / uVar17;
            }
            if (uVar11 - uVar5 * uVar17 == unaff_x27) goto LAB_00a86f9c;
            break;
          }
          if (uVar11 != unaff_x27) break;
        }
LAB_00a86f9c:
        bVar4 = *(byte *)(plVar16 + 2);
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = plVar16[3];
        }
        if (sVar2 == __n) {
          plVar12 = (long *)plVar16[4];
          if ((bVar4 & 1) == 0) {
            plVar12 = (long *)((long)plVar16 + 0x11);
          }
          if ((bVar4 & 1) == 0) {
            if (__n != 0) {
              uVar11 = 0;
                    /* try { // try from 00a86fd4 to 00b87007 has its CatchHandler @ 00a870d4 */
              while (*(piecewise_construct_t *)((long)plVar16 + uVar11 + 0x11) == ppVar3[uVar11]) {
                uVar11 = uVar11 + 1;
                if (bVar4 >> 1 == uVar11) goto LAB_00a8700c;
              }
              goto LAB_00a86f54;
            }
          }
          else if (__n != 0) {
            uVar7 = memcmp(plVar12,ppVar3,__n);
            plVar12 = (long *)(ulong)uVar7;
                    /* try { // try from 00a87008 to 00b8701b has its CatchHandler @ 00a870a0 */
            if (uVar7 != 0) goto LAB_00a86f54;
          }
LAB_00a8700c:
          uVar9 = 0;
          goto LAB_00a8714c;
        }
LAB_00a86f54:
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  pbVar1 = param_1 + 0x10;
  plVar16 = operator_new(0x40);
                    /* try { // try from 00a87020 to 00b87053 has its CatchHandler @ 00a870a4 */
  plVar12 = *(long **)param_4;
  lVar19 = *plVar12;
  lVar14 = plVar12[2];
  plVar16[3] = plVar12[1];
  plVar16[2] = lVar19;
  plVar16[4] = lVar14;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[5] = 0;
  *plVar16 = 0;
  plVar16[1] = uVar8;
                    /* try { // try from 00a87054 to 00b870ef has its CatchHandler @ 00a86ef0 */
  if ((uVar17 == 0) ||
     (plVar12 = plVar16,
     *(float *)(param_1 + 0x20) * (float)uVar17 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
    uVar15 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar15 <= uVar17) {
      uVar15 = uVar17;
    }
                    /* catch() { ... } // from try @ 00a87008 with catch @ 00a870a0 */
                    /* catch() { ... } // from try @ 00a87020 with catch @ 00a870a4 */
    plVar12 = (long *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<fairygui::GObject*>>>>
                              *)param_1,uVar15);
    uVar17 = *(ulong *)(param_1 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x27 = uVar17 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar17 <= uVar8) {
        uVar15 = 0;
        if (uVar17 != 0) {
          uVar15 = uVar8 / uVar17;
        }
                    /* catch() { ... } // from try @ 00a86fd4 with catch @ 00a870d4 */
        unaff_x27 = uVar8 - uVar15 * uVar17;
      }
    }
  }
  lVar14 = *(long *)param_1;
  plVar13 = *(long **)(lVar14 + unaff_x27 * 8);
  if (plVar13 == (long *)0x0) {
                    /* try { // try from 00a870f0 to 00b8717f has its CatchHandler @ 00a870f0
                       catch() { ... } // from try @ 00a870f0 with catch @ 00a870f0
                       catch() { ... } // from try @ 00a872fc with catch @ 00a870f0
                       catch() { ... } // from try @ 00a8751c with catch @ 00a870f0
                       catch() { ... } // from try @ 00a87708 with catch @ 00a870f0
                       catch() { ... } // from try @ 00a87944 with catch @ 00a870f0
                       catch() { ... } // from try @ 00a87b0c with catch @ 00a870f0
                       catch() { ... } // from try @ 00a87d54 with catch @ 00a870f0
                       catch() { ... } // from try @ 00a88078 with catch @ 00a870f0 */
    *plVar16 = *(long *)pbVar1;
    *(long **)pbVar1 = plVar16;
    *(basic_string **)(lVar14 + unaff_x27 * 8) = pbVar1;
    if (*plVar16 == 0) goto LAB_00a8713c;
    uVar8 = *(ulong *)(*plVar16 + 8);
    if ((uVar17 & uVar17 - 1) == 0) {
      uVar8 = uVar8 & uVar17 - 1;
    }
    else if (uVar17 <= uVar8) {
      uVar15 = 0;
      if (uVar17 != 0) {
        uVar15 = uVar8 / uVar17;
      }
      uVar8 = uVar8 - uVar15 * uVar17;
    }
    plVar13 = (long *)(*(long *)param_1 + uVar8 * 8);
  }
  else {
    *plVar16 = *plVar13;
  }
  *plVar13 = (long)plVar16;
LAB_00a8713c:
  uVar9 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_00a8714c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a87180 to 00b8725b has its CatchHandler @ 00a8818c */
    __stack_chk_fail(plVar12,uVar9);
  }
  return plVar16;
}

