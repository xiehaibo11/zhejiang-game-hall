
/* v8::internal::compiler::MachineGraphVerifier::Run(v8::internal::compiler::Graph*,
   v8::internal::compiler::Schedule const*, v8::internal::compiler::Linkage*, bool, char const*,
   v8::internal::Zone*) */

void v8::internal::compiler::MachineGraphVerifier::Run
               (Graph *param_1,Schedule *param_2,Linkage *param_3,bool param_4,char *param_5,
               Zone *param_6)

{
  long *plVar1;
  short sVar2;
  long lVar3;
  bool bVar4;
  Linkage *pLVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  Operator *pOVar10;
  byte *pbVar11;
  ulong uVar12;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  undefined1 *puVar13;
  basic_ostream *pbVar14;
  ulong uVar15;
  Schedule SVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long *plVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  Schedule *local_200;
  Schedule **local_1f8;
  undefined1 local_1f0;
  char *local_1e8;
  long local_1e0;
  Schedule *local_1d8;
  Linkage *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  Zone *pZStack_1b0;
  long local_1a8;
  locale local_1a0 [16];
  ulong local_190;
  undefined **local_188;
  undefined **local_180;
  undefined **local_178;
  undefined **local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined **ppuStack_118;
  undefined4 local_110;
  undefined **local_108 [15];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar24 = *(uint *)(param_1 + 0x1c);
  uVar20 = (ulong)uVar24;
  local_1c8 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (undefined1 *)0x0;
  local_1d8 = param_2;
  local_1d0 = param_3;
  pZStack_1b0 = param_6;
  if (uVar24 != 0) {
    if ((int)uVar24 < 0) {
LAB_01777994:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar13 = *(undefined1 **)(param_6 + 0x10);
    uVar15 = uVar20 + 7 & 0x1fffffff8;
    if ((ulong)(*(long *)(param_6 + 0x18) - (long)puVar13) < uVar15) {
      puVar13 = (undefined1 *)Zone::NewExpand(param_6,uVar15);
    }
    else {
      *(undefined1 **)(param_6 + 0x10) = puVar13 + uVar15;
    }
    local_1b8 = puVar13 + uVar20;
    local_1c0 = puVar13;
    do {
      *local_1c0 = 0;
      uVar20 = uVar20 - 1;
      local_1c0 = local_1c0 + 1;
      local_1c8 = puVar13;
    } while (uVar20 != 0);
  }
  plVar1 = *(long **)(local_1d8 + 0x10);
  for (plVar25 = *(long **)(local_1d8 + 8); plVar25 != plVar1; plVar25 = plVar25 + 1) {
    lVar28 = *plVar25;
    lVar27 = 0;
    uVar20 = 0;
    lVar22 = *(long *)(lVar28 + 0x40);
    uVar15 = *(long *)(lVar28 + 0x48) - lVar22 >> 3;
    local_1a8 = lVar28;
    do {
      pLVar5 = local_1d0;
      puVar21 = (undefined8 *)(lVar22 + lVar27);
      if (uVar15 <= uVar20) {
        puVar21 = (undefined8 *)(lVar28 + 0x38);
      }
      puVar21 = (undefined8 *)*puVar21;
      if (puVar21 == (undefined8 *)0x0) break;
      pOVar10 = (Operator *)*puVar21;
      switch(*(undefined2 *)(pOVar10 + 0x10)) {
      case 7:
      case 0x1c:
      case 0x33:
      case 0x47:
      case 0x49:
      case 0x4e:
      case 0x119:
      case 0x1b8:
      case 0x1e1:
switchD_01776c84_caseD_7:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 8;
        break;
      default:
        goto switchD_01776c84_caseD_8;
      case 0x10:
        bVar6 = *(byte *)(*(long *)(*(long *)(*(long *)local_1d0 + 0x10) + 0x10) + 4);
        goto LAB_01776e50;
      case 0x17:
      case 0x20:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
      case 0x128:
      case 0x129:
      case 0x12a:
      case 299:
      case 300:
      case 0x12d:
      case 0x12e:
      case 0x12f:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x13a:
      case 0x195:
      case 0x196:
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
      case 0x19d:
      case 0x1ba:
      case 0x1bc:
      case 0x1be:
      case 0x1c2:
      case 0x1c3:
      case 0x1c4:
      case 0x1d1:
      case 0x1d2:
      case 0x1d9:
      case 0x1dd:
      case 0x1de:
      case 0x1e2:
      case 0x23d:
      case 0x25c:
      case 0x25d:
      case 0x280:
      case 0x281:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 4;
        break;
      case 0x18:
      case 0x1b:
      case 0x21:
      case 0x13b:
      case 0x13c:
      case 0x13d:
      case 0x13e:
      case 0x13f:
      case 0x140:
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x144:
      case 0x145:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x149:
      case 0x14a:
      case 0x1b6:
      case 0x1b7:
      case 0x1bd:
      case 0x1bf:
      case 0x1cb:
      case 0x1ce:
      case 0x1da:
      case 0x1e3:
      case 0x1e5:
      case 0x1e6:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 5;
        break;
      case 0x19:
      case 0x15b:
      case 0x15c:
      case 0x15d:
      case 0x15e:
      case 0x15f:
      case 0x160:
      case 0x161:
      case 0x162:
      case 0x163:
      case 0x164:
      case 0x165:
      case 0x166:
      case 0x167:
      case 0x1d0:
      case 0x1d3:
      case 0x1d4:
      case 0x1d6:
      case 0x1d7:
      case 0x1db:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 0xb;
        break;
      case 0x1a:
      case 0x168:
      case 0x169:
      case 0x16a:
      case 0x16b:
      case 0x16c:
      case 0x16d:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x17b:
      case 0x17c:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18a:
      case 0x18b:
      case 0x1bb:
      case 0x1c0:
      case 0x1c9:
      case 0x1cd:
      case 0x1d5:
      case 0x1d8:
      case 0x1df:
      case 0x1e0:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 0xc;
        break;
      case 0x1e:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 7;
        break;
      case 0x1f:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 9;
        break;
      case 0x23:
        bVar7 = PhiRepresentationOf(pOVar10);
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        break;
      case 0x2b:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 0;
        break;
      case 0x31:
        lVar22 = CallDescriptorOf(pOVar10);
        if (**(long **)(lVar22 + 0x10) == 0) goto switchD_01776c84_caseD_7;
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = *(byte *)((*(long **)(lVar22 + 0x10))[2] + 4);
        break;
      case 0x32:
        iVar9 = ParameterIndexOf(pOVar10);
        if (iVar9 == -1) {
          uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
          bVar7 = *(byte *)(*(long *)pLVar5 + 4);
        }
        else {
          plVar23 = *(long **)(*(long *)pLVar5 + 0x10);
          uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
          bVar7 = (byte)*(undefined4 *)(plVar23[2] + (*plVar23 + (long)iVar9) * 8 + 4);
        }
        break;
      case 0x37:
        uVar12 = ProjectionIndexOf(pOVar10);
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        plVar23 = puVar21 + 4;
        if ((~*(uint *)((long)puVar21 + 0x14) & 0xf000000) == 0) {
          plVar23 = (long *)(*plVar23 + 0x10);
        }
        sVar2 = *(short *)(*(Operator **)*plVar23 + 0x10);
        bVar7 = 0;
        switch(sVar2) {
        case 0x130:
        case 0x132:
        case 0x134:
          if (1 < uVar12) {
LAB_017779a4:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","index <= static_cast<size_t>(1)");
          }
          bVar7 = 4;
          if (uVar12 != 0) {
            bVar7 = 1;
          }
          break;
        case 0x131:
        case 0x133:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
        case 0x141:
        case 0x142:
        case 0x144:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x196:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
          break;
        case 0x143:
        case 0x145:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
          if (1 < uVar12) goto LAB_017779a4;
          bVar7 = 5;
          if (uVar12 != 0) {
            bVar7 = 1;
          }
          break;
        case 0x195:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
          if (1 < uVar12) goto LAB_017779a4;
          bVar7 = 4;
          break;
        default:
          if (sVar2 == 0x31) {
            lVar22 = CallDescriptorOf(*(Operator **)*plVar23);
            uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
            bVar7 = (byte)*(undefined4 *)
                           (*(long *)(*(long *)(lVar22 + 0x10) + 0x10) + uVar12 * 8 + 4);
          }
        }
        break;
      case 0x4d:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x153:
      case 0x154:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15a:
      case 0x1f8:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 1;
        break;
      case 0x18c:
      case 0x19e:
      case 0x1aa:
      case 0x1ab:
      case 0x1e7:
      case 0x1ef:
        bVar6 = LoadRepresentationOf(pOVar10);
        goto LAB_01776cd0;
      case 0x18d:
      case 0x19f:
        bVar6 = AtomicStoreRepresentationOf(pOVar10);
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 4;
        if (2 < (byte)(bVar6 - 2)) {
          bVar7 = bVar6;
        }
        break;
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x194:
      case 0x1a0:
      case 0x1a1:
      case 0x1a2:
      case 0x1a3:
      case 0x1a4:
      case 0x1a5:
      case 0x1a6:
        bVar6 = AtomicOpType(pOVar10);
LAB_01776cd0:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 4;
        if (2 < (byte)(bVar6 - 2)) {
          bVar7 = bVar6;
        }
        break;
      case 0x1ac:
      case 0x1f0:
        pbVar11 = (byte *)StoreRepresentationOf(pOVar10);
        goto LAB_01776e4c;
      case 0x1b9:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 6;
        break;
      case 0x1cf:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 10;
        break;
      case 0x1e8:
        pbVar11 = (byte *)UnalignedStoreRepresentationOf(pOVar10);
LAB_01776e4c:
        bVar6 = *pbVar11;
LAB_01776e50:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 4;
        if (2 < bVar6 - 2) {
          bVar7 = bVar6;
        }
        break;
      case 0x23c:
      case 0x23e:
        uVar15 = (ulong)*(uint *)((long)puVar21 + 0x14);
        bVar7 = 0xd;
      }
      local_1c8[uVar15 & 0xffffff] = bVar7;
switchD_01776c84_caseD_8:
      lVar22 = *(long *)(lVar28 + 0x40);
      uVar20 = uVar20 + 1;
      lVar27 = lVar27 + 8;
      uVar15 = *(long *)(lVar28 + 0x48) - lVar22 >> 3;
    } while (uVar20 <= uVar15);
  }
  local_1f8 = &local_1d8;
  local_1e0 = 0;
  plVar25 = *(long **)(param_2 + 8);
  plVar1 = *(long **)(param_2 + 0x10);
  local_200 = param_2;
  local_1f0 = param_4;
  local_1e8 = param_5;
  if (plVar25 != plVar1) {
    do {
      lVar22 = *plVar25;
      uVar20 = 0;
      lVar27 = *(long *)(lVar22 + 0x40);
      uVar15 = *(long *)(lVar22 + 0x48) - lVar27 >> 3;
      local_1e0 = lVar22;
      do {
        puVar21 = (undefined8 *)(lVar27 + uVar20 * 8);
        if (uVar15 <= uVar20) {
          puVar21 = (undefined8 *)(lVar22 + 0x38);
        }
        plVar23 = (long *)*puVar21;
        if (plVar23 == (long *)0x0) break;
        pOVar10 = (Operator *)*plVar23;
        switch(*(undefined2 *)(pOVar10 + 0x10)) {
        case 2:
        case 3:
        case 0x47:
        case 0x49:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cd:
        case 0x1ce:
        case 0x1d3:
        case 0x1d6:
        case 0x1db:
        case 0x23c:
          FUN_017787dc(&local_200,plVar23,0);
          break;
        default:
          if (*(int *)(pOVar10 + 0x14) != 0) {
            local_188 = (undefined **)0x1c670a0;
            local_108[0] = (undefined **)0x1c670c8;
            local_180 = (undefined **)0x0;
            local_178 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
            local_188 = &PTR__basic_stringstream_01c66f88;
            local_108[0] = &PTR__basic_stringstream_01c66fd8;
            local_78 = 0xffffffff;
            local_170 = &PTR__basic_streambuf_01c671a8;
            local_80 = 0;
            local_178 = &PTR__basic_stringstream_01c66fb0;
            std::__ndk1::locale::locale((locale *)&uStack_168);
            local_170 = &PTR__basic_stringbuf_01c67100;
            uStack_138 = 0;
            local_140 = 0;
            uStack_148 = 0;
            local_150 = 0;
            uStack_158 = 0;
            local_160 = 0;
            uStack_128 = 0;
            local_130 = (void *)0x0;
            ppuStack_118 = (undefined **)0x0;
            local_120 = 0;
            local_110 = 0x18;
            pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                ((basic_ostream *)&local_178,"Node #",6);
            pbVar14 = (basic_ostream *)
                      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14,
                                 *(uint *)((long)plVar23 + 0x14) & 0xffffff);
            pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar14,":",1);
            pbVar14 = (basic_ostream *)compiler::operator<<(pbVar14,(Operator *)*plVar23);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar14," in the machine graph is not being checked.",0x2b);
            std::__ndk1::
            basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str()
            ;
LAB_01777b0c:
            uVar20 = (ulong)local_1a0 | 1;
            if (((byte)local_1a0[0] & 1) != 0) {
              uVar20 = local_190;
            }
                    /* WARNING: Subroutine does not return */
            V8_Fatal("%s",uVar20);
          }
          break;
        case 0x10:
          plVar18 = *(long **)(*(long *)local_1f8[1] + 0x10);
          lVar27 = *plVar18;
          if (lVar27 != 0) {
            uVar15 = 0;
            while( true ) {
              uVar24 = *(uint *)(plVar18[2] + uVar15 * 8 + 4) & 0xff;
              if (uVar24 - 6 < 3) {
                FUN_01778234();
              }
              else if (uVar24 == 4) {
                FUN_017787dc();
              }
              else {
                FUN_01778004(&local_200,plVar23,uVar15 + 1 & 0xffffffff);
              }
              if (lVar27 - 1U == uVar15) break;
              plVar18 = *(long **)(*(long *)local_1f8[1] + 0x10);
              uVar15 = uVar15 + 1;
            }
          }
          break;
        case 0x11:
        case 0x31:
          lVar27 = CallDescriptorOf(pOVar10);
          local_188 = (undefined **)0x1c6c8a8;
          ppuStack_118 = (undefined **)0x1c6c8d0;
          std::__ndk1::ios_base::init((ios_base *)&ppuStack_118,&local_180);
          local_88 = 0xffffffff;
          local_188 = &PTR__basic_ostringstream_01c6c858;
          ppuStack_118 = &PTR__basic_ostringstream_01c6c880;
          local_180 = &PTR__basic_streambuf_01c671a8;
          local_90 = 0;
          std::__ndk1::locale::locale((locale *)&local_178);
          uStack_158 = 0;
          local_160 = 0;
          uStack_148 = 0;
          local_150 = 0;
          uStack_168 = 0;
          local_170 = (undefined **)0x0;
          local_180 = &PTR__basic_stringbuf_01c67100;
          uStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          local_130 = (void *)0x0;
          local_120 = CONCAT44(local_120._4_4_,0x10);
          plVar18 = *(long **)(lVar27 + 0x10);
          if (plVar18[1] == -1) {
            local_188 = &PTR__basic_ostringstream_01c6c858;
            ppuStack_118 = &PTR__basic_ostringstream_01c6c880;
          }
          else {
            lVar28 = 0;
            bVar4 = false;
            uVar15 = 0;
            do {
              plVar19 = plVar23 + 4;
              if ((~*(uint *)((long)plVar23 + 0x14) & 0xf000000) == 0) {
                plVar19 = (long *)(plVar23[4] + 0x10);
              }
              puVar21 = *(undefined8 **)((long)plVar19 + (lVar28 >> 0x1d));
              uVar12 = (ulong)*(uint *)((long)puVar21 + 0x14) & 0xffffff;
              if ((ulong)((long)local_1f8[3] - (long)local_1f8[2]) <= uVar12) goto LAB_01777994;
              SVar16 = local_1f8[2][uVar12];
              if (uVar15 == 0) {
                uVar24 = (uint)*(byte *)(lVar27 + 4);
              }
              else {
                uVar24 = *(uint *)(plVar18[2] + (uVar15 + *plVar18) * 8 + -4);
              }
              if ((uVar24 & 0xff) < 0xe) {
                uVar26 = (uint)(byte)SVar16;
                switch(uVar24 & 0xff) {
                case 0:
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("unreachable code");
                default:
                  if (uVar26 != (uVar24 & 0xff)) goto LAB_0177743c;
                  break;
                case 4:
                  if (3 < uVar26 - 1) goto LAB_0177743c;
                  break;
                case 6:
                case 7:
                case 8:
                  if (2 < uVar26 - 6) goto LAB_0177743c;
                  break;
                case 10:
                  if (1 < uVar26 - 9) goto LAB_0177743c;
                }
              }
              else {
LAB_0177743c:
                if (bVar4) {
                  this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_188;
                  std::__ndk1::ios_base::getloc();
                  plVar18 = (long *)std::__ndk1::locale::use_facet
                                              (local_1a0,(id *)&std::__ndk1::ctype<char>::id);
                  cVar8 = (**(code **)(*plVar18 + 0x38))(plVar18,10);
                  std::__ndk1::locale::~locale(local_1a0);
                }
                else {
                  pbVar14 = std::__ndk1::
                            __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                      ((basic_ostream *)&local_188,"TypeError: node #",0x11);
                  pbVar14 = (basic_ostream *)
                            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                            operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14
                                       ,*(uint *)((long)plVar23 + 0x14) & 0xffffff);
                  pbVar14 = std::__ndk1::
                            __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                      (pbVar14,":",1);
                  pbVar14 = (basic_ostream *)compiler::operator<<(pbVar14,(Operator *)*plVar23);
                  this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                         std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (pbVar14," has wrong type for:",0x14);
                  std::__ndk1::ios_base::getloc();
                  plVar18 = (long *)std::__ndk1::locale::use_facet
                                              (local_1a0,(id *)&std::__ndk1::ctype<char>::id);
                  cVar8 = (**(code **)(*plVar18 + 0x38))(plVar18,10);
                  std::__ndk1::locale::~locale(local_1a0);
                }
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this,cVar8);
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this);
                pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    ((basic_ostream *)&local_188," * input ",9);
                pbVar14 = (basic_ostream *)
                          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                          operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14,
                                     uVar15);
                pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar14," (",2);
                pbVar14 = (basic_ostream *)
                          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                          operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar14,
                                     *(uint *)((long)puVar21 + 0x14) & 0xffffff);
                bVar4 = true;
                pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar14,":",1);
                pbVar14 = (basic_ostream *)compiler::operator<<(pbVar14,(Operator *)*puVar21);
                pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar14,") has a ",8);
                pbVar14 = (basic_ostream *)internal::operator<<(pbVar14,SVar16);
                pbVar14 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar14," representation (expected: ",0x1b);
                pbVar14 = (basic_ostream *)internal::operator<<(pbVar14,uVar24);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar14,").",2);
                plVar18 = *(long **)(lVar27 + 0x10);
              }
              uVar15 = uVar15 + 1;
              lVar28 = lVar28 + 0x100000000;
            } while (uVar15 < plVar18[1] + 1U);
            if (bVar4) {
              std::__ndk1::
              basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                        ();
              goto LAB_01777b0c;
            }
            local_188 = &PTR__basic_ostringstream_01c6c858;
            ppuStack_118 = &PTR__basic_ostringstream_01c6c880;
            local_180 = &PTR__basic_stringbuf_01c67100;
            if ((local_140 & 1) != 0) {
              operator_delete(local_130);
            }
          }
          local_180 = &PTR__basic_streambuf_01c671a8;
          std::__ndk1::locale::~locale((locale *)&local_178);
          std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_118);
          break;
        case 0x15:
        case 0x29:
        case 0x2b:
        case 0x32:
        case 0x37:
        case 0x3e:
          break;
        case 0x23:
          uVar15 = (ulong)*(uint *)((long)plVar23 + 0x14) & 0xffffff;
          if ((ulong)((long)local_1f8[3] - (long)local_1f8[2]) <= uVar15) goto LAB_01777994;
          SVar16 = local_1f8[2][uVar15];
          if ((byte)SVar16 - 6 < 3) {
            if (0 < *(int *)(pOVar10 + 0x14)) {
              iVar9 = 0;
              do {
                FUN_01778234(&local_200,plVar23,iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(*plVar23 + 0x14));
            }
          }
          else if ((byte)SVar16 - 9 < 2) {
            if (0 < *(int *)(pOVar10 + 0x14)) {
              iVar9 = 0;
              do {
                FUN_01777b24(&local_200,plVar23,iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(*plVar23 + 0x14));
            }
          }
          else if (SVar16 == (Schedule)0x4) {
            if (0 < *(int *)(pOVar10 + 0x14)) {
              iVar9 = 0;
              do {
                FUN_017787dc(&local_200,plVar23,iVar9);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(*plVar23 + 0x14));
            }
          }
          else if ((0 < *(int *)(pOVar10 + 0x14)) &&
                  (FUN_01778004(&local_200,plVar23,0), 1 < *(int *)(*plVar23 + 0x14))) {
            iVar9 = 1;
            do {
              uVar15 = (ulong)*(uint *)((long)plVar23 + 0x14) & 0xffffff;
              if ((ulong)((long)local_1f8[3] - (long)local_1f8[2]) <= uVar15) goto LAB_01777994;
              FUN_01778004(&local_200,plVar23,iVar9,local_1f8[2][uVar15]);
              iVar9 = iVar9 + 1;
            } while (iVar9 < *(int *)(*plVar23 + 0x14));
          }
          break;
        case 0x4d:
          plVar18 = plVar23 + 4;
          if ((~*(uint *)((long)plVar23 + 0x14) & 0xf000000) == 0) {
            plVar18 = (long *)(*plVar18 + 0x10);
          }
          uVar15 = (ulong)*(uint *)(*plVar18 + 0x14) & 0xffffff;
          if ((ulong)((long)local_1f8[3] - (long)local_1f8[2]) <= uVar15) goto LAB_01777994;
          if (local_1f8[2][uVar15] != (Schedule)0x8) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "MachineRepresentation::kTagged == inferrer_->GetRepresentation(node->InputAt(0))"
                    );
          }
          break;
        case 0x4e:
          plVar18 = plVar23 + 4;
          if ((~*(uint *)((long)plVar23 + 0x14) & 0xf000000) == 0) {
            plVar18 = (long *)(*plVar18 + 0x10);
          }
          uVar15 = (ulong)*(uint *)(*plVar18 + 0x14) & 0xffffff;
          if ((ulong)((long)local_1f8[3] - (long)local_1f8[2]) <= uVar15) goto LAB_01777994;
          if (local_1f8[2][uVar15] != (Schedule)0x1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "MachineRepresentation::kBit == inferrer_->GetRepresentation(node->InputAt(0))"
                    );
          }
          break;
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
          FUN_017787dc(&local_200,plVar23,0);
          goto LAB_0177700c;
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14c:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
          FUN_01777d08(&local_200,plVar23,0);
          FUN_01777d08(&local_200,plVar23,1);
          break;
        case 0x14b:
          FUN_01778aa8(&local_200,plVar23,0);
          FUN_01778aa8(&local_200,plVar23,1);
          break;
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          FUN_01778c98(&local_200,plVar23,0);
          FUN_01778c98(&local_200,plVar23,1);
          break;
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
          FUN_01778418(&local_200,plVar23,0);
          uVar17 = 1;
          goto LAB_01777050;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x1bb:
        case 0x1c3:
        case 0x1c4:
        case 0x1d9:
          FUN_01778c98(&local_200,plVar23,0);
          break;
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x1ba:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
        case 0x1c2:
        case 0x1c6:
        case 0x1d0:
        case 0x1d2:
        case 0x1da:
        case 0x1dd:
        case 0x1de:
          uVar17 = 0;
