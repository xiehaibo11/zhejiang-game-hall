
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::renderer::ProgramLib::switchProgram(unsigned long, unsigned long,
   std::__ndk1::vector<std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const*,
   std::__ndk1::allocator<std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const*>
   > const&) */

void __thiscall
cocos2d::renderer::ProgramLib::switchProgram
          (ProgramLib *this,ulong param_1,ulong param_2,vector *param_3)

{
  Value *this_00;
  char *pcVar1;
  char *pcVar2;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  _Var3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  Program *pPVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *p_Var12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  basic_string *pbVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  void *pvVar26;
  void *pvVar27;
  undefined1 auVar28 [12];
  ulong local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  ulong local_188;
  undefined8 uStack_180;
  void *local_178;
  ulong local_170;
  ulong uStack_168;
  char *local_160;
  Program *local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_138 [16];
  void *local_128;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_ff;
  undefined6 uStack_fe;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  char *local_f0;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_df;
  undefined6 uStack_de;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  char *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  char *local_80;
  
  lVar6 = tpidr_el0;
  lVar15 = *(long *)(lVar6 + 0x28);
  local_150 = 0;
  local_148 = param_2;
  local_140 = param_1;
  MathUtil::combineHash(&local_150,&local_140);
  MathUtil::combineHash(&local_150,&local_148);
  pPVar8 = *(Program **)(this + 0x58);
  if ((pPVar8 == (Program *)0x0) || (*(ulong *)(pPVar8 + 0x80) != local_150)) {
    uVar17 = *(ulong *)(this + 0x38);
    if (uVar17 != 0) {
      uVar19 = uVar17 - 1;
      if ((uVar19 & uVar17) == 0) {
        uVar20 = uVar19 & local_150;
      }
      else {
        uVar20 = local_150;
        if (uVar17 <= local_150) {
          uVar20 = 0;
          if (uVar17 != 0) {
            uVar20 = local_150 / uVar17;
          }
          uVar20 = local_150 - uVar20 * uVar17;
        }
      }
      plVar21 = *(long **)(*(long *)(this + 0x30) + uVar20 * 8);
      if (plVar21 != (long *)0x0) {
        do {
          while( true ) {
            while( true ) {
              plVar21 = (long *)*plVar21;
              if (plVar21 == (long *)0x0) goto LAB_009c1d78;
              uVar22 = plVar21[1];
                    /* try { // try from 009c1d38 to 00ac1e1b has its CatchHandler @ 009c1b90 */
              if (uVar22 != local_150) break;
              if (plVar21[2] == local_150) {
                pPVar8 = (Program *)plVar21[3];
                goto LAB_009c1e20;
              }
            }
            if ((uVar19 & uVar17) == 0) break;
            if (uVar17 <= uVar22) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar22 / uVar17;
              }
              uVar22 = uVar22 - uVar5 * uVar17;
            }
            if (uVar22 != uVar20) goto LAB_009c1d78;
          }
        } while ((uVar22 & uVar19) == uVar20);
      }
    }
