
/* bool v8::internal::wasm::ThreadImpl::ExecuteStore<v8::internal::wasm::Simd128,
   v8::internal::wasm::Simd128>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*,
   unsigned long, int*, v8::internal::MachineRepresentation, int) */

bool __thiscall
v8::internal::wasm::ThreadImpl::
ExecuteStore<v8::internal::wasm::Simd128,v8::internal::wasm::Simd128>
          (ThreadImpl *this,undefined8 param_2_00,long *param_2,ulong param_3,int *param_4,
          undefined1 param_6,int param_7)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint local_97;
  undefined4 uStack_93;
  undefined8 local_8f;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = param_2[8] + param_3 + (long)param_7;
  if (*(char *)(lVar5 + 1) < '\0') {
    if (*(char *)(lVar5 + 2) < '\0') {
      if (*(char *)(lVar5 + 3) < '\0') {
        uVar6 = 4;
        if (*(char *)(lVar5 + 4) < '\0') {
          uVar6 = 5;
        }
      }
      else {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 1;
  }
  pbVar1 = (byte *)((char *)(lVar5 + 1) + uVar6);
  uVar9 = *pbVar1 & 0x7f;
  if ((char)*pbVar1 < '\0') {
    uVar9 = uVar9 | (pbVar1[1] & 0x7f) << 7;
    if ((char)pbVar1[1] < '\0') {
      uVar9 = uVar9 | (pbVar1[2] & 0x7f) << 0xe;
      if ((char)pbVar1[2] < '\0') {
        uVar9 = uVar9 | (pbVar1[3] & 0x7f) << 0x15;
        if ((char)pbVar1[3] < '\0') {
          iVar8 = 5;
          uVar9 = uVar9 | (uint)pbVar1[4] << 0x1c;
        }
        else {
          iVar8 = 4;
        }
      }
      else {
        iVar8 = 3;
      }
    }
    else {
      iVar8 = 2;
    }
  }
  else {
    iVar8 = 1;
  }
  lVar5 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar5 + -0x11;
  local_70 = *(undefined1 *)(lVar5 + -1);
  uStack_78 = *(undefined8 *)(lVar5 + -9);
  local_80 = *(undefined8 *)(lVar5 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  lVar5 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar5 + -0x11;
  local_70 = *(undefined1 *)(lVar5 + -1);
  uStack_78 = *(undefined8 *)(lVar5 + -9);
  local_80 = *(undefined8 *)(lVar5 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  uVar2 = local_97 + uVar9;
  if (!CARRY4(local_97,uVar9)) {
    lVar5 = **(long **)(this + 0x10);
    if (((0xf < *(ulong *)(lVar5 + 0x13)) && ((ulong)uVar2 <= *(ulong *)(lVar5 + 0x13) - 0x10)) &&
       (puVar3 = (undefined8 *)((*(ulong *)(lVar5 + 0x1b) & (ulong)uVar2) + *(long *)(lVar5 + 0xb)),
       puVar3 != (undefined8 *)0x0)) {
      uStack_78 = local_8f;
      bVar7 = true;
      puVar3[1] = local_8f;
      *puVar3 = CONCAT44(uStack_93,local_97);
      *param_4 = iVar8 + uVar6 + *param_4;
      local_80 = CONCAT44(uStack_93,local_97);
      if (FLAG_trace_wasm_memory != '\0') {
        local_80._6_2_ = (undefined2)((uint)uStack_93 >> 0x10);
        local_80._0_6_ = CONCAT15(param_6,CONCAT14(1,uVar2));
        TraceMemoryOperation
                  (1,&local_80,*(undefined4 *)(*param_2 + 8),param_3 & 0xffffffff,
                   *(undefined8 *)(**(long **)(this + 0x10) + 0xb));
      }
      goto LAB_0124138c;
    }
  }
  *(undefined4 *)(this + 0x58) = 4;
  bVar7 = false;
  *(undefined4 *)(this + 0x68) = 1;
  *(ulong *)(*(long *)(this + 0x40) + -0x10) = param_3;
LAB_0124138c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}