LAB_01777050:
          FUN_01778418(&local_200,plVar23,uVar17);
          break;
        case 0x18c:
        case 0x195:
        case 0x19e:
        case 0x1aa:
        case 0x1ab:
          FUN_017785f8(&local_200,plVar23,0);
          uVar17 = 1;
          SVar16 = (Schedule)0x5;
          goto LAB_017777f8;
        case 0x18d:
        case 0x18e:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x19f:
        case 0x1a0:
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1ac:
          goto switchD_01776fe8_caseD_18d;
        case 399:
        case 0x1a6:
          goto switchD_01776fe8_caseD_18f;
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
          FUN_01778004(&local_200,plVar23,3,4);
switchD_01776fe8_caseD_18d:
          FUN_017785f8(&local_200,plVar23,0);
          FUN_01778004(&local_200,plVar23,1,5);
          uVar15 = (ulong)*(uint *)((long)plVar23 + 0x14) & 0xffffff;
          if ((ulong)((long)local_1f8[3] - (long)local_1f8[2]) <= uVar15) goto LAB_01777994;
          SVar16 = local_1f8[2][uVar15];
          if ((byte)SVar16 - 6 < 3) {
            if ((*(short *)((Operator *)*plVar23 + 0x10) == 0x1ac) &&
               (pbVar11 = (byte *)StoreRepresentationOf((Operator *)*plVar23), *pbVar11 - 7 < 2)) {
              uVar17 = 2;
LAB_01777810:
              FUN_01777b24(&local_200,plVar23,uVar17);
            }
            else {
              uVar17 = 2;
LAB_0177713c:
              FUN_01778234(&local_200,plVar23,uVar17);
            }
          }
          else {
            uVar17 = 2;
LAB_017777f8:
            FUN_01778004(&local_200,plVar23,uVar17,SVar16);
          }
          break;
        case 0x19d:
          FUN_01778004(&local_200,plVar23,4,4);
          FUN_01778004(&local_200,plVar23,5,4);
