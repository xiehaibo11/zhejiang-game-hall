
/* v8::internal::Uri::Decode(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   bool) */

long * v8::internal::Uri::Decode(Factory *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uchar *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uchar *puVar12;
  uchar uVar13;
  ushort uVar14;
  uchar uVar15;
  ushort *puVar16;
  uint uVar17;
  size_t sVar18;
  uchar *puVar19;
  int iVar20;
  ulong uVar21;
  uchar *puVar22;
  uchar *puVar23;
  ushort *local_98;
  ushort *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 local_78 [16];
  
  plVar4 = (long *)String::Flatten(param_1,param_2,0);
  local_90 = (ushort *)0x0;
  uStack_88 = 0;
  local_98 = (ushort *)0x0;
  local_80 = *plVar4;
  local_78 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_80);
  iVar2 = *(int *)(*plVar4 + 7);
  if (iVar2 < 1) {
    puVar22 = (uchar *)0x0;
    puVar12 = (uchar *)0x0;
LAB_015c4a54:
    if (local_98 == local_90) {
      local_78._8_8_ = SEXT48((int)puVar22 - (int)puVar12);
      local_78._0_8_ = puVar12;
      plVar4 = (long *)Factory::NewStringFromOneByte(param_1,local_78,0);
    }
    else {
      uVar9 = (long)puVar22 - (long)puVar12;
      plVar4 = (long *)Factory::NewRawTwoByteString
                                 (param_1,(int)((ulong)((long)local_90 - (long)local_98) >> 1) +
                                          (int)uVar9,0);
      if (plVar4 != (long *)0x0) {
        puVar16 = (ushort *)(*plVar4 + 0xb);
        if (puVar12 != puVar22) {
          CopyChars<unsigned_char,unsigned_short>(puVar16,puVar12,uVar9);
          puVar16 = puVar16 + uVar9;
        }
        if (local_98 != local_90) {
          CopyChars<unsigned_short,unsigned_short>
                    (puVar16,local_98,(long)local_90 - (long)local_98 >> 1);
        }
      }
    }
  }
  else {
    puVar19 = (uchar *)0x0;
    puVar22 = (uchar *)0x0;
    puVar12 = (uchar *)0x0;
    uVar17 = 0;
    uVar9 = local_78._8_8_ >> 0x20;
    if (local_78._12_4_ == 1) goto LAB_015c4964;
LAB_015c463c:
    uVar14 = *(ushort *)(local_78._0_8_ + (long)(int)uVar17 * 2);
    puVar23 = puVar22;
    if (uVar14 != 0x25) goto LAB_015c4974;
    while( true ) {
      uVar21 = (long)(int)uVar17 + 2;
      iVar20 = (int)uVar21;
      if (iVar2 <= iVar20) break;
      lVar1 = (long)(int)uVar17 + 1;
      if ((int)uVar9 != 1) {
        uVar14 = *(ushort *)(local_78._0_8_ + lVar1 * 2);
        uVar10 = (uint)uVar14;
        uVar8 = (uint)*(ushort *)(local_78._0_8_ + (long)iVar20 * 2);
        if (uVar14 < 0x67) goto LAB_015c468c;
        break;
      }
      uVar10 = (uint)*(byte *)(local_78._0_8_ + lVar1);
      uVar8 = (uint)*(byte *)(local_78._0_8_ + uVar21);
      if (0x66 < *(byte *)(local_78._0_8_ + lVar1)) break;
LAB_015c468c:
      uVar10 = uVar10 - 0x30;
      if ((9 < uVar10) && (uVar3 = uVar10 | 0x20, uVar10 = uVar3 - 0x27, 5 < uVar3 - 0x31)) {
        uVar10 = 0xffffffff;
      }
      if ((((0x66 < uVar8) || (uVar10 == 0xffffffff)) ||
          ((uVar8 = uVar8 - 0x30, 9 < uVar8 &&
           ((5 < (uVar8 | 0x20) - 0x31 || (uVar8 = (uVar8 | 0x20) - 0x27, uVar8 == 0xffffffff))))))
         || (uVar8 = uVar8 + uVar10 * 0x10, (int)uVar8 < 0)) break;
      puVar22 = puVar23;
      if ((uVar8 & 0xff80) != 0) {
LAB_015c4a30:
        uVar9 = FUN_015c5c48(uVar17,param_3 & 1,iVar2,local_78,&local_98);
        if ((uVar9 & 1) == 0) break;
        goto LAB_015c4a54;
      }
      puVar5 = puVar12;
      if ((((param_3 & 1) == 0) || (uVar17 = (uVar8 & 0xffff) - 0x23, 0x1d < uVar17)) ||
         ((1 << (ulong)(uVar17 & 0x1f) & 0x3580130bU) == 0)) {
        if (puVar19 <= puVar23) {
          sVar18 = (long)puVar23 - (long)puVar12;
          uVar9 = sVar18 + 1;
          if ((long)uVar9 < 0) goto LAB_015c4bcc;
          uVar11 = ((long)puVar19 - (long)puVar12) * 2;
          if (uVar9 <= uVar11) {
            uVar9 = uVar11;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar19 - (long)puVar12)) {
            uVar9 = 0x7fffffffffffffff;
          }
          if (uVar9 == 0) {
            puVar12 = (uchar *)0x0;
          }
          else {
            puVar12 = operator_new(uVar9);
          }
          puVar22 = puVar12 + sVar18;
          puVar19 = puVar12 + uVar9;
          *puVar22 = (uchar)uVar8;
          goto joined_r0x015c47dc;
        }
        puVar22 = puVar23 + 1;
        *puVar23 = (uchar)uVar8;
      }
      else {
        if (puVar23 < puVar19) {
          *puVar23 = '%';
        }
        else {
          sVar18 = (long)puVar23 - (long)puVar12;
          uVar9 = sVar18 + 1;
          if ((long)uVar9 < 0) goto LAB_015c4bcc;
          uVar11 = ((long)puVar19 - (long)puVar12) * 2;
          if (uVar9 <= uVar11) {
            uVar9 = uVar11;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar19 - (long)puVar12)) {
            uVar9 = 0x7fffffffffffffff;
          }
          if (uVar9 == 0) {
            puVar5 = (uchar *)0x0;
          }
          else {
            puVar5 = operator_new(uVar9);
          }
          puVar23 = puVar5 + sVar18;
          puVar19 = puVar5 + uVar9;
          *puVar23 = '%';
          if (0 < (long)sVar18) {
            memcpy(puVar5,puVar12,sVar18);
          }
          if (puVar12 != (uchar *)0x0) {
            operator_delete(puVar12);
          }
        }
        puVar22 = puVar23 + 1;
        if (local_78._12_4_ == 1) {
          uVar13 = *(uchar *)(local_78._0_8_ + lVar1);
          uVar15 = *(uchar *)(local_78._0_8_ + uVar21);
          if (puVar19 <= puVar22) goto LAB_015c4860;
LAB_015c48b4:
          puVar23 = puVar23 + 2;
          *puVar22 = uVar13;
          if (puVar23 < puVar19) goto LAB_015c48c0;
        }
        else {
          uVar13 = (uchar)*(undefined2 *)(local_78._0_8_ + lVar1 * 2);
          uVar15 = (uchar)*(undefined2 *)(local_78._0_8_ + (long)iVar20 * 2);
          if (puVar22 < puVar19) goto LAB_015c48b4;
LAB_015c4860:
          sVar18 = (long)puVar22 - (long)puVar5;
          uVar9 = sVar18 + 1;
          if ((long)uVar9 < 0) goto LAB_015c4bcc;
          uVar11 = ((long)puVar19 - (long)puVar5) * 2;
          if (uVar9 <= uVar11) {
            uVar9 = uVar11;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar19 - (long)puVar5)) {
            uVar9 = 0x7fffffffffffffff;
          }
          if (uVar9 == 0) {
            puVar22 = (uchar *)0x0;
          }
          else {
            puVar22 = operator_new(uVar9);
          }
          puVar19 = puVar22 + uVar9;
          puVar23 = puVar22 + sVar18 + 1;
          puVar22[sVar18] = uVar13;
          if (0 < (long)sVar18) {
            memcpy(puVar22,puVar5,sVar18);
          }
          if (puVar5 != (uchar *)0x0) {
            operator_delete(puVar5);
          }
          puVar5 = puVar22;
          if (puVar23 < puVar19) {
LAB_015c48c0:
            puVar22 = puVar23 + 1;
            *puVar23 = uVar15;
            puVar12 = puVar5;
            goto LAB_015c4a08;
          }
        }
        sVar18 = (long)puVar23 - (long)puVar5;
        uVar9 = sVar18 + 1;
        if ((long)uVar9 < 0) {
LAB_015c4bcc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = ((long)puVar19 - (long)puVar5) * 2;
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (0x3ffffffffffffffe < (ulong)((long)puVar19 - (long)puVar5)) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 == 0) {
          puVar12 = (uchar *)0x0;
        }
        else {
          puVar12 = operator_new(uVar9);
        }
        puVar22 = puVar12 + sVar18;
        puVar19 = puVar12 + uVar9;
        *puVar22 = uVar15;
