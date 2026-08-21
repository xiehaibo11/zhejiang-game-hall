
/* v8::internal::wasm::ThreadImpl::HandleException(v8::internal::Isolate*) */

void __thiscall v8::internal::wasm::ThreadImpl::HandleException(ThreadImpl *this,Isolate *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined7 uStack_a7;
  undefined8 local_90;
  ulong uStack_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(this + 0x38);
  lVar17 = *(long *)(this + 0x40);
  lVar5 = *(long *)(this + 0x80);
  uVar7 = (ulong)*(uint *)(lVar5 + -0x10);
  uVar10 = (lVar17 - lVar8 >> 3) * -0x5555555555555555;
  if (uVar7 <= uVar10 && uVar10 - uVar7 != 0) {
    do {
      lVar11 = *(long *)(lVar17 + -0x18);
      uVar7 = *(ulong *)(lVar17 + -0x10);
      plVar12 = (long *)(*(long *)(lVar11 + 0x50) + 8);
      plVar15 = (long *)*plVar12;
      plVar16 = plVar12;
      if (plVar15 != (long *)0x0) {
        do {
          if ((ulong)plVar15[4] >= uVar7) {
            plVar16 = plVar15;
          }
          plVar15 = (long *)plVar15[(ulong)plVar15[4] < uVar7];
        } while (plVar15 != (long *)0x0);
        if ((plVar16 != plVar12) && ((ulong)plVar16[4] <= uVar7)) {
          uVar7 = *(ulong *)(param_1 + 0x2bd8);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(param_1 + 0x95a0);
            if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar7;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
          }
          uStack_a7 = SUB87(puVar4,0);
          uStack_88 = (ulong)puVar4 >> 0x38;
          local_90 = CONCAT71(uStack_a7,6);
          local_80 = 0;
          StackValue::StackValue
                    ((StackValue *)&local_70,&local_90,this,
                     (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
          puVar6 = *(undefined8 **)(this + 0x28);
          *(long *)(this + 0x28) = (long)puVar6 + 0x11;
          *(undefined1 *)(puVar6 + 2) = local_60;
          puVar6[1] = uStack_68;
          *puVar6 = local_70;
          *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
          uVar7 = *(ulong *)(lVar17 + -0x10);
          plVar12 = (long *)(*(long *)(lVar11 + 0x50) + 8);
          plVar15 = (long *)*plVar12;
          plVar16 = plVar12;
          if (plVar15 != (long *)0x0) goto LAB_0123eca4;
          goto LAB_0123ecd0;
        }
      }
      lVar13 = *(long *)(this + 0x18);
      lVar11 = *(long *)(lVar17 + -8);
      iVar14 = ((int)*(undefined8 *)(this + 0x28) - (int)lVar13) * -0xf0f0f0f;
      iVar9 = (int)lVar11;
      if (0 < iVar14 - iVar9) {
        lVar8 = (long)iVar14 - (long)iVar9;
        uVar1 = *(uint *)(**(ulong **)(this + 0x30) + 3);
        uVar7 = **(ulong **)(this + 0x30) & 0xffffffff00000000;
        iVar9 = iVar9 << 2;
        do {
          lVar8 = lVar8 + -1;
          *(undefined4 *)((uVar7 | uVar1) + 7 + (long)iVar9) = *(undefined4 *)(uVar7 + 0xa8);
          iVar9 = iVar9 + 4;
        } while (lVar8 != 0);
        lVar13 = *(long *)(this + 0x18);
        lVar8 = *(long *)(this + 0x38);
        lVar17 = *(long *)(this + 0x40);
      }
      lVar17 = lVar17 + -0x18;
      *(long *)(this + 0x28) = lVar13 + lVar11 * 0x11;
      *(long *)(this + 0x40) = lVar17;
      uVar7 = (ulong)*(uint *)(lVar5 + -0x10);
      uVar10 = (lVar17 - lVar8 >> 3) * -0x5555555555555555;
    } while (uVar7 <= uVar10 && uVar10 - uVar7 != 0);
  }
  uVar3 = 1;
  *(undefined4 *)(this + 0x58) = 0;
LAB_0123ebc0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
LAB_0123eca4:
  do {
    if ((ulong)plVar15[4] >= uVar7) {
      plVar16 = plVar15;
    }
    plVar15 = (long *)plVar15[(ulong)plVar15[4] < uVar7];
  } while (plVar15 != (long *)0x0);
  if ((plVar16 == plVar12) || (uVar7 < (ulong)plVar16[4])) {
LAB_0123ecd0:
    plVar16 = plVar12;
  }
  DoStackTransfer(this,*(int *)((long)plVar16 + 0x2c) + 1,(ulong)*(uint *)(plVar16 + 6));
  uVar3 = 0;
  *(long *)(lVar17 + -0x10) = *(long *)(lVar17 + -0x10) + (long)(int)plVar16[5];
  goto LAB_0123ebc0;
}

