
/* cocos2d::experimental::TMXLayer::updateTiles(cocos2d::Rect const&) */

void __thiscall cocos2d::experimental::TMXLayer::updateTiles(TMXLayer *this,Rect *param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
  *this_00;
  piecewise_construct_t *ppVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  long lVar11;
  Size *pSVar12;
  int iVar13;
  TMXLayer *pTVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  void *pvVar24;
  TMXLayer *pTVar25;
  int iVar26;
  int iVar27;
  undefined2 uVar28;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  Rect aRStack_100 [16];
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  Size aSStack_c0 [64];
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  lVar11 = Director::getInstance();
  Size::operator*((Size *)(param_1 + 8),*(float *)(lVar11 + 0x1a0));
  pSVar12 = aSStack_c0;
  Rect::Rect((Rect *)&local_d0,param_1,pSVar12);
  fVar33 = *(float *)(this + 0x318);
  lVar11 = Director::getInstance();
  fVar29 = *(float *)(lVar11 + 0x1a0);
  fVar34 = *(float *)(this + 0x31c);
  lVar11 = Director::getInstance();
                    /* catch() { ... } // from try @ 00ef93e4 with catch @ 00ef9354 */
  Size::Size((Size *)&local_d8,fVar33 / fVar29,fVar34 / *(float *)(lVar11 + 0x1a0));
  fVar33 = *(float *)(*(long *)(this + 0x328) + 0x44);
  lVar11 = Director::getInstance();
  fVar29 = *(float *)(lVar11 + 0x1a0);
  fVar34 = *(float *)(*(long *)(this + 0x328) + 0x48);
  lVar11 = Director::getInstance();
                    /* try { // try from 00ef9378 to 00ff937b has its CatchHandler @ 00ef9498 */
                    /* try { // try from 00ef9388 to 00ff939f has its CatchHandler @ 00ef94a4 */
  Size::Size((Size *)&local_e0,fVar33 / fVar29,fVar34 / *(float *)(lVar11 + 0x1a0));
  Mat4::getInversed();
  RectApplyTransform((cocos2d *)&local_d0,aSStack_c0,(Mat4 *)pSVar12);
  Rect::operator=((Rect *)&local_d0,(Rect *)&local_f0);
                    /* try { // try from 00ef93bc to 00ff93c3 has its CatchHandler @ 00ef9464 */
  fVar29 = local_d0._4_4_ + 1.0;
  fVar33 = (float)local_d0 + (float)local_c8;
  fVar34 = (float)(int)(float)local_d0;
  fVar31 = (float)(int)fVar29;
  local_d0 = CONCAT44(fVar31,fVar34);
  local_c8 = CONCAT44((float)(int)(fVar29 + (float)((ulong)local_c8 >> 0x20)) - fVar31,
                      (float)(int)fVar33 - fVar34);
                    /* try { // try from 00ef93dc to 00ff93e3 has its CatchHandler @ 00ef9460 */
                    /* try { // try from 00ef93e4 to 00ff94d3 has its CatchHandler @ 00ef9354 */
  if (fStack_dc <= local_e0) {
    fStack_dc = local_e0;
  }
  if (*(int *)(this + 0x330) == 2) {
    Rect::Rect((Rect *)&local_f0,0.0,0.0,fStack_dc - local_d8,fStack_dc - fStack_d4);
    if (local_e8 < 0.0) {
      local_e8 = 0.0;
    }
    if (local_e4 < 0.0) {
      local_e4 = 0.0;
    }
                    /* catch() { ... } // from try @ 00ef93dc with catch @ 00ef9460 */
                    /* catch() { ... } // from try @ 00ef93bc with catch @ 00ef9464 */
    RectApplyTransform((cocos2d *)&local_f0,aSStack_c0,(Mat4 *)pSVar12);
    Rect::operator=((Rect *)&local_f0,aRStack_100);
                    /* catch() { ... } // from try @ 00ef9378 with catch @ 00ef9498 */
    uVar30 = CONCAT44((int)((float)(int)(local_e8 + (float)local_f0) - (float)(int)(float)local_f0),
                      (int)((float)(int)(local_f0._4_4_ + local_e4) - (float)(int)local_f0._4_4_));
                    /* catch() { ... } // from try @ 00ef9388 with catch @ 00ef94a4 */
  }
  else if (*(int *)(this + 0x330) == 0) {
    uVar32 = NEON_fmov(0xbf800000,4);
    uVar30 = NEON_rev64(CONCAT44(fStack_d4,local_d8),4);
    uVar30 = NEON_smax(CONCAT44((int)((float)(int)(fStack_dc / (float)((ulong)uVar30 >> 0x20)) +
                                     (float)((ulong)uVar32 >> 0x20)),
                                (int)((float)(int)(fStack_dc / (float)uVar30) + (float)uVar32)),0,4)
    ;
  }
  else {
    uVar30 = 0;
  }
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
             *)(this + 0x448);
  if (*(long *)(this + 0x460) != 0) {
    puVar9 = *(void **)(this + 0x458);
    while (puVar9 != (void *)0x0) {
      pvVar24 = (void *)*puVar9;
      operator_delete(puVar9);
      puVar9 = pvVar24;
    }
    lVar11 = *(long *)(this + 0x450);
    *(undefined8 *)(this + 0x458) = 0;
    if (lVar11 != 0) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(long *)this_00 + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar11 != lVar15);
    }
    *(undefined8 *)(this + 0x460) = 0;
  }
  pTVar25 = *(TMXLayer **)(this + 0x430);
  uVar32 = local_d0;
  while (local_d0 = uVar32, pTVar25 != this + 0x438) {
    uVar2 = *(undefined4 *)(pTVar25 + 0x20);
    local_f0 = (piecewise_construct_t *)(pTVar25 + 0x1c);
                    /* try { // try from 00ef9530 to 00ff9583 has its CatchHandler @ 00ef9530
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9530 with catch @ 00ef9530
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef958c with catch @ 00ef9530
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef95e8 with catch @ 00ef9530
                        */
    lVar11 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
             ::
             __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                       ((int *)this_00,local_f0,(tuple *)&DAT_0143a201,(tuple *)&local_f0);
    *(undefined4 *)(lVar11 + 0x14) = uVar2;
    pTVar14 = *(TMXLayer **)(pTVar25 + 8);
    uVar32 = local_d0;
    if (*(TMXLayer **)(pTVar25 + 8) == (TMXLayer *)0x0) {
      pTVar14 = pTVar25 + 0x10;
      bVar10 = *(TMXLayer **)*(TMXLayer **)pTVar14 != pTVar25;
      pTVar25 = *(TMXLayer **)pTVar14;
      if (bVar10) {
        do {
          lVar11 = *(long *)pTVar14;
          pTVar14 = (TMXLayer *)(lVar11 + 0x10);
          pTVar25 = *(TMXLayer **)pTVar14;
                    /* try { // try from 00ef9584 to 00ff958b has its CatchHandler @ 00ef96ac */
                    /* try { // try from 00ef958c to 00ff95b7 has its CatchHandler @ 00ef9530 */
        } while (*(long *)pTVar25 != lVar11);
      }
    }
    else {
      do {
        pTVar25 = pTVar14;
        pTVar14 = *(TMXLayer **)pTVar25;
      } while (*(TMXLayer **)pTVar25 != (TMXLayer *)0x0);
    }
  }
  local_d0._0_4_ = (float)uVar32;
  local_d0._4_4_ = (float)((ulong)uVar32 >> 0x20);
  local_c8._4_4_ = (float)((ulong)local_c8 >> 0x20);
                    /* try { // try from 00ef95b8 to 00ff95c7 has its CatchHandler @ 00ef9690 */
  fVar33 = local_d0._4_4_ - (float)(int)uVar30;
  fVar29 = local_d0._4_4_ + local_c8._4_4_ + (float)(int)uVar30;
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  iVar26 = (int)fVar33;
  if (*(float *)(this + 0x314) <= fVar29) {
    fVar29 = *(float *)(this + 0x314);
  }
                    /* try { // try from 00ef95dc to 00ff95e7 has its CatchHandler @ 00ef9660 */
  fVar34 = (float)(int)((ulong)uVar30 >> 0x20);
  fVar33 = (float)local_d0 + (float)local_c8 + fVar34;
                    /* try { // try from 00ef95e8 to 00ff96af has its CatchHandler @ 00ef9530 */
  if (*(float *)(this + 0x310) <= fVar33) {
    fVar33 = *(float *)(this + 0x310);
  }
  if (iVar26 < (int)fVar29) {
    iVar13 = (int)((float)local_d0 - fVar34);
    do {
      if (iVar13 < (int)fVar33) {
        iVar27 = iVar13;
        do {
          iVar4 = iVar27 + iVar26 * (int)*(float *)(this + 0x310);
          if (*(int *)(*(long *)(this + 800) + (long)iVar4 * 4) != 0) {
            if (this[0x3a0] == (TMXLayer)0x0) {
              iVar18 = *(int *)(this + 0x39c);
            }
            else {
              if (*(int *)(this + 0x330) == 0) {
                fVar34 = *(float *)(this + 0x314) - (float)iVar26;
              }
              else {
                if (*(int *)(this + 0x330) != 2) {
                  iVar18 = 0;
                  goto LAB_00ef9728;
                }
                fVar34 = (float)(int)(*(float *)(this + 0x310) + *(float *)(this + 0x314)) -
                         ((float)iVar26 + (float)iVar27);
              }
              iVar18 = (int)-fVar34;
            }
LAB_00ef9728:
            uVar16 = *(ulong *)(this + 0x450);
            if (uVar16 == 0) {
LAB_00ef97dc:
              plVar22 = (long *)0x0;
            }
            else {
                    /* try { // try from 00ef9734 to 00ff9787 has its CatchHandler @ 00ef9734
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9734 with catch @ 00ef9734
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9790 with catch @ 00ef9734
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9800 with catch @ 00ef9734
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef984c with catch @ 00ef9734
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef98a8 with catch @ 00ef9734
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9924 with catch @ 00ef9734
                        */
              uVar30 = CONCAT17(POPCOUNT((char)(uVar16 >> 0x38)),
                                CONCAT16(POPCOUNT((char)(uVar16 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)(uVar16 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)(uVar16 >> 0x20)),
                                                           CONCAT13(POPCOUNT((char)(uVar16 >> 0x18))
                                                                    ,CONCAT12(POPCOUNT((char)(uVar16
                                                                                             >> 0x10
                                                  )),CONCAT11(POPCOUNT((char)(uVar16 >> 8)),
                                                              POPCOUNT((char)uVar16))))))));
              uVar28 = NEON_uaddlv(uVar30,1);
              uVar17 = CONCAT62((int6)((ulong)uVar30 >> 0x10),uVar28) & 0xffffffff;
              uVar19 = (ulong)iVar18;
              if (uVar17 < 2) {
                uVar20 = uVar16 - 1 & uVar19;
              }
              else {
                uVar20 = uVar19;
                if (uVar16 <= uVar19) {
                  uVar20 = 0;
                  if (uVar16 != 0) {
                    uVar20 = uVar19 / uVar16;
                  }
                  uVar20 = uVar19 - uVar20 * uVar16;
                }
              }
              plVar21 = *(long **)(*(long *)this_00 + uVar20 * 8);
              plVar22 = (long *)0x0;
              if ((plVar21 != (long *)0x0) && (plVar22 = (long *)*plVar21, plVar22 != (long *)0x0))
              {
                    /* try { // try from 00ef9788 to 00ff978f has its CatchHandler @ 00ef99cc */
                do {
                  uVar23 = plVar22[1];
                  if (uVar23 == uVar19) {
                    /* try { // try from 00ef9790 to 00ff97df has its CatchHandler @ 00ef9734 */
                    if ((int)plVar22[2] == iVar18) break;
                  }
                  else {
                    if (uVar17 < 2) {
                      uVar23 = uVar23 & uVar16 - 1;
                    }
                    else if (uVar16 <= uVar23) {
                      uVar7 = 0;
                      if (uVar16 != 0) {
                        uVar7 = uVar23 / uVar16;
                      }
                      uVar23 = uVar23 - uVar7 * uVar16;
                    }
                    if (uVar23 != uVar20) goto LAB_00ef97dc;
                  }
                  plVar22 = (long *)*plVar22;
                } while (plVar22 != (long *)0x0);
              }
            }
                    /* try { // try from 00ef97e0 to 00ff97e7 has its CatchHandler @ 00ef99b0 */
            iVar18 = *(int *)((long)plVar22 + 0x14);
            *(int *)((long)plVar22 + 0x14) = iVar18 + 1;
                    /* try { // try from 00ef97f0 to 00ff97ff has its CatchHandler @ 00ef9990 */
            iVar4 = *(int *)(*(long *)(this + 1000) + (long)iVar4 * 4);
            if (iVar4 == -1) {
                    /* try { // try from 00ef9800 to 00ff9843 has its CatchHandler @ 00ef9734 */
              __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                  "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/2d/CCFastTMXLayer.cpp"
                                  ,"updateTiles",0x10f);
            }
            lVar11 = *(long *)(this + 0x418);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef95dc with catch @ 00ef9660
                        */
            iVar3 = iVar18 * 6;
            uVar5 = (ushort)(iVar4 << 2) | 1;
            uVar6 = (ushort)(iVar4 << 2) | 2;
            *(short *)(lVar11 + (long)iVar3 * 2) = (short)(iVar4 << 2);
            *(ushort *)(lVar11 + (long)(int)(iVar18 * 6 | 1) * 2) = uVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef95b8 with catch @ 00ef9690
                        */
            *(ushort *)(lVar11 + (long)(iVar3 + 2) * 2) = uVar6;
            *(ushort *)(lVar11 + (long)(iVar3 + 3) * 2) = (ushort)(iVar4 << 2) | 3;
            *(ushort *)(lVar11 + (long)(iVar3 + 4) * 2) = uVar6;
            *(ushort *)(lVar11 + (long)(iVar3 + 5) * 2) = uVar5;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef9584 with catch @ 00ef96ac
                        */
          iVar27 = iVar27 + 1;
        } while (iVar27 != (int)fVar33);
      }
      iVar26 = iVar26 + 1;
      uVar32 = local_d0;
    } while (iVar26 != (int)fVar29);
  }
  local_d0 = uVar32;
  pTVar25 = *(TMXLayer **)(this + 0x430);
  while (pTVar25 != this + 0x438) {
    iVar26 = *(int *)(pTVar25 + 0x20);
                    /* try { // try from 00ef984c to 00ff9877 has its CatchHandler @ 00ef9734 */
    ppVar1 = (piecewise_construct_t *)(pTVar25 + 0x1c);
    local_f0 = ppVar1;
    lVar11 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
             ::
             __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                       ((int *)this_00,ppVar1,(tuple *)&DAT_0143a201,(tuple *)&local_f0);
    *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) - iVar26;
                    /* try { // try from 00ef9878 to 00ff9887 has its CatchHandler @ 00ef997c */
    local_f0 = ppVar1;
    lVar11 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
             ::
             __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                       ((int *)this_00,ppVar1,(tuple *)&DAT_0143a201,(tuple *)&local_f0);
    if (*(int *)(lVar11 + 0x14) == 0) {
                    /* try { // try from 00ef989c to 00ff98a7 has its CatchHandler @ 00ef9978 */
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,int>>>
      ::__erase_unique<int>(this_00,(int *)ppVar1);
    }
                    /* try { // try from 00ef98a8 to 00ff991f has its CatchHandler @ 00ef9734 */
    pTVar14 = *(TMXLayer **)(pTVar25 + 8);
    if (*(TMXLayer **)(pTVar25 + 8) == (TMXLayer *)0x0) {
      pTVar14 = pTVar25 + 0x10;
      bVar10 = *(TMXLayer **)*(TMXLayer **)pTVar14 != pTVar25;
      pTVar25 = *(TMXLayer **)pTVar14;
      if (bVar10) {
        do {
          lVar11 = *(long *)pTVar14;
          pTVar14 = (TMXLayer *)(lVar11 + 0x10);
          pTVar25 = *(TMXLayer **)pTVar14;
        } while (*(long *)pTVar25 != lVar11);
      }
    }
    else {
      do {
        pTVar25 = pTVar14;
        pTVar14 = *(TMXLayer **)pTVar25;
      } while (*(TMXLayer **)pTVar25 != (TMXLayer *)0x0);
    }
  }
  Mat4::~Mat4((Mat4 *)aSStack_c0);
  if (*(long *)(lVar8 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00ef9920 to 00ff9923 has its CatchHandler @ 00ef9964 */
                    /* try { // try from 00ef9924 to 00ff99cf has its CatchHandler @ 00ef9734 */
  return;
}

