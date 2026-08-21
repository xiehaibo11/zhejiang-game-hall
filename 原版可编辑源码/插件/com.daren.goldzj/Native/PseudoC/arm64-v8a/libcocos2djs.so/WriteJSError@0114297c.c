
/* v8::internal::ValueSerializer::WriteJSError(v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall v8::internal::ValueSerializer::WriteJSError(ValueSerializer *this,ulong *param_2)

{
  uint *puVar1;
  size_t __size;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  void *pvVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  undefined8 uVar11;
  uchar uVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  byte local_e0 [8];
  ulong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong *local_80;
  undefined8 uStack_78;
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_e0[0] = 0;
  uStack_d0 = 0;
  local_d8 = (ulong *)0x0;
  uStack_c0 = 0;
  local_c8 = 0;
  uVar6 = JSReceiver::GetOwnPropertyDescriptor(*(long *)this,param_2,*(long *)this + 0x7f8,local_e0)
  ;
  if ((uVar6 & 0xff) != 0) {
    local_b4 = 0x72;
    lVar2 = *(long *)(this + 0x18);
    uVar8 = lVar2 + 1;
    if (*(ulong *)(this + 0x20) < uVar8) {
      local_b0 = 0;
      uVar13 = *(ulong *)(this + 0x20) * 2;
      plVar3 = *(long **)(this + 8);
      if (uVar13 < uVar8 || uVar13 - uVar8 == 0) {
        uVar13 = uVar8;
      }
      __size = uVar13 + 0x40;
      if (plVar3 == (long *)0x0) {
        pvVar7 = realloc(*(void **)(this + 0x10),__size);
        local_b0 = __size;
      }
      else {
        pvVar7 = (void *)(**(code **)(*plVar3 + 0x30))
                                   (plVar3,*(void **)(this + 0x10),__size,&local_b0);
      }
      if (pvVar7 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar7;
        *(size_t *)(this + 0x20) = local_b0;
        goto LAB_011429f4;
      }
      this[0x29] = (ValueSerializer)0x1;
    }
    else {
      pvVar7 = *(void **)(this + 0x10);
LAB_011429f4:
      *(ulong *)(this + 0x18) = uVar8;
      *(undefined1 *)((long)pvVar7 + lVar2) = local_b4;
    }
    local_b0 = *(size_t *)this;
    local_a8 = 0;
    uStack_a4 = 0;
    local_a0 = SUB84(param_2,0);
    uStack_9c = (undefined4)((ulong)param_2 >> 0x20);
    local_98._4_4_ = local_98._4_4_ & 0xffffff00;
    local_98 = CONCAT44(local_98._4_4_,1);
    local_90 = (ulong *)((ulong)local_90._4_4_ << 0x20);
    if (param_2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!handle_.is_null()");
    }
    do {
      uVar8 = PrototypeIterator::HasAccess((PrototypeIterator *)&local_b0);
      if ((uVar8 & 1) == 0) {
        puVar16 = (undefined8 *)(local_b0 + 0xb0);
        goto LAB_01142a54;
      }
      uVar8 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                        ((PrototypeIterator *)&local_b0);
      if ((uVar8 & 1) == 0) goto LAB_01143230;
    } while (local_98._4_1_ == '\0');
    puVar16 = (undefined8 *)CONCAT44(uStack_9c,local_a0);
    if (puVar16 != (undefined8 *)0x0) {
LAB_01142a54:
      pIVar9 = *(Isolate **)this;
      uVar11 = *puVar16;
      uVar8 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
      uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x367);
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar8;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
        uVar8 = *puVar10;
      }
      uVar13 = uVar8 & 0xffffffff00000000;
      if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
        uVar8 = uVar13 | *(uint *)(uVar8 + 0x1b);
        if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) goto LAB_01142b48;
        if ((int)uVar11 == *(int *)(uVar8 + 0xf)) goto LAB_01142b50;
LAB_01142b58:
        pIVar9 = *(Isolate **)this;
        uVar11 = *puVar16;
        uVar8 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
        uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x397);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar8;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
          uVar8 = *puVar10;
        }
        uVar13 = uVar8 & 0xffffffff00000000;
        if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
          uVar8 = uVar13 | *(uint *)(uVar8 + 0x1b);
          if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) goto LAB_01142c4c;
          iVar14 = *(int *)(uVar8 + 0xf);
        }
        else {
          uVar4 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
          uVar8 = uVar13 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
              puVar1 = (uint *)(uVar8 + 0x13);
              uVar8 = uVar13 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
LAB_01142c4c:
          iVar14 = (int)uVar8;
        }
        if ((int)uVar11 == iVar14) {
          uVar12 = 'R';
          goto LAB_01143068;
        }
        pIVar9 = *(Isolate **)this;
        uVar11 = *puVar16;
        uVar8 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
        uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x39b);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar8;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
          uVar8 = *puVar10;
        }
        uVar13 = uVar8 & 0xffffffff00000000;
        if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
          uVar8 = uVar13 | *(uint *)(uVar8 + 0x1b);
          if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) goto LAB_01142d50;
          iVar14 = *(int *)(uVar8 + 0xf);
        }
        else {
          uVar4 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
          uVar8 = uVar13 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
              puVar1 = (uint *)(uVar8 + 0x13);
              uVar8 = uVar13 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
LAB_01142d50:
          iVar14 = (int)uVar8;
        }
        if ((int)uVar11 == iVar14) {
          uVar12 = 'F';
          goto LAB_01143068;
        }
        pIVar9 = *(Isolate **)this;
        uVar11 = *puVar16;
        uVar8 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
        uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x3ab);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar8;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
          uVar8 = *puVar10;
        }
        uVar13 = uVar8 & 0xffffffff00000000;
        if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
          uVar8 = uVar13 | *(uint *)(uVar8 + 0x1b);
          if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) goto LAB_01142e54;
          iVar14 = *(int *)(uVar8 + 0xf);
        }
        else {
          uVar4 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
          uVar8 = uVar13 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
              puVar1 = (uint *)(uVar8 + 0x13);
              uVar8 = uVar13 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
LAB_01142e54:
          iVar14 = (int)uVar8;
        }
        if ((int)uVar11 == iVar14) {
          uVar12 = 'S';
          goto LAB_01143068;
        }
        pIVar9 = *(Isolate **)this;
        uVar11 = *puVar16;
        uVar8 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
        uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x3af);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar8;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
          uVar8 = *puVar10;
        }
        uVar13 = uVar8 & 0xffffffff00000000;
        if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
          uVar8 = uVar13 | *(uint *)(uVar8 + 0x1b);
          if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) goto LAB_01142f58;
          iVar14 = *(int *)(uVar8 + 0xf);
        }
        else {
          uVar4 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
          uVar8 = uVar13 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
              puVar1 = (uint *)(uVar8 + 0x13);
              uVar8 = uVar13 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
LAB_01142f58:
          iVar14 = (int)uVar8;
        }
        if ((int)uVar11 == iVar14) {
          uVar12 = 'T';
          goto LAB_01143068;
        }
        pIVar9 = *(Isolate **)this;
        uVar11 = *puVar16;
        uVar8 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
        uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8)
                                                                       - 1)) + 0x13)) + 0x3b3);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar8;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
          uVar8 = *puVar10;
        }
        uVar13 = uVar8 & 0xffffffff00000000;
        if ((*(byte *)((uVar13 | 9) + (ulong)*(uint *)(uVar8 - 1)) & 1) == 0) {
          uVar8 = uVar13 | *(uint *)(uVar8 + 0x1b);
          if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) goto LAB_0114305c;
          iVar14 = *(int *)(uVar8 + 0xf);
        }
        else {
          uVar4 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
          uVar8 = uVar13 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
              puVar1 = (uint *)(uVar8 + 0x13);
              uVar8 = uVar13 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
LAB_0114305c:
          iVar14 = (int)uVar8;
        }
        if ((int)uVar11 == iVar14) {
          uVar12 = 'U';
          goto LAB_01143068;
        }
      }
      else {
        uVar4 = *(uint *)((uVar13 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
        uVar8 = uVar13 | uVar4;
        if ((uVar4 & 1) != 0) {
          do {
            if (*(short *)((uVar13 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
            puVar1 = (uint *)(uVar8 + 0x13);
            uVar8 = uVar13 | *puVar1;
          } while ((*puVar1 & 1) != 0);
        }
LAB_01142b48:
        if ((int)uVar11 != (int)uVar8) goto LAB_01142b58;
LAB_01142b50:
        uVar12 = 'E';
LAB_01143068:
        WriteVarint<unsigned_char>(this,uVar12);
      }
      if ((0xff < uVar6) && ((local_d8 != (ulong *)0x0 || ((local_e0[0] >> 5 & 1) != 0)))) {
        uVar8 = *local_d8;
        if (((uVar8 & 1) == 0) ||
           (puVar10 = local_d8,
           0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
          puVar10 = (ulong *)Object::ConvertToString(*(undefined8 *)this,local_d8);
        }
        if (puVar10 == (ulong *)0x0) goto LAB_01143230;
        WriteVarint<unsigned_char>(this,'m');
        WriteString(this,puVar10);
      }
      uVar8 = *(ulong *)this;
      puVar10 = (ulong *)(uVar8 + 0x9e0);
      if (((*param_2 & 1) == 0) ||
         (local_70 = param_2, *(ushort *)((uVar8 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
        local_70 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                      (uVar8,param_2,0xffffffffffffffff);
      }
      uVar13 = *puVar10;
      uVar15 = 3;
      if ((*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x40) &&
         (uVar15 = 3, (*(byte *)(uVar13 + 7) & 1) != 0)) {
        uVar15 = 0;
      }
      local_b0 = CONCAT44(local_b0._4_4_,uVar15);
      uStack_a4 = 0;
      local_a0 = 0xc0;
      local_98 = uVar8;
      if ((*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) & 0xffe0)
          == 0x20) {
        puVar10 = (ulong *)StringTable::LookupString(uVar8,puVar10);
      }
      uStack_88 = 0;
      uStack_78 = 0;
      local_60 = 0xffffffffffffffff;
      uStack_68 = 0xffffffffffffffff;
      local_90 = puVar10;
      local_80 = param_2;
      LookupIterator::Start<false>((LookupIterator *)&local_b0);
      if (local_b0._4_4_ == 4) {
        puVar10 = (ulong *)(local_98 + 0xa0);
        uVar8 = *puVar10;
      }
      else {
        puVar10 = (ulong *)Object::GetProperty((LookupIterator *)&local_b0,false);
        uVar11 = 0;
        if (puVar10 == (ulong *)0x0) goto LAB_01143234;
        uVar8 = *puVar10;
      }
      if (((uVar8 & 1) != 0) &&
         (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x40)) {
        WriteVarint<unsigned_char>(this,'s');
        WriteString(this,puVar10);
      }
      WriteVarint<unsigned_char>(this,'.');
      if (this[0x29] == (ValueSerializer)0x0) {
        uVar11 = 0x101;
        goto LAB_01143234;
      }
      ThrowDataCloneError(this,0x169,*(long *)this + 200);
    }
  }
LAB_01143230:
  uVar11 = 0;
LAB_01143234:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

