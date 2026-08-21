
ulong * FUN_00f5a9f4(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  CanonicalHandleScope *this;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  int local_70;
  int local_68;
  int local_64;
  long *local_58;
  
  local_78 = *param_2;
  pIVar1 = param_1 + 0x95a0;
  uVar4 = v8::internal::Script::GetNameOrSourceURL((Script *)&local_78);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar4;
    uVar4 = *puVar5;
    iVar11 = (int)uVar4;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    uVar4 = *puVar5;
    iVar11 = (int)uVar4;
  }
  if ((uVar4 & 1) == 0) {
    return puVar5;
  }
  if (iVar11 != *(int *)(param_1 + 0xa0)) {
    return puVar5;
  }
  v8::internal::IncrementalStringBuilder::IncrementalStringBuilder
            ((IncrementalStringBuilder *)&local_78,param_1);
  if (local_70 == 0) {
    lVar13 = (long)local_64;
    local_64 = local_64 + 1;
    *(undefined1 *)(*local_58 + lVar13 + 0xb) = 0x65;
    if (local_64 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x76;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x61;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x6c;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x20;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x61;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x74;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    iVar11 = local_64 + 1;
    *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x20;
    local_64 = iVar11;
    if (iVar11 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
  }
  else {
    lVar13 = 0;
    uVar10 = 0x65;
    do {
      lVar12 = (long)local_64;
      local_64 = local_64 + 1;
      *(ushort *)(*local_58 + lVar12 * 2 + 0xb) = uVar10;
      if (local_64 == local_68) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
      }
      uVar10 = (ushort)(byte)"eval at "[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (lVar13 != 8);
  }
  uVar2 = *(uint *)(*param_2 + 0x23);
  if (((uVar2 & 1) == 0) ||
     (uVar4 = *param_2 & 0xffffffff00000000, uVar14 = uVar4 | uVar2,
     *(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa6)) {
    uVar4 = *(ulong *)(param_1 + 0xa0);
LAB_00f5ace8:
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x00f5af04:
    if (this == (CanonicalHandleScope *)0x0) goto LAB_00f5af08;
LAB_00f5acf0:
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar4);
  }
  else {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar14;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
      uVar14 = *puVar5;
    }
    uVar2 = *(uint *)(uVar14 + 7);
    uVar4 = uVar14 & 0xffffffff00000000;
    local_88 = uVar4 | uVar2;
    if (((uVar2 & 1) == 0) || (*(short *)((uVar4 | 7) + (ulong)*(uint *)(local_88 - 1)) != 0x83)) {
      uVar14 = local_88;
      if (uVar2 != 0) goto joined_r0x00f5ad74;
LAB_00f5adb0:
      uVar14 = *(ulong *)(uVar4 + 200);
    }
    else {
      uVar6 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_88);
      if ((uVar6 & 1) == 0) goto LAB_00f5adb0;
      uVar2 = *(uint *)(uVar14 + 7);
      uVar14 = uVar4 | uVar2;
joined_r0x00f5ad74:
      if (((uVar2 & 1) != 0) && (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x83)) {
        local_88 = uVar14;
        uVar6 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_88);
        if ((uVar6 & 1) == 0) goto LAB_00f5adb0;
        local_88 = uVar14;
        uVar14 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_88);
      }
    }
    local_88 = uVar14;
    uVar14 = v8::internal::Object::BooleanValue((Object *)&local_88,param_1);
    uVar15 = *puVar5;
    uVar2 = *(uint *)(uVar15 + 7);
    uVar6 = uVar15 & 0xffffffff00000000;
    uVar4 = uVar6 | uVar2;
    if ((uVar14 & 1) != 0) {
      if (((uVar2 & 1) == 0) || (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x83)) {
        if (uVar2 != 0) goto joined_r0x00f5ae70;
      }
      else {
        local_88 = uVar4;
        uVar4 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_88);
        if ((uVar4 & 1) != 0) {
          uVar2 = *(uint *)(uVar15 + 7);
          uVar4 = uVar6 | uVar2;
joined_r0x00f5ae70:
          if (((uVar2 & 1) == 0) || (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x83))
          goto LAB_00f5ace8;
          local_88 = uVar4;
          uVar14 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_88);
          if ((uVar14 & 1) != 0) {
            local_88 = uVar4;
            uVar4 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_88);
            this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
            goto joined_r0x00f5aef4;
          }
        }
      }
