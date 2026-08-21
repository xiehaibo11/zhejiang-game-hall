
/* bool v8::internal::wasm::ThreadImpl::ExecuteStore<int, short>(v8::internal::wasm::Decoder*,
   v8::internal::wasm::InterpreterCode*, unsigned long, int*, v8::internal::MachineRepresentation,
   int) */

bool __thiscall
v8::internal::wasm::ThreadImpl::ExecuteStore<int,short>
          (ThreadImpl *this,undefined8 param_2_00,long *param_2,ulong param_3,int *param_4,
          undefined1 param_6,int param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint local_97;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar6 = param_2[8] + param_3 + (long)param_7;
  if (*(char *)(lVar6 + 1) < '\0') {
    if (*(char *)(lVar6 + 2) < '\0') {
      if (*(char *)(lVar6 + 3) < '\0') {
        uVar7 = 4;
        if (*(char *)(lVar6 + 4) < '\0') {
          uVar7 = 5;
        }
      }
      else {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  pbVar1 = (byte *)((char *)(lVar6 + 1) + uVar7);
  uVar9 = *pbVar1 & 0x7f;
  if ((char)*pbVar1 < '\0') {
    uVar9 = uVar9 | (pbVar1[1] & 0x7f) << 7;
    if ((char)pbVar1[1] < '\0') {
      uVar9 = uVar9 | (pbVar1[2] & 0x7f) << 0xe;
      if ((char)pbVar1[2] < '\0') {
        uVar9 = uVar9 | (pbVar1[3] & 0x7f) << 0x15;
        if ((char)pbVar1[3] < '\0') {
          iVar10 = 5;
          uVar9 = uVar9 | (uint)pbVar1[4] << 0x1c;
        }
        else {
          iVar10 = 4;
        }
      }
      else {
        iVar10 = 3;
      }
    }
    else {
      iVar10 = 2;
    }
  }
  else {
    iVar10 = 1;
  }
  lVar6 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar6 + -0x11;
  local_70 = *(undefined1 *)(lVar6 + -1);
  uStack_78 = *(undefined8 *)(lVar6 + -9);
  local_80 = *(undefined8 *)(lVar6 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  lVar6 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar6 + -0x11;
  local_70 = *(undefined1 *)(lVar6 + -1);
  uStack_78 = *(undefined8 *)(lVar6 + -9);
  local_80 = *(undefined8 *)(lVar6 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  uVar5 = local_80;
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  uVar2 = local_97 + uVar9;
  if (!CARRY4(local_97,uVar9)) {
    lVar6 = **(long **)(this + 0x10);
    if (((1 < *(ulong *)(lVar6 + 0x13)) && ((ulong)uVar2 <= *(ulong *)(lVar6 + 0x13) - 2)) &&
       (puVar3 = (undefined2 *)((*(ulong *)(lVar6 + 0x1b) & (ulong)uVar2) + *(long *)(lVar6 + 0xb)),
       puVar3 != (undefined2 *)0x0)) {
      *puVar3 = (short)local_97;
      *param_4 = iVar10 + uVar7 + *param_4;
      bVar8 = true;
      if (FLAG_trace_wasm_memory != '\0') {
        local_80._6_2_ = SUB82(uVar5,6);
        local_80._0_6_ = CONCAT15(param_6,CONCAT14(1,uVar2));
        TraceMemoryOperation
                  (1,&local_80,*(undefined4 *)(*param_2 + 8),param_3 & 0xffffffff,
                   *(undefined8 *)(**(long **)(this + 0x10) + 0xb));
      }
      goto LAB_0122628c;
    }
  }
  *(undefined4 *)(this + 0x58) = 4;
  bVar8 = false;
  *(undefined4 *)(this + 0x68) = 1;
  *(ulong *)(*(long *)(this + 0x40) + -0x10) = param_3;
LAB_0122628c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}

