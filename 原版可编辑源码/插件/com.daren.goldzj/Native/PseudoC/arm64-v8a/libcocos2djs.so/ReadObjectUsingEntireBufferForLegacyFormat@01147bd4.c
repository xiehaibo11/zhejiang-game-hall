
/* v8::internal::ValueDeserializer::ReadObjectUsingEntireBufferForLegacyFormat() */

ulong * __thiscall
v8::internal::ValueDeserializer::ReadObjectUsingEntireBufferForLegacyFormat(ValueDeserializer *this)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  ushort uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  Isolate *pIVar15;
  Factory *pFVar16;
  Isolate *pIVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  pIVar15 = *(Isolate **)this;
  pIVar1 = pIVar15 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar15 + 0x95a8);
  *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
  local_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  local_78 = (long *)0x0;
  pbVar13 = *(byte **)(this + 0x10);
  pbVar10 = *(byte **)(this + 0x18);
  pbVar12 = pbVar13;
  if (pbVar13 < pbVar10) {
    while (pbVar13 < pbVar10) {
      bVar4 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      if (bVar4 != 0) {
        local_80 = 0;
        if (bVar4 != 0x40) {
          if (bVar4 == 0x7b) {
            do {
              if (pbVar10 <= pbVar12) {
                v8::V8::FromJustIsNothing();
                pbVar13 = *(byte **)(this + 0x10);
                pbVar10 = *(byte **)(this + 0x18);
                break;
              }
              pbVar13 = pbVar12 + 1;
              bVar4 = *pbVar12;
              *(byte **)(this + 0x10) = pbVar13;
              pbVar12 = pbVar13;
            } while (bVar4 == 0);
            uVar19 = 0;
            uVar14 = 0;
            do {
              if (pbVar10 <= pbVar13) goto LAB_01147f94;
              bVar4 = *pbVar13;
              if (uVar14 < 0x20) {
                uVar19 = (bVar4 & 0x7f) << (ulong)(uVar14 & 0x1f) | uVar19;
                uVar14 = uVar14 + 7;
              }
              pbVar13 = pbVar13 + 1;
              *(byte **)(this + 0x10) = pbVar13;
            } while ((char)bVar4 < '\0');
            uVar18 = (long)local_70 - (long)local_78 >> 3;
            if ((ulong)uVar19 <= uVar18 >> 1) {
              pIVar17 = *(Isolate **)this;
              uVar11 = *(ulong *)(pIVar17 + 0x2bc8) & 0xffffffff00000000;
              uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(pIVar17
                                                                                            + 0x2bc8
                                                  ) - 1)) + 0x13)) + 499);
              if (*(CanonicalHandleScope **)(pIVar17 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar8 = *(ulong **)(pIVar17 + 0x95a0);
                if (puVar8 == *(ulong **)(pIVar17 + 0x95a8)) {
                  puVar8 = (ulong *)HandleScope::Extend(pIVar17);
                }
                *(ulong **)(pIVar17 + 0x95a0) = puVar8 + 1;
                *puVar8 = uVar11;
              }
              else {
                puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar17 + 0x95b8),uVar11);
              }
              uVar18 = uVar18 + (ulong)uVar19 * -2;
              lVar7 = Factory::NewJSObject((Factory *)pIVar17,puVar8,0);
              if ((uVar19 != 0) &&
                 ((uVar6 = FUN_011480a0(*(undefined8 *)this,lVar7,local_78 + uVar18,uVar19),
                  uVar6 < 0x100 || ((uVar6 & 0xff) == 0)))) goto LAB_01148084;
              uVar11 = (long)local_70 - (long)local_78 >> 3;
              bVar5 = uVar11 <= uVar18;
              uVar11 = uVar18 - uVar11;
              if (bVar5 && uVar11 != 0) goto LAB_01147ee8;
              goto LAB_01147dac;
            }
          }
          else if (bVar4 != 0x24) {
            lVar7 = ReadObject(this);
            if (lVar7 != 0) goto LAB_01147ef0;
            local_80 = 0;
            goto LAB_01147fd8;
          }
