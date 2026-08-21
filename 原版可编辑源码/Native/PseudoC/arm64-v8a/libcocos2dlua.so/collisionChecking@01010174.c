
/* cocos2d::Physics3DWorld::collisionChecking() */

void cocos2d::Physics3DWorld::collisionChecking(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *__src;
  int iVar4;
  int iVar5;
  long in_x0;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  btVector3 *pbVar18;
  long lVar19;
  size_t __n;
  long lVar20;
  undefined4 *__dest;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 in_s1;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 in_s2;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  long *local_d8;
  long *plStack_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  iVar4 = (**(code **)(**(long **)(in_x0 + 0x70) + 0x48))();
  if (0 < iVar4) {
    iVar12 = 0;
    do {
      lVar6 = (**(code **)(**(long **)(in_x0 + 0x70) + 0x50))(*(long **)(in_x0 + 0x70),iVar12);
      uVar11 = (ulong)*(uint *)(lVar6 + 0x318);
      if (0 < (int)*(uint *)(lVar6 + 0x318)) {
        puVar16 = *(undefined8 **)(in_x0 + 0x28);
        puVar2 = *(undefined8 **)(in_x0 + 0x30);
        if (puVar16 == puVar2) {
          plVar15 = (long *)0x0;
        }
        else {
          lVar20 = *(long *)(lVar6 + 0x308);
          lVar19 = *(long *)(lVar6 + 0x310);
          do {
                    /* try { // try from 01010250 to 0111038b has its CatchHandler @ 01010250
                       catch() { ... } // from try @ 01010250 with catch @ 01010250
                       catch() { ... } // from try @ 01010394 with catch @ 01010250 */
            plVar15 = (long *)*puVar16;
            iVar5 = (**(code **)(*plVar15 + 0x10))(plVar15);
            if (iVar5 == 1) {
              lVar8 = plVar15[0xf];
joined_r0x01010248:
              if (lVar8 == lVar20) goto LAB_010102a0;
            }
            else {
              iVar5 = (**(code **)(*plVar15 + 0x10))(plVar15);
              if (iVar5 == 2) {
                lVar8 = plVar15[0x1c];
                goto joined_r0x01010248;
              }
            }
            puVar16 = puVar16 + 1;
          } while (puVar2 != puVar16);
          plVar15 = (long *)0x0;
LAB_010102a0:
          puVar2 = *(undefined8 **)(in_x0 + 0x30);
          for (puVar16 = *(undefined8 **)(in_x0 + 0x28); puVar16 != puVar2; puVar16 = puVar16 + 1) {
            plVar17 = (long *)*puVar16;
            iVar5 = (**(code **)(*plVar17 + 0x10))(plVar17);
            if (iVar5 == 1) {
              lVar20 = plVar17[0xf];
joined_r0x010102bc:
              if (lVar20 == lVar19) goto LAB_0101031c;
            }
            else {
              iVar5 = (**(code **)(*plVar17 + 0x10))(plVar17);
              if (iVar5 == 2) {
                lVar20 = plVar17[0x1c];
                goto joined_r0x010102bc;
              }
            }
          }
        }
        plVar17 = (long *)0x0;
LAB_0101031c:
        if ((plVar15[0xc] != 0) || (plVar17[0xc] != 0)) {
          pbVar18 = (btVector3 *)(lVar6 + 0x48);
          local_c8 = (undefined4 *)0x0;
          local_c0 = (undefined4 *)0x0;
          local_b8 = (undefined4 *)0x0;
          uVar26 = in_s1;
          uVar31 = in_s2;
          local_d8 = plVar15;
          plStack_d0 = plVar17;
          do {
            uVar21 = convertbtVector3ToVec3(pbVar18 + -0x40);
            uVar27 = uVar26;
            uVar32 = uVar31;
            uVar22 = convertbtVector3ToVec3(pbVar18 + -0x10);
            uVar28 = uVar27;
            uVar33 = uVar32;
            uVar23 = convertbtVector3ToVec3(pbVar18 + -0x30);
            uVar29 = uVar28;
            uVar34 = uVar33;
            uVar24 = convertbtVector3ToVec3(pbVar18 + -0x20);
            in_s1 = uVar29;
            in_s2 = uVar34;
            uVar25 = convertbtVector3ToVec3(pbVar18);
            __src = local_c8;
            if (local_c0 == local_b8) {
              __n = (long)local_c0 - (long)local_c8;
              uVar1 = ((long)__n >> 2) * -0x1111111111111111 + 1;
              if (0x444444444444444 < uVar1) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              lVar6 = (long)local_b8 - (long)local_c8 >> 2;
              uVar13 = 0x444444444444444;
              uVar30 = in_s1;
              uVar35 = in_s2;
              if ((ulong)(lVar6 * -0x1111111111111111) < 0x222222222222222) {
                    /* catch() { ... } // from try @ 0101038c with catch @ 0101045c */
                uVar10 = lVar6 * -0x2222222222222222;
                uVar13 = uVar1;
                if (uVar1 <= uVar10) {
                  uVar13 = uVar10;
                }
                if (uVar13 != 0) goto LAB_0101046c;
                pvVar7 = (void *)0x0;
              }
              else {
LAB_0101046c:
                pvVar7 = operator_new(uVar13 * 0x3c);
              }
              puVar9 = (undefined4 *)((long)pvVar7 + ((long)__n >> 2) * 4);
              puVar14 = (undefined4 *)((long)pvVar7 + uVar13 * 0x3c);
              *puVar9 = uVar21;
              __dest = (undefined4 *)((long)puVar9 - __n);
              puVar9[1] = uVar26;
              puVar9[2] = uVar31;
              puVar9[3] = uVar22;
              puVar9[4] = uVar27;
              puVar9[5] = uVar32;
              puVar9[6] = uVar23;
              puVar9[9] = uVar24;
              puVar9[10] = uVar29;
              puVar9[0xb] = uVar34;
              puVar9[0xc] = uVar25;
              puVar9[0xd] = in_s1;
              puVar9[0xe] = in_s2;
              puVar9[7] = uVar28;
              puVar9[8] = uVar33;
              in_s1 = uVar30;
              in_s2 = uVar35;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
                in_s1 = uVar30;
                in_s2 = uVar35;
              }
              local_c8 = __dest;
              local_c0 = puVar9 + 0xf;
              local_b8 = puVar14;
              if (__src != (undefined4 *)0x0) {
                operator_delete(__src);
              }
            }
            else {
              *local_c0 = uVar21;
              local_c0[1] = uVar26;
              local_c0[2] = uVar31;
              local_c0[3] = uVar22;
              local_c0[4] = uVar27;
              local_c0[5] = uVar32;
              local_c0[6] = uVar23;
              local_c0[9] = uVar24;
              local_c0[10] = uVar29;
              local_c0[0xb] = uVar34;
              local_c0[0xc] = uVar25;
              local_c0[0xd] = in_s1;
              local_c0[0xe] = in_s2;
              local_c0[7] = uVar28;
              local_c0[8] = uVar33;
                    /* try { // try from 0101038c to 01110393 has its CatchHandler @ 0101045c */
              local_c0 = local_c0 + 0xf;
            }
                    /* try { // try from 01010394 to 0111046f has its CatchHandler @ 01010250 */
            uVar11 = uVar11 - 1;
            pbVar18 = pbVar18 + 0xc0;
            uVar26 = in_s1;
            uVar31 = in_s2;
          } while (uVar11 != 0);
          plVar15 = (long *)plVar15[0xc];
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x30))(plVar15,&local_d8);
          }
          plVar15 = (long *)plVar17[0xc];
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 0x30))(plVar15,&local_d8);
          }
          if (local_c8 != (undefined4 *)0x0) {
            local_c0 = local_c8;
            operator_delete(local_c8);
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

