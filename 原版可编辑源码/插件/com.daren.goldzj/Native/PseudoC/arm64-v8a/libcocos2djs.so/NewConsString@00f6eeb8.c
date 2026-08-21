
/* v8::internal::Factory::NewConsString(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>) */

ulong * __thiscall v8::internal::Factory::NewConsString(Factory *this,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  Factory *pFVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort uVar7;
  ushort uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_78;
  undefined4 local_74;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar14 = *param_2;
  pFVar2 = this + 0x95a0;
  uVar16 = uVar14 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) < 0x40) &&
     ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) & 7) == 5)) {
    uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)pFVar2;
      if (param_2 == *(ulong **)(this + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar2 = param_2 + 1;
      *param_2 = uVar14;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
    }
  }
  uVar14 = *param_3;
  uVar16 = uVar14 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) < 0x40) &&
     ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) & 7) == 5)) {
    uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_3 = *(ulong **)pFVar2;
      if (param_3 == *(ulong **)(this + 0x95a8)) {
        param_3 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar2 = param_3 + 1;
      *param_3 = uVar14;
    }
    else {
      param_3 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
    }
  }
  ppuVar12 = (undefined **)*param_2;
  uVar3 = *(uint *)((long)ppuVar12 + 7);
  uVar14 = (ulong)uVar3;
  puVar9 = param_3;
  if (uVar3 != 0) {
    uVar16 = *param_3;
    uVar4 = *(uint *)(uVar16 + 7);
    uVar21 = (ulong)uVar4;
    puVar9 = param_2;
    if (uVar4 != 0) {
      uVar1 = uVar4 + uVar3;
      if (uVar1 == 2) {
        local_74 = 0;
        local_78 = (uint)*(ushort *)
                          (((ulong)ppuVar12 & 0xffffffff00000000 |
                           (ulong)*(uint *)((long)ppuVar12 - 1)) + 7);
        local_70 = ppuVar12;
        uVar7 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                          (&local_78,&local_70,&local_74);
        local_70 = (undefined **)*param_3;
        local_74 = 0;
        local_78 = (uint)*(ushort *)
                          (((ulong)local_70 & 0xffffffff00000000 |
                           (ulong)*(uint *)((long)local_70 - 1)) + 7);
        uVar8 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                          (&local_78,&local_70,&local_74);
        local_60 = &local_74;
        if ((uVar8 | uVar7) < 0x100) {
          local_74._0_2_ = CONCAT11((char)uVar8,(char)uVar7);
          local_68 = StringHasher::HashSequentialString<unsigned_char>
                               ((uchar *)&local_74,2,*(ulong *)(*(long *)(this + 0x490) + 7));
          uStack_64 = 2;
          uStack_58 = 2;
          local_70 = &PTR__StringTableKey_01ca7080;
          local_50 = 0;
          puVar9 = (ulong *)StringTable::LookupKey<v8::internal::SequentialStringKey<unsigned_char>>
                                      ((Isolate *)this,(SequentialStringKey *)&local_70);
        }
        else {
          local_74 = CONCAT22(uVar8,uVar7);
          local_68 = StringHasher::HashSequentialString<unsigned_short>
                               ((ushort *)&local_74,2,*(ulong *)(*(long *)(this + 0x490) + 7));
          uStack_64 = 2;
          uStack_58 = 2;
          local_70 = &PTR__StringTableKey_01ca70b0;
          local_50 = 0;
          puVar9 = (ulong *)StringTable::
                            LookupKey<v8::internal::SequentialStringKey<unsigned_short>>
                                      ((Isolate *)this,(SequentialStringKey *)&local_70);
        }
      }
      else if (uVar1 < 0xffffff1) {
        uVar7 = *(ushort *)
                 (((ulong)ppuVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)ppuVar12 - 1))
                & *(ushort *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar16 - 1));
        if (0xc < (int)uVar1) {
          puVar9 = (ulong *)NewConsString(this,param_2,param_3,uVar1,(uVar7 & 8) != 0);
          if (*(long *)(lVar5 + 0x28) == local_48) {
            return puVar9;
          }
          goto LAB_00f6f234;
        }
        if ((uVar7 & 8) == 0) {
          puVar9 = (ulong *)NewRawTwoByteString(this,uVar1,0);
          if (puVar9 == (ulong *)0x0) goto LAB_00f6f3d4;
          uVar14 = *puVar9;
          String::WriteToFlat<unsigned_short>(*param_2,uVar14 + 0xb,0,*(undefined4 *)(*param_2 + 7))
          ;
          String::WriteToFlat<unsigned_short>
                    (*param_3,uVar14 + 0xb + (long)*(int *)(*param_2 + 7) * 2,0,
                     *(undefined4 *)(*param_3 + 7));
        }
        else {
          puVar9 = (ulong *)NewRawOneByteString();
          if (puVar9 == (ulong *)0x0) {
LAB_00f6f3d4:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar16 = *param_2;
          uVar17 = *puVar9;
          uVar15 = uVar16 & 0xffffffff00000000 | 7;
          puVar20 = (undefined1 *)(uVar17 + 0xb);
          if ((*(ushort *)(uVar15 + *(uint *)(uVar16 - 1)) < 0x40) &&
             ((*(ushort *)(uVar15 + *(uint *)(uVar16 - 1)) & 7) == 2)) {
            puVar11 = (undefined1 *)(**(code **)(**(long **)(uVar16 + 0xb) + 0x30))();
          }
          else {
            puVar11 = (undefined1 *)(uVar16 + 0xb);
          }
          if (0 < (int)uVar3) {
            if ((uVar3 < 0x20) || ((puVar20 < puVar11 + uVar14 && (puVar11 < puVar20 + uVar14)))) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar14 & 0xffffffe0;
              puVar10 = (undefined8 *)(uVar17 + 0x1b);
              puVar20 = puVar20 + uVar16;
              puVar18 = (undefined8 *)(puVar11 + 0x10);
              uVar15 = uVar16;
              do {
                puVar6 = puVar18 + -1;
                uVar22 = puVar18[-2];
                uVar24 = puVar18[1];
                uVar23 = *puVar18;
                uVar15 = uVar15 - 0x20;
                puVar18 = puVar18 + 4;
                puVar10[-1] = *puVar6;
                puVar10[-2] = uVar22;
                puVar10[1] = uVar24;
                *puVar10 = uVar23;
                puVar10 = puVar10 + 4;
              } while (uVar15 != 0);
              if (uVar16 == uVar14) goto LAB_00f6f280;
            }
            lVar13 = uVar14 - uVar16;
            puVar11 = puVar11 + uVar16;
            puVar19 = puVar20;
            do {
              lVar13 = lVar13 + -1;
              puVar20 = puVar19 + 1;
              *puVar19 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar19 = puVar20;
            } while (lVar13 != 0);
          }
LAB_00f6f280:
          uVar14 = *param_3;
          uVar16 = uVar14 & 0xffffffff00000000 | 7;
          if ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) < 0x40) &&
             ((*(ushort *)(uVar16 + *(uint *)(uVar14 - 1)) & 7) == 2)) {
            puVar11 = (undefined1 *)(**(code **)(**(long **)(uVar14 + 0xb) + 0x30))();
          }
          else {
            puVar11 = (undefined1 *)(uVar14 + 0xb);
          }
          if (0 < (int)uVar4) {
            if ((uVar4 < 0x20) || ((puVar20 < puVar11 + uVar21 && (puVar11 < puVar20 + uVar21)))) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar21 & 0xffffffe0;
              puVar10 = (undefined8 *)(puVar20 + 0x10);
              puVar20 = puVar20 + uVar14;
              puVar18 = (undefined8 *)(puVar11 + 0x10);
              uVar16 = uVar14;
              do {
                puVar6 = puVar18 + -1;
                uVar22 = puVar18[-2];
                uVar24 = puVar18[1];
                uVar23 = *puVar18;
                uVar16 = uVar16 - 0x20;
                puVar18 = puVar18 + 4;
                puVar10[-1] = *puVar6;
                puVar10[-2] = uVar22;
                puVar10[1] = uVar24;
                *puVar10 = uVar23;
                puVar10 = puVar10 + 4;
              } while (uVar16 != 0);
              if (uVar14 == uVar21) goto LAB_00f6f140;
            }
            lVar13 = uVar21 - uVar14;
            puVar11 = puVar11 + uVar14;
            do {
              lVar13 = lVar13 + -1;
              *puVar20 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar20 = puVar20 + 1;
            } while (lVar13 != 0);
          }
        }
      }
      else {
        puVar10 = (undefined8 *)NewInvalidStringLengthError(this);
        Isolate::Throw((Isolate *)this,*puVar10,0);
        puVar9 = (ulong *)0x0;
      }
    }
  }
LAB_00f6f140:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return puVar9;
  }
LAB_00f6f234:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

