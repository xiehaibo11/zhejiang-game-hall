
/* cocos2d::experimental::TMXLayer::updateTotalQuads() */

void __thiscall cocos2d::experimental::TMXLayer::updateTotalQuads(TMXLayer *this)

{
  TMXLayer *pTVar1;
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
  *this_00;
  TMXLayer *pTVar2;
  float fVar3;
  float fVar4;
  Size *pSVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  bool bVar11;
  long lVar12;
  __tree_node_base *p_Var13;
  int iVar14;
  int iVar15;
  TMXLayer *pTVar16;
  ulong uVar17;
  ulong uVar18;
  TMXLayer *pTVar19;
  long lVar20;
  int iVar21;
  __tree_node_base *p_Var22;
  TMXLayer *pTVar23;
  int iVar24;
  TMXLayer *pTVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  Size local_90 [8];
  long local_88;
  
                    /* try { // try from 00ef8d38 to 00ff8d47 has its CatchHandler @ 00ef8dec */
                    /* try { // try from 00ef8d48 to 00ff8d5f has its CatchHandler @ 00ef8dcc */
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  if (this[0x3e4] != (TMXLayer)0x0) {
                    /* try { // try from 00ef8d60 to 00ff8e1f has its CatchHandler @ 00ef8998 */
    fVar29 = *(float *)(*(long *)(this + 0x328) + 0x44);
    lVar12 = Director::getInstance();
    fVar26 = *(float *)(lVar12 + 0x1a0);
    fVar30 = *(float *)(*(long *)(this + 0x328) + 0x48);
    lVar12 = Director::getInstance();
    Size::Size(local_90,fVar29 / fVar26,fVar30 / *(float *)(lVar12 + 0x1a0));
    Size::Size((Size *)&local_98,(Size *)(*(long *)(this + 0x328) + 0x78));
    iVar14 = (int)(*(float *)(this + 0x310) * *(float *)(this + 0x314));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef8d48 with catch @ 00ef8dcc
                        */
    lVar12 = *(long *)(this + 0x408) - *(long *)(this + 0x400) >> 5;
    uVar17 = (ulong)iVar14;
    uVar18 = lVar12 * -0x5555555555555555;
    *(undefined8 *)(this + 0x3f0) = *(undefined8 *)(this + 1000);
    if (uVar18 < uVar17) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef8d38 with catch @ 00ef8dec
                        */
      std::__ndk1::
      vector<cocos2d::V3F_C4B_T2F_Quad,std::__ndk1::allocator<cocos2d::V3F_C4B_T2F_Quad>>::__append
                ((vector<cocos2d::V3F_C4B_T2F_Quad,std::__ndk1::allocator<cocos2d::V3F_C4B_T2F_Quad>>
                  *)(this + 0x400),uVar17 + lVar12 * 0x5555555555555555);
      iVar14 = (int)(*(float *)(this + 0x310) * *(float *)(this + 0x314));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef8c34 with catch @ 00ef8e00
                        */
    }
    else if (uVar18 - uVar17 != 0) {
      *(ulong *)(this + 0x408) = *(long *)(this + 0x400) + uVar17 * 0x60;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef8bf4 with catch @ 00ef8e1c
                        */
    uVar17 = (ulong)(iVar14 * 6);
    uVar18 = *(long *)(this + 0x420) - *(long *)(this + 0x418) >> 1;
    if (uVar18 < uVar17) {
      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x418),
                 uVar17 - uVar18);
                    /* try { // try from 00ef8e4c to 00ff900f has its CatchHandler @ 00ef8e4c
                       catch() { ... } // from try @ 00ef8e4c with catch @ 00ef8e4c
                       catch() { ... } // from try @ 00ef901c with catch @ 00ef8e4c */
      iVar14 = (int)(*(float *)(this + 0x310) * *(float *)(this + 0x314));
    }
    else if (uVar18 != uVar17) {
      *(ulong *)(this + 0x420) = *(long *)(this + 0x418) + uVar17 * 2;
    }
    local_b8 = -NAN;
    uVar17 = (ulong)iVar14;
    uVar18 = *(long *)(this + 0x3f0) - *(long *)(this + 1000) >> 2;
    if (uVar18 < uVar17) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                ((vector<int,std::__ndk1::allocator<int>> *)(this + 1000),uVar17 - uVar18,
                 (int *)&local_b8);
    }
    else if (uVar18 != uVar17) {
      *(ulong *)(this + 0x3f0) = *(long *)(this + 1000) + uVar17 * 4;
    }
    this_00 = (__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
               *)(this + 0x430);
    pTVar2 = this + 0x438;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
    ::destroy(this_00,*(__tree_node **)(this + 0x438));
    *(TMXLayer **)(this + 0x430) = pTVar2;
    *(undefined8 *)(this + 0x440) = 0;
    *(undefined8 *)(this + 0x438) = 0;
    if (0.0 < *(float *)(this + 0x314)) {
      fVar26 = *(float *)(this + 0x310);
      iVar24 = 0;
      iVar14 = 0;
      fVar29 = 0.0;
      do {
        if (0.0 < fVar26) {
          iVar21 = 0;
          fVar30 = 0.0;
          do {
            iVar15 = iVar21 + iVar14 * (int)fVar26;
            uVar6 = *(uint *)(*(long *)(this + 800) + (long)iVar15 * 4);
            if (uVar6 != 0) {
              *(int *)(*(long *)(this + 1000) + (long)iVar15 * 4) = iVar24;
              lVar12 = *(long *)(this + 0x400);
              Vec3::Vec3((Vec3 *)&local_a8,fVar30,fVar29,0.0);
              Mat4::transformVector
                        ((Mat4 *)(this + 0x3a4),local_a8,local_a4,local_a0,1.0,(Vec3 *)&local_a8);
              if (this[0x3a0] == (TMXLayer)0x0) {
                iVar15 = *(int *)(this + 0x39c);
              }
              else {
                if (*(int *)(this + 0x330) == 0) {
                  fVar26 = *(float *)(this + 0x314) - fVar29;
                }
                else {
                  if (*(int *)(this + 0x330) != 2) {
                    iVar15 = 0;
                    goto LAB_00ef912c;
                  }
                  fVar26 = (float)(int)(*(float *)(this + 0x310) + *(float *)(this + 0x314)) -
                           (fVar29 + fVar30);
                }
                iVar15 = (int)-fVar26;
              }
LAB_00ef912c:
              pTVar25 = *(TMXLayer **)pTVar2;
              fVar26 = (float)iVar15;
              iVar15 = (int)fVar26;
              pTVar16 = pTVar2;
              pTVar19 = pTVar25;
              pTVar23 = pTVar2;
              if (pTVar25 == (TMXLayer *)0x0) {
LAB_00ef91b0:
                p_Var22 = *(__tree_node_base **)pTVar23;
joined_r0x00ef9204:
                if (p_Var22 == (__tree_node_base *)0x0) {
                  p_Var22 = operator_new(0x28);
                  *(int *)(p_Var22 + 0x1c) = iVar15;
                  *(undefined4 *)(p_Var22 + 0x20) = 0;
                    /* try { // try from 00ef91c8 to 00ff91cf has its CatchHandler @ 00ef92c4 */
                  *(undefined8 *)p_Var22 = 0;
                  *(undefined8 *)(p_Var22 + 8) = 0;
                  *(TMXLayer **)(p_Var22 + 0x10) = pTVar16;
                    /* try { // try from 00ef91d0 to 00ff91f3 has its CatchHandler @ 00ef9160 */
                  *(__tree_node_base **)pTVar23 = p_Var22;
                  p_Var13 = p_Var22;
                  if (**(long **)this_00 != 0) {
                    *(long *)this_00 = **(long **)this_00;
                    p_Var13 = *(__tree_node_base **)pTVar23;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(this + 0x438),p_Var13);
                  *(long *)(this + 0x440) = *(long *)(this + 0x440) + 1;
                }
                *(undefined4 *)(p_Var22 + 0x20) = 1;
              }
              else {
                do {
                  if (iVar15 <= *(int *)(pTVar19 + 0x1c)) {
                    pTVar16 = pTVar19;
                  }
                  pTVar1 = pTVar19 + (ulong)(*(int *)(pTVar19 + 0x1c) < iVar15) * 8;
                  pTVar19 = *(TMXLayer **)pTVar1;
                } while (*(TMXLayer **)pTVar1 != (TMXLayer *)0x0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef91d0 with catch @ 00ef9160
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9200 with catch @ 00ef9160
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9230 with catch @ 00ef9160
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9258 with catch @ 00ef9160
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9284 with catch @ 00ef9160
                        */
                if ((pTVar16 == pTVar2) || (iVar15 < *(int *)(pTVar16 + 0x1c))) {
                  do {
                    while (pTVar16 = pTVar25, iVar15 < *(int *)(pTVar16 + 0x1c)) {
                      pTVar23 = pTVar16;
                      pTVar25 = *(TMXLayer **)pTVar16;
                      if (*(TMXLayer **)pTVar16 == (TMXLayer *)0x0) {
                    /* try { // try from 00ef9200 to 00ff9227 has its CatchHandler @ 00ef9160 */
                        p_Var22 = *(__tree_node_base **)pTVar16;
                        goto joined_r0x00ef9204;
                      }
                    }
                    if (iVar15 <= *(int *)(pTVar16 + 0x1c)) break;
                    pTVar23 = pTVar16 + 8;
                    pTVar25 = *(TMXLayer **)pTVar23;
                  } while (*(TMXLayer **)pTVar23 != (TMXLayer *)0x0);
                  goto LAB_00ef91b0;
                }
                    /* try { // try from 00ef91f4 to 00ff91ff has its CatchHandler @ 00ef92c4 */
                *(int *)(pTVar16 + 0x20) = *(int *)(pTVar16 + 0x20) + 1;
              }
              fVar27 = local_a4 +
                       *(float *)((ulong)local_90 | (ulong)((uVar6 & 0x20000000) == 0) << 2);
              fVar30 = local_a4;
              if ((uVar6 & 0x40000000) != 0) {
                fVar30 = fVar27;
                fVar27 = local_a4;
              }
              bVar11 = (uVar6 & 0x20000000) == 0;
              pSVar5 = (Size *)((ulong)local_90 | 4);
              if (bVar11) {
                pSVar5 = local_90;
              }
              fVar28 = fVar27;
              if (bVar11) {
                fVar28 = fVar30;
              }
              lVar20 = lVar12 + (long)iVar24 * 0x60;
              fVar3 = *(float *)pSVar5 + local_a8;
              fVar8 = local_a8;
              if (-1 < (int)uVar6) {
                fVar3 = local_a8;
                fVar8 = *(float *)pSVar5 + local_a8;
              }
              bVar11 = (uVar6 & 0x20000000) == 0;
              *(float *)(lVar20 + 0x18) = fVar3;
              *(float *)(lVar20 + 0x1c) = fVar27;
              fVar4 = fVar30;
              fVar9 = fVar3;
              if (bVar11) {
                fVar4 = fVar27;
                fVar9 = fVar8;
              }
              *(float *)(lVar20 + 0x48) = fVar9;
              *(float *)(lVar20 + 0x4c) = fVar4;
              fVar27 = fVar8;
              if (bVar11) {
                fVar27 = fVar3;
              }
              *(float *)(lVar20 + 0x20) = fVar26;
              *(float *)(lVar20 + 0x50) = fVar26;
              *(float *)(lVar12 + (long)iVar24 * 0x60) = fVar27;
              *(float *)(lVar20 + 4) = fVar28;
              *(float *)(lVar20 + 8) = fVar26;
              *(float *)(lVar20 + 0x30) = fVar8;
              *(float *)(lVar20 + 0x34) = fVar30;
              *(float *)(lVar20 + 0x38) = fVar26;
              TMXTilesetInfo::getRectForGID((uint)*(undefined8 *)(this + 0x328));
                    /* try { // try from 00ef9010 to 00ff901b has its CatchHandler @ 00ef9144 */
                    /* try { // try from 00ef901c to 00ff915f has its CatchHandler @ 00ef8e4c */
              iVar24 = iVar24 + 1;
              fVar26 = local_b8 / (float)local_98;
              fVar28 = (float)((ulong)local_98 >> 0x20);
              fVar30 = fStack_b4 / fVar28;
              fVar27 = fVar26 + (float)uStack_b0 / (float)local_98;
              fVar28 = fVar30 + (float)((ulong)uStack_b0 >> 0x20) / fVar28;
              *(ulong *)(lVar20 + 0x28) = CONCAT44(fVar30,fVar26);
              *(ulong *)(lVar20 + 0x40) = CONCAT44(fVar28,fVar27);
              *(ulong *)(lVar20 + 0x58) = CONCAT44(fVar30,fVar27);
              *(ulong *)(lVar20 + 0x10) = CONCAT44(fVar28,fVar26);
              uVar10 = Color4B::WHITE;
              *(undefined4 *)(lVar20 + 0x24) = Color4B::WHITE;
              *(undefined4 *)(lVar20 + 0x54) = uVar10;
              uVar10 = Color4B::WHITE;
              *(undefined4 *)(lVar20 + 0xc) = Color4B::WHITE;
              *(undefined4 *)(lVar20 + 0x3c) = uVar10;
              fVar26 = *(float *)(this + 0x310);
            }
            iVar21 = iVar21 + 1;
            fVar30 = (float)iVar21;
          } while (fVar30 < fVar26);
        }
        iVar14 = iVar14 + 1;
        fVar29 = (float)iVar14;
      } while (fVar29 < *(float *)(this + 0x314));
      if (*(TMXLayer **)this_00 != pTVar2) {
        iVar14 = 0;
        pTVar16 = *(TMXLayer **)this_00;
        do {
                    /* try { // try from 00ef9230 to 00ff924f has its CatchHandler @ 00ef9160 */
          iVar24 = *(int *)(pTVar16 + 0x20);
          *(int *)(pTVar16 + 0x20) = iVar14;
          iVar14 = iVar24 + iVar14;
          pTVar23 = *(TMXLayer **)(pTVar16 + 8);
          if (*(TMXLayer **)(pTVar16 + 8) == (TMXLayer *)0x0) {
                    /* try { // try from 00ef9258 to 00ff9277 has its CatchHandler @ 00ef9160 */
            pTVar23 = pTVar16 + 0x10;
            pTVar19 = *(TMXLayer **)pTVar23;
            if (*(TMXLayer **)pTVar19 != pTVar16) {
              do {
                lVar12 = *(long *)pTVar23;
                pTVar23 = (TMXLayer *)(lVar12 + 0x10);
                pTVar19 = *(TMXLayer **)pTVar23;
                    /* try { // try from 00ef9278 to 00ff9283 has its CatchHandler @ 00ef92c0 */
              } while (*(long *)pTVar19 != lVar12);
            }
          }
          else {
            do {
              pTVar19 = pTVar23;
              pTVar23 = *(TMXLayer **)pTVar19;
            } while (*(TMXLayer **)pTVar19 != (TMXLayer *)0x0);
          }
                    /* try { // try from 00ef9228 to 00ff922f has its CatchHandler @ 00ef92c0 */
          pTVar16 = pTVar19;
        } while (pTVar19 != pTVar2);
      }
    }
                    /* try { // try from 00ef9284 to 00ff92c7 has its CatchHandler @ 00ef9160 */
    updateVertexBuffer(this);
    this[0x3e4] = (TMXLayer)0x0;
  }
  if (*(long *)(lVar7 + 0x28) == local_88) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef9228 with catch @ 00ef92c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9250 with catch @ 00ef92c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef9278 with catch @ 00ef92c0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef91c8 with catch @ 00ef92c4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef91f4 with catch @ 00ef92c4
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

