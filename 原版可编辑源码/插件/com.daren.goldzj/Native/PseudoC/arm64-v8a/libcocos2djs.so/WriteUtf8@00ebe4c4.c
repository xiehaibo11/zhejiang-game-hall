
/* v8::String::WriteUtf8(v8::Isolate*, char*, int, int*, int) const */

int __thiscall
v8::String::WriteUtf8
          (String *this,Isolate *param_1,char *param_2,int param_3,int *param_4,int param_5)

{
  bool bVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  ushort *puVar30;
  int iVar31;
  byte *pbVar32;
  byte *pbVar33;
  Logger *this_00;
  ulong uVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined1 auVar71 [16];
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_70;
  long local_68;
  long lVar13;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x3dc);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar11 = internal::Logger::is_logging(this_00);
  if ((uVar11 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::String::WriteUtf8");
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar12 = (ulong *)internal::String::Flatten(param_1,this,0);
  local_70 = *puVar12;
  auVar71 = internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_70);
  uVar11 = auVar71._8_8_;
  lVar13 = auVar71._0_8_;
  uVar16 = auVar71._8_4_;
  uVar15 = ((uint)param_5 >> 1 ^ 0xffffffff) & 1;
  iVar31 = (int)param_2;
  lVar22 = (long)(int)uVar16;
  pbVar32 = (byte *)param_2;
  if (uVar11 >> 0x20 == 1) {
    if ((int)uVar16 < 1) {
      uVar34 = 0;
    }
    else {
      uVar24 = 0;
      do {
        uVar34 = uVar11 & 0xffffffff;
        if (param_3 != -1) {
          uVar18 = (param_3 + (iVar31 - (int)pbVar32)) - 2;
          if ((int)uVar18 < 2) {
            uVar34 = (ulong)uVar24;
            goto joined_r0x00ebe990;
          }
          uVar18 = uVar24 + (uVar18 >> 1);
          if ((int)uVar16 <= (int)uVar18) {
            uVar18 = uVar16;
          }
          uVar34 = (ulong)uVar18;
        }
        uVar18 = (uint)uVar34;
        lVar23 = (long)(int)uVar24;
        if ((int)uVar24 < (int)uVar18) {
          uVar20 = (int)uVar18 - lVar23;
          if (uVar20 < 0x20) {
            bVar35 = 0;
            lVar28 = lVar23;
LAB_00ebe6a0:
            lVar25 = (int)uVar18 - lVar28;
            pbVar33 = (byte *)(lVar13 + lVar28);
            do {
              lVar25 = lVar25 + -1;
              bVar35 = *pbVar33 | bVar35;
              pbVar33 = pbVar33 + 1;
            } while (lVar25 != 0);
          }
          else {
            uVar26 = uVar20 & 0xffffffffffffffe0;
            puVar27 = (undefined8 *)(lVar13 + 0x10 + lVar23);
            bVar35 = 0;
            bVar36 = 0;
            bVar37 = 0;
            bVar38 = 0;
            bVar39 = 0;
            bVar40 = 0;
            bVar41 = 0;
            bVar42 = 0;
            bVar43 = 0;
            bVar44 = 0;
            bVar45 = 0;
            bVar46 = 0;
            bVar47 = 0;
            bVar48 = 0;
            bVar49 = 0;
            bVar50 = 0;
            lVar28 = uVar26 + lVar23;
            bVar51 = 0;
            bVar52 = 0;
            bVar53 = 0;
            bVar54 = 0;
            bVar55 = 0;
            bVar56 = 0;
            bVar57 = 0;
            bVar58 = 0;
            bVar59 = 0;
            bVar60 = 0;
            bVar61 = 0;
            bVar62 = 0;
            bVar63 = 0;
            bVar64 = 0;
            bVar65 = 0;
            bVar66 = 0;
            uVar29 = uVar26;
            do {
              uVar68 = puVar27[-1];
              uVar67 = puVar27[-2];
              uVar70 = puVar27[1];
              uVar69 = *puVar27;
              uVar29 = uVar29 - 0x20;
              puVar27 = puVar27 + 4;
              bVar35 = (byte)uVar67 | bVar35;
              bVar36 = (byte)((ulong)uVar67 >> 8) | bVar36;
              bVar37 = (byte)((ulong)uVar67 >> 0x10) | bVar37;
              bVar38 = (byte)((ulong)uVar67 >> 0x18) | bVar38;
              bVar39 = (byte)((ulong)uVar67 >> 0x20) | bVar39;
              bVar40 = (byte)((ulong)uVar67 >> 0x28) | bVar40;
              bVar41 = (byte)((ulong)uVar67 >> 0x30) | bVar41;
              bVar42 = (byte)((ulong)uVar67 >> 0x38) | bVar42;
              bVar43 = (byte)uVar68 | bVar43;
              bVar44 = (byte)((ulong)uVar68 >> 8) | bVar44;
              bVar45 = (byte)((ulong)uVar68 >> 0x10) | bVar45;
              bVar46 = (byte)((ulong)uVar68 >> 0x18) | bVar46;
              bVar47 = (byte)((ulong)uVar68 >> 0x20) | bVar47;
              bVar48 = (byte)((ulong)uVar68 >> 0x28) | bVar48;
              bVar49 = (byte)((ulong)uVar68 >> 0x30) | bVar49;
              bVar50 = (byte)((ulong)uVar68 >> 0x38) | bVar50;
              bVar51 = (byte)uVar69 | bVar51;
              bVar52 = (byte)((ulong)uVar69 >> 8) | bVar52;
              bVar53 = (byte)((ulong)uVar69 >> 0x10) | bVar53;
              bVar54 = (byte)((ulong)uVar69 >> 0x18) | bVar54;
              bVar55 = (byte)((ulong)uVar69 >> 0x20) | bVar55;
              bVar56 = (byte)((ulong)uVar69 >> 0x28) | bVar56;
              bVar57 = (byte)((ulong)uVar69 >> 0x30) | bVar57;
              bVar58 = (byte)((ulong)uVar69 >> 0x38) | bVar58;
              bVar59 = (byte)uVar70 | bVar59;
              bVar60 = (byte)((ulong)uVar70 >> 8) | bVar60;
              bVar61 = (byte)((ulong)uVar70 >> 0x10) | bVar61;
              bVar62 = (byte)((ulong)uVar70 >> 0x18) | bVar62;
              bVar63 = (byte)((ulong)uVar70 >> 0x20) | bVar63;
              bVar64 = (byte)((ulong)uVar70 >> 0x28) | bVar64;
              bVar65 = (byte)((ulong)uVar70 >> 0x30) | bVar65;
              bVar66 = (byte)((ulong)uVar70 >> 0x38) | bVar66;
            } while (uVar29 != 0);
            bVar51 = bVar51 | bVar35;
            bVar52 = bVar52 | bVar36;
            bVar53 = bVar53 | bVar37;
            bVar54 = bVar54 | bVar38;
            bVar55 = bVar55 | bVar39;
            bVar56 = bVar56 | bVar40;
            bVar57 = bVar57 | bVar41;
            bVar58 = bVar58 | bVar42;
            bVar59 = bVar59 | bVar43;
            bVar60 = bVar60 | bVar44;
            bVar61 = bVar61 | bVar45;
            bVar62 = bVar62 | bVar46;
            bVar63 = bVar63 | bVar47;
            bVar64 = bVar64 | bVar48;
            bVar65 = bVar65 | bVar49;
            bVar66 = bVar66 | bVar50;
            auVar71[1] = bVar52;
            auVar71[0] = bVar51;
            auVar71[2] = bVar53;
            auVar71[3] = bVar54;
            auVar71[4] = bVar55;
            auVar71[5] = bVar56;
            auVar71[6] = bVar57;
            auVar71[7] = bVar58;
            auVar71[8] = bVar59;
            auVar71[9] = bVar60;
            auVar71[10] = bVar61;
            auVar71[0xb] = bVar62;
            auVar71[0xc] = bVar63;
            auVar71[0xd] = bVar64;
            auVar71[0xe] = bVar65;
            auVar71[0xf] = bVar66;
            auVar6[1] = bVar52;
            auVar6[0] = bVar51;
            auVar6[2] = bVar53;
            auVar6[3] = bVar54;
            auVar6[4] = bVar55;
            auVar6[5] = bVar56;
            auVar6[6] = bVar57;
            auVar6[7] = bVar58;
            auVar6[8] = bVar59;
            auVar6[9] = bVar60;
            auVar6[10] = bVar61;
            auVar6[0xb] = bVar62;
            auVar6[0xc] = bVar63;
            auVar6[0xd] = bVar64;
            auVar6[0xe] = bVar65;
            auVar6[0xf] = bVar66;
            auVar71 = NEON_ext(auVar71,auVar6,8,1);
            bVar51 = bVar51 | auVar71[0];
            bVar52 = bVar52 | auVar71[1];
            bVar53 = bVar53 | auVar71[2];
            bVar54 = bVar54 | auVar71[3];
            bVar55 = bVar55 | auVar71[4];
            bVar56 = bVar56 | auVar71[5];
            bVar57 = bVar57 | auVar71[6];
            bVar58 = bVar58 | auVar71[7];
            bVar59 = bVar59 | auVar71[8];
            bVar60 = bVar60 | auVar71[9];
            bVar61 = bVar61 | auVar71[10];
            bVar62 = bVar62 | auVar71[0xb];
            bVar63 = bVar63 | auVar71[0xc];
            bVar64 = bVar64 | auVar71[0xd];
            bVar65 = bVar65 | auVar71[0xe];
            bVar66 = bVar66 | auVar71[0xf];
            auVar7[1] = bVar52;
            auVar7[0] = bVar51;
            auVar7[2] = bVar53;
            auVar7[3] = bVar54;
            auVar7[4] = bVar55;
            auVar7[5] = bVar56;
            auVar7[6] = bVar57;
            auVar7[7] = bVar58;
            auVar7[8] = bVar59;
            auVar7[9] = bVar60;
            auVar7[10] = bVar61;
            auVar7[0xb] = bVar62;
            auVar7[0xc] = bVar63;
            auVar7[0xd] = bVar64;
            auVar7[0xe] = bVar65;
            auVar7[0xf] = bVar66;
            auVar8[1] = bVar52;
            auVar8[0] = bVar51;
            auVar8[2] = bVar53;
            auVar8[3] = bVar54;
            auVar8[4] = bVar55;
            auVar8[5] = bVar56;
            auVar8[6] = bVar57;
            auVar8[7] = bVar58;
            auVar8[8] = bVar59;
            auVar8[9] = bVar60;
            auVar8[10] = bVar61;
            auVar8[0xb] = bVar62;
            auVar8[0xc] = bVar63;
            auVar8[0xd] = bVar64;
            auVar8[0xe] = bVar65;
            auVar8[0xf] = bVar66;
            auVar71 = NEON_ext(auVar7,auVar8,4,1);
            bVar51 = bVar51 | auVar71[0];
            bVar52 = bVar52 | auVar71[1];
            bVar53 = bVar53 | auVar71[2];
            bVar54 = bVar54 | auVar71[3];
            bVar55 = bVar55 | auVar71[4];
            bVar56 = bVar56 | auVar71[5];
            bVar57 = bVar57 | auVar71[6];
            bVar58 = bVar58 | auVar71[7];
            bVar59 = bVar59 | auVar71[8];
            bVar60 = bVar60 | auVar71[9];
            bVar61 = bVar61 | auVar71[10];
            bVar62 = bVar62 | auVar71[0xb];
            bVar63 = bVar63 | auVar71[0xc];
            bVar64 = bVar64 | auVar71[0xd];
            bVar65 = bVar65 | auVar71[0xe];
            bVar66 = bVar66 | auVar71[0xf];
            auVar9[1] = bVar52;
            auVar9[0] = bVar51;
            auVar9[2] = bVar53;
            auVar9[3] = bVar54;
            auVar9[4] = bVar55;
            auVar9[5] = bVar56;
            auVar9[6] = bVar57;
            auVar9[7] = bVar58;
            auVar9[8] = bVar59;
            auVar9[9] = bVar60;
            auVar9[10] = bVar61;
            auVar9[0xb] = bVar62;
            auVar9[0xc] = bVar63;
            auVar9[0xd] = bVar64;
            auVar9[0xe] = bVar65;
            auVar9[0xf] = bVar66;
            auVar10[1] = bVar52;
            auVar10[0] = bVar51;
            auVar10[2] = bVar53;
            auVar10[3] = bVar54;
            auVar10[4] = bVar55;
            auVar10[5] = bVar56;
            auVar10[6] = bVar57;
            auVar10[7] = bVar58;
            auVar10[8] = bVar59;
            auVar10[9] = bVar60;
            auVar10[10] = bVar61;
            auVar10[0xb] = bVar62;
            auVar10[0xc] = bVar63;
            auVar10[0xd] = bVar64;
            auVar10[0xe] = bVar65;
            auVar10[0xf] = bVar66;
            auVar71 = NEON_ext(auVar9,auVar10,2,1);
            bVar35 = bVar51 | auVar71[0] | bVar52 | auVar71[1];
            if (uVar20 != uVar26) goto LAB_00ebe6a0;
          }
          if ((char)bVar35 < '\0') {
            pbVar33 = (byte *)(lVar13 + lVar23);
            bVar35 = *pbVar33;
            uVar24 = (uint)(char)bVar35;
            if (-1 < (char)bVar35) goto LAB_00ebe700;
            do {
              lVar23 = 2;
              *pbVar32 = (byte)(uVar24 >> 6) & 3 | 0xc0;
              pbVar32[1] = (byte)uVar24 & 0x3f | 0x80;
              while( true ) {
                pbVar32 = pbVar32 + lVar23;
                uVar20 = uVar20 - 1;
                pbVar33 = pbVar33 + 1;
                if (uVar20 == 0) goto LAB_00ebe5e0;
                bVar35 = *pbVar33;
                uVar24 = (uint)(char)bVar35;
                if ((int)uVar24 < 0) break;
LAB_00ebe700:
                *pbVar32 = bVar35;
                lVar23 = 1;
              }
            } while( true );
          }
        }
        memcpy(pbVar32,(void *)(lVar13 + lVar23),(int)uVar18 - lVar23);
        pbVar32 = pbVar32 + ((int)uVar18 - lVar23);
LAB_00ebe5e0:
        uVar24 = uVar18;
      } while ((int)uVar18 < (int)uVar16);
    }
    uVar24 = (uint)uVar34;
joined_r0x00ebe990:
    if (((int)uVar24 < (int)uVar16) && (iVar19 = param_3 + (iVar31 - (int)pbVar32), 0 < iVar19)) {
      uVar34 = (ulong)(int)uVar34;
      do {
        bVar35 = *(byte *)(lVar13 + uVar34);
        if ((char)bVar35 < 0) {
          bVar36 = (byte)((uint)(int)(char)bVar35 >> 6);
          bVar51 = bVar36 & 3 | 0xc0;
          lVar23 = 2;
          local_70 = CONCAT71(CONCAT61(local_70._2_6_,bVar35),bVar36) & 0xffffffffffff3f03 | 0x80c0;
          bVar1 = iVar19 < 2;
          iVar19 = iVar19 + -2;
          if (bVar1) goto LAB_00ebec18;
        }
        else {
          local_70 = CONCAT71(local_70._1_7_,bVar35);
          lVar23 = 1;
          bVar1 = iVar19 < 1;
          iVar19 = iVar19 + -1;
          bVar51 = bVar35;
          if (bVar1) {
LAB_00ebec18:
            uVar15 = 0;
            break;
          }
        }
        *pbVar32 = bVar51;
        if ((int)lVar23 != 1) {
          lVar28 = lVar23 + -1;
          pbVar14 = (byte *)((ulong)&local_70 | 1);
          pbVar33 = pbVar32;
          do {
            pbVar33 = pbVar33 + 1;
            lVar28 = lVar28 + -1;
            *pbVar33 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (lVar28 != 0);
        }
        uVar34 = uVar34 + 1;
        pbVar32 = pbVar32 + lVar23;
        if ((lVar22 <= (long)uVar34) || (iVar19 < 1)) break;
      } while( true );
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (int)uVar34;
    }
    goto joined_r0x00ebebd4;
  }
  if ((int)uVar16 < 1) {
    uVar34 = 0;
    uVar24 = 0xffffffff;
    if (0 < (int)uVar16) goto LAB_00ebe9d8;
  }
  else {
    uVar24 = 0xffffffff;
    uVar18 = 0;
    do {
      while( true ) {
        uVar34 = uVar11 & 0xffffffff;
        if (param_3 != -1) {
          uVar17 = (param_3 + (iVar31 - (int)pbVar32)) - 3;
          if ((int)uVar17 < 3) {
            uVar34 = (ulong)uVar18;
            goto joined_r0x00ebe9d4;
          }
          uVar17 = uVar17 / 3 + uVar18;
          if ((int)uVar16 <= (int)uVar17) {
            uVar17 = uVar16;
          }
          uVar34 = (ulong)uVar17;
        }
        uVar17 = (uint)uVar34;
        if ((int)uVar17 <= (int)uVar18) break;
        lVar23 = (long)(int)uVar17 - (long)(int)uVar18;
        puVar30 = (ushort *)(lVar13 + (long)(int)uVar18 * 2);
        uVar18 = uVar24;
        do {
          uVar3 = *puVar30;
          uVar24 = (uint)uVar3;
          uVar21 = (uint)uVar3;
          bVar35 = (byte)uVar3;
          if (uVar3 < 0x80) {
            *pbVar32 = bVar35;
LAB_00ebe7cc:
            lVar28 = 1;
          }
          else if (uVar3 < 0x800) {
            *pbVar32 = (byte)(uVar3 >> 6) | 0xc0;
            pbVar32[1] = bVar35 & 0x3f | 0x80;
            lVar28 = 2;
          }
          else if (((uVar18 & 0xfc00) == 0xd800) && ((uVar21 & 0xfc00) == 0xdc00)) {
            uVar18 = (uVar18 & 0x3ff) * 0x400 + 0x10000;
            uVar21 = uVar18 | uVar21 & 0x3ff;
            if (0x7f < uVar21) {
              pbVar32[-3] = (byte)(uVar18 >> 0x12) | 0xf0;
              pbVar32[-2] = (byte)(uVar18 >> 0xc) & 0x3f | 0x80;
              pbVar32[-1] = (byte)(uVar21 >> 6) & 0x3f | 0x80;
              *pbVar32 = bVar35 & 0x3f | 0x80;
              goto LAB_00ebe7cc;
            }
            pbVar32[-3] = bVar35;
            lVar28 = 0xfffffffe;
          }
          else {
            uVar20 = (ulong)uVar21;
            if ((((uint)param_5 >> 3 & 1) != 0) &&
               (uVar20 = (ulong)uVar21, (uVar21 & 0xfc00 | 0x400) == 0xdc00)) {
              uVar20 = 0xfffd;
            }
            lVar28 = 3;
            *pbVar32 = (byte)(uVar20 >> 0xc) | 0xe0;
            pbVar32[1] = (byte)((uint)uVar20 >> 6) & 0x3f | 0x80;
            pbVar32[2] = (byte)uVar20 & 0x3f | 0x80;
          }
          pbVar32 = pbVar32 + lVar28;
          lVar23 = lVar23 + -1;
          puVar30 = puVar30 + 1;
          uVar18 = uVar24;
        } while (lVar23 != 0);
        uVar18 = uVar17;
        if ((int)uVar16 <= (int)uVar17) goto LAB_00ebe8a0;
      }
      uVar34 = (ulong)uVar18;
    } while ((int)uVar18 < (int)uVar16);
LAB_00ebe8a0:
    uVar18 = (uint)uVar34;
joined_r0x00ebe9d4:
    if ((int)uVar18 < (int)uVar16) {
LAB_00ebe9d8:
      iVar19 = param_3 + (iVar31 - (int)pbVar32);
      if (0 < iVar19) {
        uVar34 = (ulong)(int)uVar34;
        while( true ) {
          uVar4 = *(ushort *)(lVar13 + uVar34 * 2);
          uVar3 = uVar4 & 0xfc00;
          uVar16 = (uint)uVar4;
          bVar35 = (byte)uVar4;
          if (((uVar24 & 0xfc00) != 0xd800) || (uVar3 != 0xdc00)) break;
          if (uVar4 < 0x80) {
            *pbVar32 = bVar35;
LAB_00ebea2c:
            lVar23 = 1;
          }
          else if (uVar16 < 0x800) {
            *pbVar32 = (byte)(uVar4 >> 6) | 0xc0;
            pbVar32[1] = bVar35 & 0x3f | 0x80;
            lVar23 = 2;
          }
          else {
            uVar24 = (uVar24 & 0x3ff) * 0x400 + 0x10000;
            uVar18 = uVar24 | uVar16 & 0x3ff;
            if (0x7f < uVar18) {
              pbVar32[-3] = (byte)(uVar24 >> 0x12) | 0xf0;
              pbVar32[-2] = (byte)(uVar24 >> 0xc) & 0x3f | 0x80;
              pbVar32[-1] = (byte)(uVar18 >> 6) & 0x3f | 0x80;
              *pbVar32 = bVar35 & 0x3f | 0x80;
              goto LAB_00ebea2c;
            }
            pbVar32[-3] = bVar35;
            lVar23 = 0xfffffffe;
          }
LAB_00ebeb74:
          uVar34 = uVar34 + 1;
          pbVar32 = pbVar32 + (int)lVar23;
          if ((lVar22 <= (long)uVar34) ||
             (iVar19 = iVar19 - (int)lVar23, uVar24 = uVar16, iVar19 < 1)) goto joined_r0x00ebec2c;
        }
        if ((((uint)param_5 >> 3 & 1) == 0) ||
           ((((3 < iVar19 || (uVar3 != 0xd800)) || (lVar22 <= (long)(uVar34 + 1))) ||
            (*(ushort *)(lVar13 + (uVar34 + 1) * 2) >> 10 != 0x37)))) {
          if (uVar4 < 0x80) {
            local_70 = CONCAT71(local_70._1_7_,bVar35);
            lVar23 = 1;
            uVar24 = uVar16;
            if (0 < iVar19) goto LAB_00ebeb4c;
          }
          else if (uVar16 < 0x800) {
            uVar24 = uVar4 >> 6 | 0xffffffc0;
            local_70 = CONCAT62(local_70._2_6_,CONCAT11(bVar35,(char)uVar24)) & 0xffffffffffff3fff |
                       0x8000;
            lVar23 = 2;
            if (1 < iVar19) {
LAB_00ebeb4c:
              *pbVar32 = (byte)uVar24;
              if ((int)lVar23 != 1) {
                lVar28 = lVar23 + -1;
                pbVar14 = (byte *)((ulong)&local_70 | 1);
                pbVar33 = pbVar32;
                do {
                  pbVar33 = pbVar33 + 1;
                  lVar28 = lVar28 + -1;
                  *pbVar33 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                } while (lVar28 != 0);
              }
              goto LAB_00ebeb74;
            }
          }
          else {
            uVar11 = (ulong)uVar4;
            if ((((uint)param_5 >> 3 & 1) != 0) &&
               (uVar11 = (ulong)(uint)uVar4, (uVar3 | 0x400) == 0xdc00)) {
              uVar11 = 0xfffd;
            }
            uVar24 = (uint)(uVar11 >> 0xc) | 0xffffffe0;
            lVar23 = 3;
            uVar20 = CONCAT62(local_70._2_6_,CONCAT11((char)((uint)uVar11 >> 6),(char)uVar24)) &
                     0xffffffffffff3fff;
            local_70._3_5_ = (undefined5)(uVar20 >> 0x18);
            local_70 = CONCAT53(local_70._3_5_,CONCAT12((char)uVar11,(short)uVar20)) &
                       0xffffffffff3fffff | 0x808000;
            if (2 < iVar19) goto LAB_00ebeb4c;
          }
        }
        uVar15 = 0;
      }
    }
  }
joined_r0x00ebec2c:
  if (param_4 != (int *)0x0) {
    *param_4 = (int)uVar34;
  }
joined_r0x00ebebd4:
  pbVar33 = pbVar32;
  if ((uVar15 != 0) && ((param_3 == -1 || ((long)pbVar32 - (long)param_2 < (long)param_3)))) {
    pbVar33 = pbVar32 + 1;
    *pbVar32 = 0;
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  if (local_a0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)pbVar33 - iVar31;
}

