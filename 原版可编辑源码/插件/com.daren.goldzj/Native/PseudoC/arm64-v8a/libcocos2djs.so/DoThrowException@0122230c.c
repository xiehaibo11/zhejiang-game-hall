
/* v8::internal::wasm::ThreadImpl::DoThrowException(v8::internal::wasm::WasmException const*,
   unsigned int) */

void __thiscall
v8::internal::wasm::ThreadImpl::DoThrowException
          (ThreadImpl *this,WasmException *param_1,uint param_2)

{
  undefined8 uVar1;
  Isolate *pIVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  Isolate *pIVar18;
  ulong uVar19;
  long *plVar20;
  uint local_7f;
  uint uStack_7b;
  ulong local_77;
  
  lVar5 = tpidr_el0;
  lVar11 = *(long *)(lVar5 + 0x28);
  pIVar18 = *(Isolate **)(this + 8);
  uVar1 = *(undefined8 *)(pIVar18 + 0x95a0);
  lVar3 = *(long *)(pIVar18 + 0x95a8);
  *(int *)(pIVar18 + 0x95b0) = *(int *)(pIVar18 + 0x95b0) + 1;
  pIVar2 = *(Isolate **)(this + 8);
  uVar16 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
  uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)(**(ulong **)(this + 0x10) + 0x9b)) +
                              (long)(int)(param_2 << 2) + 7);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar16;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar16);
  }
  uVar6 = WasmExceptionPackage::GetEncodedSize(param_1);
  puVar9 = (undefined8 *)WasmExceptionPackage::New(*(undefined8 *)(this + 8),puVar8,uVar6);
  puVar8 = (ulong *)WasmExceptionPackage::GetExceptionValues(*(undefined8 *)(this + 8),puVar9);
  plVar20 = *(long **)param_1;
  lVar15 = *(long *)(this + 0x28);
  lVar12 = *(long *)(this + 0x18);
  lVar14 = lVar15 - lVar12;
  if (plVar20[1] == 0) {
    uVar16 = 0;
LAB_012226b8:
    iVar7 = (int)lVar14 * -0xf0f0f0f;
    iVar10 = (int)uVar16;
    if (0 < iVar10) {
      lVar12 = (long)iVar7 - (long)(iVar7 - iVar10);
      uVar4 = *(uint *)(**(ulong **)(this + 0x30) + 3);
      uVar16 = **(ulong **)(this + 0x30) & 0xffffffff00000000;
      iVar7 = (int)lVar14 * -0x3c3c3c3c + iVar10 * -4;
      do {
        lVar12 = lVar12 + -1;
        *(undefined4 *)((uVar16 | uVar4) + 7 + (long)iVar7) = *(undefined4 *)(uVar16 + 0xa8);
        iVar7 = iVar7 + 4;
      } while (lVar12 != 0);
      lVar15 = *(long *)(this + 0x28);
    }
    *(long *)(this + 0x28) = lVar15 + (long)iVar10 * -0x11;
    Isolate::Throw(*(Isolate **)(this + 8),*puVar9,0);
    iVar7 = HandleException(this,*(Isolate **)(this + 8));
    if (pIVar18 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar18 + 0x95a0) = uVar1;
      *(int *)(pIVar18 + 0x95b0) = *(int *)(pIVar18 + 0x95b0) + -1;
      if (*(long *)(pIVar18 + 0x95a8) != lVar3) {
        *(long *)(pIVar18 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar18);
      }
    }
    if (*(long *)(lVar5 + 0x28) == lVar11) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7 == 0);
  }
  uVar19 = 0;
  iVar7 = 0;
  lVar14 = lVar14 + plVar20[1] * -0x11;
  do {
    StackValue::ExtractValue((ThreadImpl *)(lVar12 + lVar14),(ulong)this);
    switch(*(undefined1 *)(plVar20[2] + *plVar20 + uVar19)) {
    case 1:
    case 3:
      iVar10 = iVar7 * 4;
      iVar7 = iVar7 + 2;
      *(uint *)(*puVar8 + (long)iVar10 + 7) = local_7f >> 0xf & 0x1fffe;
      uVar16 = *puVar8;
      iVar10 = iVar10 + 4;
      goto LAB_0122259c;
    case 2:
    case 4:
      iVar10 = iVar7 * 4;
      *(uint *)(*puVar8 + (long)iVar10 + 7) = uStack_7b >> 0xf & 0x1fffe;
      iVar7 = iVar7 + 4;
      *(uint *)(*puVar8 + (long)(iVar10 + 4) + 7) =
           (uint)(CONCAT44(uStack_7b,local_7f) >> 0x1f) & 0x1fffe;
      *(uint *)(*puVar8 + (long)(iVar10 + 8) + 7) =
           (uint)(CONCAT44(uStack_7b,local_7f) >> 0xf) & 0x1fffe;
      uVar16 = *puVar8;
      iVar10 = iVar10 + 0xc;
LAB_0122259c:
      *(uint *)(uVar16 + (long)iVar10 + 7) = (local_7f & 0xffff) << 1;
      break;
    case 5:
      iVar10 = iVar7 * 4;
      *(uint *)(*puVar8 + (long)iVar10 + 7) = (uint)(CONCAT44(uStack_7b,local_7f) >> 0xf) & 0x1fffe;
      iVar7 = iVar7 + 8;
      *(uint *)(*puVar8 + (long)(iVar10 + 4) + 7) = (local_7f & 0xffff) << 1;
      *(uint *)(*puVar8 + (long)(iVar10 + 8) + 7) = uStack_7b >> 0xf & 0x1fffe;
      *(uint *)(*puVar8 + (long)(iVar10 + 0xc) + 7) =
           (uint)(CONCAT44(uStack_7b,local_7f) >> 0x1f) & 0x1fffe;
      *(uint *)(*puVar8 + (long)(iVar10 + 0x10) + 7) = (uint)(local_77 >> 0xf) & 0x1fffe;
      *(uint *)(*puVar8 + (long)(iVar10 + 0x14) + 7) = ((uint)local_77 & 0xffff) << 1;
      *(uint *)(*puVar8 + (long)(iVar10 + 0x18) + 7) = (uint)(local_77 >> 0x2f) & 0x1fffe;
      *(uint *)(*puVar8 + (long)(iVar10 + 0x1c) + 7) = (uint)(local_77 >> 0x1f) & 0x1fffe;
      break;
    case 6:
    case 7:
    case 9:
      uVar16 = *puVar8;
      iVar10 = iVar7 + 1;
      uVar17 = *(ulong *)CONCAT44(uStack_7b,local_7f);
      lVar12 = uVar16 + (long)(iVar7 << 2);
      *(int *)(lVar12 + 7) = (int)uVar17;
      iVar7 = iVar10;
      if ((uVar17 & 1) != 0) {
        uVar13 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        lVar12 = lVar12 + 7;
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar16,lVar12,uVar17);
          uVar13 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar16,lVar12,uVar17);
        }
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar16 = plVar20[1];
    uVar19 = uVar19 + 1;
    if (uVar16 <= uVar19) {
      lVar15 = *(long *)(this + 0x28);
      lVar14 = lVar15 - *(long *)(this + 0x18);
      goto LAB_012226b8;
    }
    lVar12 = *(long *)(this + 0x18);
    lVar14 = lVar14 + 0x11;
  } while( true );
}