LAB_009c1d78:
    local_158 = (Program *)0x0;
    uVar17 = *(ulong *)(this + 0x10);
    if (uVar17 != 0) {
      uVar19 = uVar17 - 1;
      if ((uVar19 & uVar17) == 0) {
                    /* catch() { ... } // from try @ 009c1c10 with catch @ 009c1dac */
        uVar20 = uVar19 & local_140;
      }
      else {
        uVar20 = local_140;
        if (uVar17 <= local_140) {
          uVar20 = 0;
          if (uVar17 != 0) {
            uVar20 = local_140 / uVar17;
          }
          uVar20 = local_140 - uVar20 * uVar17;
        }
      }
                    /* catch() { ... } // from try @ 009c1c04 with catch @ 009c1db0 */
                    /* catch() { ... } // from try @ 009c1be4 with catch @ 009c1db4 */
      plVar21 = *(long **)(*(long *)(this + 8) + uVar20 * 8);
      if (plVar21 != (long *)0x0) {
        for (plVar21 = (long *)*plVar21; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          uVar22 = plVar21[1];
          if (uVar22 == local_140) {
            if (plVar21[2] == local_140) {
              local_188 = 0;
              uStack_180 = 0;
              local_178 = (void *)0x0;
              local_100 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              bStack_ff = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              uStack_fe = 0;
              uStack_f8 = 0;
              uStack_f7 = 0;
              local_f0 = (char *)0x0;
              uStack_d8 = 0;
              uStack_d7 = 0;
              local_e0 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                          )0x0;
              bStack_df = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              uStack_de = 0;
                    /* try { // try from 009c1e74 to 00ac1e8b has its CatchHandler @ 009c2064 */
              uStack_c8 = 0;
              local_d0 = (char *)0x0;
              local_c0 = 0x3f800000;
              lVar9 = *(long *)param_3;
              if (0 < (int)((ulong)(*(long *)(param_3 + 8) - lVar9) >> 3)) {
                    /* try { // try from 009c1e94 to 00ac1e9f has its CatchHandler @ 009c2060 */
                    /* try { // try from 009c1ea0 to 00ac1eab has its CatchHandler @ 009c205c */
                lVar24 = (*(long *)(param_3 + 8) - lVar9) * 0x20000000 >> 0x20;
                    /* try { // try from 009c1eac to 00ac1fe3 has its CatchHandler @ 009c2074 */
                while( true ) {
                  lVar24 = lVar24 + -1;
                  puVar23 = *(undefined8 **)(lVar9 + lVar24 * 8);
                  plVar25 = (long *)*puVar23;
                  while (plVar25 != puVar23 + 1) {
                    pbVar14 = (basic_string *)(plVar25 + 4);
                    lVar9 = std::__ndk1::
                            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                            ::
                            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                      (&local_e0,pbVar14);
                    if (lVar9 == 0) {
                      this_00 = (Value *)(plVar25 + 7);
                      if ((int)plVar25[8] == 6) {
                        uVar17 = cocos2d::Value::asBool(this_00);
                        pcVar2 = "1";
                        if ((uVar17 & 1) == 0) {
                          pcVar2 = "0";
                        }
                        param_2 = 1;
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign(&local_100,pcVar2,1);
                      }
                      else {
                        auVar28 = cocos2d::Value::asUnsignedInt(this_00);
                        std::__ndk1::to_string(auVar28._0_8_,auVar28._8_4_);
                        if (((byte)local_100 & 1) != 0) {
                          *local_f0 = '\0';
                          uStack_f8 = 0;
                          uStack_f7 = 0;
                          if (((byte)local_100 & 1) != 0) {
                            operator_delete(local_f0);
                          }
                        }
                        local_f0 = local_80;
                        uStack_f8 = (undefined1)uStack_88;
                        uStack_f7 = (undefined7)(CONCAT17(uStack_81,uStack_88) >> 8);
                        local_100 = local_90;
                        bStack_ff = SUB61(uStack_8f,0);
                        uStack_fe = (undefined6)
                                    (CONCAT17(uStack_89,CONCAT61(uStack_8f,local_90)) >> 0x10);
                      }
                      std::__ndk1::operator+
                                ((__ndk1 *)"#define ",(char *)pbVar14,(basic_string *)param_2);
                      puVar10 = (ulong *)std::__ndk1::
                                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                         ::append(local_138," ",1);
                      local_110 = (void *)puVar10[2];
                      uStack_118 = puVar10[1];
                      local_120 = *puVar10;
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      *puVar10 = 0;
                      uVar17 = (ulong)((byte)local_100 >> 1);
                      pcVar2 = (char *)((ulong)&local_100 | 1);
                      if (((byte)local_100 & 1) != 0) {
                        uVar17 = CONCAT71(uStack_f7,uStack_f8);
                        pcVar2 = local_f0;
                      }
                      puVar11 = (undefined8 *)
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                          *)&local_120,pcVar2,uVar17);
                    /* try { // try from 009c1fe4 to 00ac20cb has its CatchHandler @ 009c1e1c */
                      local_a0 = (void *)puVar11[2];
                      uVar18 = *puVar11;
                      uStack_a8 = (undefined7)puVar11[1];
                      uStack_a1 = (undefined1)((ulong)puVar11[1] >> 0x38);
                      local_b0 = SUB81(uVar18,0);
                      uStack_af = (undefined6)((ulong)uVar18 >> 8);
                      uStack_a9 = (undefined1)((ulong)uVar18 >> 0x38);
                      puVar11[1] = 0;
                      puVar11[2] = 0;
                      *puVar11 = 0;
                      puVar10 = (ulong *)std::__ndk1::
                                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                         ::append(&local_b0,"\n",1);
                      local_80 = (char *)puVar10[2];
                      uVar20 = puVar10[1];
                      uVar19 = *puVar10;
                      uStack_88 = (undefined7)uVar20;
                      uStack_81 = (undefined1)(uVar20 >> 0x38);
                      local_90 = SUB81(uVar19,0);
                      uStack_8f = (undefined6)(uVar19 >> 8);
                      uStack_89 = (undefined1)(uVar19 >> 0x38);
                      puVar10[1] = 0;
                      puVar10[2] = 0;
                      *puVar10 = 0;
                      uVar17 = (ulong)((byte)local_90 >> 1);
                      pcVar2 = (char *)((ulong)&local_90 | 1);
                      if ((uVar19 & 1) != 0) {
                        uVar17 = uVar20;
                        pcVar2 = local_80;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_188,pcVar2,uVar17);
                      if (((byte)local_90 & 1) != 0) {
                    /* try { // try from 009c20cc to 00ac2123 has its CatchHandler @ 009c20cc
                       catch() { ... } // from try @ 009c20cc with catch @ 009c20cc
                       catch() { ... } // from try @ 009c22ac with catch @ 009c20cc */
                        operator_delete(local_80);
                      }
                      if (((byte)local_b0 & 1) != 0) {
                        operator_delete(local_a0);
                      }
                      if ((local_120 & 1) != 0) {
                        operator_delete(local_110);
                      }
                      if (((byte)local_138[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009c1e74 with catch @ 009c2064 */
                        operator_delete(local_128);
                      }
                    /* catch() { ... } // from try @ 009c1eac with catch @ 009c2074 */
                      std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                      ::
                      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Value_const&>
                                (&local_e0,pbVar14,pbVar14,this_00);
                      param_2 = (ulong)pbVar14;
                    }
                    plVar16 = (long *)plVar25[1];
                    if ((long *)plVar25[1] == (long *)0x0) {
                      plVar16 = plVar25 + 2;
                      bVar7 = *(long **)*plVar16 != plVar25;
                      plVar25 = (long *)*plVar16;
                      if (bVar7) {
                        do {
                          lVar9 = *plVar16;
                          plVar16 = (long *)(lVar9 + 0x10);
                          plVar25 = (long *)*plVar16;
                        } while (*plVar25 != lVar9);
                      }
                    }
                    else {
                      do {
                        plVar25 = plVar16;
                        plVar16 = (long *)*plVar25;
                      } while ((long *)*plVar25 != (long *)0x0);
                    }
                  }
                  pcVar2 = local_d0;
                  if (lVar24 < 1) break;
                  lVar9 = *(long *)param_3;
                }
                while (pcVar2 != (char *)0x0) {
                  puVar23 = *(undefined8 **)pcVar2;
                  cocos2d::Value::~Value((Value *)((long)pcVar2 + 0x28));
                    /* try { // try from 009c2124 to 00ac213b has its CatchHandler @ 009c232c */
                  if ((*(byte *)((long)pcVar2 + 0x10) & 1) != 0) {
                    operator_delete(*(void **)((long)pcVar2 + 0x20));
                  }
                  operator_delete(pcVar2);
                  pcVar2 = (char *)puVar23;
                }
              }
                    /* try { // try from 009c2144 to 00ac214f has its CatchHandler @ 009c2328 */
              pvVar26 = (void *)CONCAT62(uStack_de,CONCAT11(bStack_df,local_e0));
              local_e0 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                          )0x0;
              bStack_df = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           )0x0;
              uStack_de = 0;
              if (pvVar26 != (void *)0x0) {
                    /* try { // try from 009c2150 to 00ac215b has its CatchHandler @ 009c2324 */
                operator_delete(pvVar26);
              }
              if (((byte)local_100 & 1) != 0) {
                    /* try { // try from 009c215c to 00ac22ab has its CatchHandler @ 009c233c */
                operator_delete(local_f0);
              }
              puVar10 = (ulong *)std::__ndk1::
                                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                 ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                           *)&local_188,"\n",1);
              local_160 = (char *)puVar10[2];
              uStack_168 = puVar10[1];
              local_170 = *puVar10;
              puVar10[1] = 0;
              puVar10[2] = 0;
              *puVar10 = 0;
              if ((local_188 & 1) != 0) {
                operator_delete(local_178);
              }
              uStack_198 = 0;
              local_190 = (void *)0x0;
              local_1a0 = 0;
              if ((plVar21[7] & 1U) == 0) {
                local_190 = (void *)plVar21[9];
                uStack_198 = plVar21[8];
                local_1a0 = plVar21[7];
              }
              else {
                uVar17 = plVar21[8];
                if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                pvVar26 = (void *)plVar21[9];
                if (uVar17 < 0x17) {
                  pvVar27 = (void *)((ulong)&local_1a0 | 1);
                  local_1a0 = (ulong)(byte)((int)uVar17 << 1);
                  if (uVar17 != 0) goto LAB_009c2220;
                }
                else {
                  uVar19 = uVar17 + 0x10 & 0xfffffffffffffff0;
                  pvVar27 = operator_new(uVar19);
                  local_1a0 = uVar19 | 1;
                  uStack_198 = uVar17;
                  local_190 = pvVar27;
LAB_009c2220:
                  memcpy(pvVar27,pvVar26,uVar17);
                }
                *(undefined1 *)((long)pvVar27 + uVar17) = 0;
              }
              FUN_009c2778(&local_e0,&local_1a0,param_3);
              if ((local_1a0 & 1) != 0) {
                operator_delete(local_190);
              }
              FUN_009c1044(&local_100,&local_e0);
              uVar17 = local_170 >> 1 & 0x7f;
              pcVar2 = (char *)((ulong)&local_170 | 1);
              if ((local_170 & 1) != 0) {
                uVar17 = uStack_168;
                pcVar2 = local_160;
              }
              p_Var12 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                         *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::insert(&local_100,0,pcVar2,uVar17);
              pcVar2 = *(char **)(p_Var12 + 0x10);
              uVar18 = *(undefined8 *)(p_Var12 + 1);
              _Var3 = *p_Var12;
              uStack_88 = (undefined7)((ulong)*(undefined8 *)(p_Var12 + 8) >> 8);
              local_90 = SUB81(uVar18,0);
              uStack_8f = (undefined6)((ulong)uVar18 >> 8);
              uStack_89 = (undefined1)((ulong)uVar18 >> 0x38);
              *(undefined8 *)p_Var12 = 0;
              *(undefined8 *)(p_Var12 + 8) = 0;
              *(undefined8 *)(p_Var12 + 0x10) = 0;
                    /* try { // try from 009c22ac to 00ac2393 has its CatchHandler @ 009c20cc */
              if (((byte)local_e0 & 1) != 0) {
                *local_d0 = 0;
                uStack_d8 = 0;
                uStack_d7 = 0;
                if (((byte)local_e0 & 1) != 0) {
                  operator_delete(local_d0);
                }
              }
              uStack_de = uStack_8f;
              bStack_df = local_90;
              local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          )0x0;
              uStack_8f = 0;
              uStack_d7 = uStack_88;
              uStack_d8 = uStack_89;
              uStack_89 = 0;
              uStack_88 = 0;
              local_e0 = _Var3;
              local_d0 = pcVar2;
              if (((byte)local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
              uStack_1b8 = 0;
              local_1b0 = (void *)0x0;
              local_1c0 = 0;
                    /* catch() { ... } // from try @ 009c2150 with catch @ 009c2324 */
                    /* catch() { ... } // from try @ 009c2144 with catch @ 009c2328 */
                    /* catch() { ... } // from try @ 009c2124 with catch @ 009c232c */
              if ((plVar21[10] & 1U) == 0) {
                local_1b0 = (void *)plVar21[0xc];
                uStack_1b8 = plVar21[0xb];
                local_1c0 = plVar21[10];
                    /* catch() { ... } // from try @ 009c215c with catch @ 009c233c */
              }
              else {
                uVar17 = plVar21[0xb];
                if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                pvVar26 = (void *)plVar21[0xc];
                if (uVar17 < 0x17) {
                  pvVar27 = (void *)((ulong)&local_1c0 | 1);
                  local_1c0 = (ulong)(byte)((int)uVar17 << 1);
                  if (uVar17 != 0) goto LAB_009c239c;
                }
                else {
                  uVar19 = uVar17 + 0x10 & 0xfffffffffffffff0;
                  pvVar27 = operator_new(uVar19);
                  local_1c0 = uVar19 | 1;
                    /* try { // try from 009c2394 to 00ac23f3 has its CatchHandler @ 009c2394
                       catch() { ... } // from try @ 009c2394 with catch @ 009c2394
                       catch() { ... } // from try @ 009c28c8 with catch @ 009c2394 */
                  uStack_1b8 = uVar17;
                  local_1b0 = pvVar27;
LAB_009c239c:
                  memcpy(pvVar27,pvVar26,uVar17);
                }
                *(undefined1 *)((long)pvVar27 + uVar17) = 0;
              }
              FUN_009c2778(&local_100,&local_1c0,param_3);
              if ((local_1c0 & 1) != 0) {
                operator_delete(local_1b0);
              }
              FUN_009c1044(&local_90,&local_100);
              uVar17 = local_170 >> 1 & 0x7f;
              pcVar2 = (char *)((ulong)&local_170 | 1);
              if ((local_170 & 1) != 0) {
                uVar17 = uStack_168;
                pcVar2 = local_160;
              }
                    /* try { // try from 009c23f4 to 00ac240b has its CatchHandler @ 009c28e0 */
              pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)std::__ndk1::
                           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           ::insert(&local_90,0,pcVar2,uVar17);
              pcVar2 = *(char **)(pbVar13 + 0x10);
              uVar18 = *(undefined8 *)(pbVar13 + 1);
              bVar4 = *pbVar13;
              uStack_a8 = (undefined7)((ulong)*(undefined8 *)(pbVar13 + 8) >> 8);
                    /* try { // try from 009c2414 to 00ac241f has its CatchHandler @ 009c28dc */
              local_b0 = SUB81(uVar18,0);
              uStack_af = (undefined6)((ulong)uVar18 >> 8);
              uStack_a9 = (undefined1)((ulong)uVar18 >> 0x38);
              *(undefined8 *)pbVar13 = 0;
              *(undefined8 *)(pbVar13 + 8) = 0;
              *(undefined8 *)(pbVar13 + 0x10) = 0;
                    /* try { // try from 009c2420 to 00ac242f has its CatchHandler @ 009c28d8 */
              if (((byte)local_100 & 1) != 0) {
                *local_f0 = '\0';
                uStack_f8 = 0;
                uStack_f7 = 0;
                if (((byte)local_100 & 1) != 0) {
                  operator_delete(local_f0);
                }
              }
              uStack_fe = uStack_af;
              bStack_ff = local_b0;
              local_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          )0x0;
              uStack_af = 0;
              uStack_f7 = uStack_a8;
              uStack_f8 = uStack_a9;
              uStack_a9 = 0;
              uStack_a8 = 0;
              local_100 = bVar4;
              local_f0 = pcVar2;
              if (((byte)local_90 & 1) != 0) {
                operator_delete(local_80);
              }
              pPVar8 = operator_new(0x88);
              Program::Program(pPVar8);
              pcVar2 = (char *)((ulong)&local_e0 | 1);
              if (((byte)local_e0 & 1) != 0) {
                pcVar2 = local_d0;
              }
              pcVar1 = (char *)((ulong)&local_100 | 1);
              if (((byte)local_100 & 1) != 0) {
                pcVar1 = local_f0;
              }
              local_158 = pPVar8;
              Program::init(pPVar8,*(DeviceGraphics **)this,pcVar2,pcVar1);
              Program::link(pPVar8);
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
              ::__emplace_unique_key_args<unsigned_long,unsigned_long&,cocos2d::renderer::Program*&>
                        ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Program*>>>
                          *)(this + 0x30),&local_150,&local_150,&local_158);
              *(ulong *)(local_158 + 0x80) = local_150;
              if (((byte)local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
              if (((byte)local_e0 & 1) != 0) {
                operator_delete(local_d0);
              }
              if ((local_170 & 1) != 0) {
                operator_delete(local_160);
              }
              *(Program **)(this + 0x58) = local_158;
              pPVar8 = local_158;
              goto LAB_009c1e20;
            }
          }
          else {
            if ((uVar19 & uVar17) == 0) {
              uVar22 = uVar22 & uVar19;
            }
            else if (uVar17 <= uVar22) {
              uVar5 = 0;
              if (uVar17 != 0) {
                uVar5 = uVar22 / uVar17;
              }
              if (uVar22 - uVar5 * uVar17 == uVar20) goto LAB_009c1e00;
              break;
            }
            if (uVar22 != uVar20) break;
          }
LAB_009c1e00:
        }
      }
    }
    pPVar8 = (Program *)0x0;
                    /* try { // try from 009c1e1c to 00ac1e73 has its CatchHandler @ 009c1e1c
                       catch() { ... } // from try @ 009c1e1c with catch @ 009c1e1c
                       catch() { ... } // from try @ 009c1fe4 with catch @ 009c1e1c */
    *(undefined8 *)(this + 0x58) = 0;
  }
LAB_009c1e20:
  if (*(long *)(lVar6 + 0x28) != lVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar8);
  }
  return;
}

