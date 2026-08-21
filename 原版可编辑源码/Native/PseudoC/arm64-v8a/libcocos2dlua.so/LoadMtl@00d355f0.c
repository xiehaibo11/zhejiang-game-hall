
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffee98 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* tinyobj::LoadMtl(std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, int> > >&,
   std::__ndk1::vector<tinyobj::material_t, std::__ndk1::allocator<tinyobj::material_t> >&,
   std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&) */

void tinyobj::LoadMtl(map *param_1,vector *param_2,basic_istream *param_3)

{
  material_t *pmVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  void *__src;
  char *__src_00;
  __tree_end_node *p_Var5;
  char cVar6;
  int iVar7;
  char *__s;
  long *plVar8;
  size_t sVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  void *__dest;
  __tree_node_base **pp_Var13;
  __tree_node_base *p_Var14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte bVar19;
  char *pcVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_12f8 [8];
  ulong uStack_12f0;
  void *local_12e8;
  __tree_end_node *local_12e0;
  ulong uStack_12d8;
  undefined1 *local_12d0;
  char *local_12c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_12c0;
  undefined7 uStack_12bf;
  ulong local_12b8;
  char *local_12b0;
  __tree_end_node *local_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined **ppuStack_1288;
  locale alStack_1280 [8];
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  ulong local_1248;
  undefined8 uStack_1240;
  void *local_1238;
  undefined8 uStack_1230;
  undefined4 local_1228;
  undefined8 local_1220 [17];
  undefined8 local_1198;
  undefined4 local_1190;
  __tree_end_node *local_1180;
  ulong uStack_1178;
  undefined1 *local_1170;
  undefined8 local_1168;
  ulong uStack_1160;
  void *local_1158;
  __tree_end_node *local_178;
  ulong uStack_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  float local_11c;
  int local_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined1 *puStack_b8;
  __tree_node *local_b0;
  __tree_node *local_a8;
  long local_a0;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  local_12a0 = 0x1698900;
  local_1220[0] = 0x1698928;
  uStack_1298 = 0;
  local_1290 = 0x1698810;
  std::__ndk1::ios_base::init((ios_base *)local_1220,&ppuStack_1288);
  local_1190 = 0xffffffff;
  ppuStack_1288 = &PTR__basic_streambuf_01698a08;
  local_12a0 = 0x16987e8;
  local_1220[0] = 0x1698838;
  local_1198 = 0;
  local_1290 = 0x1698810;
  std::__ndk1::locale::locale(alStack_1280);
  uStack_1250 = 0;
  local_1258 = 0;
  uStack_1260 = 0;
  local_1268 = 0;
  uStack_1270 = 0;
  local_1278 = 0;
  ppuStack_1288 = &PTR__basic_stringbuf_01698960;
  uStack_1240 = 0;
  local_1248 = 0;
  uStack_1230 = 0;
  local_1238 = (void *)0x0;
  local_1228 = 0x18;
  uVar24 = NEON_fmov(0x3f800000,4);
  local_168 = (undefined1 *)0x0;
  uStack_170 = 0;
  local_a0 = 0;
  local_a8 = (__tree_node *)0x0;
  uStack_108 = 0;
  local_100 = (undefined1 *)0x0;
  uStack_d8 = 0;
  local_d0 = (undefined1 *)0x0;
  puStack_e8 = (undefined1 *)0x0;
  local_f0 = 0;
  puStack_b8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_178 = (__tree_end_node *)0x0;
  local_110 = 0;
  uStack_f8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_118 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_12c = 0;
  uStack_134 = 0;
  local_130 = 0;
  local_11c = 1.0;
  local_124 = uVar24;
  local_b0 = (__tree_node *)&local_a8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)&local_b0,(__tree_node *)0x0);
  local_a0 = 0;
  local_a8 = (__tree_node *)0x0;
  local_b0 = (__tree_node *)&local_a8;
  __s = operator_new(0x2000);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35840 with catch @ 00d357ec
                        */
  memset(__s,0,0x2000);
  pcVar20 = (char *)((ulong)&local_12c0 | 1);
  puVar15 = (undefined1 *)((ulong)&local_1180 | 1);
                    /* try { // try from 00d35838 to 00e3583f has its CatchHandler @ 00d359b4 */
  while (iVar7 = std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek
                           ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_3),
        puVar11 = local_168, uVar16 = uStack_170, iVar7 != -1) {
                    /* try { // try from 00d35840 to 00e359b7 has its CatchHandler @ 00d357ec */
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_1180,(id *)&std::__ndk1::ctype<char>::id);
    cVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)&local_1180);
    std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
              ((basic_istream<char,std::__ndk1::char_traits<char>> *)param_3,__s,0x2000,cVar6);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_12c0,__s);
    uVar18 = (ulong)((byte)local_12c0 >> 1);
    uVar16 = uVar18;
    if (((byte)local_12c0 & 1) != 0) {
      uVar16 = local_12b8;
    }
    if (uVar16 != 0) {
      pcVar10 = pcVar20;
      if (((byte)local_12c0 & 1) != 0) {
        pcVar10 = local_12b0;
      }
      if (pcVar10[uVar16 - 1] == '\n') {
        if (((byte)local_12c0 & 1) != 0) {
          uVar18 = local_12b8;
        }
        uVar16 = uVar18 - 1;
        if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar18 = uVar16;
        if (((byte)local_12c0 & 1) == 0) {
          local_12c0 = SUB41((int)uVar16 << 1,0);
          uVar18 = local_12b8;
        }
        local_12b8 = uVar18;
        pcVar10[uVar16] = '\0';
        uVar18 = (ulong)((byte)local_12c0 >> 1);
      }
    }
    uVar16 = uVar18;
    if (((byte)local_12c0 & 1) != 0) {
      uVar16 = local_12b8;
    }
    bVar19 = (byte)local_12c0 & 1;
    if (uVar16 != 0) {
      pcVar10 = pcVar20;
      if (((byte)local_12c0 & 1) != 0) {
        pcVar10 = local_12b0;
      }
      if (pcVar10[uVar16 - 1] == '\r') {
        if (((byte)local_12c0 & 1) != 0) {
          uVar18 = local_12b8;
        }
        uVar16 = uVar18 - 1;
        if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar18 = uVar16;
        if (((byte)local_12c0 & 1) == 0) {
          local_12c0 = SUB41((int)uVar16 << 1,0);
          uVar18 = local_12b8;
        }
        local_12b8 = uVar18;
        pcVar10[uVar16] = '\0';
        bVar19 = (byte)local_12c0 & 1;
        uVar18 = (ulong)((byte)local_12c0 >> 1);
      }
    }
    if (bVar19 != 0) {
      uVar18 = local_12b8;
    }
    if (uVar18 != 0) {
      pcVar10 = pcVar20;
      if (bVar19 != 0) {
        pcVar10 = local_12b0;
      }
      local_12c8 = pcVar10;
      sVar9 = strspn(pcVar10," \t");
      pcVar10 = pcVar10 + sVar9;
      cVar6 = *pcVar10;
      local_12c8 = pcVar10;
      if ((cVar6 == '\0') || (cVar6 == '#')) goto LAB_00d359b0;
      iVar7 = strncmp(pcVar10,"newmtl",6);
      puVar11 = local_168;
      uVar16 = uStack_170;
      if ((iVar7 == 0) && ((pcVar10[6] == ' ' || (pcVar10[6] == '\t')))) {
                    /* try { // try from 00d35a7c to 00e35a7f has its CatchHandler @ 00d35ab4 */
                    /* try { // try from 00d35a80 to 00e35ac7 has its CatchHandler @ 00d359b8 */
        uVar18 = (ulong)local_178 >> 1 & 0x7f;
        if (((ulong)local_178 & 1) != 0) {
          uVar18 = uStack_170;
        }
        if (uVar18 != 0) {
          lVar17 = *(long *)param_2;
          lVar2 = *(long *)(param_2 + 8);
          local_1170 = (undefined1 *)0x0;
          uStack_1178 = 0;
          local_1180 = (__tree_end_node *)0x0;
          if (((ulong)local_178 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35a7c with catch @ 00d35ab4
                        */
            uStack_1178 = uStack_170;
            local_1180 = local_178;
            local_1170 = local_168;
          }
          else {
            if (0xffffffffffffffef < uStack_170) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_170 < 0x17) {
              local_1180 = (__tree_end_node *)(ulong)(byte)((int)uStack_170 << 1);
              puVar12 = puVar15;
              if (uStack_170 != 0) goto LAB_00d36098;
            }
            else {
              uVar18 = uStack_170 + 0x10 & 0xfffffffffffffff0;
              puVar12 = operator_new(uVar18);
              local_1180 = (__tree_end_node *)(uVar18 | 1);
              uStack_1178 = uVar16;
              local_1170 = puVar12;
LAB_00d36098:
              memcpy(puVar12,puVar11,uVar16);
            }
            puVar12[uVar16] = 0;
          }
          local_1168 = CONCAT44(local_1168._4_4_,(int)((ulong)(lVar2 - lVar17) >> 5) * -0x49249249);
          pp_Var13 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                     ::
                     __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                                 *)param_1,&local_12e0,(basic_string *)&local_1180);
          if (*pp_Var13 == (__tree_node_base *)0x0) {
            p_Var14 = operator_new(0x40);
            puVar11 = local_1170;
            uVar16 = uStack_1178;
            p_Var5 = local_1180;
            local_1170 = (undefined1 *)0x0;
            *(undefined1 **)(p_Var14 + 0x30) = puVar11;
            uStack_1178 = 0;
            local_1180 = (__tree_end_node *)0x0;
            *(undefined8 *)p_Var14 = 0;
            *(undefined8 *)(p_Var14 + 8) = 0;
            *(undefined4 *)(p_Var14 + 0x38) = (undefined4)local_1168;
            *(ulong *)(p_Var14 + 0x28) = uVar16;
            *(__tree_end_node **)(p_Var14 + 0x20) = p_Var5;
            *(__tree_end_node **)(p_Var14 + 0x10) = local_12e0;
            *pp_Var13 = p_Var14;
            if (**(long **)param_1 != 0) {
              *(long *)param_1 = **(long **)param_1;
              p_Var14 = *pp_Var13;
            }
                    /* try { // try from 00d36144 to 00e36147 has its CatchHandler @ 00d36354 */
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(param_1 + 8),p_Var14);
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
          }
          if (((ulong)local_1180 & 1) != 0) {
                    /* try { // try from 00d36168 to 00e3616b has its CatchHandler @ 00d36374 */
            operator_delete(local_1170);
          }
          pmVar1 = *(material_t **)(param_2 + 8);
          if (pmVar1 == *(material_t **)(param_2 + 0x10)) {
            std::__ndk1::vector<tinyobj::material_t,std::__ndk1::allocator<tinyobj::material_t>>::
            __push_back_slow_path<tinyobj::material_t_const&>
                      ((vector<tinyobj::material_t,std::__ndk1::allocator<tinyobj::material_t>> *)
                       param_2,(material_t *)&local_178);
          }
          else {
            material_t::material_t(pmVar1,(material_t *)&local_178);
            *(material_t **)(param_2 + 8) = pmVar1 + 0xe0;
          }
        }
        puVar11 = (undefined1 *)((ulong)&local_178 | 1);
        if (((ulong)local_178 & 1) != 0) {
          puVar11 = local_168;
        }
        *puVar11 = 0;
        if (((ulong)local_178 & 1) == 0) {
          local_178 = (__tree_end_node *)((ulong)local_178 & 0xffffffffffffff00);
                    /* try { // try from 00d361cc to 00e361d7 has its CatchHandler @ 00d36354 */
        }
        else {
          uStack_170 = 0;
        }
                    /* try { // try from 00d361d8 to 00e362af has its CatchHandler @ 00d35fac */
        puVar11 = (undefined1 *)((long)&local_110 + 1);
        if ((local_110 & 1) != 0) {
          puVar11 = local_100;
        }
        *puVar11 = 0;
        if ((local_110 & 1) == 0) {
          local_110 = local_110 & 0xffffffffffffff00;
        }
        else {
          uStack_108 = 0;
        }
        puVar11 = (undefined1 *)((long)&uStack_f8 + 1);
        if ((uStack_f8 & 1) != 0) {
          puVar11 = puStack_e8;
        }
        *puVar11 = 0;
        if ((uStack_f8 & 1) == 0) {
          uStack_f8 = uStack_f8 & 0xffffffffffffff00;
        }
        else {
          local_f0 = 0;
        }
        puVar11 = (undefined1 *)((long)&local_e0 + 1);
        if ((local_e0 & 1) != 0) {
          puVar11 = local_d0;
        }
        *puVar11 = 0;
        if ((local_e0 & 1) == 0) {
          local_e0 = local_e0 & 0xffffffffffffff00;
        }
        else {
          uStack_d8 = 0;
        }
        puVar11 = (undefined1 *)((long)&uStack_c8 + 1);
        if ((uStack_c8 & 1) != 0) {
          puVar11 = puStack_b8;
        }
        *puVar11 = 0;
        if ((uStack_c8 & 1) == 0) {
          uStack_c8 = uStack_c8 & 0xffffffffffffff00;
        }
        else {
          local_c0 = 0;
        }
        local_118 = 0;
        local_12c = 0;
        uStack_148 = 0;
        local_150 = 0;
        local_140 = 0;
        uStack_158 = 0;
        local_160 = 0;
        local_11c = 1.0;
        local_124 = uVar24;
                    /* try { // try from 00d362b0 to 00e362b7 has its CatchHandler @ 00d36358 */
        std::__ndk1::
        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                   *)&local_b0,local_a8);
                    /* try { // try from 00d362b8 to 00e363b7 has its CatchHandler @ 00d35fac */
        local_12c8 = local_12c8 + 7;
        local_a0 = 0;
        local_a8 = (__tree_node *)0x0;
        local_b0 = (__tree_node *)&local_a8;
        sscanf(local_12c8,"%s",&local_1180);
        sVar9 = strlen((char *)&local_1180);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_178,(char *)&local_1180,sVar9);
      }
      else {
        if (cVar6 == 'N') {
          if (pcVar10[1] == 's') {
            cVar3 = pcVar10[2];
            if ((cVar3 == ' ') || (cVar3 == '\t')) {
              local_12c8 = pcVar10 + 2;
              uVar21 = FUN_00d36c44(&local_12c8);
              local_124 = CONCAT44(local_124._4_4_,uVar21);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35aec with catch @ 00d35b30
                        */
              goto LAB_00d359b0;
            }
          }
          else if (pcVar10[1] == 'i') {
            cVar3 = pcVar10[2];
                    /* try { // try from 00d35aec to 00e35aef has its CatchHandler @ 00d35b30 */
            if ((cVar3 == ' ') || (cVar3 == '\t')) {
              local_12c8 = pcVar10 + 2;
              uVar21 = FUN_00d36c44(&local_12c8);
              local_124 = CONCAT44(uVar21,(undefined4)local_124);
              goto LAB_00d359b0;
            }
          }
        }
        else if (cVar6 == 'K') {
                    /* try { // try from 00d359f4 to 00e35a03 has its CatchHandler @ 00d35a50 */
          switch(pcVar10[1]) {
          case 'a':
            cVar3 = pcVar10[2];
                    /* try { // try from 00d35a28 to 00e35a3b has its CatchHandler @ 00d35a58 */
            if ((cVar3 != ' ') && (cVar3 != '\t')) break;
            local_12c8 = pcVar10 + 2;
            uVar21 = FUN_00d36c44(&local_12c8);
            uVar23 = FUN_00d36c44(&local_12c8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d359f4 with catch @ 00d35a50
                        */
            uVar22 = FUN_00d36c44(&local_12c8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35a28 with catch @ 00d35a58
                        */
            uStack_158 = CONCAT44(uStack_158._4_4_,uVar22);
            local_160 = CONCAT44(uVar23,uVar21);
            goto LAB_00d359b0;
          case 'd':
            cVar3 = pcVar10[2];
                    /* try { // try from 00d35bb0 to 00e35bbf has its CatchHandler @ 00d35c1c */
            if ((cVar3 == ' ') || (cVar3 == '\t')) {
              local_12c8 = pcVar10 + 2;
              uVar21 = FUN_00d36c44(&local_12c8);
              uVar23 = FUN_00d36c44(&local_12c8);
                    /* try { // try from 00d35be0 to 00e35be3 has its CatchHandler @ 00d35c20 */
              uVar22 = FUN_00d36c44(&local_12c8);
              uStack_158 = CONCAT44(uVar21,(undefined4)uStack_158);
              local_150 = CONCAT44(uVar22,uVar23);
              goto LAB_00d359b0;
            }
            break;
          case 'e':
            cVar3 = pcVar10[2];
                    /* try { // try from 00d35b70 to 00e35b77 has its CatchHandler @ 00d35c1c */
            if ((cVar3 == ' ') || (cVar3 == '\t')) {
              local_12c8 = pcVar10 + 2;
              uVar21 = FUN_00d36c44(&local_12c8);
              uVar23 = FUN_00d36c44(&local_12c8);
                    /* try { // try from 00d35b90 to 00e35b93 has its CatchHandler @ 00d35c34 */
              uVar22 = FUN_00d36c44(&local_12c8);
              local_12c = CONCAT44(uVar22,uVar23);
              local_130 = uVar21;
              goto LAB_00d359b0;
            }
            break;
          case 's':
            cVar3 = pcVar10[2];
            if ((cVar3 == ' ') || (cVar3 == '\t')) {
              local_12c8 = pcVar10 + 2;
              uVar21 = FUN_00d36c44(&local_12c8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35b70 with catch @ 00d35c1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00d35bb0 with catch @ 00d35c1c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35be0 with catch @ 00d35c20
                        */
              uVar23 = FUN_00d36c44(&local_12c8);
              uVar22 = FUN_00d36c44(&local_12c8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35b90 with catch @ 00d35c34
                        */
              local_140 = CONCAT44(local_140._4_4_,uVar22);
              uStack_148 = CONCAT44(uVar23,uVar21);
              goto LAB_00d359b0;
            }
            break;
          case 't':
            cVar3 = pcVar10[2];
            if ((cVar3 == ' ') || (cVar3 == '\t')) {
              local_12c8 = pcVar10 + 2;
              uVar21 = FUN_00d36c44(&local_12c8);
              uVar23 = FUN_00d36c44(&local_12c8);
              uStack_134 = FUN_00d36c44(&local_12c8);
              local_140 = CONCAT44(uVar21,(undefined4)local_140);
              uStack_138 = uVar23;
              goto LAB_00d359b0;
            }
          }
        }
        iVar7 = strncmp(pcVar10,"illum",5);
        if ((iVar7 == 0) && ((pcVar10[5] == ' ' || (pcVar10[5] == '\t')))) {
          pcVar10 = pcVar10 + 6;
          local_12c8 = pcVar10;
          sVar9 = strspn(pcVar10," \t");
          pcVar10 = pcVar10 + sVar9;
          local_12c8 = pcVar10;
          iVar7 = atoi(pcVar10);
          sVar9 = strcspn(pcVar10," \t\r");
          local_12c8 = pcVar10 + sVar9;
          local_118 = iVar7;
        }
        else {
          if (cVar6 == 'T') {
            if (pcVar10[1] == 'r') {
              cVar6 = pcVar10[2];
                    /* try { // try from 00d35d60 to 00e35edb has its CatchHandler @ 00d35d60
                       catch() { ... } // from try @ 00d35d60 with catch @ 00d35d60
                       catch() { ... } // from try @ 00d35ee4 with catch @ 00d35d60 */
              if ((cVar6 == ' ') || (cVar6 == '\t')) {
                local_12c8 = pcVar10 + 2;
                local_11c = (float)FUN_00d36c44(&local_12c8);
                local_11c = 1.0 - local_11c;
                goto LAB_00d359b0;
              }
            }
          }
          else if (cVar6 == 'd') {
            cVar6 = pcVar10[1];
            if ((cVar6 == ' ') || (cVar6 == '\t')) {
              local_12c8 = pcVar10 + 1;
              local_11c = (float)FUN_00d36c44(&local_12c8);
              goto LAB_00d359b0;
            }
          }
          iVar7 = strncmp(pcVar10,"map_Ka",6);
          if ((iVar7 == 0) && ((pcVar10[6] == ' ' || (pcVar10[6] == '\t')))) {
            pcVar10 = pcVar10 + 7;
            local_12c8 = pcVar10;
            sVar9 = strlen(pcVar10);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_110,pcVar10,sVar9);
            uVar16 = local_110 >> 1 & 0x7f;
            if ((local_110 & 1) != 0) {
              uVar16 = uStack_108;
            }
            if (uVar16 != 0) {
              lVar17 = 0;
              while( true ) {
                puVar11 = (undefined1 *)((long)&local_110 + 1);
                if ((local_110 & 1) != 0) {
                  puVar11 = local_100;
                }
                if (puVar11[lVar17] == '\\') {
                  puVar11[lVar17] = 0x2f;
                }
                if (uVar16 - 1 == lVar17) break;
                lVar17 = lVar17 + 1;
              }
            }
          }
          else {
            iVar7 = strncmp(pcVar10,"map_Kd",6);
            if ((iVar7 == 0) && ((pcVar10[6] == ' ' || (pcVar10[6] == '\t')))) {
                    /* try { // try from 00d35edc to 00e35ee3 has its CatchHandler @ 00d35f90 */
              pcVar10 = pcVar10 + 7;
              local_12c8 = pcVar10;
                    /* try { // try from 00d35ee4 to 00e35fab has its CatchHandler @ 00d35d60 */
              sVar9 = strlen(pcVar10);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&uStack_f8,pcVar10,sVar9);
              uVar16 = uStack_f8 >> 1 & 0x7f;
              if ((uStack_f8 & 1) != 0) {
                uVar16 = local_f0;
              }
              if (uVar16 != 0) {
                lVar17 = 0;
                while( true ) {
                  puVar11 = (undefined1 *)((long)&uStack_f8 + 1);
                  if ((uStack_f8 & 1) != 0) {
                    puVar11 = puStack_e8;
                  }
                  if (puVar11[lVar17] == '\\') {
                    puVar11[lVar17] = 0x2f;
                  }
                  if (uVar16 - 1 == lVar17) break;
                  lVar17 = lVar17 + 1;
                }
              }
            }
            else {
              iVar7 = strncmp(pcVar10,"map_Ks",6);
              if ((iVar7 == 0) && ((pcVar10[6] == ' ' || (pcVar10[6] == '\t')))) {
                pcVar10 = pcVar10 + 7;
                local_12c8 = pcVar10;
                sVar9 = strlen(pcVar10);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_e0,pcVar10,sVar9);
                    /* catch() { ... } // from try @ 00d35edc with catch @ 00d35f90 */
                uVar16 = local_e0 >> 1 & 0x7f;
                if ((local_e0 & 1) != 0) {
                  uVar16 = uStack_d8;
                }
                if (uVar16 != 0) {
                  lVar17 = 0;
                  while( true ) {
                    /* try { // try from 00d35fac to 00e3605f has its CatchHandler @ 00d35fac
                       catch() { ... } // from try @ 00d35fac with catch @ 00d35fac
                       catch() { ... } // from try @ 00d361d8 with catch @ 00d35fac
                       catch() { ... } // from try @ 00d362b8 with catch @ 00d35fac */
                    puVar11 = (undefined1 *)((long)&local_e0 + 1);
                    if ((local_e0 & 1) != 0) {
                      puVar11 = local_d0;
                    }
                    if (puVar11[lVar17] == '\\') {
                      puVar11[lVar17] = 0x2f;
                    }
                    if (uVar16 - 1 == lVar17) break;
                    lVar17 = lVar17 + 1;
                  }
                }
              }
              else {
                iVar7 = strncmp(pcVar10,"map_Ns",6);
                if ((iVar7 == 0) && ((pcVar10[6] == ' ' || (pcVar10[6] == '\t')))) {
                  pcVar10 = pcVar10 + 7;
                  local_12c8 = pcVar10;
                  sVar9 = strlen(pcVar10);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&uStack_c8,pcVar10,sVar9);
                  uVar16 = uStack_c8 >> 1 & 0x7f;
                  if ((uStack_c8 & 1) != 0) {
                    uVar16 = local_c0;
                  }
                  if (uVar16 != 0) {
                    lVar17 = 0;
                    while( true ) {
                      puVar11 = (undefined1 *)((long)&uStack_c8 + 1);
                      if ((uStack_c8 & 1) != 0) {
                        puVar11 = puStack_b8;
                      }
                      if (puVar11[lVar17] == '\\') {
                        puVar11[lVar17] = 0x2f;
                      }
                      if (uVar16 - 1 == lVar17) break;
                    /* try { // try from 00d36060 to 00e36077 has its CatchHandler @ 00d36394 */
                      lVar17 = lVar17 + 1;
                    }
                  }
                }
                else {
                  pcVar10 = strchr(pcVar10,0x20);
                  if ((pcVar10 != (char *)0x0) ||
                     (pcVar10 = strchr(local_12c8,9), pcVar10 != (char *)0x0)) {
                    __src_00 = local_12c8;
                    uStack_12d8 = 0;
                    local_12d0 = (undefined1 *)0x0;
                    local_12e0 = (__tree_end_node *)0x0;
                    uVar16 = (long)pcVar10 - (long)local_12c8;
                    if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (uVar16 < 0x17) {
                      local_12e0 = (__tree_end_node *)(ulong)(byte)((int)uVar16 << 1);
                      puVar11 = (undefined1 *)((ulong)&local_12e0 | 1);
                      if (uVar16 != 0) goto LAB_00d36330;
                    }
                    else {
                      uVar18 = uVar16 + 0x10 & 0xfffffffffffffff0;
                      puVar11 = operator_new(uVar18);
                      local_12e0 = (__tree_end_node *)(uVar18 | 1);
                      uStack_12d8 = uVar16;
                      local_12d0 = puVar11;
LAB_00d36330:
                      memcpy(puVar11,__src_00,uVar16);
                    }
                    puVar11[uVar16] = 0;
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string<decltype(nullptr)>(local_12f8,pcVar10 + 1);
                    puVar11 = local_12d0;
                    uVar16 = uStack_12d8;
                    /* catch() { ... } // from try @ 00d36144 with catch @ 00d36354
                       catch() { ... } // from try @ 00d361cc with catch @ 00d36354 */
                    /* catch() { ... } // from try @ 00d362b0 with catch @ 00d36358 */
                    local_1170 = (undefined1 *)0x0;
                    uStack_1178 = 0;
                    local_1180 = (__tree_end_node *)0x0;
                    if (((ulong)local_12e0 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d36168 with catch @ 00d36374 */
                      uStack_1178 = uStack_12d8;
                      local_1180 = local_12e0;
                      local_1170 = local_12d0;
                    }
                    else {
                      if (0xffffffffffffffef < uStack_12d8) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                    /* catch() { ... } // from try @ 00d36060 with catch @ 00d36394 */
                      if (uStack_12d8 < 0x17) {
                        local_1180 = (__tree_end_node *)(ulong)(byte)((int)uStack_12d8 << 1);
                        puVar12 = puVar15;
                        if (uStack_12d8 != 0) goto LAB_00d363f4;
                      }
                      else {
                        uVar18 = uStack_12d8 + 0x10 & 0xfffffffffffffff0;
                        puVar12 = operator_new(uVar18);
                        local_1180 = (__tree_end_node *)(uVar18 | 1);
                        uStack_1178 = uVar16;
                        local_1170 = puVar12;
LAB_00d363f4:
                        memcpy(puVar12,puVar11,uVar16);
                      }
                      puVar12[uVar16] = 0;
                    }
                    __src = local_12e8;
                    uVar16 = uStack_12f0;
                    if (((byte)local_12f8[0] & 1) != 0) {
                      if (0xffffffffffffffef < uStack_12f0) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_length_error();
                      }
                      if (uStack_12f0 < 0x17) {
                        local_1168 = CONCAT71(local_1168._1_7_,(char)((int)uStack_12f0 << 1));
                        __dest = (void *)((long)&local_1168 + 1);
                        if (uStack_12f0 != 0) goto LAB_00d3649c;
                      }
                      else {
                        uVar18 = uStack_12f0 + 0x10 & 0xfffffffffffffff0;
                        __dest = operator_new(uVar18);
                        local_1168 = uVar18 | 1;
                        uStack_1160 = uVar16;
                        local_1158 = __dest;
LAB_00d3649c:
                        memcpy(__dest,__src,uVar16);
                      }
                      *(undefined1 *)((long)__dest + uVar16) = 0;
                    }
                    pp_Var13 = std::__ndk1::
                               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                               ::
                               __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                                           *)&local_b0,&local_12a8,(basic_string *)&local_1180);
                    if (*pp_Var13 == (__tree_node_base *)0x0) {
                      p_Var14 = operator_new(0x50);
                      puVar11 = local_1170;
                      uVar16 = uStack_1178;
                      p_Var5 = local_1180;
                      local_1170 = (undefined1 *)0x0;
                      uStack_1178 = 0;
                      local_1180 = (__tree_end_node *)0x0;
                      *(undefined1 **)(p_Var14 + 0x30) = puVar11;
                      *(ulong *)(p_Var14 + 0x28) = uVar16;
                      *(__tree_end_node **)(p_Var14 + 0x20) = p_Var5;
                      *(undefined8 *)p_Var14 = 0;
                      *(undefined8 *)(p_Var14 + 8) = 0;
                      *(__tree_end_node **)(p_Var14 + 0x10) = local_12a8;
                      *(ulong *)(p_Var14 + 0x40) = uStack_1160;
                      *(ulong *)(p_Var14 + 0x38) = local_1168;
                      *(void **)(p_Var14 + 0x48) = local_1158;
                      *pp_Var13 = p_Var14;
                      if (*(__tree_node **)local_b0 != (__tree_node *)0x0) {
                        p_Var14 = *pp_Var13;
                        local_b0 = *(__tree_node **)local_b0;
                      }
                      std::__ndk1::
                      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                                ((__tree_node_base *)local_a8,p_Var14);
                      local_a0 = local_a0 + 1;
                    }
                    if ((local_1168 & 1) != 0) {
                      operator_delete(local_1158);
                    }
                    if (((ulong)local_1180 & 1) != 0) {
                      operator_delete(local_1170);
                    }
                    if (((byte)local_12f8[0] & 1) != 0) {
                      operator_delete(local_12e8);
                    }
                    if (((ulong)local_12e0 & 1) != 0) {
                      operator_delete(local_12d0);
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00d359b0:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d35838 with catch @ 00d359b4
                        */
      bVar19 = (byte)local_12c0 & 1;
    }
                    /* try { // try from 00d359b8 to 00e359f3 has its CatchHandler @ 00d359b8
                       catch(type#1 @ 00000000) { ... } // from try @ 00d359b8 with catch @ 00d359b8
                       catch(type#1 @ 00000000) { ... } // from try @ 00d35a80 with catch @ 00d359b8
                        */
    if (bVar19 != 0) {
      operator_delete(local_12b0);
    }
  }
  lVar17 = *(long *)param_2;
  lVar2 = *(long *)(param_2 + 8);
  local_1170 = (undefined1 *)0x0;
  uStack_1178 = 0;
  local_1180 = (__tree_end_node *)0x0;
  if (((ulong)local_178 & 1) == 0) {
    uStack_1178 = uStack_170;
    local_1180 = local_178;
    local_1170 = local_168;
    goto LAB_00d36654;
  }
  if (0xffffffffffffffef < uStack_170) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_170 < 0x17) {
    puVar15 = (undefined1 *)((ulong)&local_1180 | 1);
    local_1180 = (__tree_end_node *)(ulong)(byte)((int)uStack_170 << 1);
    if (uStack_170 != 0) goto LAB_00d3663c;
  }
  else {
    uVar18 = uStack_170 + 0x10 & 0xfffffffffffffff0;
    puVar15 = operator_new(uVar18);
    local_1180 = (__tree_end_node *)(uVar18 | 1);
    uStack_1178 = uVar16;
    local_1170 = puVar15;
LAB_00d3663c:
    memcpy(puVar15,puVar11,uVar16);
  }
  puVar15[uVar16] = 0;
LAB_00d36654:
  local_1168 = CONCAT44(local_1168._4_4_,(int)((ulong)(lVar2 - lVar17) >> 5) * -0x49249249);
  pp_Var13 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
             ::
             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                         *)param_1,(__tree_end_node **)&local_12c0,(basic_string *)&local_1180);
  if (*pp_Var13 == (__tree_node_base *)0x0) {
    p_Var14 = operator_new(0x40);
    puVar15 = local_1170;
    uVar16 = uStack_1178;
    p_Var5 = local_1180;
    local_1170 = (undefined1 *)0x0;
    uStack_1178 = 0;
    *(undefined1 **)(p_Var14 + 0x30) = puVar15;
    local_1180 = (__tree_end_node *)0x0;
    *(undefined8 *)p_Var14 = 0;
    *(undefined8 *)(p_Var14 + 8) = 0;
    *(ulong *)(p_Var14 + 0x28) = uVar16;
    *(__tree_end_node **)(p_Var14 + 0x20) = p_Var5;
    *(undefined4 *)(p_Var14 + 0x38) = (undefined4)local_1168;
    *(ulong *)(p_Var14 + 0x10) = CONCAT71(uStack_12bf,local_12c0);
    *pp_Var13 = p_Var14;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var14 = *pp_Var13;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 8),p_Var14);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  if (((ulong)local_1180 & 1) != 0) {
    operator_delete(local_1170);
  }
  pmVar1 = *(material_t **)(param_2 + 8);
  if (pmVar1 == *(material_t **)(param_2 + 0x10)) {
    std::__ndk1::vector<tinyobj::material_t,std::__ndk1::allocator<tinyobj::material_t>>::
    __push_back_slow_path<tinyobj::material_t_const&>
              ((vector<tinyobj::material_t,std::__ndk1::allocator<tinyobj::material_t>> *)param_2,
               (material_t *)&local_178);
  }
  else {
    material_t::material_t(pmVar1,(material_t *)&local_178);
    *(material_t **)(param_2 + 8) = pmVar1 + 0xe0;
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  operator_delete(__s);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
             *)&local_b0,local_a8);
  if ((uStack_c8 & 1) != 0) {
    operator_delete(puStack_b8);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((uStack_f8 & 1) != 0) {
    operator_delete(puStack_e8);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  if (((ulong)local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  local_12a0 = 0x16987e8;
  local_1290 = 0x1698810;
  local_1220[0] = 0x1698838;
  ppuStack_1288 = &PTR__basic_stringbuf_01698960;
  if ((local_1248 & 1) != 0) {
    operator_delete(local_1238);
  }
  ppuStack_1288 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_1280);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_1220);
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