joined_r0x015c47dc:
        puVar22 = puVar22 + 1;
        if (0 < (long)sVar18) {
          memcpy(puVar12,puVar5,sVar18);
        }
        if (puVar5 != (uchar *)0x0) {
          operator_delete(puVar5);
        }
      }
LAB_015c4a08:
      while( true ) {
        uVar17 = (int)uVar21 + 1;
        if (iVar2 <= (int)uVar17) goto LAB_015c4a54;
        uVar9 = (ulong)(uint)local_78._12_4_;
        if (local_78._12_4_ != 1) goto LAB_015c463c;
LAB_015c4964:
        uVar14 = (ushort)*(byte *)(local_78._0_8_ + (long)(int)uVar17);
        puVar23 = puVar22;
        if (*(byte *)(local_78._0_8_ + (long)(int)uVar17) == 0x25) break;
LAB_015c4974:
        if (0x7f < uVar14) goto LAB_015c4a30;
        if (puVar22 < puVar19) {
          *puVar22 = (uchar)uVar14;
          puVar23 = puVar12;
        }
        else {
          sVar18 = (long)puVar22 - (long)puVar12;
          uVar9 = sVar18 + 1;
          if ((long)uVar9 < 0) goto LAB_015c4bcc;
          uVar21 = ((long)puVar19 - (long)puVar12) * 2;
          if (uVar9 <= uVar21) {
            uVar9 = uVar21;
          }
          if (0x3ffffffffffffffe < (ulong)((long)puVar19 - (long)puVar12)) {
            uVar9 = 0x7fffffffffffffff;
          }
          if (uVar9 == 0) {
            puVar23 = (uchar *)0x0;
          }
          else {
            puVar23 = operator_new(uVar9);
          }
          puVar22 = puVar23 + sVar18;
          puVar19 = puVar23 + uVar9;
          *puVar22 = (uchar)uVar14;
          if (0 < (long)sVar18) {
            memcpy(puVar23,puVar12,sVar18);
          }
          if (puVar12 != (uchar *)0x0) {
            operator_delete(puVar12);
          }
        }
        puVar22 = puVar22 + 1;
        uVar21 = (ulong)uVar17;
        puVar12 = puVar23;
      }
    }
    uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 0x3b3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_1 + 0x95a0);
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend((Isolate *)param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    puVar7 = (undefined8 *)Factory::NewError(param_1,puVar6,0x154,0,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar7,0);
    plVar4 = (long *)0x0;
  }
  if (local_98 != (ushort *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (puVar12 != (uchar *)0x0) {
    operator_delete(puVar12);
  }
  return plVar4;
}

