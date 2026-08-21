
/* cocos2d::BMFontConfiguration::parseConfigFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

long * __thiscall
cocos2d::BMFontConfiguration::parseConfigFile(BMFontConfiguration *this,basic_string *param_1)

{
  long *plVar1;
  uchar *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  __tree_node_base *p_Var11;
  ulong uVar12;
  uchar *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  byte local_298 [8];
  ulong local_290;
  uchar *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar7 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar7 + 0x18))(local_298,plVar7,param_1);
  puVar13 = local_288;
  bVar4 = local_298[0];
  uVar12 = (ulong)(local_298[0] >> 1);
  if ((local_298[0] & 1) != 0) {
    uVar12 = local_290;
  }
  plVar7 = (long *)0x0;
  if (uVar12 != 0) {
    if (2 < uVar12) {
      puVar2 = (uchar *)((ulong)local_298 | 1);
      if ((local_298[0] & 1) != 0) {
        puVar2 = local_288;
      }
      iVar5 = memcmp(&DAT_0143a4eb,puVar2,3);
      if (iVar5 == 0) {
        plVar7 = (long *)parseBinaryConfigFile(this,puVar2,uVar12,param_1);
        goto joined_r0x00f021d4;
      }
    }
    puVar2 = (uchar *)((ulong)local_298 | 1);
    if ((bVar4 & 1) != 0) {
      puVar2 = puVar13;
    }
    if (*puVar2 == '\0') {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      if (plVar7 != (long *)0x0) {
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)(plVar7 + 1);
      }
      sVar8 = strlen((char *)puVar2);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_208 = 0;
      local_210 = 0;
      uStack_228 = 0;
      local_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      local_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      local_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_278 = 0;
      local_280 = 0;
      pcVar9 = strchr((char *)puVar2,10);
      if (pcVar9 != (char *)0x0) {
        plVar1 = plVar7 + 1;
        uVar12 = 0;
        puVar13 = puVar2;
        do {
          while( true ) {
            lVar14 = (long)((int)pcVar9 - (int)puVar13);
            __memcpy_chk(&local_280,puVar2 + uVar12,lVar14,0x200);
            uVar12 = uVar12 + lVar14 + 1;
            *(undefined1 *)((long)&local_280 + lVar14) = 0;
            if (uVar12 < sVar8) {
              puVar13 = (uchar *)(pcVar9 + 1);
              pcVar9 = strchr((char *)puVar13,10);
            }
            else {
              pcVar9 = (char *)0x0;
            }
                    /* catch() { ... } // from try @ 00f020a0 with catch @ 00f0203c
                       catch() { ... } // from try @ 00f020fc with catch @ 00f0203c
                       catch() { ... } // from try @ 00f021bc with catch @ 00f0203c */
            iVar5 = memcmp(&local_280,"info face",9);
            if (iVar5 != 0) break;
            pcVar10 = strstr((char *)&local_280,"size=");
            sscanf(pcVar10 + 5,"%d",this + 0xb0);
            pcVar10 = strstr((char *)&local_280,"padding=");
            sscanf(pcVar10 + 8,"%d,%d,%d,%d",this + 0x58,this + 0x5c,this + 0x60,this + 0x54);
joined_r0x00f020f0:
                    /* try { // try from 00f020f0 to 010020fb has its CatchHandler @ 00f02258 */
            if (pcVar9 == (char *)0x0) goto joined_r0x00f021d4;
          }
          iVar5 = memcmp(&local_280,"common lineHeight",0x11);
          if (iVar5 == 0) {
            pcVar10 = strstr((char *)&local_280,"lineHeight=");
                    /* try { // try from 00f020e0 to 010020ef has its CatchHandler @ 00f0225c */
            sscanf(pcVar10 + 0xb,"%d",this + 0x50);
            goto joined_r0x00f020f0;
          }
          iVar5 = memcmp(&local_280,"page id",7);
          if (iVar5 == 0) {
                    /* try { // try from 00f020fc to 0100219f has its CatchHandler @ 00f0203c */
            parseImageFileName(this,(char *)&local_280,param_1);
            goto joined_r0x00f020f0;
          }
                    /* try { // try from 00f02084 to 01002093 has its CatchHandler @ 00f02278 */
          iVar5 = memcmp(&local_280,"chars c",7);
          if (iVar5 == 0) goto joined_r0x00f020f0;
                    /* try { // try from 00f02094 to 0100209f has its CatchHandler @ 00f02260 */
                    /* try { // try from 00f020a0 to 010020df has its CatchHandler @ 00f0203c */
          if ((int)local_280 != 0x72616863) {
            iVar5 = memcmp(&local_280,"kerning first",0xd);
            if (iVar5 == 0) {
              parseKerningEntry(this,(char *)&local_280);
            }
            goto joined_r0x00f020f0;
          }
          uVar6 = parseCharacterDefinition(this,(char *)&local_280);
          plVar15 = (long *)*plVar1;
          plVar17 = plVar1;
          plVar16 = plVar1;
          while (plVar15 != (long *)0x0) {
            while (plVar16 = plVar15, uVar6 < *(uint *)((long)plVar16 + 0x1c)) {
              plVar15 = (long *)*plVar16;
              plVar17 = plVar16;
              if ((long *)*plVar16 == (long *)0x0) {
                    /* try { // try from 00f021bc to 01002293 has its CatchHandler @ 00f0203c */
                lVar14 = *plVar16;
                goto joined_r0x00f021c4;
              }
            }
            if (uVar6 <= *(uint *)((long)plVar16 + 0x1c)) break;
            plVar17 = plVar16 + 1;
            plVar15 = (long *)*plVar17;
          }
          lVar14 = *plVar17;
joined_r0x00f021c4:
          if (lVar14 != 0) goto joined_r0x00f020f0;
          p_Var11 = operator_new(0x20);
          *(uint *)(p_Var11 + 0x1c) = uVar6;
          *(undefined8 *)p_Var11 = 0;
          *(undefined8 *)(p_Var11 + 8) = 0;
          *(long **)(p_Var11 + 0x10) = plVar16;
          *plVar17 = (long)p_Var11;
          if (*(long *)*plVar7 != 0) {
            *plVar7 = *(long *)*plVar7;
            p_Var11 = (__tree_node_base *)*plVar17;
          }
                    /* try { // try from 00f021a0 to 010021af has its CatchHandler @ 00f02254 */
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)plVar7[1],p_Var11);
                    /* try { // try from 00f021b0 to 010021bb has its CatchHandler @ 00f02250 */
          plVar7[2] = plVar7[2] + 1;
        } while (pcVar9 != (char *)0x0);
      }
    }
  }
joined_r0x00f021d4:
  if ((local_298[0] & 1) != 0) {
    operator_delete(local_288);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}

