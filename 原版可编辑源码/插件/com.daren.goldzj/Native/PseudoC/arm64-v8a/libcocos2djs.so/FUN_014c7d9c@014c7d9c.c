
Isolate * FUN_014c7d9c(Isolate *param_1,int param_2,long param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  char cVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong local_88;
  int local_80;
  int local_78;
  int local_74;
  long *local_68;
  
  puVar15 = (ulong *)(param_3 - (param_2 * 8 + -0x10));
  pIVar8 = param_1 + 0x95a0;
  local_88 = *puVar15 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar15 + 0xf);
  uVar4 = v8::internal::Context::global_proxy((Context *)&local_88);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar8;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar8 = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  uVar4 = v8::internal::Builtins::AllowDynamicFunction(param_1,puVar15,puVar5);
  if ((uVar4 & 1) == 0) {
    v8::internal::Isolate::CountUsage(param_1,0x23);
    return param_1 + 0xa0;
  }
  v8::internal::IncrementalStringBuilder::IncrementalStringBuilder
            ((IncrementalStringBuilder *)&local_88,param_1);
  lVar12 = (long)local_74;
  local_74 = local_74 + 1;
  if (local_80 == 0) {
    *(undefined1 *)(*local_68 + lVar12 + 0xb) = 0x28;
  }
  else {
    *(undefined2 *)(*local_68 + lVar12 * 2 + 0xb) = 0x28;
  }
  if (local_74 == local_78) {
    v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
  }
  uVar11 = (ushort)*param_4;
  uVar2 = param_2 - 5;
  if (local_80 == 0) {
    if (uVar11 != 0) {
      do {
        param_4 = param_4 + 1;
        lVar12 = (long)local_74;
        local_74 = local_74 + 1;
        *(char *)(*local_68 + lVar12 + 0xb) = (char)uVar11;
        if (local_74 == local_78) {
          v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
        }
        uVar11 = (ushort)*param_4;
      } while (uVar11 != 0);
      goto LAB_014c7f70;
    }
LAB_014c7fcc:
    cVar10 = ' ';
    lVar12 = 1;
    do {
      lVar14 = (long)local_74;
      local_74 = local_74 + 1;
      *(char *)(*local_68 + lVar14 + 0xb) = cVar10;
      if (local_74 == local_78) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
      }
      cVar10 = " anonymous("[lVar12];
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xc);
  }
  else {
    if (uVar11 != 0) {
      do {
        param_4 = param_4 + 1;
        lVar12 = (long)local_74;
        local_74 = local_74 + 1;
        *(ushort *)(*local_68 + lVar12 * 2 + 0xb) = uVar11;
        if (local_74 == local_78) {
          v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
        }
        uVar11 = (ushort)*param_4;
      } while (*param_4 != 0);
LAB_014c7f70:
      if (local_80 == 0) goto LAB_014c7fcc;
    }
    uVar11 = 0x20;
    lVar12 = 1;
    do {
      lVar14 = (long)local_74;
      local_74 = local_74 + 1;
      *(ushort *)(*local_68 + lVar14 * 2 + 0xb) = uVar11;
      if (local_74 == local_78) {
        v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
      }
      uVar11 = (ushort)(byte)" anonymous("[lVar12];
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xc);
  }
  if (1 < (int)uVar2) {
    uVar4 = 1;
    uVar16 = 8;
    do {
      if (1 < uVar4) {
        lVar12 = (long)local_74;
        local_74 = local_74 + 1;
        if (local_80 == 0) {
          *(undefined1 *)(*local_68 + lVar12 + 0xb) = 0x2c;
        }
        else {
          *(undefined2 *)(*local_68 + lVar12 * 2 + 0xb) = 0x2c;
        }
        if (local_74 == local_78) {
          v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
        }
      }
      puVar9 = (ulong *)(param_3 - (uVar16 & 0xfffffff8));
      uVar13 = *puVar9;
      if (((uVar13 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))) {
        puVar9 = (ulong *)v8::internal::Object::ConvertToString(param_1);
      }
      if (puVar9 == (ulong *)0x0) {
        return (Isolate *)0x0;
      }
      uVar6 = v8::internal::String::Flatten(param_1,puVar9,0);
      v8::internal::IncrementalStringBuilder::AppendString
                ((IncrementalStringBuilder *)&local_88,uVar6);
      uVar4 = uVar4 + 1;
      uVar16 = uVar16 + 8;
    } while (uVar2 != uVar4);
  }
  lVar12 = (long)local_74;
  local_74 = local_74 + 1;
  if (local_80 == 0) {
    *(undefined1 *)(*local_68 + lVar12 + 0xb) = 10;
  }
  else {
    *(undefined2 *)(*local_68 + lVar12 * 2 + 0xb) = 10;
  }
  if (local_74 == local_78) {
    v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
  }
  uVar3 = v8::internal::IncrementalStringBuilder::Length((IncrementalStringBuilder *)&local_88);
  lVar12 = (long)local_74;
  local_74 = local_74 + 1;
  if (local_80 == 0) {
    *(undefined1 *)(*local_68 + lVar12 + 0xb) = 0x29;
    if (local_74 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    iVar1 = local_74 + 1;
    *(undefined1 *)(*local_68 + (long)local_74 + 0xb) = 0x20;
    local_74 = iVar1;
    if (iVar1 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    iVar1 = local_74 + 1;
    *(undefined1 *)(*local_68 + (long)local_74 + 0xb) = 0x7b;
    local_74 = iVar1;
    if (iVar1 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    *(undefined1 *)(*local_68 + (long)local_74 + 0xb) = 10;
  }
  else {
    *(undefined2 *)(*local_68 + lVar12 * 2 + 0xb) = 0x29;
    if (local_74 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    iVar1 = local_74 + 1;
    *(undefined2 *)(*local_68 + (long)local_74 * 2 + 0xb) = 0x20;
    local_74 = iVar1;
    if (iVar1 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    iVar1 = local_74 + 1;
    *(undefined2 *)(*local_68 + (long)local_74 * 2 + 0xb) = 0x7b;
    local_74 = iVar1;
    if (iVar1 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    *(undefined2 *)(*local_68 + (long)local_74 * 2 + 0xb) = 10;
  }
  local_74 = local_74 + 1;
  if (local_74 == local_78) {
    v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
  }
  if (0 < (int)uVar2) {
    puVar9 = (ulong *)(param_3 - (int)(uVar2 * 8));
    uVar4 = *puVar9;
    if (((uVar4 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
      puVar9 = (ulong *)v8::internal::Object::ConvertToString(param_1);
    }
    if (puVar9 == (ulong *)0x0) {
      return (Isolate *)0x0;
    }
    v8::internal::IncrementalStringBuilder::AppendString((IncrementalStringBuilder *)&local_88);
  }
  lVar12 = (long)local_74;
  local_74 = local_74 + 1;
  if (local_80 == 0) {
    *(undefined1 *)(*local_68 + lVar12 + 0xb) = 10;
    if (local_74 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    iVar1 = local_74 + 1;
    *(undefined1 *)(*local_68 + (long)local_74 + 0xb) = 0x7d;
    local_74 = iVar1;
    if (iVar1 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    *(undefined1 *)(*local_68 + (long)local_74 + 0xb) = 0x29;
  }
  else {
    *(undefined2 *)(*local_68 + lVar12 * 2 + 0xb) = 10;
    if (local_74 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    iVar1 = local_74 + 1;
    *(undefined2 *)(*local_68 + (long)local_74 * 2 + 0xb) = 0x7d;
    local_74 = iVar1;
    if (iVar1 == local_78) {
      v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
    }
    *(undefined2 *)(*local_68 + (long)local_74 * 2 + 0xb) = 0x29;
  }
  local_74 = local_74 + 1;
  if (local_74 == local_78) {
    v8::internal::IncrementalStringBuilder::Extend((IncrementalStringBuilder *)&local_88);
  }
  lVar12 = v8::internal::IncrementalStringBuilder::Finish((IncrementalStringBuilder *)&local_88);
  if (lVar12 != 0) {
    uVar4 = *puVar15 & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*puVar15 + 0xf)) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar8;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar8 = puVar9 + 1;
      *puVar9 = uVar4;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    lVar12 = v8::internal::Compiler::GetFunctionFromString(puVar9,lVar12,1,uVar3);
    if (lVar12 != 0) {
      pIVar7 = (Isolate *)v8::internal::Execution::Call(param_1,lVar12,puVar5,0,0);
      if (pIVar7 == (Isolate *)0x0) {
        return (Isolate *)0x0;
      }
      puVar5 = (ulong *)(param_3 - (param_2 * 8 + -8));
      uVar4 = *(ulong *)pIVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)pIVar7 + 0xb);
      *(uint *)(uVar4 + 0x1b) = *(uint *)(uVar4 + 0x1b) | 0x4000000;
      uVar4 = *puVar5;
      if ((uVar4 & 1) == 0) {
        if (puVar5 == puVar15) {
          return pIVar7;
        }
      }
      else {
        if (puVar5 == puVar15) {
          return pIVar7;
        }
        if ((int)uVar4 == *(int *)(param_1 + 0xa0)) {
          return pIVar7;
        }
      }
      if (((puVar15 != (ulong *)0x0) && (puVar5 != (ulong *)0x0)) && (uVar4 == *puVar15)) {
        return pIVar7;
      }
      lVar12 = v8::internal::JSFunction::GetDerivedMap(param_1,puVar15);
      if (lVar12 != 0) {
        uVar4 = *(ulong *)pIVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)pIVar7 + 0xb);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar15 = *(ulong **)pIVar8;
          if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
            puVar15 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar8 = puVar15 + 1;
          *puVar15 = uVar4;
        }
        else {
          puVar15 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
        }
        uVar6 = v8::internal::Map::AsLanguageMode(param_1,lVar12,puVar15);
        uVar4 = *(ulong *)pIVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)pIVar7 + 0xf);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar8;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar8 = puVar5 + 1;
          *puVar5 = uVar4;
        }
        else {
          puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
        }
        pIVar8 = (Isolate *)
                 v8::internal::Factory::NewFunctionFromSharedFunctionInfo
                           (param_1,uVar6,puVar15,puVar5,0);
        return pIVar8;
      }
    }
  }
  return (Isolate *)0x0;
}

