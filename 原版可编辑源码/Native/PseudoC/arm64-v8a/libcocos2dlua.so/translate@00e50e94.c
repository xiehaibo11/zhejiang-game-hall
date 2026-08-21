
/* cocos2d::PURendererTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PURendererTranslator::translate
          (PURendererTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  PURendererTranslator *pPVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  PUAbstractNode *pPVar5;
  PUAbstractNode PVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  PUAbstractNode *pPVar12;
  bool bVar13;
  int iVar14;
  PUMaterialCache *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  Particle3DRender *this_01;
  basic_string *pbVar20;
  byte bVar21;
  char *pcVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  PUAbstractNode *pPVar26;
  PUAbstractNode *pPVar27;
  long lVar28;
  long lVar29;
  char *pcVar30;
  void *pvVar31;
  PUAbstractNode *pPVar32;
  ParticleSystem3D *this_02;
  ulong local_f8;
  PUAbstractNode *local_f0;
  void *local_e8;
  ulong local_e0;
  PUAbstractNode *local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bStack_c7;
  undefined6 uStack_c6;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  char *local_b8;
  ulong local_b0;
  ulong local_a8;
  int *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined6 uStack_97;
  undefined1 uStack_91;
  undefined7 local_90;
  undefined1 uStack_89;
  char *local_88;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_70;
  
                    /* try { // try from 00e50ea4 to 00f50ec7 has its CatchHandler @ 00e50ea4
                       catch() { ... } // from try @ 00e50ea4 with catch @ 00e50ea4
                       catch() { ... } // from try @ 00e50ed4 with catch @ 00e50ea4 */
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
                    /* try { // try from 00e50ec8 to 00f50ed3 has its CatchHandler @ 00e50ef0 */
  lVar28 = *(long *)(param_2 + 0x28);
  local_a8 = 0;
  local_a0 = (int *)0x0;
                    /* try { // try from 00e50ed4 to 00f50f03 has its CatchHandler @ 00e50ea4 */
  local_b0 = 0;
  PVar6 = param_2[0x60];
  if (((byte)PVar6 & 1) == 0) {
    uVar25 = (ulong)((byte)PVar6 >> 1);
  }
  else {
    uVar25 = *(ulong *)(param_2 + 0x68);
  }
                    /* catch() { ... } // from try @ 00e50ec8 with catch @ 00e50ef0 */
  pPVar32 = param_2;
  if (((PUAbstractNode *)&local_b0 != param_2 + 0x60) && (uVar25 != 0)) {
    pPVar32 = *(PUAbstractNode **)(param_2 + 0x68);
    pPVar5 = *(PUAbstractNode **)(param_2 + 0x70);
                    /* try { // try from 00e50f04 to 00f50f2f has its CatchHandler @ 00e50f04
                       catch() { ... } // from try @ 00e50f04 with catch @ 00e50f04
                       catch() { ... } // from try @ 00e50f40 with catch @ 00e50f04 */
    if (((byte)PVar6 & 1) == 0) {
      pPVar5 = param_2 + 0x61;
      pPVar32 = (PUAbstractNode *)(ulong)((byte)PVar6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_b0,(char *)pPVar5,(ulong)pPVar32);
  }
  if ((lVar28 == 0) ||
     (this_02 = *(ParticleSystem3D **)(lVar28 + 0x30), this_02 == (ParticleSystem3D *)0x0))
  goto LAB_00e53bc0;
  this_00 = (PUMaterialCache *)PUMaterialCache::Instance();
                    /* try { // try from 00e50f30 to 00f50f3f has its CatchHandler @ 00e50f60 */
  lVar28 = PUMaterialCache::getMaterial(this_00,(basic_string *)(this_02 + 0x478));
                    /* try { // try from 00e50f40 to 00f50f73 has its CatchHandler @ 00e50f04 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_c8,"textures/");
  if (lVar28 != 0) {
    PVar6 = param_2[8];
    if (((byte)PVar6 & 1) == 0) {
      pPVar5 = param_2 + 9;
      pPVar26 = (PUAbstractNode *)(ulong)((byte)PVar6 >> 1);
                    /* catch() { ... } // from try @ 00e50f30 with catch @ 00e50f60 */
    }
    else {
      pPVar26 = *(PUAbstractNode **)(param_2 + 0x10);
      pPVar5 = *(PUAbstractNode **)(param_2 + 0x18);
    }
    if (pPVar26 != (PUAbstractNode *)0x0) {
      do {
        if (pPVar26 == (PUAbstractNode *)0x0) goto LAB_00e51190;
                    /* try { // try from 00e50f74 to 00f50f9f has its CatchHandler @ 00e50f74
                       catch() { ... } // from try @ 00e50f74 with catch @ 00e50f74
                       catch() { ... } // from try @ 00e50fb0 with catch @ 00e50f74 */
        pPVar27 = pPVar5 + (long)pPVar26;
        pPVar26 = pPVar26 + -1;
      } while (pPVar27[-1] != (PUAbstractNode)0x2f);
      if (pPVar26 != (PUAbstractNode *)0xffffffffffffffff) {
        local_d8 = (PUAbstractNode *)0x0;
        local_d0 = (char *)0x0;
        local_e0 = 0;
        pPVar5 = *(PUAbstractNode **)(param_2 + 0x10);
        pPVar27 = *(PUAbstractNode **)(param_2 + 0x18);
                    /* try { // try from 00e50fa0 to 00f50faf has its CatchHandler @ 00e50fd0 */
        if (((byte)PVar6 & 1) == 0) {
          pPVar27 = param_2 + 9;
          pPVar5 = (PUAbstractNode *)(ulong)((byte)PVar6 >> 1);
        }
                    /* try { // try from 00e50fb0 to 00f50fe3 has its CatchHandler @ 00e50f74 */
        if (pPVar26 <= pPVar5) {
          pPVar5 = pPVar26;
        }
        if ((PUAbstractNode *)0xffffffffffffffef < pPVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e53c10 to 00f53c1f has its CatchHandler @ 00e53d18 */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (pPVar5 < (PUAbstractNode *)0x17) {
          pcVar30 = (char *)((ulong)&local_e0 | 1);
                    /* catch() { ... } // from try @ 00e50fa0 with catch @ 00e50fd0 */
          local_e0 = (ulong)(byte)((int)pPVar5 << 1);
          if (pPVar5 != (PUAbstractNode *)0x0) goto LAB_00e51004;
        }
        else {
                    /* try { // try from 00e50fe4 to 00f5104f has its CatchHandler @ 00e50fe4
                       catch() { ... } // from try @ 00e50fe4 with catch @ 00e50fe4
                       catch() { ... } // from try @ 00e5106c with catch @ 00e50fe4 */
          pcVar30 = operator_new((ulong)(pPVar5 + 0x10) & 0xfffffffffffffff0);
          local_e0 = (ulong)(pPVar5 + 0x10) & 0xfffffffffffffff0 | 1;
          local_d8 = pPVar5;
          local_d0 = pcVar30;
LAB_00e51004:
          pPVar32 = pPVar5;
          memcpy(pcVar30,pPVar27,(size_t)pPVar5);
        }
        pcVar30[(long)pPVar5] = '\0';
        bVar21 = (byte)local_e0._0_1_ & 1;
        pcVar30 = (char *)((ulong)&local_e0 | 1);
        pPVar5 = (PUAbstractNode *)(ulong)((byte)local_e0._0_1_ >> 1);
        if ((local_e0 & 1) != 0) {
          pcVar30 = local_d0;
          pPVar5 = local_d8;
        }
        pPVar26 = pPVar5;
        if (pPVar5 != (PUAbstractNode *)0x0) {
          do {
            pPVar27 = pPVar26;
            if (pPVar27 == (PUAbstractNode *)0x0) goto LAB_00e51184;
                    /* try { // try from 00e51050 to 00f5106b has its CatchHandler @ 00e510a0 */
            pPVar26 = pPVar27 + -1;
          } while ((pcVar30 + (long)pPVar27)[-1] != '/');
          if (pPVar27 + -1 != (PUAbstractNode *)0xffffffffffffffff) {
                    /* try { // try from 00e5106c to 00f510bb has its CatchHandler @ 00e50fe4 */
            if (pPVar27 <= pPVar5) {
              pPVar5 = pPVar27;
            }
            local_f0 = (PUAbstractNode *)0x0;
            local_e8 = (void *)0x0;
            local_f8 = 0;
            if ((PUAbstractNode *)0xffffffffffffffef < pPVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e53c20 to 00f53c2b has its CatchHandler @ 00e53d00 */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pPVar5 < (PUAbstractNode *)0x17) {
              pvVar31 = (void *)((ulong)&local_f8 | 1);
              local_f8 = (ulong)(byte)((int)pPVar5 << 1);
              if (pPVar5 != (PUAbstractNode *)0x0) goto LAB_00e510c8;
            }
            else {
                    /* catch() { ... } // from try @ 00e51050 with catch @ 00e510a0 */
              pvVar31 = operator_new((ulong)(pPVar5 + 0x10) & 0xfffffffffffffff0);
              local_f8 = (ulong)(pPVar5 + 0x10) & 0xfffffffffffffff0 | 1;
              local_f0 = pPVar5;
              local_e8 = pvVar31;
LAB_00e510c8:
              memcpy(pvVar31,pcVar30,(size_t)pPVar5);
            }
            bVar13 = ((byte)local_c8 & 1) != 0;
                    /* try { // try from 00e510ec to 00f51127 has its CatchHandler @ 00e510ec
                       catch() { ... } // from try @ 00e510ec with catch @ 00e510ec
                       catch() { ... } // from try @ 00e5112c with catch @ 00e510ec */
            pcVar30 = (char *)((ulong)&local_c8 | 1);
            if (bVar13) {
              pcVar30 = local_b8;
            }
            *(PUAbstractNode *)((long)pvVar31 + (long)pPVar5) = (PUAbstractNode)0x0;
            pPVar32 = (PUAbstractNode *)(ulong)((byte)local_c8 >> 1);
            if (bVar13) {
              pPVar32 = (PUAbstractNode *)CONCAT71(uStack_bf,uStack_c0);
            }
            pbVar15 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)std::__ndk1::
                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)&local_f8,pcVar30,(ulong)pPVar32);
            pcVar30 = *(char **)(pbVar15 + 0x10);
            uVar24 = *(undefined8 *)(pbVar15 + 1);
            bVar7 = *pbVar15;
            local_90 = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 8) >> 8);
            local_98 = SUB81(uVar24,0);
            uStack_97 = (undefined6)((ulong)uVar24 >> 8);
            uStack_91 = (undefined1)((ulong)uVar24 >> 0x38);
            *(undefined8 *)pbVar15 = 0;
            *(undefined8 *)(pbVar15 + 8) = 0;
            *(undefined8 *)(pbVar15 + 0x10) = 0;
            if (((byte)local_c8 & 1) != 0) {
              *local_b8 = '\0';
              uStack_c0 = 0;
              uStack_bf = 0;
              if (((byte)local_c8 & 1) != 0) {
                operator_delete(local_b8);
                    /* catch() { ... } // from try @ 00e51128 with catch @ 00e5114c */
              }
            }
            uStack_c6 = uStack_97;
            bStack_c7 = local_98;
                    /* try { // try from 00e51160 to 00f511a7 has its CatchHandler @ 00e51160
                       catch() { ... } // from try @ 00e51160 with catch @ 00e51160
                       catch() { ... } // from try @ 00e511e8 with catch @ 00e51160 */
            local_98 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )0x0;
            uStack_97 = 0;
            uStack_c0 = uStack_91;
            uStack_bf = local_90;
            uStack_91 = 0;
            local_90 = 0;
            local_c8 = bVar7;
            local_b8 = pcVar30;
            if ((local_f8 & 1) != 0) {
              operator_delete(local_e8);
            }
            bVar21 = (byte)local_e0._0_1_ & 1;
          }
        }
LAB_00e51184:
        if (bVar21 != 0) {
          operator_delete(local_d0);
        }
      }
    }
  }
