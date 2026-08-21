
void FUN_01036de0(Isolate *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  Isolate *pIVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  CanonicalHandleScope *this;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_90;
  Descriptor aDStack_88 [32];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pIVar3 = param_1 + 0x95a0;
  puVar7 = (ulong *)FUN_0103cd68();
  *(undefined2 *)((*puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0xb)) + 0x15) = 0xffff;
  *(undefined2 *)((*puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0xb)) + 0x13) = 1;
  if (param_4 == 0xd6) {
    FUN_01029064(param_1,puVar7,"captureStackTrace",0x138,2,0,2);
  }
  FUN_010369f8(param_1,puVar7,param_4);
  uVar11 = *puVar7 & 0xffffffff00000000;
  uVar13 = uVar11 | *(uint *)(*puVar7 + 0x1b);
  if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xa2) {
    uVar13 = uVar11 | *(uint *)(uVar13 + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar3;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar8 + 1;
    *puVar8 = uVar13;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
  }
  v8::internal::JSObject::AddProperty(param_1,puVar8,param_1 + 0x820,param_3,2);
  v8::internal::JSObject::AddProperty(param_1,puVar8,param_1 + 0x7f8,param_1 + 200,2);
  if (param_4 == 0xd6) {
    puVar9 = (ulong *)FUN_01029064(param_1,puVar8,"toString",0x139,0,1,2);
    uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar3;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar10 + 1;
      *puVar10 = uVar11;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar10;
    }
    uVar13 = *puVar9;
    puVar2 = (undefined4 *)(uVar11 + 0x363);
    *puVar2 = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar11,puVar2,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar11,puVar2,uVar13);
      }
    }
    uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar3;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar9 + 1;
      *puVar9 = uVar11;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar9;
    }
    uVar13 = *puVar8;
    *(int *)(uVar11 + 0xeb) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xeb,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xeb,uVar13);
      }
    }
    goto LAB_010372b0;
  }
  uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x363);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar3;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar9 + 1;
    *puVar9 = uVar11;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  v8::internal::JSObject::AddProperty(param_1,puVar8,param_1 + 0xa68,puVar9,2);
  uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x35f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar3;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar9 + 1;
    *puVar9 = uVar11;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  uVar6 = v8::internal::JSReceiver::SetPrototype(puVar7,puVar9,0,0);
  if ((uVar6 < 0x100) || ((uVar6 & 0xff) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "JSReceiver::SetPrototype(error_fun, global_error, false, kThrowOnError) .FromMaybe(false)"
            );
  }
  uVar13 = *puVar9;
  uVar11 = uVar13 & 0xffffffff00000000;
  if ((*(byte *)((uVar11 | 9) + (ulong)*(uint *)(uVar13 - 1)) & 1) == 0) {
    uVar13 = uVar11 | *(uint *)(uVar13 + 0x1b);
    if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) goto LAB_01037250;
    uVar13 = uVar11 | *(uint *)(uVar13 + 0xf);
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (this != (CanonicalHandleScope *)0x0) goto LAB_01037258;
LAB_01037268:
    puVar9 = *(ulong **)pIVar3;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar9 + 1;
    *puVar9 = uVar13;
  }
  else {
    uVar4 = *(uint *)((uVar11 | 0x13) + (ulong)*(uint *)(uVar13 - 1));
    uVar13 = uVar11 | uVar4;
    if ((uVar4 & 1) != 0) {
      do {
        if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar13 + 0x13);
        uVar13 = uVar11 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
LAB_01037250:
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (this == (CanonicalHandleScope *)0x0) goto LAB_01037268;
LAB_01037258:
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar13);
  }
  uVar6 = v8::internal::JSReceiver::SetPrototype(puVar8,puVar9,0,0);
  if ((uVar6 < 0x100) || ((uVar6 & 0xff) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "JSReceiver::SetPrototype(prototype, handle(global_error->prototype(), isolate), false, kThrowOnError) .FromMaybe(false)"
            );
  }
LAB_010372b0:
  uVar11 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x1b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar3;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar11;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  v8::internal::Map::EnsureDescriptorSlack(param_1,puVar7,1);
  uVar11 = *(ulong *)(param_1 + 0xe38) & 0xffffffff00000000 |
           (ulong)*(uint *)(*(ulong *)(param_1 + 0xe38) + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar3;
    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar8 + 1;
    *puVar8 = uVar11;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  v8::internal::Descriptor::AccessorConstant(aDStack_88,puVar8,param_1 + 0xe38,2);
  local_90 = *puVar7;
  v8::internal::Map::AppendDescriptor((Map *)&local_90,param_1,aDStack_88);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

