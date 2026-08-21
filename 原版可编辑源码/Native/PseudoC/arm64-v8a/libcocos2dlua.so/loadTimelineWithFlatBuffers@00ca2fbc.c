
/* cocostudio::timeline::ActionTimelineCache::loadTimelineWithFlatBuffers(flatbuffers::TimeLine
   const*) */

long * __thiscall
cocostudio::timeline::ActionTimelineCache::loadTimelineWithFlatBuffers
          (ActionTimelineCache *this,TimeLine *param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  InnerActionFrame *pIVar9;
  IntFrame *pIVar10;
  ScaleFrame *pSVar11;
  BoolFrame *pBVar12;
  TextureFrame *pTVar13;
  EventFrame *pEVar14;
  ColorFrame *pCVar15;
  PointFrame *pPVar16;
  ulong uVar17;
  TimeLine *pTVar18;
  ulong uVar19;
  TimeLine *pTVar20;
  undefined1 uVar21;
  ulong uVar22;
  TimeLine *pTVar23;
  long *plVar24;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) {
    pTVar18 = (TimeLine *)0x0;
  }
  else {
    uVar17 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4);
    pTVar18 = (TimeLine *)0x0;
    if (uVar17 != 0) {
      pTVar18 = param_1 + uVar17 + *(uint *)(param_1 + uVar17);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,(char *)(pTVar18 + 4));
  uVar17 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar17 = local_78;
  }
  if (uVar17 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)Timeline::create();
    if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 7) ||
       (uVar17 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 6), uVar17 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + uVar17);
    }
    (**(code **)(*plVar6 + 0x40))(plVar6,uVar8);
    if (*(ushort *)(param_1 + -(long)*(int *)param_1) < 9) {
      pTVar18 = (TimeLine *)0x0;
    }
    else {
      uVar17 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 8);
      pTVar18 = (TimeLine *)0x0;
      if (uVar17 != 0) {
        pTVar18 = param_1 + uVar17 + *(uint *)(param_1 + uVar17);
      }
    }
    uVar17 = (ulong)*(uint *)pTVar18;
    if (0 < (int)*(uint *)pTVar18) {
      pTVar18 = pTVar18 + 0x18;
      plVar24 = (long *)((ulong)local_80 | 1);
      do {
        uVar19 = (ulong)((byte)local_80[0] >> 1);
        if (((byte)local_80[0] & 1) != 0) {
          uVar19 = local_78;
        }
        if (10 < uVar19 - 5) goto switchD_00ca314c_caseD_7;
        uVar22 = (ulong)*(uint *)(pTVar18 + -0x14);
        switch(uVar19) {
        case 5:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"Scale",5);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 7) || ((ulong)*(ushort *)
                                  (pTVar18 +
                                  (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xe) == 0)
               ) {
              pSVar11 = (ScaleFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 +
                                (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xe);
              pSVar11 = (ScaleFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadScaleFrameWithFlatBuffers(this,pSVar11);
            goto LAB_00ca30f4;
          }
          iVar5 = memcmp(plVar7,"Alpha",5);
          if (iVar5 != 0) break;
          if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14) <
               0xf) || ((ulong)*(ushort *)
                                (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -6
                                ) == 0)) {
            pTVar23 = (TimeLine *)0x0;
          }
          else {
            lVar1 = uVar22 + *(ushort *)
                              (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -6);
            pTVar23 = pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14;
          }
          plVar7 = (long *)AlphaFrame::create();
          pTVar20 = pTVar23 + -(long)*(int *)pTVar23;
          uVar2 = *(ushort *)pTVar20;
          if (uVar2 < 9) {
            uVar8 = 0;
            *(undefined1 *)(plVar7 + 0xb) = 0;
            if (4 < uVar2) {
              uVar2 = *(ushort *)(pTVar20 + 4);
              goto joined_r0x00ca3778;
            }
          }
          else {
            uVar21 = 0;
            if ((ulong)*(ushort *)(pTVar20 + 8) != 0) {
              uVar21 = (undefined1)*(undefined4 *)(pTVar23 + *(ushort *)(pTVar20 + 8));
            }
            *(undefined1 *)(plVar7 + 0xb) = uVar21;
            uVar2 = *(ushort *)(pTVar20 + 4);
joined_r0x00ca3778:
            if ((ulong)uVar2 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(pTVar23 + uVar2);
            }
          }
          (**(code **)(*plVar7 + 0x10))(plVar7,uVar8);
          if ((*(ushort *)(pTVar23 + -(long)*(int *)pTVar23) < 7) ||
             (uVar19 = (ulong)*(ushort *)(pTVar23 + -(long)*(int *)pTVar23 + 6), uVar19 == 0)) {
            bVar4 = true;
          }
          else {
            bVar4 = pTVar23[uVar19] != (TimeLine)0x0;
          }
          (**(code **)(*plVar7 + 0x40))(plVar7,bVar4);
          goto LAB_00ca30fc;
        case 6:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"CColor",6);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 9) || ((ulong)*(ushort *)
                                  (pTVar18 +
                                  (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xc) == 0)
               ) {
              pCVar15 = (ColorFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 +
                                (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xc);
              pCVar15 = (ColorFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadColorFrameWithFlatBuffers(this,pCVar15);
          }
          else {
            iVar5 = memcmp(plVar7,"ZOrder",6);
            if (iVar5 != 0) break;
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 0xf) ||
               ((ulong)*(ushort *)
                        (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -6) == 0))
            {
              pIVar10 = (IntFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -6
                                );
              pIVar10 = (IntFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadZOrderFrameWithFlatBuffers(this,pIVar10);
          }
          goto LAB_00ca30f4;
        case 8:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          if (*plVar7 == 0x6e6f697469736f50) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 5) || ((ulong)*(ushort *)
                                  (pTVar18 +
                                  (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x10) == 0
                         )) {
              pPVar16 = (PointFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 +
                                (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x10);
              pPVar16 = (PointFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadPositionFrameWithFlatBuffers(this,pPVar16);
          }
          else {
            if (*plVar7 != 0x61746144656c6946) break;
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 0xb) ||
               ((ulong)*(ushort *)
                        (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -10) == 0)
               ) {
              pTVar13 = (TextureFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 +
                                (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -10);
              pTVar13 = (TextureFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadTextureFrameWithFlatBuffers(this,pTVar13);
          }
          goto LAB_00ca30f4;
        case 9:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"BlendFunc",9);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 0x15) ||
               ((ulong)*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))))
                == 0)) {
              pTVar23 = (TimeLine *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))));
              pTVar23 = pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14;
            }
            plVar7 = (long *)BlendFuncFrame::create();
            if (*(ushort *)(pTVar23 + -(long)*(int *)pTVar23) < 9) {
LAB_00ca366c:
              uVar19 = 0x30300000000;
              uVar22 = 1;
            }
            else {
              uVar22 = (ulong)*(ushort *)(pTVar23 + -(long)*(int *)pTVar23 + 8);
              uVar19 = 0x30300000000;
              if (uVar22 == 0) goto LAB_00ca366c;
              pTVar20 = pTVar23 + uVar22;
              uVar22 = 1;
              if (pTVar20 != (TimeLine *)0x0) {
                uVar22 = (ulong)*(uint *)pTVar20;
                uVar19 = (ulong)*(uint *)(pTVar20 + 4) << 0x20;
              }
            }
            plVar7[0xb] = uVar19 | uVar22;
            if ((*(ushort *)(pTVar23 + -(long)*(int *)pTVar23) < 5) ||
               (uVar19 = (ulong)*(ushort *)(pTVar23 + -(long)*(int *)pTVar23 + 4), uVar19 == 0)) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(pTVar23 + uVar19);
            }
            (**(code **)(*plVar7 + 0x10))(plVar7,uVar8);
            if ((*(ushort *)(pTVar23 + -(long)*(int *)pTVar23) < 7) ||
               (uVar19 = (ulong)*(ushort *)(pTVar23 + -(long)*(int *)pTVar23 + 6), uVar19 == 0)) {
              bVar4 = true;
            }
            else {
              bVar4 = pTVar23[uVar19] != (TimeLine)0x0;
            }
            (**(code **)(*plVar7 + 0x40))(plVar7,bVar4);
            goto LAB_00ca30fc;
          }
          break;
        case 10:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"FrameEvent",10);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 0xd) ||
               ((ulong)*(ushort *)
                        (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -8) == 0))
            {
              pEVar14 = (EventFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -8
                                );
              pEVar14 = (EventFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadEventFrameWithFlatBuffers(this,pEVar14);
            goto LAB_00ca30f4;
          }
          break;
        case 0xb:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"AnchorPoint",0xb);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 7) || ((ulong)*(ushort *)
                                  (pTVar18 +
                                  (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xe) == 0)
               ) {
              pSVar11 = (ScaleFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 +
                                (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xe);
              pSVar11 = (ScaleFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadAnchorPointFrameWithFlatBuffers(this,pSVar11);
          }
          else {
            iVar5 = memcmp(plVar7,"ActionValue",0xb);
            if (iVar5 != 0) break;
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 0x13) ||
               ((ulong)*(ushort *)
                        (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -2) == 0))
            {
              pIVar9 = (InnerActionFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -2
                                );
              pIVar9 = (InnerActionFrame *)
                       (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadInnerActionFrameWithFlatBuffers(this,pIVar9);
          }
LAB_00ca30f4:
          if (plVar7 != (long *)0x0) {
LAB_00ca30fc:
            (**(code **)(*plVar6 + 0x28))(plVar6,plVar7);
          }
          break;
        case 0xc:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"RotationSkew",0xc);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 7) || ((ulong)*(ushort *)
                                  (pTVar18 +
                                  (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xe) == 0)
               ) {
              pSVar11 = (ScaleFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 +
                                (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0xe);
              pSVar11 = (ScaleFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadRotationSkewFrameWithFlatBuffers(this,pSVar11);
            goto LAB_00ca30f4;
          }
          break;
        case 0xf:
          plVar7 = plVar24;
          if (((byte)local_80[0] & 1) != 0) {
            plVar7 = local_70;
          }
          iVar5 = memcmp(plVar7,"VisibleForFrame",0xf);
          if (iVar5 == 0) {
            if ((*(ushort *)(pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -0x14)
                 < 0x11) ||
               ((ulong)*(ushort *)
                        (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -4) == 0))
            {
              pBVar12 = (BoolFrame *)0x0;
            }
            else {
              lVar1 = uVar22 + *(ushort *)
                                (pTVar18 + (uVar22 - (long)*(int *)(pTVar18 + (uVar22 - 0x14))) + -4
                                );
              pBVar12 = (BoolFrame *)
                        (pTVar18 + lVar1 + (ulong)*(uint *)(pTVar18 + lVar1 + -0x14) + -0x14);
            }
            plVar7 = (long *)loadVisibleFrameWithFlatBuffers(this,pBVar12);
            goto LAB_00ca30f4;
          }
        }
switchD_00ca314c_caseD_7:
        uVar17 = uVar17 - 1;
        pTVar18 = pTVar18 + 4;
      } while (uVar17 != 0);
    }
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