LAB_00e51190:
  uVar25 = local_b0 >> 1 & 0x7f;
  if ((local_b0 & 1) != 0) {
    uVar25 = local_a8;
  }
                    /* try { // try from 00e511a8 to 00f511af has its CatchHandler @ 00e511f8 */
                    /* try { // try from 00e511c4 to 00f511e7 has its CatchHandler @ 00e51200 */
  switch(uVar25) {
  case 3:
    piVar2 = (int *)((ulong)&local_b0 | 1);
                    /* try { // try from 00e511e8 to 00f5121b has its CatchHandler @ 00e51160 */
    if ((local_b0 & 1) != 0) {
      piVar2 = local_a0;
    }
    pbVar20 = (basic_string *)0x3;
    iVar14 = memcmp(piVar2,"Box",3);
                    /* catch() { ... } // from try @ 00e511a8 with catch @ 00e511f8 */
    if (iVar14 == 0) {
                    /* catch() { ... } // from try @ 00e511c4 with catch @ 00e51200 */
      if (lVar28 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,"");
        uVar24 = PUParticle3DBoxRender::create((basic_string *)&local_e0);
      }
      else {
        std::__ndk1::operator+((__ndk1 *)&local_c8,(basic_string *)(lVar28 + 0xb0),pbVar20);
        uVar24 = PUParticle3DBoxRender::create((basic_string *)&local_e0);
      }
LAB_00e5318c:
      *(undefined8 *)(this + 8) = uVar24;
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
    }
    break;
  case 4:
    piVar2 = (int *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      piVar2 = local_a0;
    }
                    /* try { // try from 00e512a8 to 00f512af has its CatchHandler @ 00e51338 */
    if (*piVar2 == 0x6d616542) {
      if (lVar28 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,"");
        uVar24 = PUBeamRender::create((basic_string *)&local_e0);
      }
      else {
        std::__ndk1::operator+
                  ((__ndk1 *)&local_c8,(basic_string *)(lVar28 + 0xb0),(basic_string *)pPVar32);
                    /* try { // try from 00e512c8 to 00f51323 has its CatchHandler @ 00e51340 */
        uVar24 = PUBeamRender::create((basic_string *)&local_e0);
      }
      *(undefined8 *)(this + 8) = uVar24;
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      pPVar32 = *(PUAbstractNode **)(param_2 + 0xb8);
      if (pPVar32 != param_2 + 0xb0) {
        pcVar30 = (char *)((ulong)&local_e0 | 1);
        do {
          lVar29 = *(long *)(pPVar32 + 0x10);
          if (*(int *)(lVar29 + 0x24) == 3) {
            bVar21 = *(byte *)(lVar29 + 0x38);
            uVar25 = (ulong)(bVar21 >> 1);
            sVar3 = uVar25;
            if ((bVar21 & 1) != 0) {
              sVar3 = *(size_t *)(lVar29 + 0x40);
            }
            sVar4 = (ulong)(token[0x240] >> 1);
            if ((token[0x240] & 1) != 0) {
              sVar4 = token._584_8_;
            }
            if (sVar3 == sVar4) {
              pvVar31 = *(void **)(lVar29 + 0x48);
              if ((bVar21 & 1) == 0) {
                pvVar31 = (void *)(lVar29 + 0x39);
              }
              pcVar19 = token + 0x241;
              if ((token[0x240] & 1) != 0) {
                pcVar19 = (char *)token._592_8_;
              }
              if ((bVar21 & 1) == 0) {
                if (sVar3 != 0) {
                  pcVar22 = (char *)(lVar29 + 0x39);
                  uVar17 = uVar25;
                  do {
                    if (*pcVar22 != *pcVar19) goto LAB_00e51790;
                    uVar17 = uVar17 - 1;
                    pcVar22 = pcVar22 + 1;
                    pcVar19 = pcVar19 + 1;
                  } while (uVar17 != 0);
                }
              }
              else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
              goto LAB_00e51790;
              uVar25 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar29,0x17892d0,0);
              if ((uVar25 & 1) != 0) {
                local_e0 = local_e0 & 0xffffffff00000000;
                uVar25 = PUScriptTranslator::getFloat
                                   (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                    (float *)&local_e0);
                if ((uVar25 & 1) != 0) {
                  PUBeamRender::setUpdateInterval(*(PUBeamRender **)(this + 8),(float)local_e0);
                }
              }
            }
            else {
LAB_00e51790:
              sVar4 = (ulong)(token[0xd68] >> 1);
              if ((token[0xd68] & 1) != 0) {
                sVar4 = token._3440_8_;
              }
              if (sVar3 == sVar4) {
                pvVar31 = *(void **)(lVar29 + 0x48);
                if ((bVar21 & 1) == 0) {
                  pvVar31 = (void *)(lVar29 + 0x39);
                }
                pcVar19 = token + 0xd69;
                if ((token[0xd68] & 1) != 0) {
                  pcVar19 = (char *)token._3448_8_;
                }
                if ((bVar21 & 1) == 0) {
                  if (sVar3 != 0) {
                    pcVar22 = (char *)(lVar29 + 0x39);
                    uVar17 = uVar25;
                    do {
                      if (*pcVar22 != *pcVar19) goto LAB_00e51850;
                      uVar17 = uVar17 - 1;
                      pcVar22 = pcVar22 + 1;
                      pcVar19 = pcVar19 + 1;
                    } while (uVar17 != 0);
                  }
                }
                else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                goto LAB_00e51850;
                uVar25 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,lVar29,0x1789df8,0);
                if ((uVar25 & 1) != 0) {
                  local_e0 = local_e0 & 0xffffffff00000000;
                  uVar25 = PUScriptTranslator::getFloat
                                     (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                      (float *)&local_e0);
                  if ((uVar25 & 1) != 0) {
                    PUBeamRender::setUpdateInterval(*(PUBeamRender **)(this + 8),(float)local_e0);
                  }
                }
              }
              else {
LAB_00e51850:
                sVar4 = (ulong)(token[0xd98] >> 1);
                if ((token[0xd98] & 1) != 0) {
                  sVar4 = token._3488_8_;
                }
                if (sVar3 == sVar4) {
                  pvVar31 = *(void **)(lVar29 + 0x48);
                  if ((bVar21 & 1) == 0) {
                    pvVar31 = (void *)(lVar29 + 0x39);
                  }
                  pcVar19 = token + 0xd99;
                  if ((token[0xd98] & 1) != 0) {
                    pcVar19 = (char *)token._3496_8_;
                  }
                  if ((bVar21 & 1) == 0) {
                    if (sVar3 != 0) {
                      pcVar22 = (char *)(lVar29 + 0x39);
                      uVar17 = uVar25;
                      do {
                        if (*pcVar22 != *pcVar19) goto LAB_00e51910;
                        uVar17 = uVar17 - 1;
                        pcVar22 = pcVar22 + 1;
                        pcVar19 = pcVar19 + 1;
                      } while (uVar17 != 0);
                    }
                  }
                  else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                  goto LAB_00e51910;
                  uVar25 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,lVar29,0x1789e28,0);
                  if ((uVar25 & 1) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    uVar25 = PUScriptTranslator::getFloat
                                       (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                        (float *)&local_e0);
                    if ((uVar25 & 1) != 0) {
                      PUBeamRender::setDeviation(*(PUBeamRender **)(this + 8),(float)local_e0);
                    }
                  }
                }
                else {
LAB_00e51910:
                  sVar4 = (ulong)(token[0x210] >> 1);
                  if ((token[0x210] & 1) != 0) {
                    sVar4 = token._536_8_;
                  }
                  if (sVar3 == sVar4) {
                    pvVar31 = *(void **)(lVar29 + 0x48);
                    if ((bVar21 & 1) == 0) {
                      pvVar31 = (void *)(lVar29 + 0x39);
                    }
                    pcVar19 = token + 0x211;
                    if ((token[0x210] & 1) != 0) {
                      pcVar19 = (char *)token._544_8_;
                    }
                    if ((bVar21 & 1) == 0) {
                      if (sVar3 != 0) {
                        pcVar22 = (char *)(lVar29 + 0x39);
                        uVar17 = uVar25;
                        do {
                          if (*pcVar22 != *pcVar19) goto LAB_00e519d0;
                          uVar17 = uVar17 - 1;
                          pcVar22 = pcVar22 + 1;
                          pcVar19 = pcVar19 + 1;
                        } while (uVar17 != 0);
                      }
                    }
                    else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                    goto LAB_00e519d0;
                    uVar25 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,lVar29,0x17892a0,2);
                    if ((uVar25 & 1) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      uVar25 = PUScriptTranslator::getUInt
                                         (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                          (uint *)&local_e0);
                      if ((uVar25 & 1) != 0) {
                        PUBeamRender::setNumberOfSegments
                                  (*(PUBeamRender **)(this + 8),local_e0 & 0xffffffff);
                      }
                    }
                  }
                  else {
LAB_00e519d0:
                    sVar4 = (ulong)(token[0xdb0] >> 1);
                    if ((token[0xdb0] & 1) != 0) {
                      sVar4 = token._3512_8_;
                    }
                    if (sVar3 == sVar4) {
                      pvVar31 = *(void **)(lVar29 + 0x48);
                      if ((bVar21 & 1) == 0) {
                        pvVar31 = (void *)(lVar29 + 0x39);
                      }
                      pcVar19 = token + 0xdb1;
                      if ((token[0xdb0] & 1) != 0) {
                        pcVar19 = (char *)token._3520_8_;
                      }
                      if ((bVar21 & 1) == 0) {
                        if (sVar3 != 0) {
                          pcVar22 = (char *)(lVar29 + 0x39);
                          uVar17 = uVar25;
                          do {
                            if (*pcVar22 != *pcVar19) goto LAB_00e51a90;
                            uVar17 = uVar17 - 1;
                            pcVar22 = pcVar22 + 1;
                            pcVar19 = pcVar19 + 1;
                          } while (uVar17 != 0);
                        }
                      }
                      else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0)
                              ) goto LAB_00e51a90;
                      uVar25 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,lVar29,0x1789e40,2);
                      if ((uVar25 & 1) != 0) {
                        local_e0 = local_e0 & 0xffffffff00000000;
                        uVar25 = PUScriptTranslator::getUInt
                                           (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                            (uint *)&local_e0);
                        if ((uVar25 & 1) != 0) {
                          PUBeamRender::setNumberOfSegments
                                    (*(PUBeamRender **)(this + 8),local_e0 & 0xffffffff);
                        }
                      }
                    }
                    else {
LAB_00e51a90:
                      sVar4 = (ulong)(token[0xdc8] >> 1);
                      if ((token[0xdc8] & 1) != 0) {
                        sVar4 = token._3536_8_;
                      }
                      if (sVar3 == sVar4) {
                        pvVar31 = *(void **)(lVar29 + 0x48);
                        if ((bVar21 & 1) == 0) {
                          pvVar31 = (void *)(lVar29 + 0x39);
                        }
                        pcVar19 = token + 0xdc9;
                        if ((token[0xdc8] & 1) != 0) {
                          pcVar19 = (char *)token._3544_8_;
                        }
                        if ((bVar21 & 1) == 0) {
                          if (sVar3 != 0) {
                            pcVar22 = (char *)(lVar29 + 0x39);
                            uVar17 = uVar25;
                            do {
                              if (*pcVar22 != *pcVar19) goto LAB_00e51b50;
                              uVar17 = uVar17 - 1;
                              pcVar22 = pcVar22 + 1;
                              pcVar19 = pcVar19 + 1;
                            } while (uVar17 != 0);
                          }
                        }
                        else if ((sVar3 != 0) &&
                                (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                        goto LAB_00e51b50;
                        uVar25 = PUScriptTranslator::passValidateProperty
                                           ((PUScriptTranslator *)this,param_1,lVar29,0x1789e58,1);
                        if (((uVar25 & 1) != 0) &&
                           (uVar25 = PUScriptTranslator::getBoolean
                                               (*(PUAbstractNode **)
                                                 (*(long *)(lVar29 + 0x60) + 0x10),(bool *)&local_e0
                                               ), (uVar25 & 1) != 0)) {
                          PUBeamRender::setJump(*(PUBeamRender **)(this + 8),(bool)local_e0._0_1_);
                        }
                      }
                      else {
LAB_00e51b50:
                        sVar4 = (ulong)(token[0xde0] >> 1);
                        if ((token[0xde0] & 1) != 0) {
                          sVar4 = token._3560_8_;
                        }
                        if (sVar3 == sVar4) {
                          pvVar31 = *(void **)(lVar29 + 0x48);
                          if ((bVar21 & 1) == 0) {
                            pvVar31 = (void *)(lVar29 + 0x39);
                          }
                          pcVar19 = token + 0xde1;
                          if ((token[0xde0] & 1) != 0) {
                            pcVar19 = (char *)token._3568_8_;
                          }
                          if ((bVar21 & 1) == 0) {
                            if (sVar3 != 0) {
                              pcVar22 = (char *)(lVar29 + 0x39);
                              uVar17 = uVar25;
                              do {
                                if (*pcVar22 != *pcVar19) goto LAB_00e51c0c;
                                uVar17 = uVar17 - 1;
                                pcVar22 = pcVar22 + 1;
                                pcVar19 = pcVar19 + 1;
                              } while (uVar17 != 0);
                            }
                          }
                          else if ((sVar3 != 0) &&
                                  (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                          goto LAB_00e51c0c;
                          uVar25 = PUScriptTranslator::passValidateProperty
                                             ((PUScriptTranslator *)this,param_1,lVar29,0x1789e70,4)
                          ;
                          if ((uVar25 & 1) != 0) {
                            local_d8 = (PUAbstractNode *)0x0;
                            local_d0 = (char *)0x0;
                            local_e0 = 0;
                            uVar17 = PUScriptTranslator::getString
                                               (*(PUAbstractNode **)
                                                 (*(long *)(lVar29 + 0x60) + 0x10),
                                                (basic_string *)&local_e0);
                            uVar25 = local_e0;
                            if ((uVar17 & 1) != 0) {
                              pPVar26 = (PUAbstractNode *)(local_e0 >> 1 & 0x7f);
                              pPVar5 = pPVar26;
                              if ((local_e0 & 1) != 0) {
                                pPVar5 = local_d8;
                              }
                              pPVar27 = (PUAbstractNode *)(ulong)(token[0xe10] >> 1);
                              if ((token[0xe10] & 1) != 0) {
                                pPVar27 = (PUAbstractNode *)token._3608_8_;
                              }
                              if (pPVar5 == pPVar27) {
                                pcVar19 = pcVar30;
                                if ((local_e0 & 1) != 0) {
                                  pcVar19 = local_d0;
                                }
                                pcVar22 = token + 0xe11;
                                if ((token[0xe10] & 1) != 0) {
                                  pcVar22 = (char *)token._3616_8_;
                                }
                                pcVar11 = pcVar30;
                                pPVar27 = pPVar26;
                                pPVar12 = pPVar5;
                                if ((local_e0 & 1) == 0) {
                                  while (pPVar12 != (PUAbstractNode *)0x0) {
                                    if (*pcVar11 != *pcVar22) goto LAB_00e51fcc;
                                    pcVar22 = pcVar22 + 1;
                                    pPVar27 = pPVar27 + -1;
                                    pcVar11 = pcVar11 + 1;
                                    pPVar12 = pPVar27;
                                  }
                                }
                                else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                        (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5),
                                        iVar14 != 0)) goto LAB_00e51fcc;
                                PUBeamRender::setTexCoordDirection(*(PUBeamRender **)(this + 8),0);
                              }
                              else {
LAB_00e51fcc:
                                pPVar27 = (PUAbstractNode *)(ulong)(token[0xe28] >> 1);
                                if ((token[0xe28] & 1) != 0) {
                                  pPVar27 = (PUAbstractNode *)token._3632_8_;
                                }
                                if (pPVar5 == pPVar27) {
                                  pcVar19 = pcVar30;
                                  if ((uVar25 & 1) != 0) {
                                    pcVar19 = local_d0;
                                  }
                                  pcVar22 = token + 0xe29;
                                  if ((token[0xe28] & 1) != 0) {
                                    pcVar22 = (char *)token._3640_8_;
                                  }
                                  pcVar11 = pcVar30;
                                  if ((uVar25 & 1) == 0) {
                                    while (pPVar5 != (PUAbstractNode *)0x0) {
                                      if (*pcVar11 != *pcVar22) goto LAB_00e52060;
                                      pcVar22 = pcVar22 + 1;
                                      pPVar26 = pPVar26 + -1;
                                      pcVar11 = pcVar11 + 1;
                                      pPVar5 = pPVar26;
                                    }
                                  }
                                  else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                          (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5),
                                          iVar14 != 0)) goto LAB_00e52060;
                                  PUBeamRender::setTexCoordDirection(*(PUBeamRender **)(this + 8),1)
                                  ;
                                }
                              }
                            }
LAB_00e52060:
                            if ((local_e0 & 1) != 0) {
                              operator_delete(local_d0);
                            }
                          }
                        }
                        else {
LAB_00e51c0c:
                          sVar4 = (ulong)(token[0xc0] >> 1);
                          if ((token[0xc0] & 1) != 0) {
                            sVar4 = token._200_8_;
                          }
                          if (sVar3 == sVar4) {
                            pvVar31 = *(void **)(lVar29 + 0x48);
                            if ((bVar21 & 1) == 0) {
                              pvVar31 = (void *)(lVar29 + 0x39);
                            }
                            pcVar19 = token + 0xc1;
                            if ((token[0xc0] & 1) != 0) {
                              pcVar19 = (char *)token._208_8_;
                            }
                            if ((bVar21 & 1) == 0) {
                              if (sVar3 != 0) {
                                pcVar22 = (char *)(lVar29 + 0x39);
                                uVar17 = uVar25;
                                do {
                                  if (*pcVar22 != *pcVar19) goto LAB_00e51d44;
                                  uVar17 = uVar17 - 1;
                                  pcVar22 = pcVar22 + 1;
                                  pcVar19 = pcVar19 + 1;
                                } while (uVar17 != 0);
                              }
                            }
                            else if ((sVar3 != 0) &&
                                    (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                            goto LAB_00e51d44;
                            uVar25 = PUScriptTranslator::passValidateProperty
                                               ((PUScriptTranslator *)this,param_1,lVar29,0x1789150,
                                                1);
                            if (((uVar25 & 1) != 0) &&
                               (uVar25 = PUScriptTranslator::getBoolean
                                                   (*(PUAbstractNode **)
                                                     (*(long *)(lVar29 + 0x60) + 0x10),
                                                    (bool *)&local_e0), (uVar25 & 1) != 0)) {
                              PUBeamRender::setUseVertexColours
                                        (*(PUBeamRender **)(this + 8),(bool)local_e0._0_1_);
                            }
                          }
                          else {
LAB_00e51d44:
                            sVar4 = (ulong)(token[0xdf8] >> 1);
                            if ((token[0xdf8] & 1) != 0) {
                              sVar4 = token._3584_8_;
                            }
                            if (sVar3 == sVar4) {
                              pvVar31 = *(void **)(lVar29 + 0x48);
                              if ((bVar21 & 1) == 0) {
                                pvVar31 = (void *)(lVar29 + 0x39);
                              }
                              pcVar19 = token + 0xdf9;
                              if ((token[0xdf8] & 1) != 0) {
                                pcVar19 = (char *)token._3592_8_;
                              }
                              if ((bVar21 & 1) == 0) {
                                if (sVar3 != 0) {
                                  pcVar22 = (char *)(lVar29 + 0x39);
                                  uVar17 = uVar25;
                                  do {
                                    if (*pcVar22 != *pcVar19) goto LAB_00e51e00;
                                    uVar17 = uVar17 - 1;
                                    pcVar22 = pcVar22 + 1;
                                    pcVar19 = pcVar19 + 1;
                                  } while (uVar17 != 0);
                                }
                              }
                              else if ((sVar3 != 0) &&
                                      (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                              goto LAB_00e51e00;
                              uVar25 = PUScriptTranslator::passValidateProperty
                                                 ((PUScriptTranslator *)this,param_1,lVar29,
                                                  0x1789e88,1);
                              if (((uVar25 & 1) != 0) &&
                                 (uVar25 = PUScriptTranslator::getBoolean
                                                     (*(PUAbstractNode **)
                                                       (*(long *)(lVar29 + 0x60) + 0x10),
                                                      (bool *)&local_e0), (uVar25 & 1) != 0)) {
                                PUBeamRender::setUseVertexColours
                                          (*(PUBeamRender **)(this + 8),(bool)local_e0._0_1_);
                              }
                            }
                            else {
LAB_00e51e00:
                              sVar4 = (ulong)(token[0x228] >> 1);
                              if ((token[0x228] & 1) != 0) {
                                sVar4 = token._560_8_;
                              }
                              if (sVar3 == sVar4) {
                                pvVar31 = *(void **)(lVar29 + 0x48);
                                if ((bVar21 & 1) == 0) {
                                  pvVar31 = (void *)(lVar29 + 0x39);
                                }
                                pcVar19 = token + 0x229;
                                if ((token[0x228] & 1) != 0) {
                                  pcVar19 = (char *)token._568_8_;
                                }
                                if ((bVar21 & 1) == 0) {
                                  if (sVar3 != 0) {
                                    pcVar22 = (char *)(lVar29 + 0x39);
                                    uVar17 = uVar25;
                                    do {
                                      if (*pcVar22 != *pcVar19) goto LAB_00e51ebc;
                                      uVar17 = uVar17 - 1;
                                      pcVar22 = pcVar22 + 1;
                                      pcVar19 = pcVar19 + 1;
                                    } while (uVar17 != 0);
                                  }
                                }
                                else if ((sVar3 != 0) &&
                                        (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                                goto LAB_00e51ebc;
                                uVar25 = PUScriptTranslator::passValidateProperty
                                                   ((PUScriptTranslator *)this,param_1,lVar29,
                                                    0x17892b8,2);
                                if ((uVar25 & 1) != 0) {
                                  local_e0 = local_e0 & 0xffffffff00000000;
                                  uVar25 = PUScriptTranslator::getUInt
                                                     (*(PUAbstractNode **)
                                                       (*(long *)(lVar29 + 0x60) + 0x10),
                                                      (uint *)&local_e0);
                                  if ((uVar25 & 1) != 0) {
                                    PUBeamRender::setMaxChainElements
                                              (*(PUBeamRender **)(this + 8),local_e0 & 0xffffffff);
                                  }
                                }
                              }
                              else {
LAB_00e51ebc:
                                sVar4 = (ulong)(token[0xd80] >> 1);
                                if ((token[0xd80] & 1) != 0) {
                                  sVar4 = token._3464_8_;
                                }
                                if (sVar3 == sVar4) {
                                  pvVar31 = *(void **)(lVar29 + 0x48);
                                  if ((bVar21 & 1) == 0) {
                                    pvVar31 = (void *)(lVar29 + 0x39);
                                  }
                                  pcVar19 = token + 0xd81;
                                  if ((token[0xd80] & 1) != 0) {
                                    pcVar19 = (char *)token._3472_8_;
                                  }
                                  if ((bVar21 & 1) == 0) {
                                    if (sVar3 != 0) {
                                      pcVar22 = (char *)(lVar29 + 0x39);
                                      do {
                                        if (*pcVar22 != *pcVar19) goto LAB_00e516dc;
                                        uVar25 = uVar25 - 1;
                                        pcVar22 = pcVar22 + 1;
                                        pcVar19 = pcVar19 + 1;
                                      } while (uVar25 != 0);
                                    }
                                  }
                                  else if ((sVar3 != 0) &&
                                          (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                                  goto LAB_00e516dc;
                                  uVar25 = PUScriptTranslator::passValidateProperty
                                                     ((PUScriptTranslator *)this,param_1,lVar29,
                                                      0x1789e10,2);
                                  if ((uVar25 & 1) != 0) {
                                    local_e0 = local_e0 & 0xffffffff00000000;
                                    uVar25 = PUScriptTranslator::getUInt
                                                       (*(PUAbstractNode **)
                                                         (*(long *)(lVar29 + 0x60) + 0x10),
                                                        (uint *)&local_e0);
                                    if ((uVar25 & 1) != 0) {
                                      PUBeamRender::setMaxChainElements
                                                (*(PUBeamRender **)(this + 8),local_e0 & 0xffffffff)
                                      ;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00e516dc:
          pPVar32 = *(PUAbstractNode **)(pPVar32 + 8);
        } while (pPVar32 != param_2 + 0xb0);
      }
    }
    break;
  case 6:
    piVar2 = (int *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      piVar2 = local_a0;
    }
    iVar14 = memcmp(piVar2,"Entity",6);
    if (iVar14 == 0) {
      pPVar32 = *(PUAbstractNode **)(param_2 + 0xb8);
      if (pPVar32 != param_2 + 0xb0) {
        pcVar30 = (char *)((ulong)&local_e0 | 1);
        do {
          lVar29 = *(long *)(pPVar32 + 0x10);
          if (*(int *)(lVar29 + 0x24) == 3) {
            bVar21 = *(byte *)(lVar29 + 0x38);
            uVar25 = (ulong)(bVar21 >> 1);
            sVar3 = uVar25;
            if ((bVar21 & 1) != 0) {
              sVar3 = *(size_t *)(lVar29 + 0x40);
            }
            sVar4 = (ulong)(token[0x288] >> 1);
                    /* try { // try from 00e513ec to 00f5143f has its CatchHandler @ 00e513ec
                       catch() { ... } // from try @ 00e513ec with catch @ 00e513ec
                       catch() { ... } // from try @ 00e514d0 with catch @ 00e513ec */
            if ((token[0x288] & 1) != 0) {
              sVar4 = token._656_8_;
            }
            if (sVar3 == sVar4) {
              pvVar31 = *(void **)(lVar29 + 0x48);
              if ((bVar21 & 1) == 0) {
                pvVar31 = (void *)(lVar29 + 0x39);
              }
              pcVar19 = token + 0x289;
              if ((token[0x288] & 1) != 0) {
                pcVar19 = (char *)token._664_8_;
              }
              if ((bVar21 & 1) == 0) {
                if (sVar3 != 0) {
                  pcVar22 = (char *)(lVar29 + 0x39);
                  do {
                    if (*pcVar22 != *pcVar19) goto LAB_00e513a8;
                    uVar25 = uVar25 - 1;
                    pcVar22 = pcVar22 + 1;
                    pcVar19 = pcVar19 + 1;
                  } while (uVar25 != 0);
                }
              }
              else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
              goto LAB_00e513a8;
              uVar25 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar29,0x1789318,4);
              if ((uVar25 & 1) != 0) {
                    /* try { // try from 00e5146c to 00f514cf has its CatchHandler @ 00e514f0 */
                local_d8 = (PUAbstractNode *)0x0;
                local_d0 = (char *)0x0;
                local_e0 = 0;
                uVar25 = PUScriptTranslator::getString
                                   (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                    (basic_string *)&local_e0);
                if ((uVar25 & 1) != 0) {
                  pcVar19 = pcVar30;
                  pPVar5 = (PUAbstractNode *)(local_e0 >> 1 & 0x7f);
                  if ((local_e0 & 1) != 0) {
                    pcVar19 = local_d0;
                    pPVar5 = local_d8;
                  }
                  pPVar26 = pPVar5;
                  if (pPVar5 == (PUAbstractNode *)0x0) {
LAB_00e514c4:
                    pPVar26 = (PUAbstractNode *)0xffffffffffffffff;
                  }
                  else {
                    do {
                      if (pPVar26 == (PUAbstractNode *)0x0) goto LAB_00e514c4;
                      pcVar22 = pcVar19 + (long)pPVar26;
                      pPVar26 = pPVar26 + -1;
                    } while (pcVar22[-1] != '.');
                  }
                    /* try { // try from 00e514d0 to 00f5150b has its CatchHandler @ 00e513ec */
                  if (pPVar26 + 1 <= pPVar5) {
                    pPVar5 = pPVar26 + 1;
                  }
                  local_f0 = (PUAbstractNode *)0x0;
                  local_e8 = (void *)0x0;
                  local_f8 = 0;
                  if ((PUAbstractNode *)0xffffffffffffffef < pPVar5) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_length_error();
                  }
                    /* catch() { ... } // from try @ 00e51440 with catch @ 00e514e8 */
                  if (pPVar5 < (PUAbstractNode *)0x17) {
                    /* catch() { ... } // from try @ 00e5146c with catch @ 00e514f0 */
                    local_f8 = (ulong)(byte)((int)pPVar5 << 1);
                    pvVar31 = (void *)((ulong)&local_f8 | 1);
                    if (pPVar5 != (PUAbstractNode *)0x0) goto LAB_00e51520;
                  }
                  else {
                    pvVar31 = operator_new((ulong)(pPVar5 + 0x10) & 0xfffffffffffffff0);
                    local_f8 = (ulong)(pPVar5 + 0x10) & 0xfffffffffffffff0 | 1;
                    local_f0 = pPVar5;
                    local_e8 = pvVar31;
LAB_00e51520:
                    memcpy(pvVar31,pcVar19,(size_t)pPVar5);
                  }
                  *(PUAbstractNode *)((long)pvVar31 + (long)pPVar5) = (PUAbstractNode)0x0;
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>(&local_98,"c3b");
                  pcVar19 = (char *)((ulong)&local_98 | 1);
                  pbVar20 = (basic_string *)(ulong)((byte)local_98 >> 1);
                  if (((byte)local_98 & 1) != 0) {
                    pcVar19 = local_88;
                    pbVar20 = (basic_string *)CONCAT17(uStack_89,local_90);
                  }
                  puVar16 = (undefined8 *)
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_f8,pcVar19,(ulong)pbVar20);
                  pcVar19 = (char *)puVar16[2];
                  uVar8 = *(undefined1 *)puVar16;
                  uStack_78 = (undefined7)((ulong)puVar16[1] >> 8);
                  uStack_80 = (undefined7)*(undefined8 *)((long)puVar16 + 1);
                  local_79 = (undefined1)((ulong)*(undefined8 *)((long)puVar16 + 1) >> 0x38);
                  *puVar16 = 0;
                  puVar16[1] = 0;
                  puVar16[2] = 0;
                  if ((local_e0 & 1) == 0) {
                    local_e0 = local_e0 & 0xffffffffffff0000;
                  }
                  else {
                    *local_d0 = '\0';
                    local_d8 = (PUAbstractNode *)0x0;
                    if ((local_e0 & 1) != 0) {
                      operator_delete(local_d0);
                      local_e0 = 0;
                    }
                  }
                  local_e0 = CONCAT71(local_e0._1_7_,uVar8);
                  uVar10 = CONCAT71(uStack_78,local_79);
                  uVar24 = CONCAT17(local_79,uStack_80);
                  uStack_80 = 0;
                  local_79 = 0;
                  uStack_78 = 0;
                  *(undefined8 *)(pcVar30 + 7) = uVar10;
                  *(undefined8 *)pcVar30 = uVar24;
                  local_d0 = pcVar19;
                  if (((byte)local_98 & 1) == 0) {
                    /* try { // try from 00e515e8 to 00f5161f has its CatchHandler @ 00e51638 */
                    if ((local_f8 & 1) != 0) goto LAB_00e51620;
LAB_00e515ec:
                    if (lVar28 == 0) goto LAB_00e5162c;
LAB_00e515f0:
                    std::__ndk1::operator+
                              ((__ndk1 *)&local_c8,(basic_string *)(lVar28 + 0xb0),pbVar20);
                    uVar24 = PUParticle3DModelRender::create
                                       ((basic_string *)&local_e0,(basic_string *)&local_f8);
                  }
                  else {
                    operator_delete(local_88);
                    if ((local_f8 & 1) == 0) goto LAB_00e515ec;
LAB_00e51620:
                    operator_delete(local_e8);
                    if (lVar28 != 0) goto LAB_00e515f0;
LAB_00e5162c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e515e8 with catch @ 00e51638
                        */
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string<decltype(nullptr)>
                              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_f8,"");
                    uVar24 = PUParticle3DModelRender::create
                                       ((basic_string *)&local_e0,(basic_string *)&local_f8);
                  }
                  *(undefined8 *)(this + 8) = uVar24;
                  if ((local_f8 & 1) != 0) {
                    operator_delete(local_e8);
                  }
                }
                if ((local_e0 & 1) != 0) {
                  operator_delete(local_d0);
                }
              }
            }
          }
LAB_00e513a8:
          pPVar32 = *(PUAbstractNode **)(pPVar32 + 8);
        } while (pPVar32 != param_2 + 0xb0);
      }
    }
    else {
      pbVar20 = (basic_string *)0x6;
                    /* try { // try from 00e51258 to 00f512a7 has its CatchHandler @ 00e51258
                       catch() { ... } // from try @ 00e51258 with catch @ 00e51258
                       catch() { ... } // from try @ 00e51324 with catch @ 00e51258 */
      iVar14 = memcmp(piVar2,"Sphere",6);
      if (iVar14 == 0) {
        if (lVar28 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,"");
          uVar24 = PUSphereRender::create((basic_string *)&local_e0);
        }
        else {
          std::__ndk1::operator+((__ndk1 *)&local_c8,(basic_string *)(lVar28 + 0xb0),pbVar20);
          uVar24 = PUSphereRender::create((basic_string *)&local_e0);
        }
        goto LAB_00e5318c;
      }
    }
    break;
  case 9:
    piVar2 = (int *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      piVar2 = local_a0;
    }
    pbVar20 = (basic_string *)0x9;
    iVar14 = memcmp(piVar2,"Billboard",9);
    if (iVar14 == 0) {
      if (lVar28 == 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,"");
        uVar24 = PUParticle3DQuadRender::create((basic_string *)&local_e0);
      }
      else {
        std::__ndk1::operator+((__ndk1 *)&local_c8,(basic_string *)(lVar28 + 0xb0),pbVar20);
        uVar24 = PUParticle3DQuadRender::create((basic_string *)&local_e0);
      }
      *(undefined8 *)(this + 8) = uVar24;
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      pPVar32 = *(PUAbstractNode **)(param_2 + 0xb8);
      if (pPVar32 != param_2 + 0xb0) {
        pPVar1 = this + 8;
        pcVar30 = (char *)((ulong)&local_e0 | 1);
        do {
          lVar29 = *(long *)(pPVar32 + 0x10);
          if (*(int *)(lVar29 + 0x24) == 3) {
            bVar21 = *(byte *)(lVar29 + 0x38);
            uVar25 = (ulong)(bVar21 >> 1);
            sVar3 = uVar25;
            if ((bVar21 & 1) != 0) {
              sVar3 = *(size_t *)(lVar29 + 0x40);
            }
            sVar4 = (ulong)(token[0xe40] >> 1);
            if ((token[0xe40] & 1) != 0) {
              sVar4 = token._3656_8_;
            }
            if (sVar3 == sVar4) {
              pvVar31 = *(void **)(lVar29 + 0x48);
              if ((bVar21 & 1) == 0) {
                pvVar31 = (void *)(lVar29 + 0x39);
              }
              pcVar19 = token + 0xe41;
              if ((token[0xe40] & 1) != 0) {
                pcVar19 = (char *)token._3664_8_;
              }
              if ((bVar21 & 1) == 0) {
                if (sVar3 != 0) {
                  pcVar22 = (char *)(lVar29 + 0x39);
                  uVar17 = uVar25;
                  do {
                    if (*pcVar22 != *pcVar19) goto LAB_00e521d0;
                    uVar17 = uVar17 - 1;
                    pcVar22 = pcVar22 + 1;
                    pcVar19 = pcVar19 + 1;
                  } while (uVar17 != 0);
                }
              }
              else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
              goto LAB_00e521d0;
              uVar25 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar29,0x1789ed0,4);
              if ((uVar25 & 1) != 0) {
                local_d8 = (PUAbstractNode *)0x0;
                local_d0 = (char *)0x0;
                local_e0 = 0;
                uVar18 = PUScriptTranslator::getString
                                   (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                    (basic_string *)&local_e0);
                uVar17 = local_e0;
                uVar25 = local_e0;
                if ((uVar18 & 1) != 0) {
                  pPVar26 = (PUAbstractNode *)(local_e0 >> 1 & 0x7f);
                  pPVar5 = pPVar26;
                  if ((local_e0 & 1) != 0) {
                    pPVar5 = local_d8;
                  }
                  pPVar27 = (PUAbstractNode *)(ulong)(token[0x3c0] >> 1);
                  if ((token[0x3c0] & 1) != 0) {
                    pPVar27 = (PUAbstractNode *)token._968_8_;
                  }
                  if (pPVar5 == pPVar27) {
                    pcVar19 = pcVar30;
                    if ((local_e0 & 1) != 0) {
                      pcVar19 = local_d0;
                    }
                    pcVar22 = token + 0x3c1;
                    if ((token[0x3c0] & 1) != 0) {
                      pcVar22 = (char *)token._976_8_;
                    }
                    pcVar11 = pcVar30;
                    pPVar27 = pPVar26;
                    pPVar12 = pPVar5;
                    if ((local_e0 & 1) == 0) {
                      while (pPVar12 != (PUAbstractNode *)0x0) {
                        if (*pcVar11 != *pcVar22) goto LAB_00e52844;
                        pcVar22 = pcVar22 + 1;
                        pPVar27 = pPVar27 + -1;
                        pcVar11 = pcVar11 + 1;
                        pPVar12 = pPVar27;
                      }
                    }
                    else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                            (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                    goto LAB_00e52844;
                    PUParticle3DQuadRender::setType(*(PUParticle3DQuadRender **)pPVar1,0);
                    uVar25 = local_e0;
                  }
                  else {
LAB_00e52844:
                    pPVar27 = (PUAbstractNode *)(ulong)(token[0xf00] >> 1);
                    if ((token[0xf00] & 1) != 0) {
                      pPVar27 = (PUAbstractNode *)token._3848_8_;
                    }
                    if (pPVar5 == pPVar27) {
                      pcVar19 = pcVar30;
                      if ((uVar17 & 1) != 0) {
                        pcVar19 = local_d0;
                      }
                      pcVar22 = token + 0xf01;
                      if ((token[0xf00] & 1) != 0) {
                        pcVar22 = (char *)token._3856_8_;
                      }
                      pcVar11 = pcVar30;
                      pPVar27 = pPVar26;
                      pPVar12 = pPVar5;
                      if ((uVar17 & 1) == 0) {
                        while (pPVar12 != (PUAbstractNode *)0x0) {
                          if (*pcVar11 != *pcVar22) goto LAB_00e52968;
                          pcVar22 = pcVar22 + 1;
                          pPVar27 = pPVar27 + -1;
                          pcVar11 = pcVar11 + 1;
                          pPVar12 = pPVar27;
                        }
                      }
                      else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                              (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                      goto LAB_00e52968;
                      PUParticle3DQuadRender::setType(*(PUParticle3DQuadRender **)pPVar1,2);
                      uVar25 = local_e0;
                    }
                    else {
LAB_00e52968:
                      pPVar27 = (PUAbstractNode *)(ulong)(token[0xee8] >> 1);
                      if ((token[0xee8] & 1) != 0) {
                        pPVar27 = (PUAbstractNode *)token._3824_8_;
                      }
                      if (pPVar5 == pPVar27) {
                        pcVar19 = pcVar30;
                        if ((uVar17 & 1) != 0) {
                          pcVar19 = local_d0;
                        }
                        pcVar22 = token + 0xee9;
                        if ((token[0xee8] & 1) != 0) {
                          pcVar22 = (char *)token._3832_8_;
                        }
                        pcVar11 = pcVar30;
                        pPVar27 = pPVar26;
                        pPVar12 = pPVar5;
                        if ((uVar17 & 1) == 0) {
                          while (pPVar12 != (PUAbstractNode *)0x0) {
                            if (*pcVar11 != *pcVar22) goto LAB_00e52a88;
                            pcVar22 = pcVar22 + 1;
                            pPVar27 = pPVar27 + -1;
                            pcVar11 = pcVar11 + 1;
                            pPVar12 = pPVar27;
                          }
                        }
                        else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                        goto LAB_00e52a88;
                        PUParticle3DQuadRender::setType(*(PUParticle3DQuadRender **)pPVar1,1);
                        uVar25 = local_e0;
                      }
                      else {
LAB_00e52a88:
                        pPVar27 = (PUAbstractNode *)(ulong)(token[0xf18] >> 1);
                        if ((token[0xf18] & 1) != 0) {
                          pPVar27 = (PUAbstractNode *)token._3872_8_;
                        }
                        if (pPVar5 == pPVar27) {
                          pcVar19 = pcVar30;
                          if ((uVar17 & 1) != 0) {
                            pcVar19 = local_d0;
                          }
                          pcVar22 = token + 0xf19;
                          if ((token[0xf18] & 1) != 0) {
                            pcVar22 = (char *)token._3880_8_;
                          }
                          pcVar11 = pcVar30;
                          pPVar27 = pPVar26;
                          pPVar12 = pPVar5;
                          if ((uVar17 & 1) == 0) {
                            while (pPVar12 != (PUAbstractNode *)0x0) {
                              if (*pcVar11 != *pcVar22) goto LAB_00e52bac;
                              pcVar22 = pcVar22 + 1;
                              pPVar27 = pPVar27 + -1;
                              pcVar11 = pcVar11 + 1;
                              pPVar12 = pPVar27;
                            }
                          }
                          else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                  (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                          goto LAB_00e52bac;
                          PUParticle3DQuadRender::setType(*(PUParticle3DQuadRender **)pPVar1,3);
                          uVar25 = local_e0;
                        }
                        else {
LAB_00e52bac:
                          pPVar27 = (PUAbstractNode *)(ulong)(token[0xf30] >> 1);
                          if ((token[0xf30] & 1) != 0) {
                            pPVar27 = (PUAbstractNode *)token._3896_8_;
                          }
                          if (pPVar5 == pPVar27) {
                            pcVar19 = pcVar30;
                            if ((uVar17 & 1) != 0) {
                              pcVar19 = local_d0;
                            }
                            pcVar22 = token + 0xf31;
                            if ((token[0xf30] & 1) != 0) {
                              pcVar22 = (char *)token._3904_8_;
                            }
                            pcVar11 = pcVar30;
                            pPVar27 = pPVar26;
                            pPVar12 = pPVar5;
                            if ((uVar17 & 1) == 0) {
                              while (pPVar12 != (PUAbstractNode *)0x0) {
                                if (*pcVar11 != *pcVar22) goto LAB_00e52cc8;
                                pcVar22 = pcVar22 + 1;
                                pPVar27 = pPVar27 + -1;
                                pcVar11 = pcVar11 + 1;
                                pPVar12 = pPVar27;
                              }
                            }
                            else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                    (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                            goto LAB_00e52cc8;
                            PUParticle3DQuadRender::setType(*(PUParticle3DQuadRender **)pPVar1,4);
                            uVar25 = local_e0;
                          }
                          else {
LAB_00e52cc8:
                            pPVar27 = (PUAbstractNode *)(ulong)(token[0xf48] >> 1);
                            if ((token[0xf48] & 1) != 0) {
                              pPVar27 = (PUAbstractNode *)token._3920_8_;
                            }
                            uVar25 = local_e0;
                            if (pPVar5 == pPVar27) {
                              pcVar19 = pcVar30;
                              if ((uVar17 & 1) != 0) {
                                pcVar19 = local_d0;
                              }
                              pcVar22 = token + 0xf49;
                              if ((token[0xf48] & 1) != 0) {
                                pcVar22 = (char *)token._3928_8_;
                              }
                              pcVar11 = pcVar30;
                              if ((uVar17 & 1) == 0) {
                                while (pPVar5 != (PUAbstractNode *)0x0) {
                                  if (*pcVar11 != *pcVar22) goto joined_r0x00e5305c;
                                  pcVar22 = pcVar22 + 1;
                                  pPVar26 = pPVar26 + -1;
                                  pcVar11 = pcVar11 + 1;
                                  pPVar5 = pPVar26;
                                }
                              }
                              else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                      (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5),
                                      uVar25 = local_e0, iVar14 != 0)) goto joined_r0x00e5305c;
                              PUParticle3DQuadRender::setType(*(PUParticle3DQuadRender **)pPVar1,5);
                              uVar25 = local_e0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto joined_r0x00e5305c;
              }
            }
            else {
LAB_00e521d0:
              sVar4 = (ulong)(token[0xe58] >> 1);
              if ((token[0xe58] & 1) != 0) {
                sVar4 = token._3680_8_;
              }
              if (sVar3 == sVar4) {
                pvVar31 = *(void **)(lVar29 + 0x48);
                if ((bVar21 & 1) == 0) {
                  pvVar31 = (void *)(lVar29 + 0x39);
                }
                pcVar19 = token + 0xe59;
                if ((token[0xe58] & 1) != 0) {
                  pcVar19 = (char *)token._3688_8_;
                }
                if ((bVar21 & 1) == 0) {
                  if (sVar3 != 0) {
                    pcVar22 = (char *)(lVar29 + 0x39);
                    uVar17 = uVar25;
                    do {
                      if (*pcVar22 != *pcVar19) goto LAB_00e52308;
                      uVar17 = uVar17 - 1;
                      pcVar22 = pcVar22 + 1;
                      pcVar19 = pcVar19 + 1;
                    } while (uVar17 != 0);
                  }
                }
                else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                goto LAB_00e52308;
                uVar25 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,lVar29,0x1789ee8,4);
                if ((uVar25 & 1) == 0) goto LAB_00e5211c;
                local_d8 = (PUAbstractNode *)0x0;
                local_d0 = (char *)0x0;
                local_e0 = 0;
                uVar18 = PUScriptTranslator::getString
                                   (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                    (basic_string *)&local_e0);
                uVar17 = local_e0;
                uVar25 = local_e0 & 0xff;
                if ((uVar18 & 1) == 0) goto joined_r0x00e5305c;
                pPVar26 = (PUAbstractNode *)(local_e0 >> 1 & 0x7f);
                pPVar5 = pPVar26;
                if ((local_e0 & 1) != 0) {
                  pPVar5 = local_d8;
                }
                pPVar27 = (PUAbstractNode *)(ulong)(token[0xfd8] >> 1);
                if ((token[0xfd8] & 1) != 0) {
                  pPVar27 = (PUAbstractNode *)token._4064_8_;
                }
                if (pPVar5 == pPVar27) {
                  pcVar19 = pcVar30;
                  if ((local_e0 & 1) != 0) {
                    pcVar19 = local_d0;
                  }
                  pcVar22 = token + 0xfd9;
                  if ((token[0xfd8] & 1) != 0) {
                    pcVar22 = (char *)token._4072_8_;
                  }
                  pcVar11 = pcVar30;
                  pPVar27 = pPVar26;
                  pPVar12 = pPVar5;
                  if ((local_e0 & 1) == 0) {
                    while (pPVar12 != (PUAbstractNode *)0x0) {
                      if (*pcVar11 != *pcVar22) goto LAB_00e528d8;
                      pcVar22 = pcVar22 + 1;
                      pPVar27 = pPVar27 + -1;
                      pcVar11 = pcVar11 + 1;
                      pPVar12 = pPVar27;
                    }
                  }
                  else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                          (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                  goto LAB_00e528d8;
                  uVar23 = 4;
                }
                else {
LAB_00e528d8:
                  pPVar27 = (PUAbstractNode *)(ulong)(token[0x1008] >> 1);
                  if ((token[0x1008] & 1) != 0) {
                    pPVar27 = (PUAbstractNode *)token._4112_8_;
                  }
                  if (pPVar5 == pPVar27) {
                    pcVar19 = pcVar30;
                    if ((uVar17 & 1) != 0) {
                      pcVar19 = local_d0;
                    }
                    pcVar22 = token + 0x1009;
                    if ((token[0x1008] & 1) != 0) {
                      pcVar22 = (char *)token._4120_8_;
                    }
                    pcVar11 = pcVar30;
                    pPVar27 = pPVar26;
                    pPVar12 = pPVar5;
                    if ((uVar17 & 1) == 0) {
                      while (pPVar12 != (PUAbstractNode *)0x0) {
                        if (*pcVar11 != *pcVar22) goto LAB_00e529fc;
                        pcVar22 = pcVar22 + 1;
                        pPVar27 = pPVar27 + -1;
                        pcVar11 = pcVar11 + 1;
                        pPVar12 = pPVar27;
                      }
                    }
                    else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                            (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                    goto LAB_00e529fc;
                    uVar23 = 7;
                  }
                  else {
LAB_00e529fc:
                    pPVar27 = (PUAbstractNode *)(ulong)(token[0xff0] >> 1);
                    if ((token[0xff0] & 1) != 0) {
                      pPVar27 = (PUAbstractNode *)token._4088_8_;
                    }
                    if (pPVar5 == pPVar27) {
                      pcVar19 = pcVar30;
                      if ((uVar17 & 1) != 0) {
                        pcVar19 = local_d0;
                      }
                      pcVar22 = token + 0xff1;
                      if ((token[0xff0] & 1) != 0) {
                        pcVar22 = (char *)token._4096_8_;
                      }
                      pcVar11 = pcVar30;
                      pPVar27 = pPVar26;
                      pPVar12 = pPVar5;
                      if ((uVar17 & 1) == 0) {
                        while (pPVar12 != (PUAbstractNode *)0x0) {
                          if (*pcVar11 != *pcVar22) goto LAB_00e52b1c;
                          pcVar22 = pcVar22 + 1;
                          pPVar27 = pPVar27 + -1;
                          pcVar11 = pcVar11 + 1;
                          pPVar12 = pPVar27;
                        }
                      }
                      else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                              (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                      goto LAB_00e52b1c;
                      uVar23 = 6;
                    }
                    else {
LAB_00e52b1c:
                      pPVar27 = (PUAbstractNode *)(ulong)(token[0x1020] >> 1);
                      if ((token[0x1020] & 1) != 0) {
                        pPVar27 = (PUAbstractNode *)token._4136_8_;
                      }
                      if (pPVar5 == pPVar27) {
                        pcVar19 = pcVar30;
                        if ((uVar17 & 1) != 0) {
                          pcVar19 = local_d0;
                        }
                        pcVar22 = token + 0x1021;
                        if ((token[0x1020] & 1) != 0) {
                          pcVar22 = (char *)token._4144_8_;
                        }
                        pcVar11 = pcVar30;
                        pPVar27 = pPVar26;
                        pPVar12 = pPVar5;
                        if ((uVar17 & 1) == 0) {
                          while (pPVar12 != (PUAbstractNode *)0x0) {
                            if (*pcVar11 != *pcVar22) goto LAB_00e52c40;
                            pcVar22 = pcVar22 + 1;
                            pPVar27 = pPVar27 + -1;
                            pcVar11 = pcVar11 + 1;
                            pPVar12 = pPVar27;
                          }
                        }
                        else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                        goto LAB_00e52c40;
                        uVar23 = 8;
                      }
                      else {
LAB_00e52c40:
                        pPVar27 = (PUAbstractNode *)(ulong)(token[0xfa8] >> 1);
                        if ((token[0xfa8] & 1) != 0) {
                          pPVar27 = (PUAbstractNode *)token._4016_8_;
                        }
                        if (pPVar5 == pPVar27) {
                          pcVar19 = pcVar30;
                          if ((uVar17 & 1) != 0) {
                            pcVar19 = local_d0;
                          }
                          pcVar22 = token + 0xfa9;
                          if ((token[0xfa8] & 1) != 0) {
                            pcVar22 = (char *)token._4024_8_;
                          }
                          pcVar11 = pcVar30;
                          pPVar27 = pPVar26;
                          pPVar12 = pPVar5;
                          if ((uVar17 & 1) == 0) {
                            while (pPVar12 != (PUAbstractNode *)0x0) {
                              if (*pcVar11 != *pcVar22) goto LAB_00e52d5c;
                              pcVar22 = pcVar22 + 1;
                              pPVar27 = pPVar27 + -1;
                              pcVar11 = pcVar11 + 1;
                              pPVar12 = pPVar27;
                            }
                          }
                          else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                  (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                          goto LAB_00e52d5c;
                          uVar23 = 3;
                        }
                        else {
LAB_00e52d5c:
                          pPVar27 = (PUAbstractNode *)(ulong)(token[0xfc0] >> 1);
                          if ((token[0xfc0] & 1) != 0) {
                            pPVar27 = (PUAbstractNode *)token._4040_8_;
                          }
                          if (pPVar5 == pPVar27) {
                            pcVar19 = pcVar30;
                            if ((uVar17 & 1) != 0) {
                              pcVar19 = local_d0;
                            }
                            pcVar22 = token + 0xfc1;
                            if ((token[0xfc0] & 1) != 0) {
                              pcVar22 = (char *)token._4048_8_;
                            }
                            pcVar11 = pcVar30;
                            pPVar27 = pPVar26;
                            pPVar12 = pPVar5;
                            if ((uVar17 & 1) == 0) {
                              while (pPVar12 != (PUAbstractNode *)0x0) {
                                if (*pcVar11 != *pcVar22) goto LAB_00e52eac;
                                pcVar22 = pcVar22 + 1;
                                pPVar27 = pPVar27 + -1;
                                pcVar11 = pcVar11 + 1;
                                pPVar12 = pPVar27;
                              }
                            }
                            else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                    (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                            goto LAB_00e52eac;
                            uVar23 = 5;
                          }
                          else {
LAB_00e52eac:
                            pPVar27 = (PUAbstractNode *)(ulong)(token[0xf78] >> 1);
                            if ((token[0xf78] & 1) != 0) {
                              pPVar27 = (PUAbstractNode *)token._3968_8_;
                            }
                            if (pPVar5 != pPVar27) {
LAB_00e52f5c:
                              pPVar27 = (PUAbstractNode *)(ulong)(token[0xf60] >> 1);
                              if ((token[0xf60] & 1) != 0) {
                                pPVar27 = (PUAbstractNode *)token._3944_8_;
                              }
                              if (pPVar5 == pPVar27) {
                                pcVar19 = pcVar30;
                                if ((uVar17 & 1) != 0) {
                                  pcVar19 = local_d0;
                                }
                                pcVar22 = token + 0xf61;
                                if ((token[0xf60] & 1) != 0) {
                                  pcVar22 = (char *)token._3952_8_;
                                }
                                pcVar11 = pcVar30;
                                pPVar27 = pPVar26;
                                pPVar12 = pPVar5;
                                if ((uVar17 & 1) == 0) {
                                  while (pPVar12 != (PUAbstractNode *)0x0) {
                                    if (*pcVar11 != *pcVar22) goto LAB_00e52fe8;
                                    pcVar22 = pcVar22 + 1;
                                    pPVar27 = pPVar27 + -1;
                                    pcVar11 = pcVar11 + 1;
                                    pPVar12 = pPVar27;
                                  }
                                }
                                else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                        (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5),
                                        iVar14 != 0)) goto LAB_00e52fe8;
                                *(undefined4 *)(*(long *)pPVar1 + 0xe4) = 0;
                                uVar25 = uVar17;
                              }
                              else {
LAB_00e52fe8:
                    /* try { // try from 00e52ff0 to 00f53043 has its CatchHandler @ 00e52ff0
                       catch() { ... } // from try @ 00e52ff0 with catch @ 00e52ff0
                       catch() { ... } // from try @ 00e53060 with catch @ 00e52ff0 */
                                pPVar27 = (PUAbstractNode *)(ulong)(token[0xf90] >> 1);
                                if ((token[0xf90] & 1) != 0) {
                                  pPVar27 = (PUAbstractNode *)token._3992_8_;
                                }
                                if (pPVar5 == pPVar27) {
                                  pcVar19 = pcVar30;
                                  if ((uVar17 & 1) != 0) {
                                    pcVar19 = local_d0;
                                  }
                                  pcVar22 = token + 0xf91;
                                  if ((token[0xf90] & 1) != 0) {
                                    pcVar22 = (char *)token._4000_8_;
                                  }
                                  pcVar11 = pcVar30;
                                  if ((uVar17 & 1) == 0) {
                                    while (pPVar5 != (PUAbstractNode *)0x0) {
                                      if (*pcVar11 != *pcVar22) goto LAB_00e5211c;
                    /* try { // try from 00e53044 to 00f5305f has its CatchHandler @ 00e53094 */
                                      pcVar22 = pcVar22 + 1;
                                      pPVar26 = pPVar26 + -1;
                                      pcVar11 = pcVar11 + 1;
                                      pPVar5 = pPVar26;
                                    }
                                  }
                                  else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                          (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5),
                                          iVar14 != 0)) goto LAB_00e52114;
                                  uVar23 = 2;
                                  goto LAB_00e5307c;
                                }
                              }
                              goto joined_r0x00e5305c;
                            }
                            pcVar19 = pcVar30;
                            if ((uVar17 & 1) != 0) {
                              pcVar19 = local_d0;
                            }
                            pcVar22 = token + 0xf79;
                            if ((token[0xf78] & 1) != 0) {
                              pcVar22 = (char *)token._3976_8_;
                            }
                            pcVar11 = pcVar30;
                            pPVar27 = pPVar26;
                            pPVar12 = pPVar5;
                            if ((uVar17 & 1) == 0) {
                              while (pPVar12 != (PUAbstractNode *)0x0) {
                                if (*pcVar11 != *pcVar22) goto LAB_00e52f5c;
                                pcVar22 = pcVar22 + 1;
                                pPVar27 = pPVar27 + -1;
                                pcVar11 = pcVar11 + 1;
                                pPVar12 = pPVar27;
                              }
                            }
                            else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                    (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                            goto LAB_00e52f5c;
                            uVar23 = 1;
                          }
                        }
                      }
                    }
                  }
                }
LAB_00e5307c:
                *(undefined4 *)(*(long *)pPVar1 + 0xe4) = uVar23;
                goto joined_r0x00e5305c;
              }
LAB_00e52308:
              sVar4 = (ulong)(token[0xe88] >> 1);
              if ((token[0xe88] & 1) != 0) {
                sVar4 = token._3728_8_;
              }
              if (sVar3 == sVar4) {
                pvVar31 = *(void **)(lVar29 + 0x48);
                if ((bVar21 & 1) == 0) {
                  pvVar31 = (void *)(lVar29 + 0x39);
                }
                pcVar19 = token + 0xe89;
                if ((token[0xe88] & 1) != 0) {
                  pcVar19 = (char *)token._3736_8_;
                }
                if ((bVar21 & 1) == 0) {
                  if (sVar3 != 0) {
                    pcVar22 = (char *)(lVar29 + 0x39);
                    uVar17 = uVar25;
                    do {
                      if (*pcVar22 != *pcVar19) goto LAB_00e52440;
                      uVar17 = uVar17 - 1;
                      pcVar22 = pcVar22 + 1;
                      pcVar19 = pcVar19 + 1;
                    } while (uVar17 != 0);
                  }
                }
                else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                goto LAB_00e52440;
                uVar25 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,lVar29,0x1789f18,6);
                if ((uVar25 & 1) != 0) {
                  Vec3::Vec3((Vec3 *)&local_e0);
                  uVar25 = PUScriptTranslator::getVector3
                                     ((PUScriptTranslator *)this,*(undefined8 *)(lVar29 + 0x60),
                                      lVar29 + 0x58,&local_e0,3);
                  if ((uVar25 & 1) != 0) {
                    lVar29 = *(long *)pPVar1;
                    *(undefined4 *)(lVar29 + 0xf4) = local_d8._0_4_;
                    *(ulong *)(lVar29 + 0xec) = local_e0;
                  }
                }
              }
              else {
LAB_00e52440:
                sVar4 = (ulong)(token[0xea0] >> 1);
                if ((token[0xea0] & 1) != 0) {
                  sVar4 = token._3752_8_;
                }
                if (sVar3 == sVar4) {
                  pvVar31 = *(void **)(lVar29 + 0x48);
                  if ((bVar21 & 1) == 0) {
                    pvVar31 = (void *)(lVar29 + 0x39);
                  }
                  pcVar19 = token + 0xea1;
                  if ((token[0xea0] & 1) != 0) {
                    pcVar19 = (char *)token._3760_8_;
                  }
                  if ((bVar21 & 1) == 0) {
                    if (sVar3 != 0) {
                      pcVar22 = (char *)(lVar29 + 0x39);
                      uVar17 = uVar25;
                      do {
                        if (*pcVar22 != *pcVar19) goto LAB_00e52518;
                        uVar17 = uVar17 - 1;
                        pcVar22 = pcVar22 + 1;
                        pcVar19 = pcVar19 + 1;
                      } while (uVar17 != 0);
                    }
                  }
                  else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                  goto LAB_00e52518;
                  uVar25 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,lVar29,0x1789f30,6);
                  if ((uVar25 & 1) != 0) {
                    Vec3::Vec3((Vec3 *)&local_e0);
                    uVar25 = PUScriptTranslator::getVector3
                                       ((PUScriptTranslator *)this,*(undefined8 *)(lVar29 + 0x60),
                                        lVar29 + 0x58,&local_e0,3);
                    if ((uVar25 & 1) != 0) {
                      lVar29 = *(long *)pPVar1;
                      *(undefined4 *)(lVar29 + 0x100) = local_d8._0_4_;
                      *(ulong *)(lVar29 + 0xf8) = local_e0;
                    }
                  }
                }
                else {
LAB_00e52518:
                  sVar4 = (ulong)(token[0x750] >> 1);
                  if ((token[0x750] & 1) != 0) {
                    sVar4 = token._1880_8_;
                  }
                  if (sVar3 == sVar4) {
                    pvVar31 = *(void **)(lVar29 + 0x48);
                    if ((bVar21 & 1) == 0) {
                      pvVar31 = (void *)(lVar29 + 0x39);
                    }
                    pcVar19 = token + 0x751;
                    if ((token[0x750] & 1) != 0) {
                      pcVar19 = (char *)token._1888_8_;
                    }
                    if ((bVar21 & 1) == 0) {
                      if (sVar3 != 0) {
                        pcVar22 = (char *)(lVar29 + 0x39);
                        uVar17 = uVar25;
                        do {
                          if (*pcVar22 != *pcVar19) goto LAB_00e525f0;
                          uVar17 = uVar17 - 1;
                          pcVar22 = pcVar22 + 1;
                          pcVar19 = pcVar19 + 1;
                        } while (uVar17 != 0);
                      }
                    }
                    else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                    goto LAB_00e525f0;
                    uVar25 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,lVar29,0x17897e0,2);
                    if ((uVar25 & 1) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      uVar25 = PUScriptTranslator::getUInt
                                         (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                          (uint *)&local_e0);
                      if ((uVar25 & 1) != 0) {
                        PUParticle3DQuadRender::setTextureCoordsRows
                                  (*(PUParticle3DQuadRender **)pPVar1,(ushort)local_e0);
                      }
                    }
                  }
                  else {
LAB_00e525f0:
                    sVar4 = (ulong)(token[0x780] >> 1);
                    if ((token[0x780] & 1) != 0) {
                      sVar4 = token._1928_8_;
                    }
                    if (sVar3 == sVar4) {
                      pvVar31 = *(void **)(lVar29 + 0x48);
                      if ((bVar21 & 1) == 0) {
                        pvVar31 = (void *)(lVar29 + 0x39);
                      }
                      pcVar19 = token + 0x781;
                      if ((token[0x780] & 1) != 0) {
                        pcVar19 = (char *)token._1936_8_;
                      }
                      if ((bVar21 & 1) == 0) {
                        if (sVar3 != 0) {
                          pcVar22 = (char *)(lVar29 + 0x39);
                          uVar17 = uVar25;
                          do {
                            if (*pcVar22 != *pcVar19) goto LAB_00e526b4;
                            uVar17 = uVar17 - 1;
                            pcVar22 = pcVar22 + 1;
                            pcVar19 = pcVar19 + 1;
                          } while (uVar17 != 0);
                        }
                      }
                      else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0)
                              ) goto LAB_00e526b4;
                      uVar25 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,lVar29,0x1789810,2);
                      if ((uVar25 & 1) != 0) {
                        local_e0 = local_e0 & 0xffffffff00000000;
                        uVar25 = PUScriptTranslator::getUInt
                                           (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                            (uint *)&local_e0);
                        if ((uVar25 & 1) != 0) {
                          PUParticle3DQuadRender::setTextureCoordsColumns
                                    (*(PUParticle3DQuadRender **)pPVar1,(ushort)local_e0);
                        }
                      }
                    }
                    else {
LAB_00e526b4:
                      sVar4 = (ulong)(token[0xe70] >> 1);
                      if ((token[0xe70] & 1) != 0) {
                        sVar4 = token._3704_8_;
                      }
                      if (sVar3 == sVar4) {
                        pvVar31 = *(void **)(lVar29 + 0x48);
                        if ((bVar21 & 1) == 0) {
                          pvVar31 = (void *)(lVar29 + 0x39);
                        }
                        pcVar19 = token + 0xe71;
                        if ((token[0xe70] & 1) != 0) {
                          pcVar19 = (char *)token._3712_8_;
                        }
                        if ((bVar21 & 1) == 0) {
                          if (sVar3 != 0) {
                            pcVar22 = (char *)(lVar29 + 0x39);
                            do {
                              if (*pcVar22 != *pcVar19) goto LAB_00e5211c;
                              uVar25 = uVar25 - 1;
                              pcVar22 = pcVar22 + 1;
                              pcVar19 = pcVar19 + 1;
                            } while (uVar25 != 0);
                          }
                        }
                        else if ((sVar3 != 0) &&
                                (iVar14 = memcmp(pvVar31,pcVar19,sVar3), iVar14 != 0))
                        goto LAB_00e5211c;
                        uVar25 = PUScriptTranslator::passValidateProperty
                                           ((PUScriptTranslator *)this,param_1,lVar29,0x1789f00,4);
                        if ((uVar25 & 1) != 0) {
                          local_d8 = (PUAbstractNode *)0x0;
                          local_d0 = (char *)0x0;
                          local_e0 = 0;
                          uVar18 = PUScriptTranslator::getString
                                             (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                              (basic_string *)&local_e0);
                          uVar17 = local_e0;
                          uVar25 = local_e0 & 0xff;
                          if ((uVar18 & 1) == 0) goto joined_r0x00e5305c;
                          pPVar26 = (PUAbstractNode *)(local_e0 >> 1 & 0x7f);
                          pPVar5 = pPVar26;
                          if ((local_e0 & 1) != 0) {
                            pPVar5 = local_d8;
                          }
                          pPVar27 = (PUAbstractNode *)(ulong)(token[0x3d8] >> 1);
                          if ((token[0x3d8] & 1) != 0) {
                            pPVar27 = (PUAbstractNode *)token._992_8_;
                          }
                          if (pPVar5 == pPVar27) {
                            pcVar19 = pcVar30;
                            if ((local_e0 & 1) != 0) {
                              pcVar19 = local_d0;
                            }
                            pcVar22 = token + 0x3d9;
                            if ((token[0x3d8] & 1) != 0) {
                              pcVar22 = (char *)token._1000_8_;
                            }
                            pcVar11 = pcVar30;
                            pPVar27 = pPVar26;
                            pPVar12 = pPVar5;
                            if ((local_e0 & 1) == 0) {
                              while (pPVar12 != (PUAbstractNode *)0x0) {
                                if (*pcVar11 != *pcVar22) goto LAB_00e52e14;
                                pcVar22 = pcVar22 + 1;
                                pPVar27 = pPVar27 + -1;
                                pcVar11 = pcVar11 + 1;
                                pPVar12 = pPVar27;
                              }
                            }
                            else if ((pPVar5 != (PUAbstractNode *)0x0) &&
                                    (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 != 0))
                            goto LAB_00e52e14;
                            *(undefined4 *)(*(long *)pPVar1 + 0xe8) = 1;
                            uVar25 = uVar17;
joined_r0x00e5305c:
                            if ((uVar25 & 1) == 0) goto LAB_00e5211c;
                          }
                          else {
LAB_00e52e14:
                            pPVar27 = (PUAbstractNode *)(ulong)(token[0x1038] >> 1);
                            if ((token[0x1038] & 1) != 0) {
                              pPVar27 = (PUAbstractNode *)token._4160_8_;
                            }
                            if (pPVar5 != pPVar27) goto joined_r0x00e5305c;
                            pcVar19 = pcVar30;
                            if ((uVar17 & 1) != 0) {
                              pcVar19 = local_d0;
                            }
                            pcVar22 = token + 0x1039;
                            if ((token[0x1038] & 1) != 0) {
                              pcVar22 = (char *)token._4168_8_;
                            }
                            pcVar11 = pcVar30;
                            if ((uVar17 & 1) == 0) {
                              while (pPVar5 != (PUAbstractNode *)0x0) {
                                if (*pcVar11 != *pcVar22) goto LAB_00e5211c;
                                pcVar22 = pcVar22 + 1;
                                pPVar26 = pPVar26 + -1;
                                pcVar11 = pcVar11 + 1;
                                pPVar5 = pPVar26;
                              }
LAB_00e52f34:
                              *(undefined4 *)(*(long *)pPVar1 + 0xe8) = 0;
                              uVar25 = uVar17;
                              goto joined_r0x00e5305c;
                            }
                            if ((pPVar5 == (PUAbstractNode *)0x0) ||
                               (iVar14 = memcmp(pcVar19,pcVar22,(size_t)pPVar5), iVar14 == 0))
                            goto LAB_00e52f34;
                          }
LAB_00e52114:
                          operator_delete(local_d0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00e5211c:
          pPVar32 = *(PUAbstractNode **)(pPVar32 + 8);
        } while (pPVar32 != param_2 + 0xb0);
      }
    }
    break;
  case 0xb:
                    /* try { // try from 00e51324 to 00f5135b has its CatchHandler @ 00e51258 */
    piVar2 = (int *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      piVar2 = local_a0;
    }
                    /* catch() { ... } // from try @ 00e512a8 with catch @ 00e51338 */
    pbVar20 = (basic_string *)0xb;
                    /* catch() { ... } // from try @ 00e512c8 with catch @ 00e51340 */
    iVar14 = memcmp(piVar2,"RibbonTrail",0xb);
    if (iVar14 == 0) {
      if (lVar28 == 0) {
                    /* catch() { ... } // from try @ 00e53044 with catch @ 00e53094 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,"");
        uVar24 = PURibbonTrailRender::create((basic_string *)&local_e0);
      }
      else {
        std::__ndk1::operator+((__ndk1 *)&local_c8,(basic_string *)(lVar28 + 0xb0),pbVar20);
        uVar24 = PURibbonTrailRender::create((basic_string *)&local_e0);
      }
      *(undefined8 *)(this + 8) = uVar24;
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      pPVar32 = *(PUAbstractNode **)(param_2 + 0xb8);
      if (pPVar32 != param_2 + 0xb0) {
        do {
          lVar29 = *(long *)(pPVar32 + 0x10);
          if (*(int *)(lVar29 + 0x24) == 3) {
            bVar21 = *(byte *)(lVar29 + 0x38);
            uVar25 = (ulong)(bVar21 >> 1);
                    /* try { // try from 00e531e8 to 00f5323b has its CatchHandler @ 00e531e8
                       catch() { ... } // from try @ 00e531e8 with catch @ 00e531e8
                       catch() { ... } // from try @ 00e53240 with catch @ 00e531e8 */
            sVar3 = uVar25;
            if ((bVar21 & 1) != 0) {
              sVar3 = *(size_t *)(lVar29 + 0x40);
            }
            sVar4 = (ulong)(token[0xc0] >> 1);
            if ((token[0xc0] & 1) != 0) {
              sVar4 = token._200_8_;
            }
            if (sVar3 == sVar4) {
              pvVar31 = *(void **)(lVar29 + 0x48);
              if ((bVar21 & 1) == 0) {
                pvVar31 = (void *)(lVar29 + 0x39);
              }
              pcVar30 = token + 0xc1;
              if ((token[0xc0] & 1) != 0) {
                pcVar30 = (char *)token._208_8_;
              }
              if ((bVar21 & 1) == 0) {
                if (sVar3 != 0) {
                  pcVar19 = (char *)(lVar29 + 0x39);
                  uVar17 = uVar25;
                  do {
                    if (*pcVar19 != *pcVar30) goto LAB_00e53260;
                    /* try { // try from 00e5323c to 00f5323f has its CatchHandler @ 00e532bc */
                    uVar17 = uVar17 - 1;
                    /* try { // try from 00e53240 to 00f532cf has its CatchHandler @ 00e531e8 */
                    pcVar19 = pcVar19 + 1;
                    pcVar30 = pcVar30 + 1;
                  } while (uVar17 != 0);
                }
              }
              else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
              goto LAB_00e53260;
              uVar25 = PUScriptTranslator::passValidateProperty
                                 ((PUScriptTranslator *)this,param_1,lVar29,0x1789150,1);
              if (((uVar25 & 1) != 0) &&
                 (uVar25 = PUScriptTranslator::getBoolean
                                     (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                      (bool *)&local_e0), (uVar25 & 1) != 0)) {
                PURibbonTrailRender::setUseVertexColors
                          (*(PURibbonTrailRender **)(this + 8),(bool)local_e0._0_1_);
              }
            }
            else {
LAB_00e53260:
              sVar4 = (ulong)(token[0x1230] >> 1);
              if ((token[0x1230] & 1) != 0) {
                sVar4 = token._4664_8_;
              }
              if (sVar3 == sVar4) {
                pvVar31 = *(void **)(lVar29 + 0x48);
                if ((bVar21 & 1) == 0) {
                  pvVar31 = (void *)(lVar29 + 0x39);
                }
                pcVar30 = token + 0x1231;
                if ((token[0x1230] & 1) != 0) {
                  pcVar30 = (char *)token._4672_8_;
                }
                if ((bVar21 & 1) == 0) {
                  if (sVar3 != 0) {
                    pcVar19 = (char *)(lVar29 + 0x39);
                    uVar17 = uVar25;
                    do {
                      if (*pcVar19 != *pcVar30) goto LAB_00e53320;
                    /* catch() { ... } // from try @ 00e5323c with catch @ 00e532bc */
                      uVar17 = uVar17 - 1;
                      pcVar19 = pcVar19 + 1;
                      pcVar30 = pcVar30 + 1;
                    } while (uVar17 != 0);
                  }
                }
                else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                goto LAB_00e53320;
                uVar25 = PUScriptTranslator::passValidateProperty
                                   ((PUScriptTranslator *)this,param_1,lVar29,0x178a2c0,1);
                if (((uVar25 & 1) != 0) &&
                   (uVar25 = PUScriptTranslator::getBoolean
                                       (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                        (bool *)&local_e0), (uVar25 & 1) != 0)) {
                  PURibbonTrailRender::setUseVertexColors
                            (*(PURibbonTrailRender **)(this + 8),(bool)local_e0._0_1_);
                }
              }
              else {
LAB_00e53320:
                sVar4 = (ulong)(token[0x228] >> 1);
                if ((token[0x228] & 1) != 0) {
                  sVar4 = token._560_8_;
                }
                if (sVar3 == sVar4) {
                  pvVar31 = *(void **)(lVar29 + 0x48);
                  if ((bVar21 & 1) == 0) {
                    pvVar31 = (void *)(lVar29 + 0x39);
                  }
                  pcVar30 = token + 0x229;
                  if ((token[0x228] & 1) != 0) {
                    pcVar30 = (char *)token._568_8_;
                  }
                  if ((bVar21 & 1) == 0) {
                    if (sVar3 != 0) {
                      pcVar19 = (char *)(lVar29 + 0x39);
                      uVar17 = uVar25;
                      do {
                        if (*pcVar19 != *pcVar30) goto LAB_00e533e0;
                        uVar17 = uVar17 - 1;
                        pcVar19 = pcVar19 + 1;
                        pcVar30 = pcVar30 + 1;
                      } while (uVar17 != 0);
                    }
                  }
                  else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                  goto LAB_00e533e0;
                  uVar25 = PUScriptTranslator::passValidateProperty
                                     ((PUScriptTranslator *)this,param_1,lVar29,0x17892b8,2);
                  if ((uVar25 & 1) != 0) {
                    local_e0 = local_e0 & 0xffffffff00000000;
                    uVar25 = PUScriptTranslator::getUInt
                                       (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                        (uint *)&local_e0);
                    if ((uVar25 & 1) != 0) {
                      PURibbonTrailRender::setMaxChainElements
                                (*(PURibbonTrailRender **)(this + 8),local_e0 & 0xffffffff);
                    }
                  }
                }
                else {
LAB_00e533e0:
                  sVar4 = (ulong)(token[0x1248] >> 1);
                  if ((token[0x1248] & 1) != 0) {
                    sVar4 = token._4688_8_;
                  }
                  if (sVar3 == sVar4) {
                    pvVar31 = *(void **)(lVar29 + 0x48);
                    if ((bVar21 & 1) == 0) {
                      pvVar31 = (void *)(lVar29 + 0x39);
                    }
                    pcVar30 = token + 0x1249;
                    if ((token[0x1248] & 1) != 0) {
                      pcVar30 = (char *)token._4696_8_;
                    }
                    if ((bVar21 & 1) == 0) {
                      if (sVar3 != 0) {
                        pcVar19 = (char *)(lVar29 + 0x39);
                        uVar17 = uVar25;
                        do {
                          if (*pcVar19 != *pcVar30) goto LAB_00e534a4;
                          uVar17 = uVar17 - 1;
                          pcVar19 = pcVar19 + 1;
                          pcVar30 = pcVar30 + 1;
                        } while (uVar17 != 0);
                      }
                    }
                    else if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                    goto LAB_00e534a4;
                    /* try { // try from 00e53528 to 00f5352b has its CatchHandler @ 00e53548 */
                    /* try { // try from 00e5352c to 00f5355b has its CatchHandler @ 00e534fc */
                    uVar25 = PUScriptTranslator::passValidateProperty
                                       ((PUScriptTranslator *)this,param_1,lVar29,0x178a2d8,2);
                    if ((uVar25 & 1) != 0) {
                      local_e0 = local_e0 & 0xffffffff00000000;
                      uVar25 = PUScriptTranslator::getUInt
                                         (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                          (uint *)&local_e0);
                    /* catch() { ... } // from try @ 00e53528 with catch @ 00e53548 */
                      if ((uVar25 & 1) != 0) {
                        PURibbonTrailRender::setMaxChainElements
                                  (*(PURibbonTrailRender **)(this + 8),local_e0 & 0xffffffff);
                      }
                    }
                  }
                  else {
LAB_00e534a4:
                    sVar4 = (ulong)(token[0x1260] >> 1);
                    if ((token[0x1260] & 1) != 0) {
                      sVar4 = token._4712_8_;
                    }
                    if (sVar3 == sVar4) {
                      pvVar31 = *(void **)(lVar29 + 0x48);
                      if ((bVar21 & 1) == 0) {
                        pvVar31 = (void *)(lVar29 + 0x39);
                      }
                      pcVar30 = token + 0x1261;
                      if ((token[0x1260] & 1) != 0) {
                        pcVar30 = (char *)token._4720_8_;
                      }
                      if ((bVar21 & 1) == 0) {
                        if (sVar3 != 0) {
                          pcVar19 = (char *)(lVar29 + 0x39);
                          uVar17 = uVar25;
                          do {
                    /* try { // try from 00e534fc to 00f53527 has its CatchHandler @ 00e534fc
                       catch() { ... } // from try @ 00e534fc with catch @ 00e534fc
                       catch() { ... } // from try @ 00e5352c with catch @ 00e534fc */
                            if (*pcVar19 != *pcVar30) goto LAB_00e5356c;
                            uVar17 = uVar17 - 1;
                            pcVar19 = pcVar19 + 1;
                            pcVar30 = pcVar30 + 1;
                          } while (uVar17 != 0);
                        }
                      }
                      else {
                    /* try { // try from 00e5355c to 00f5357f has its CatchHandler @ 00e5355c
                       catch() { ... } // from try @ 00e5355c with catch @ 00e5355c
                       catch() { ... } // from try @ 00e53584 with catch @ 00e5355c */
                        if ((sVar3 != 0) && (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                        goto LAB_00e5356c;
                      }
                      uVar25 = PUScriptTranslator::passValidateProperty
                                         ((PUScriptTranslator *)this,param_1,lVar29,0x178a2d8,0);
                      if ((uVar25 & 1) != 0) {
                        local_e0 = local_e0 & 0xffffffff00000000;
                        uVar25 = PUScriptTranslator::getFloat
                                           (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                            (float *)&local_e0);
                        if ((uVar25 & 1) != 0) {
                          PURibbonTrailRender::setTrailLength
                                    (*(PURibbonTrailRender **)(this + 8),(float)local_e0);
                        }
                      }
                    }
                    else {
LAB_00e5356c:
                      sVar4 = (ulong)(token[0x1278] >> 1);
                    /* try { // try from 00e53580 to 00f53583 has its CatchHandler @ 00e53598 */
                      if ((token[0x1278] & 1) != 0) {
                        sVar4 = token._4736_8_;
                      }
                    /* try { // try from 00e53584 to 00f535ab has its CatchHandler @ 00e5355c */
                      if (sVar3 == sVar4) {
                        pvVar31 = *(void **)(lVar29 + 0x48);
                    /* catch() { ... } // from try @ 00e53580 with catch @ 00e53598 */
                        if ((bVar21 & 1) == 0) {
                          pvVar31 = (void *)(lVar29 + 0x39);
                        }
                        pcVar30 = token + 0x1279;
                        if ((token[0x1278] & 1) != 0) {
                          pcVar30 = (char *)token._4744_8_;
                        }
                        if ((bVar21 & 1) == 0) {
                          if (sVar3 != 0) {
                            pcVar19 = (char *)(lVar29 + 0x39);
                            uVar17 = uVar25;
                            do {
                              if (*pcVar19 != *pcVar30) goto LAB_00e53634;
                              uVar17 = uVar17 - 1;
                              pcVar19 = pcVar19 + 1;
                              pcVar30 = pcVar30 + 1;
                            } while (uVar17 != 0);
                          }
                        }
                        else if ((sVar3 != 0) &&
                                (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                        goto LAB_00e53634;
                        uVar25 = PUScriptTranslator::passValidateProperty
                                           ((PUScriptTranslator *)this,param_1,lVar29,0x178a308,0);
                        if ((uVar25 & 1) != 0) {
                          local_e0 = local_e0 & 0xffffffff00000000;
                          uVar25 = PUScriptTranslator::getFloat
                                             (*(PUAbstractNode **)(*(long *)(lVar29 + 0x60) + 0x10),
                                              (float *)&local_e0);
                          if ((uVar25 & 1) != 0) {
                            PURibbonTrailRender::setTrailWidth
                                      (*(PURibbonTrailRender **)(this + 8),(float)local_e0);
                          }
                        }
                      }
                      else {
LAB_00e53634:
                        sVar4 = (ulong)(token[0xa8] >> 1);
                        if ((token[0xa8] & 1) != 0) {
                          sVar4 = token._176_8_;
                        }
                        if (sVar3 == sVar4) {
                          pvVar31 = *(void **)(lVar29 + 0x48);
                          if ((bVar21 & 1) == 0) {
                            pvVar31 = (void *)(lVar29 + 0x39);
                          }
                          pcVar30 = token + 0xa9;
                          if ((token[0xa8] & 1) != 0) {
                            pcVar30 = (char *)token._184_8_;
                          }
                          if ((bVar21 & 1) == 0) {
                            if (sVar3 != 0) {
                              pcVar19 = (char *)(lVar29 + 0x39);
                              uVar17 = uVar25;
                              do {
                                if (*pcVar19 != *pcVar30) goto LAB_00e536f8;
                                uVar17 = uVar17 - 1;
                                pcVar19 = pcVar19 + 1;
                                pcVar30 = pcVar30 + 1;
                              } while (uVar17 != 0);
                            }
                          }
                          else if ((sVar3 != 0) &&
                                  (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                          goto LAB_00e536f8;
                          uVar25 = PUScriptTranslator::passValidateProperty
                                             ((PUScriptTranslator *)this,param_1,lVar29,0x1789138,1)
                          ;
                          if (((uVar25 & 1) != 0) &&
                             (uVar25 = PUScriptTranslator::getBoolean
                                                 (*(PUAbstractNode **)
                                                   (*(long *)(lVar29 + 0x60) + 0x10),
                                                  (bool *)&local_e0), (uVar25 & 1) != 0)) {
                            PURibbonTrailRender::setRandomInitialColor
                                      (*(PURibbonTrailRender **)(this + 8),(bool)local_e0._0_1_);
                          }
                        }
                        else {
LAB_00e536f8:
                          sVar4 = (ulong)(token[0x1290] >> 1);
                          if ((token[0x1290] & 1) != 0) {
                            sVar4 = token._4760_8_;
                          }
                          if (sVar3 == sVar4) {
                            pvVar31 = *(void **)(lVar29 + 0x48);
                            if ((bVar21 & 1) == 0) {
                              pvVar31 = (void *)(lVar29 + 0x39);
                            }
                            pcVar30 = token + 0x1291;
                            if ((token[0x1290] & 1) != 0) {
                              pcVar30 = (char *)token._4768_8_;
                            }
                            if ((bVar21 & 1) == 0) {
                              if (sVar3 != 0) {
                                pcVar19 = (char *)(lVar29 + 0x39);
                                uVar17 = uVar25;
                                do {
                                  if (*pcVar19 != *pcVar30) goto LAB_00e537b8;
                                  uVar17 = uVar17 - 1;
                                  pcVar19 = pcVar19 + 1;
                                  pcVar30 = pcVar30 + 1;
                                } while (uVar17 != 0);
                              }
                            }
                            else if ((sVar3 != 0) &&
                                    (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                            goto LAB_00e537b8;
                    /* try { // try from 00e53824 to 00f5382b has its CatchHandler @ 00e53b2c */
                    /* try { // try from 00e53830 to 00f53833 has its CatchHandler @ 00e53b10 */
                            uVar25 = PUScriptTranslator::passValidateProperty
                                               ((PUScriptTranslator *)this,param_1,lVar29,0x178a320,
                                                1);
                    /* try { // try from 00e53844 to 00f5384f has its CatchHandler @ 00e53b2c */
                    /* try { // try from 00e53854 to 00f5387f has its CatchHandler @ 00e53b0c */
                            if (((uVar25 & 1) != 0) &&
                               (uVar25 = PUScriptTranslator::getBoolean
                                                   (*(PUAbstractNode **)
                                                     (*(long *)(lVar29 + 0x60) + 0x10),
                                                    (bool *)&local_e0), (uVar25 & 1) != 0)) {
                              PURibbonTrailRender::setRandomInitialColor
                                        (*(PURibbonTrailRender **)(this + 8),(bool)local_e0._0_1_);
                            }
                          }
                          else {
LAB_00e537b8:
                    /* catch() { ... } // from try @ 00e538b8 with catch @ 00e537b8
                       catch() { ... } // from try @ 00e53a54 with catch @ 00e537b8 */
                            sVar4 = (ulong)(token[0x90] >> 1);
                            if ((token[0x90] & 1) != 0) {
                              sVar4 = token._152_8_;
                            }
                            if (sVar3 == sVar4) {
                              pvVar31 = *(void **)(lVar29 + 0x48);
                              if ((bVar21 & 1) == 0) {
                                pvVar31 = (void *)(lVar29 + 0x39);
                              }
                              pcVar30 = token + 0x91;
                              if ((token[0x90] & 1) != 0) {
                                pcVar30 = (char *)token._160_8_;
                              }
                              if ((bVar21 & 1) == 0) {
                                if (sVar3 != 0) {
                                  pcVar19 = (char *)(lVar29 + 0x39);
                                  uVar17 = uVar25;
                                  do {
                                    if (*pcVar19 != *pcVar30) goto LAB_00e53878;
                                    uVar17 = uVar17 - 1;
                                    pcVar19 = pcVar19 + 1;
                                    pcVar30 = pcVar30 + 1;
                                  } while (uVar17 != 0);
                                }
                              }
                              else if ((sVar3 != 0) &&
                                      (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                              goto LAB_00e53878;
                              uVar25 = PUScriptTranslator::passValidateProperty
                                                 ((PUScriptTranslator *)this,param_1,lVar29,
                                                  0x1789120,8);
                              if ((uVar25 & 1) != 0) {
                    /* try { // try from 00e53908 to 00f53933 has its CatchHandler @ 00e53b0c */
                                Vec4::Vec4((Vec4 *)&local_e0);
                                uVar25 = PUScriptTranslator::getVector4
                                                   ((PUScriptTranslator *)this,
                                                    *(undefined8 *)(lVar29 + 0x60),lVar29 + 0x58,
                                                    &local_e0,4);
                                if ((uVar25 & 1) != 0) {
                                  PURibbonTrailRender::setInitialColor
                                            (*(PURibbonTrailRender **)(this + 8),(Vec4 *)&local_e0);
                                }
LAB_00e531a4:
                                Vec4::~Vec4((Vec4 *)&local_e0);
                              }
                            }
                            else {
LAB_00e53878:
                    /* try { // try from 00e53884 to 00f53893 has its CatchHandler @ 00e53b08 */
                              sVar4 = (ulong)(token[0x12a8] >> 1);
                              if ((token[0x12a8] & 1) != 0) {
                                sVar4 = token._4784_8_;
                              }
                              if (sVar3 == sVar4) {
                                pvVar31 = *(void **)(lVar29 + 0x48);
                                if ((bVar21 & 1) == 0) {
                                  pvVar31 = (void *)(lVar29 + 0x39);
                                }
                    /* try { // try from 00e538a8 to 00f538b7 has its CatchHandler @ 00e53ac8 */
                                pcVar30 = token + 0x12a9;
                                if ((token[0x12a8] & 1) != 0) {
                                  pcVar30 = (char *)token._4792_8_;
                                }
                                if ((bVar21 & 1) == 0) {
                    /* try { // try from 00e538b8 to 00f53907 has its CatchHandler @ 00e537b8 */
                                  if (sVar3 != 0) {
                                    pcVar19 = (char *)(lVar29 + 0x39);
                                    uVar17 = uVar25;
                                    do {
                                      if (*pcVar19 != *pcVar30) goto LAB_00e53948;
                                      uVar17 = uVar17 - 1;
                                      pcVar19 = pcVar19 + 1;
                                      pcVar30 = pcVar30 + 1;
                                    } while (uVar17 != 0);
                                  }
                                }
                                else if ((sVar3 != 0) &&
                                        (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                                goto LAB_00e53948;
                                uVar25 = PUScriptTranslator::passValidateProperty
                                                   ((PUScriptTranslator *)this,param_1,lVar29,
                                                    0x178a338,8);
                    /* try { // try from 00e539d0 to 00f539df has its CatchHandler @ 00e53aac */
                                if ((uVar25 & 1) != 0) {
                                  Vec4::Vec4((Vec4 *)&local_e0);
                    /* try { // try from 00e539e0 to 00f539eb has its CatchHandler @ 00e53aa8 */
                                  uVar25 = PUScriptTranslator::getVector4
                                                     ((PUScriptTranslator *)this,
                                                      *(undefined8 *)(lVar29 + 0x60),lVar29 + 0x58,
                                                      &local_e0,4);
                                  if ((uVar25 & 1) != 0) {
                                    PURibbonTrailRender::setInitialColor
                                              (*(PURibbonTrailRender **)(this + 8),(Vec4 *)&local_e0
                                              );
                    /* try { // try from 00e53a04 to 00f53a13 has its CatchHandler @ 00e53aa4 */
                                  }
                                  goto LAB_00e531a4;
                                }
                              }
                              else {
LAB_00e53948:
                    /* try { // try from 00e53948 to 00f53967 has its CatchHandler @ 00e53b58 */
                                sVar4 = (ulong)(token[0x78] >> 1);
                                if ((token[0x78] & 1) != 0) {
                                  sVar4 = token._128_8_;
                                }
                                if (sVar3 == sVar4) {
                                  pvVar31 = *(void **)(lVar29 + 0x48);
                                  if ((bVar21 & 1) == 0) {
                                    pvVar31 = (void *)(lVar29 + 0x39);
                                  }
                                  pcVar30 = token + 0x79;
                                  if ((token[0x78] & 1) != 0) {
                                    pcVar30 = (char *)token._136_8_;
                                  }
                    /* try { // try from 00e53980 to 00f53993 has its CatchHandler @ 00e53b0c */
                                  if ((bVar21 & 1) == 0) {
                                    if (sVar3 != 0) {
                                      pcVar19 = (char *)(lVar29 + 0x39);
                                      uVar17 = uVar25;
                                      do {
                    /* try { // try from 00e5399c to 00f539ab has its CatchHandler @ 00e53ac4 */
                                        if (*pcVar19 != *pcVar30) goto LAB_00e53a18;
                                        uVar17 = uVar17 - 1;
                                        pcVar19 = pcVar19 + 1;
                                        pcVar30 = pcVar30 + 1;
                    /* try { // try from 00e539ac to 00f539b7 has its CatchHandler @ 00e53ab0 */
                                      } while (uVar17 != 0);
                                    }
                                  }
                                  else {
                    /* try { // try from 00e53a14 to 00f53a1f has its CatchHandler @ 00e53aa0 */
                                    if ((sVar3 != 0) &&
                                       (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                                    goto LAB_00e53a18;
                                  }
                    /* catch() { ... } // from try @ 00e53a48 with catch @ 00e53a98 */
                                  uVar25 = PUScriptTranslator::passValidateProperty
                                                     ((PUScriptTranslator *)this,param_1,lVar29,
                                                      0x1789108,8);
                    /* catch() { ... } // from try @ 00e53a38 with catch @ 00e53a9c */
                                  if ((uVar25 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e53a14 with catch @ 00e53aa0 */
                    /* catch() { ... } // from try @ 00e53a04 with catch @ 00e53aa4 */
                                    Vec4::Vec4((Vec4 *)&local_e0);
                    /* catch() { ... } // from try @ 00e539e0 with catch @ 00e53aa8 */
                    /* catch() { ... } // from try @ 00e539d0 with catch @ 00e53aac */
                    /* catch() { ... } // from try @ 00e539ac with catch @ 00e53ab0 */
                                    uVar25 = PUScriptTranslator::getVector4
                                                       ((PUScriptTranslator *)this,
                                                        *(undefined8 *)(lVar29 + 0x60),lVar29 + 0x58
                                                        ,&local_e0,4);
                                    if ((uVar25 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e5399c with catch @ 00e53ac4 */
                    /* catch() { ... } // from try @ 00e538a8 with catch @ 00e53ac8 */
                                      PURibbonTrailRender::setColorChange
                                                (*(PURibbonTrailRender **)(this + 8),
                                                 (Vec4 *)&local_e0);
                                    }
                                    goto LAB_00e531a4;
                                  }
                                }
                                else {
LAB_00e53a18:
                                  sVar4 = (ulong)(token[0x12c0] >> 1);
                                  if ((token[0x12c0] & 1) != 0) {
                                    sVar4 = token._4808_8_;
                                  }
                                  if (sVar3 == sVar4) {
                    /* try { // try from 00e53a38 to 00f53a47 has its CatchHandler @ 00e53a9c */
                                    pvVar31 = *(void **)(lVar29 + 0x48);
                                    if ((bVar21 & 1) == 0) {
                                      pvVar31 = (void *)(lVar29 + 0x39);
                                    }
                    /* try { // try from 00e53a48 to 00f53a53 has its CatchHandler @ 00e53a98 */
                                    pcVar30 = token + 0x12c1;
                                    if ((token[0x12c0] & 1) != 0) {
                                      pcVar30 = (char *)token._4816_8_;
                                    }
                    /* try { // try from 00e53a54 to 00f53b7f has its CatchHandler @ 00e537b8 */
                                    if ((bVar21 & 1) == 0) {
                                      if (sVar3 != 0) {
                                        pcVar19 = (char *)(lVar29 + 0x39);
                                        do {
                                          if (*pcVar19 != *pcVar30) goto LAB_00e531ac;
                                          uVar25 = uVar25 - 1;
                                          pcVar19 = pcVar19 + 1;
                                          pcVar30 = pcVar30 + 1;
                                        } while (uVar25 != 0);
                                      }
                                    }
                                    else if ((sVar3 != 0) &&
                                            (iVar14 = memcmp(pvVar31,pcVar30,sVar3), iVar14 != 0))
                                    goto LAB_00e531ac;
                                    uVar25 = PUScriptTranslator::passValidateProperty
                                                       ((PUScriptTranslator *)this,param_1,lVar29,
                                                        0x178a350,8);
                                    if ((uVar25 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e53884 with catch @ 00e53b08 */
                                      Vec4::Vec4((Vec4 *)&local_e0);
                    /* catch() { ... } // from try @ 00e53854 with catch @ 00e53b0c
                       catch() { ... } // from try @ 00e53908 with catch @ 00e53b0c
                       catch() { ... } // from try @ 00e53980 with catch @ 00e53b0c */
                    /* catch() { ... } // from try @ 00e53830 with catch @ 00e53b10 */
                                      uVar25 = PUScriptTranslator::getVector4
                                                         ((PUScriptTranslator *)this,
                                                          *(undefined8 *)(lVar29 + 0x60),
                                                          lVar29 + 0x58,&local_e0,4);
                                      if ((uVar25 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e53824 with catch @ 00e53b2c
                       catch() { ... } // from try @ 00e53844 with catch @ 00e53b2c */
                                        PURibbonTrailRender::setColorChange
                                                  (*(PURibbonTrailRender **)(this + 8),
                                                   (Vec4 *)&local_e0);
                                      }
                                      goto LAB_00e531a4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00e531ac:
          pPVar32 = *(PUAbstractNode **)(pPVar32 + 8);
        } while (pPVar32 != param_2 + 0xb0);
      }
    }
  }
  this_01 = *(Particle3DRender **)(this + 8);
  if (this_01 != (Particle3DRender *)0x0) {
    if (lVar28 != 0) {
      Particle3DRender::setDepthTest(this_01,*(bool *)(lVar28 + 0xa8));
                    /* catch() { ... } // from try @ 00e53948 with catch @ 00e53b58 */
      Particle3DRender::setDepthWrite(*(Particle3DRender **)(this + 8),*(bool *)(lVar28 + 0xa9));
      Particle3DRender::setBlendFunc(*(Particle3DRender **)(this + 8),(BlendFunc *)(lVar28 + 0xa0));
      this_01 = *(Particle3DRender **)(this + 8);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this_01 + 0x50) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_b0) {
        uVar25 = local_b0 >> 1 & 0x7f;
        piVar2 = (int *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          uVar25 = local_a8;
          piVar2 = local_a0;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this_01 + 0x50),(char *)piVar2,uVar25);
        this_01 = *(Particle3DRender **)(this + 8);
      }
    }
    ParticleSystem3D::setRender(this_02,this_01);
  }
  if (((byte)local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
LAB_00e53bc0:
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 8);
  if ((local_b0 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e53c44 with catch @ 00e53bd4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e53ca0 with catch @ 00e53bd4
                        */
    operator_delete(local_a0);
  }
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e53c08 to 00f53c0b has its CatchHandler @ 00e53d1c */
    __stack_chk_fail();
  }
  return;
}

