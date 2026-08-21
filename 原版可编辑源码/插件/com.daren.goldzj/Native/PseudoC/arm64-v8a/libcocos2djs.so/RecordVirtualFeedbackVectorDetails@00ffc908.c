
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualFeedbackVectorDetails(v8::internal::FeedbackVector)
    */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualFeedbackVectorDetails
          (ObjectStatsCollectorImpl *this,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  uVar7 = *(ulong *)(this + 0x20);
  if (uVar7 != 0) {
    uVar20 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar19 = NEON_uaddlv(uVar20,1);
    uVar13 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
    uVar9 = param_2 & 0xffffffff;
    if (uVar13 < 2) {
      uVar11 = (int)uVar7 - 1 & uVar9;
    }
    else {
      uVar11 = uVar9;
      if (uVar7 <= uVar9) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar9 / uVar7;
        }
        uVar11 = uVar9 - uVar11 * uVar7;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 0x18) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      do {
        uVar16 = plVar12[1];
        if (uVar16 == uVar9) {
          if ((int)plVar12[2] == (int)param_2) {
            return;
          }
        }
        else {
          if (uVar13 < 2) {
            uVar16 = uVar16 & uVar7 - 1;
          }
          else if (uVar7 <= uVar16) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar16 / uVar7;
            }
            uVar16 = uVar16 - uVar2 * uVar7;
          }
          if (uVar16 != uVar11) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  local_70 = param_2;
  std::__ndk1::
  __hash_table<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>
  ::__emplace_unique_key_args<v8::internal::HeapObject,v8::internal::HeapObject_const&>
            ((__hash_table<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>
              *)(this + 0x18),(HeapObject *)&local_70,(HeapObject *)&local_70);
  lVar8 = *(long *)(this + 8);
  *(long *)(lVar8 + 0x22b8) = *(long *)(lVar8 + 0x22b8) + 1;
  *(long *)(lVar8 + 0x6b48) = *(long *)(lVar8 + 0x6b48) + 0x20;
  *(long *)(lVar8 + 0x2e078) = *(long *)(lVar8 + 0x2e078) + 1;
  *(long *)(lVar8 + 0x524f8) = *(long *)(lVar8 + 0x524f8) + 1;
  uVar7 = local_70 & 0xffffffff00000000;
  uVar13 = uVar7 | *(uint *)((uVar7 | *(uint *)(local_70 + 3)) + 0xb);
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x9e) {
    if (0 < *(int *)(uVar13 + 3)) {
      iVar18 = 0;
      local_78 = 0x20;
LAB_00ffca98:
      local_68 = uVar13;
      iVar4 = FeedbackMetadata::GetKind((FeedbackMetadata *)&local_68,iVar18);
      uVar6 = iVar4 - 1;
      if (uVar6 < 0xe) {
switchD_00ffcb5c_caseD_11:
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
        switch(iVar4) {
        case 0:
        case 0x17:
          goto switchD_00ffcc44_caseD_0;
        case 0x11:
        case 0x16:
          goto switchD_00ffcb5c_caseD_11;
        }
      }
      if (uVar6 < 0xe) {
switchD_00ffcb84_caseD_11:
        lVar8 = 8;
      }
      else {
        lVar8 = 4;
        switch(iVar4) {
        case 0:
        case 0x17:
          goto switchD_00ffcc44_caseD_0;
        case 0x11:
        case 0x16:
          goto switchD_00ffcb84_caseD_11;
        }
      }
      iVar17 = iVar18 << 2;
      lVar10 = *(long *)(this + 8);
      uVar1 = *(uint *)(local_70 + (long)iVar17 + 0x1f);
      if (uVar1 == 3) {
switchD_00ffcb24_caseD_d:
        lVar14 = 0x22;
      }
      else {
        if ((uVar1 & 1) != 0) {
          uVar1 = uVar1 & 0xfffffffd;
        }
        if (0xf < uVar6) goto switchD_00ffcb24_caseD_d;
        lVar15 = *(long *)this;
        lVar14 = 0x1f;
        switch(uVar6) {
        default:
          bVar3 = uVar1 == *(uint *)(lVar15 + -0x7c48);
          lVar14 = 0x23;
          break;
        case 3:
          bVar3 = uVar1 == *(uint *)(lVar15 + -0x7c48);
          lVar14 = 0x1d;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          bVar3 = uVar1 == *(uint *)(lVar15 + -0x7c48);
          lVar14 = 0x20;
          break;
        case 0xd:
          goto switchD_00ffcb24_caseD_d;
        case 0xe:
        case 0xf:
          goto switchD_00ffcb24_caseD_e;
        }
        if (bVar3) {
          lVar14 = lVar14 + 1;
        }
      }
switchD_00ffcb24_caseD_e:
      lVar15 = lVar10 + (lVar14 + 0x43a) * 8;
      *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
      uVar1 = 0x3b - (int)LZCOUNT(lVar8);
      uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      if (0xe < (int)uVar1) {
        uVar1 = 0xf;
      }
      *(long *)(lVar15 + 0x4898) = *(long *)(lVar15 + 0x4898) + lVar8;
      lVar10 = lVar10 + (lVar14 + 0x43a) * 0x80 + (ulong)uVar1 * 8;
      *(long *)(lVar10 + 0xb570) = *(long *)(lVar10 + 0xb570) + 1;
      *(long *)(lVar10 + 0x2f9f0) = *(long *)(lVar10 + 0x2f9f0) + 1;
      if ((iVar4 != 0) && (iVar4 != 0x17)) {
        iVar18 = iVar5 + iVar18;
        uVar7 = 0;
        local_78 = lVar8 + local_78;
        if (uVar6 < 0xe) goto switchD_00ffcc44_caseD_11;
        do {
          uVar9 = 1;
          switch(iVar4) {
          case 0:
          case 0x17:
            goto switchD_00ffcc44_caseD_0;
          default:
            while( true ) {
              uVar11 = local_70;
              if (uVar9 <= uVar7) {
                if (iVar18 < *(int *)(uVar13 + 3)) goto LAB_00ffca98;
                uVar7 = local_70 & 0xffffffff00000000;
                goto LAB_00ffcd08;
              }
              uVar1 = *(uint *)(local_70 + (long)iVar17 + 0x1f);
              if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
                uVar9 = local_70 & 0xffffffff00000000;
                uVar16 = (ulong)uVar1 & 0xfffffffd | uVar9;
                if ((*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x99) ||
                   (*(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar16 - 1)) - 0x97 < 2)) {
                  local_68 = uVar16;
                  iVar5 = HeapObject::SizeFromMap
                                    ((HeapObject *)&local_68,uVar9 | *(uint *)(uVar16 - 1));
                  RecordVirtualObjectStats(this,uVar11,uVar16,0x1b,(long)iVar5,0,0);
                }
              }
              uVar7 = uVar7 + 1;
              iVar17 = iVar17 + 4;
              if (0xd < uVar6) break;
switchD_00ffcc44_caseD_11:
              uVar9 = 2;
            }
            break;
          case 0x11:
          case 0x16:
            goto switchD_00ffcc44_caseD_11;
          }
        } while( true );
      }
switchD_00ffcc44_caseD_0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_78 = 0x20;
LAB_00ffcd08:
    uVar6 = HeapObject::SizeFromMap((HeapObject *)&local_70,uVar7 | *(uint *)(local_70 - 1));
    if (((int)uVar6 < 0) || (local_78 != uVar6)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","calculated_size == vector.Size()");
    }
  }
  return;
}

