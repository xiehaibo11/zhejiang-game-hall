
/* v8::internal::wasm::ThreadImpl::DoUnpackException(v8::internal::wasm::WasmException const*,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::wasm::ThreadImpl::DoUnpackException
          (ThreadImpl *this,undefined8 *param_1,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  Isolate *pIVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 local_90;
  StackValue local_80;
  uint uStack_7f;
  undefined4 uStack_7b;
  undefined7 uStack_77;
  undefined1 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar5 = (ulong *)WasmExceptionPackage::GetExceptionValues(*(undefined8 *)(this + 8),param_3);
  plVar15 = (long *)*param_1;
  if (plVar15[1] != 0) {
    uVar16 = 0;
    iVar17 = 0;
    puVar11 = (ulong *)((ulong)&local_80 | 1);
    puVar14 = (undefined8 *)((ulong)&local_80 | 5);
    do {
      switch(*(undefined1 *)(plVar15[2] + *plVar15 + uVar16)) {
      case 1:
        uVar10 = *(uint *)(*puVar5 + 7 + (long)(iVar17 * 4));
        uVar7 = *(uint *)(*puVar5 + 7 + (long)(iVar17 * 4 + 4));
        local_80 = (StackValue)0x1;
        goto LAB_01222954;
      case 2:
        iVar3 = iVar17 * 4;
        lVar1 = *puVar5 + 7;
        uVar10 = *(uint *)(lVar1 + iVar3);
        uVar7 = *(uint *)(lVar1 + (iVar3 + 4));
        uVar12 = *(uint *)(lVar1 + (iVar3 + 8));
        uVar2 = *(uint *)(lVar1 + (iVar3 + 0xc));
        local_80 = (StackValue)0x2;
        goto LAB_01222b08;
      case 3:
        uVar10 = *(uint *)(*puVar5 + 7 + (long)(iVar17 * 4));
        uVar7 = *(uint *)(*puVar5 + 7 + (long)(iVar17 * 4 + 4));
        local_80 = (StackValue)0x3;
LAB_01222954:
        uStack_7f = (uVar10 & 0x1fffe) << 0xf | uVar7 >> 1 & 0xffff;
        *(undefined4 *)(puVar14 + 1) = 0;
        *puVar14 = 0;
        uStack_b8 = CONCAT71(uStack_77,uStack_7b._3_1_);
        local_c0 = CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,local_80));
        iVar17 = iVar17 + 2;
        break;
      case 4:
        iVar3 = iVar17 * 4;
        lVar1 = *puVar5 + 7;
        uVar10 = *(uint *)(lVar1 + iVar3);
        uVar7 = *(uint *)(lVar1 + (iVar3 + 4));
        uVar12 = *(uint *)(lVar1 + (iVar3 + 8));
        uVar2 = *(uint *)(lVar1 + (iVar3 + 0xc));
        local_80 = (StackValue)0x4;
LAB_01222b08:
        uStack_7b = (uVar10 & 0x1fffe) << 0xf | uVar7 >> 1 & 0xffff;
        uStack_7f = (uVar12 & 0x1fffe) << 0xf | uVar2 >> 1 & 0xffff;
        uStack_77 = 0;
        uStack_70 = 0;
        uStack_b8 = (ulong)((uVar10 & 0x1fffe) >> 9);
        local_c0 = CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,local_80));
        iVar17 = iVar17 + 4;
        break;
      case 5:
        iVar3 = iVar17 * 4;
        lVar1 = *puVar5 + 7;
        uVar10 = *(uint *)(lVar1 + iVar3);
        uVar7 = *(uint *)(lVar1 + (iVar3 + 4));
        uVar12 = *(uint *)(lVar1 + (iVar3 + 8));
        uVar2 = *(uint *)(lVar1 + (iVar3 + 0xc));
        iVar17 = iVar17 + 8;
        local_80 = (StackValue)0x5;
        puVar11[1] = (ulong)((*(uint *)(lVar1 + (iVar3 + 0x10)) & 0x1fffe) << 0xf) |
                     (ulong)(*(uint *)(lVar1 + (iVar3 + 0x14)) >> 1) & 0xffff |
                     (ulong)((*(uint *)(lVar1 + (iVar3 + 0x18)) & 0x1fffe) << 0xf |
                            *(uint *)(lVar1 + (iVar3 + 0x1c)) >> 1 & 0xffff) << 0x20;
        *puVar11 = (ulong)((uVar10 & 0x1fffe) << 0xf) | (ulong)(uVar7 >> 1) & 0xffff |
                   (ulong)((uVar12 & 0x1fffe) << 0xf | uVar2 >> 1 & 0xffff) << 0x20;
        uStack_b8 = CONCAT71(uStack_77,uStack_7b._3_1_);
        local_c0 = CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,5));
        break;
      case 6:
      case 7:
      case 9:
        iVar3 = iVar17 << 2;
        iVar17 = iVar17 + 1;
        pIVar9 = *(Isolate **)(this + 8);
        uVar13 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + (long)iVar3 + 7);
        if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar9 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar9);
          }
          *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar13;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar13);
        }
        local_80 = (StackValue)0x6;
        uStack_77 = 0;
        uStack_70 = 0;
        uStack_7f = (uint)puVar6;
        uStack_7b = (uint)((ulong)puVar6 >> 0x20);
        uVar10 = uStack_7b;
        uStack_b8 = (ulong)puVar6 >> 0x38;
        uStack_7b._0_3_ = (undefined3)((ulong)puVar6 >> 0x20);
        local_c0 = CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,6));
        uStack_7b = uVar10;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uStack_98 = uStack_b8;
      local_a0 = local_c0;
      local_90 = uStack_70;
      StackValue::StackValue
                (&local_80,&local_a0,this,
                 (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
      puVar8 = *(undefined8 **)(this + 0x28);
      uVar16 = uVar16 + 1;
      *(long *)(this + 0x28) = (long)puVar8 + 0x11;
      *(undefined1 *)(puVar8 + 2) = uStack_70;
      puVar8[1] = CONCAT71(uStack_77,uStack_7b._3_1_);
      *puVar8 = CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,local_80));
    } while (uVar16 < (ulong)plVar15[1]);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