LAB_00f5aefc:
      uVar4 = *(ulong *)(uVar6 + 200);
      this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      goto joined_r0x00f5af04;
    }
    if (((uVar2 & 1) != 0) && (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x83)) {
      local_88 = uVar4;
      uVar4 = v8::internal::ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_88);
      if (((uVar4 & 1) != 0) &&
         ((uVar4 = v8::internal::ScopeInfo::InferredFunctionName((ScopeInfo *)&local_88),
          (uVar4 & 1) != 0 &&
          (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40))))
      goto LAB_00f5ace8;
      goto LAB_00f5aefc;
    }
    if (((*(uint *)(uVar15 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | *(uint *)(uVar15 + 3)) - 1)) - 0x95)
       ) goto LAB_00f5aefc;
    uVar4 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar15 + 3)) + 3);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
joined_r0x00f5aef4:
    if (this != (CanonicalHandleScope *)0x0) goto LAB_00f5acf0;
LAB_00f5af08:
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar4;
  }
  local_88 = *puVar5;
  uVar4 = v8::internal::Object::BooleanValue((Object *)&local_88,param_1);
  if ((uVar4 & 1) == 0) {
    if (local_70 == 0) {
      cVar9 = '<';
      lVar13 = 1;
      do {
        lVar12 = (long)local_64;
        local_64 = local_64 + 1;
        *(char *)(*local_58 + lVar12 + 0xb) = cVar9;
        if (local_64 == local_68) {
          v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
        }
        cVar9 = "<anonymous>"[lVar13];
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0xc);
    }
    else {
      uVar10 = 0x3c;
      lVar13 = 1;
      do {
        lVar12 = (long)local_64;
        local_64 = local_64 + 1;
        *(ushort *)(*local_58 + lVar12 * 2 + 0xb) = uVar10;
        if (local_64 == local_68) {
          v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
        }
        uVar10 = (ushort)(byte)"<anonymous>"[lVar13];
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0xc);
    }
  }
  else {
    uVar4 = *puVar5;
    if (((uVar4 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
      puVar5 = (ulong *)v8::internal::Object::ConvertToString(param_1,puVar5);
    }
    if (puVar5 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    v8::internal::IncrementalStringBuilder::AppendString
              ((IncrementalStringBuilder *)&local_78,puVar5);
  }
  uVar2 = *(uint *)(*param_2 + 0x23);
  if (((uVar2 & 1) == 0) ||
     (uVar4 = *param_2 & 0xffffffff00000000, uVar14 = uVar4 | uVar2,
     *(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa6)) goto LAB_00f5b3fc;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    uVar14 = *puVar5;
  }
  uVar6 = uVar14 & 0xffffffff00000000;
  uVar14 = uVar6 | *(uint *)(uVar14 + 0xf);
  uVar4 = uVar14;
  if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x5b) {
    uVar4 = uVar6 | *(uint *)(uVar14 + 0xb);
  }
  if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x65) {
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x5b) {
      uVar14 = uVar6 | *(uint *)(uVar14 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar14;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    }
    lVar13 = (long)local_64;
    local_64 = local_64 + 1;
    if (local_70 == 0) {
      *(undefined1 *)(*local_58 + lVar13 + 0xb) = 0x20;
      if (local_64 == local_68) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
      }
      *(undefined1 *)(*local_58 + (long)local_64 + 0xb) = 0x28;
    }
    else {
      *(undefined2 *)(*local_58 + lVar13 * 2 + 0xb) = 0x20;
      if (local_64 == local_68) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
      }
      *(undefined2 *)(*local_58 + (long)local_64 * 2 + 0xb) = 0x28;
    }
    local_64 = local_64 + 1;
    if (local_64 == local_68) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
    }
    uVar4 = *puVar5;
    if ((*(byte *)(uVar4 + 0x2f) >> 1 & 1) == 0) {
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar4;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
      uVar2 = *(uint *)(*puVar5 + 7);
      if (((uVar2 & 1) == 0) ||
         (uVar4 = *puVar5 & 0xffffffff00000000,
         0x3f < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)))) {
        if (local_70 == 0) {
          cVar9 = 'u';
          lVar13 = 1;
          do {
            lVar12 = (long)local_64;
            local_64 = local_64 + 1;
            *(char *)(*local_58 + lVar12 + 0xb) = cVar9;
            if (local_64 == local_68) {
              v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
            }
            cVar9 = "unknown source"[lVar13];
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0xf);
        }
        else {
          uVar10 = 0x75;
          lVar13 = 1;
          do {
            lVar12 = (long)local_64;
            local_64 = local_64 + 1;
            *(ushort *)(*local_58 + lVar12 * 2 + 0xb) = uVar10;
            if (local_64 == local_68) {
              v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
            }
            uVar10 = (ushort)(byte)"unknown source"[lVar13];
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0xf);
        }
      }
      else {
        v8::internal::IncrementalStringBuilder::AppendString
                  ((IncrementalStringBuilder *)&local_78,puVar7);
        local_88 = 0xffffffffffffffff;
        uStack_80 = 0xffffffffffffffff;
        uVar3 = v8::internal::Script::GetEvalPosition(param_1,param_2);
        uVar4 = v8::internal::Script::GetPositionInfo(puVar5,uVar3,&local_88,0);
        if ((uVar4 & 1) != 0) {
          lVar13 = (long)local_64;
          local_64 = local_64 + 1;
          if (local_70 == 0) {
            *(undefined1 *)(*local_58 + lVar13 + 0xb) = 0x3a;
          }
          else {
            *(undefined2 *)(*local_58 + lVar13 * 2 + 0xb) = 0x3a;
          }
          if (local_64 == local_68) {
            v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
          }
          uVar4 = (long)(int)local_88 * 2 + 2;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar4;
          }
          else {
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
          }
          uVar8 = v8::internal::Factory::NumberToString((Factory *)param_1,puVar5,1);
          v8::internal::IncrementalStringBuilder::AppendString
                    ((IncrementalStringBuilder *)&local_78,uVar8);
          lVar13 = (long)local_64;
          local_64 = local_64 + 1;
          if (local_70 == 0) {
            *(undefined1 *)(*local_58 + lVar13 + 0xb) = 0x3a;
          }
          else {
            *(undefined2 *)(*local_58 + lVar13 * 2 + 0xb) = 0x3a;
          }
          if (local_64 == local_68) {
            v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
          }
          uVar4 = (long)local_88._4_4_ * 2 + 2;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar4;
          }
          else {
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
          }
          lVar13 = v8::internal::Factory::NumberToString((Factory *)param_1,puVar5,1);
          goto LAB_00f5b238;
        }
      }
    }
    else {
      lVar13 = FUN_00f5a9f4(param_1,puVar5);
      if (lVar13 == 0) {
        return (ulong *)0x0;
      }
LAB_00f5b238:
      v8::internal::IncrementalStringBuilder::AppendString
                ((IncrementalStringBuilder *)&local_78,lVar13);
    }
  }
  lVar13 = (long)local_64;
  local_64 = local_64 + 1;
  if (local_70 == 0) {
    *(undefined1 *)(*local_58 + lVar13 + 0xb) = 0x29;
  }
  else {
    *(undefined2 *)(*local_58 + lVar13 * 2 + 0xb) = 0x29;
  }
  if (local_64 == local_68) {
    v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_78);
  }
LAB_00f5b3fc:
  puVar5 = (ulong *)v8::internal::IncrementalStringBuilder::Finish
                              ((IncrementalStringBuilder *)&local_78);
  return puVar5;
}

