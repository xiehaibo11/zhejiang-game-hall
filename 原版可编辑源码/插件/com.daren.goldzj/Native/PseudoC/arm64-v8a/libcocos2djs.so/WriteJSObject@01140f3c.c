
/* v8::internal::ValueSerializer::WriteJSObject(v8::internal::Handle<v8::internal::JSObject>) */

undefined2 __thiscall
v8::internal::ValueSerializer::WriteJSObject(ValueSerializer *this,ulong *param_2)

{
  size_t sVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined2 uVar7;
  ushort uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  void *pvVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  undefined8 local_c8;
  undefined8 local_bc;
  ulong local_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar18 = *param_2;
  uVar19 = uVar18 & 0xffffffff00000000;
  if (((*(uint *)((uVar19 | 0xb) + (ulong)*(uint *)(uVar18 - 1)) >> 0x15 & 1) != 0) ||
     (1 < *(uint *)((uVar19 | *(uint *)(uVar18 + 7)) + 3))) {
    uVar7 = WriteJSObjectSlow(this,param_2);
    return uVar7;
  }
  pIVar9 = *(Isolate **)this;
  uVar19 = uVar19 | *(uint *)(uVar18 - 1);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar19;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar19);
  }
  lVar25 = *(long *)(this + 0x18);
  uVar18 = lVar25 + 1;
  if (*(ulong *)(this + 0x20) < uVar18) {
    local_c8 = 0;
    uVar19 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
      uVar19 = uVar18;
    }
    sVar1 = uVar19 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar11 = realloc(*(void **)(this + 0x10),sVar1);
      local_c8 = sVar1;
    }
    else {
      pvVar11 = (void *)(**(code **)(*plVar3 + 0x30))
                                  (plVar3,*(void **)(this + 0x10),sVar1,&local_c8);
    }
    if (pvVar11 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar11;
      *(size_t *)(this + 0x20) = local_c8;
      goto LAB_0114103c;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar11 = *(void **)(this + 0x10);
LAB_0114103c:
    *(ulong *)(this + 0x18) = uVar18;
    *(undefined1 *)((long)pvVar11 + lVar25) = 0x6f;
  }
  uVar18 = *puVar10;
  uVar19 = (ulong)(*(uint *)(uVar18 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar19 != 0) {
    uVar24 = 0;
    bVar6 = false;
    lVar25 = 0xc;
    do {
      pIVar9 = *(Isolate **)this;
      uVar18 = uVar18 & 0xffffffff00000000 |
               (ulong)*(uint *)(lVar25 + (uVar18 & 0xffffffff00000000 |
                                         (ulong)*(uint *)(uVar18 + 0x17)) + 3);
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar12 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar12 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar12 + 1;
        *puVar12 = uVar18;
      }
      else {
        puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar18);
        uVar18 = *puVar12;
      }
      if (*(ushort *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) < 0x40) {
        uVar22 = *puVar10;
        uVar17 = *(uint *)(lVar25 + (uVar22 & 0xffffffff00000000 | (ulong)*(uint *)(uVar22 + 0x17))
                          + 7);
        if ((uVar17 >> 5 & 1) == 0) {
          uVar20 = *param_2;
          if ((bVar6) || (*(int *)(uVar20 - 1) == (int)uVar22)) {
            bVar6 = true;
            uVar22 = *(ulong *)this;
            if ((uVar20 & 1) == 0) goto LAB_01141268;
LAB_01141270:
            uVar21 = uVar22 | 7;
            puVar14 = param_2;
            if (*(ushort *)(uVar21 + *(uint *)(uVar20 - 1)) < 0xa9) goto LAB_01141288;
LAB_011412ac:
            if (*(short *)(uVar21 + *(uint *)(uVar18 - 1)) == 0x40) {
              uVar17 = ~*(uint *)(uVar18 + 7) & 1;
            }
            else {
              uVar17 = 1;
            }
            local_c8 = CONCAT44(local_c8._4_4_,uVar17);
            local_bc = 0xc000000000;
            puVar15 = puVar12;
            local_b0 = uVar22;
            if ((*(ushort *)((*puVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar12 - 1)) &
                0xffe0) == 0x20) {
              puVar15 = (ulong *)StringTable::LookupString(uVar22,puVar12);
            }
            uStack_a0 = 0;
            uStack_90 = 0;
            local_80 = 0xffffffffffffffff;
            uStack_78 = 0xffffffffffffffff;
            local_a8 = puVar15;
            local_98 = param_2;
            local_88 = puVar14;
            LookupIterator::Start<false>((LookupIterator *)&local_c8);
            if (local_c8._4_4_ == 4) goto LAB_01141238;
            lVar13 = Object::GetProperty((LookupIterator *)&local_c8,false);
            if (lVar13 == 0) {
              return 0;
            }
          }
          else {
            if ((uVar17 >> 2 & 1) != 0) {
              bVar6 = false;
              uVar22 = *(ulong *)this;
              if ((uVar20 & 1) != 0) goto LAB_01141270;
LAB_01141268:
              uVar21 = uVar22 | 7;
LAB_01141288:
              puVar14 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                           (uVar22,param_2,0xffffffffffffffff);
              uVar18 = *puVar12;
              goto LAB_011412ac;
            }
            uVar2 = *(int *)((uVar22 & 0xffffffff00000000 | lVar25 + 7U) +
                            (ulong)*(uint *)(uVar22 + 0x17)) >> 1;
            uVar5 = uVar2 >> 0x13 & 0x3ff;
            iVar4 = (uint)*(byte *)(uVar22 + 3) - (uint)*(byte *)(uVar22 + 4);
            if ((int)uVar5 < iVar4) {
              uVar18 = (ulong)*(byte *)(uVar22 + 4) << 0x1c;
              iVar23 = (uVar5 + *(byte *)(uVar22 + 4)) * 4;
            }
            else {
              iVar23 = (uVar5 - iVar4) * 4 + 8;
              uVar18 = 0x20000000;
            }
            uVar2 = uVar2 >> 6 & 7;
            local_c8 = CONCAT71(local_c8._1_7_,(char)uVar2);
            if (4 < uVar2) {
              uVar16 = Representation::Mnemonic((Representation *)&local_c8);
              PrintF("%s\n",uVar16);
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            lVar13 = JSObject::FastPropertyAt
                               (param_2,uVar17 >> 7 & 7,
                                (ulong)((int)uVar5 < iVar4) << 0xd | (long)iVar4 << 0x10 |
                                (long)iVar23 | uVar18 | *(ulong *)(&DAT_019dad00 + (ulong)uVar2 * 8)
                               );
            bVar6 = false;
          }
          uVar8 = WriteObject(this,puVar12);
          if (uVar8 < 0x100) {
            return 0;
          }
          if ((uVar8 & 0xff) == 0) {
            return 0;
          }
          uVar8 = WriteObject(this,lVar13);
          if (uVar8 < 0x100) {
            return 0;
          }
          if ((uVar8 & 0xff) == 0) {
            return 0;
          }
          uVar24 = uVar24 + 1;
        }
      }
LAB_01141238:
      if (uVar19 * 0xc - lVar25 == 0) goto LAB_01141360;
      uVar18 = *puVar10;
      lVar25 = lVar25 + 0xc;
    } while( true );
  }
  uVar24 = 0;
LAB_01141360:
  lVar25 = *(long *)(this + 0x18);
  uVar18 = lVar25 + 1;
  if (*(ulong *)(this + 0x20) < uVar18) {
    local_c8 = 0;
    uVar19 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
      uVar19 = uVar18;
    }
    sVar1 = uVar19 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar11 = realloc(*(void **)(this + 0x10),sVar1);
      local_c8 = sVar1;
    }
    else {
      pvVar11 = (void *)(**(code **)(*plVar3 + 0x30))
                                  (plVar3,*(void **)(this + 0x10),sVar1,&local_c8);
    }
    if (pvVar11 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_01141388;
    }
    *(void **)(this + 0x10) = pvVar11;
    *(size_t *)(this + 0x20) = local_c8;
  }
  else {
    pvVar11 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar18;
  *(undefined1 *)((long)pvVar11 + lVar25) = 0x7b;
LAB_01141388:
  WriteVarint<unsigned_int>(this,uVar24);
  if (this[0x29] == (ValueSerializer)0x0) {
    uVar7 = 0x101;
  }
  else {
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
    uVar7 = 0;
  }
  return uVar7;
}