switchD_01776fe8_caseD_18f:
          FUN_017785f8(&local_200,plVar23,0);
          FUN_01778004(&local_200,plVar23,1,5);
          uVar15 = (ulong)*(uint *)((long)plVar23 + 0x14) & 0xffffff;
          if (uVar15 < (ulong)((long)local_1f8[3] - (long)local_1f8[2])) {
            if ((byte)local_1f8[2][uVar15] - 6 < 3) {
              FUN_01778234();
              uVar17 = 3;
              goto LAB_0177713c;
            }
            FUN_01778004(&local_200,plVar23,2);
            uVar15 = (ulong)*(uint *)((long)plVar23 + 0x14) & 0xffffff;
            if (uVar15 < (ulong)((long)local_1f8[3] - (long)local_1f8[2])) {
              SVar16 = local_1f8[2][uVar15];
              uVar17 = 3;
              goto LAB_017777f8;
            }
          }
          goto LAB_01777994;
        case 0x1a7:
        case 0x1b6:
        case 0x1b7:
        case 0x1e1:
          FUN_01778234(&local_200,plVar23,0);
          break;
        case 0x1b8:
        case 0x1b9:
        case 0x1e3:
        case 0x1f8:
          uVar17 = 5;
          goto LAB_017771a4;
        case 0x1cf:
          uVar17 = 0;
          goto LAB_01777810;
        case 0x1d1:
        case 0x1d4:
        case 0x1d5:
        case 0x1d7:
        case 0x1d8:
          FUN_01777d08(&local_200,plVar23,0);
          break;
        case 0x1df:
        case 0x1e0:
          FUN_01778418(&local_200,plVar23,0);
          goto LAB_0177700c;
        case 0x1e2:
          uVar17 = 4;
          goto LAB_017771a4;
        case 0x23d:
        case 0x25c:
        case 0x25d:
        case 0x280:
        case 0x281:
          uVar17 = 0xd;
LAB_017771a4:
          FUN_01778004(&local_200,plVar23,0,uVar17);
          break;
        case 0x23e:
          FUN_01778004(&local_200,plVar23,0,0xd);
LAB_0177700c:
          FUN_017787dc(&local_200,plVar23,1);
        }
        lVar27 = *(long *)(lVar22 + 0x40);
        uVar20 = uVar20 + 1;
        uVar15 = *(long *)(lVar22 + 0x48) - lVar27 >> 3;
      } while (uVar20 <= uVar15);
      plVar25 = plVar25 + 1;
    } while (plVar25 != plVar1);
  }
  if (local_1c8 != (undefined1 *)0x0) {
    local_1c0 = local_1c8;
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