LAB_01147f94:
          pFVar16 = *(Factory **)this;
          goto LAB_01147fc0;
        }
        do {
          if (pbVar10 <= pbVar12) {
            v8::V8::FromJustIsNothing();
            pbVar13 = *(byte **)(this + 0x10);
            pbVar10 = *(byte **)(this + 0x18);
            break;
          }
          pbVar13 = pbVar12 + 1;
          bVar4 = *pbVar12;
          *(byte **)(this + 0x10) = pbVar13;
          pbVar12 = pbVar13;
        } while (bVar4 == 0);
        uVar19 = 0;
        uVar14 = 0;
        do {
          if (pbVar10 <= pbVar13) goto LAB_01147f94;
          bVar4 = *pbVar13;
          if (uVar14 < 0x20) {
            uVar19 = (bVar4 & 0x7f) << (ulong)(uVar14 & 0x1f) | uVar19;
            uVar14 = uVar14 + 7;
          }
          pbVar13 = pbVar13 + 1;
          *(byte **)(this + 0x10) = pbVar13;
        } while ((char)bVar4 < '\0');
        uVar20 = 0;
        uVar14 = 0;
        do {
          if (pbVar10 <= pbVar13) goto LAB_01147f94;
          bVar4 = *pbVar13;
          if (uVar14 < 0x20) {
            uVar20 = (bVar4 & 0x7f) << (ulong)(uVar14 & 0x1f) | uVar20;
            uVar14 = uVar14 + 7;
          }
          pbVar13 = pbVar13 + 1;
          *(byte **)(this + 0x10) = pbVar13;
        } while ((char)bVar4 < '\0');
        if ((ulong)((long)local_70 - (long)local_78 >> 3) >> 1 < (ulong)uVar19) goto LAB_01147f94;
        lVar7 = Factory::NewJSArray(*(Factory **)this,3,0,0,1,0);
        JSArray::SetLength(lVar7,uVar20);
        uVar11 = (long)local_70 - (long)local_78 >> 3;
        uVar18 = uVar11 + (ulong)uVar19 * -2;
        if (uVar19 != 0) {
          uVar6 = FUN_011480a0(*(undefined8 *)this,lVar7,local_78 + uVar18,uVar19);
          if ((uVar6 < 0x100) || ((uVar6 & 0xff) == 0)) {
LAB_01148084:
            pFVar16 = *(Factory **)this;
            if (((*(ulong *)(pFVar16 + 0x2bd8) & 1) == 0) ||
               ((int)*(ulong *)(pFVar16 + 0x2bd8) != *(int *)(pFVar16 + 0xa8))) goto LAB_01147fd8;
            goto LAB_01147fc0;
          }
          uVar11 = (long)local_70 - (long)local_78 >> 3;
        }
        bVar5 = uVar11 <= uVar18;
        uVar11 = uVar18 - uVar11;
        if (bVar5 && uVar11 != 0) {
LAB_01147ee8:
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
          ::__append((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                      *)&local_78,uVar11);
        }
        else {
LAB_01147dac:
          if (!bVar5) {
            local_70 = local_78 + uVar18;
          }
        }
LAB_01147ef0:
        local_80 = lVar7;
        if (local_70 == plStack_68) {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
          ::__push_back_slow_path<v8::internal::Handle<v8::internal::Object>const&>
                    ((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                      *)&local_78,(Handle *)&local_80);
        }
        else {
          *local_70 = lVar7;
          local_70 = local_70 + 1;
        }
        pbVar13 = *(byte **)(this + 0x10);
        pbVar10 = *(byte **)(this + 0x18);
        pbVar12 = pbVar13;
        if (pbVar10 <= pbVar13) break;
      }
    }
  }
  *(byte **)(this + 0x10) = pbVar10;
  if ((long)local_70 - (long)local_78 == 8) {
    uVar18 = *(ulong *)*local_78;
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
    if (*(long *)(pIVar15 + 0x95a8) != lVar3) {
      *(long *)(pIVar15 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar15);
    }
    if (*(CanonicalHandleScope **)(pIVar15 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar1;
      if (puVar8 == *(ulong **)(pIVar15 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar15);
      }
      *(ulong **)pIVar1 = puVar8 + 1;
      *puVar8 = uVar18;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar15 + 0x95b8),uVar18);
    }
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(pIVar15 + 0x95a8);
    *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
  }
  else {
    pFVar16 = *(Factory **)this;
LAB_01147fc0:
    puVar9 = (undefined8 *)Factory::NewError(pFVar16,0x16c,0,0,0);
    Isolate::Throw((Isolate *)pFVar16,*puVar9,0);
LAB_01147fd8:
    puVar8 = (ulong *)0x0;
  }
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (pIVar15 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
    if (*(long *)(pIVar15 + 0x95a8) != lVar3) {
      *(long *)(pIVar15 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar15);
    }
  }
  return puVar8;
}

