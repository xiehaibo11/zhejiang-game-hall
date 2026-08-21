
/* bool v8::internal::wasm::ThreadImpl::ExecuteLoad<long, unsigned
   char>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*,
   v8::internal::MachineRepresentation, int) */

bool __thiscall
v8::internal::wasm::ThreadImpl::ExecuteLoad<long,unsigned_char>
          (ThreadImpl *this,undefined8 param_2_00,long *param_2,ulong param_3,int *param_4,
          undefined1 param_6,int param_7)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint7 uStack_b7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  uint5 local_80;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar6 = param_2[8] + param_3 + (long)param_7;
  if (*(char *)(lVar6 + 1) < '\0') {
    if (*(char *)(lVar6 + 2) < '\0') {
      if (*(char *)(lVar6 + 3) < '\0') {
        uVar8 = 4;
        if (*(char *)(lVar6 + 4) < '\0') {
          uVar8 = 5;
        }
      }
      else {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = 2;
    }
  }
  else {
    uVar8 = 1;
  }
  pbVar1 = (byte *)((char *)(lVar6 + 1) + uVar8);
  uVar10 = *pbVar1 & 0x7f;
  if ((char)*pbVar1 < '\0') {
    uVar10 = uVar10 | (pbVar1[1] & 0x7f) << 7;
    if ((char)pbVar1[1] < '\0') {
      uVar10 = uVar10 | (pbVar1[2] & 0x7f) << 0xe;
      if ((char)pbVar1[2] < '\0') {
        uVar10 = uVar10 | (pbVar1[3] & 0x7f) << 0x15;
        if ((char)pbVar1[3] < '\0') {
          iVar9 = 5;
          uVar10 = uVar10 | (uint)pbVar1[4] << 0x1c;
        }
        else {
          iVar9 = 4;
        }
      }
      else {
        iVar9 = 3;
      }
    }
    else {
      iVar9 = 2;
    }
  }
  else {
    iVar9 = 1;
  }
  lVar6 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar6 + -0x11;
  local_70 = *(undefined1 *)(lVar6 + -1);
  uStack_78 = *(undefined8 *)(lVar6 + -9);
  _local_80 = *(undefined8 *)(lVar6 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  uVar2 = local_a0._1_4_ + uVar10;
  if (!CARRY4(local_a0._1_4_,uVar10)) {
    lVar6 = **(long **)(this + 0x10);
    if (((*(long *)(lVar6 + 0x13) != 0) && ((ulong)uVar2 <= *(long *)(lVar6 + 0x13) - 1U)) &&
       (pbVar1 = (byte *)((*(ulong *)(lVar6 + 0x1b) & (ulong)uVar2) + *(long *)(lVar6 + 0xb)),
       pbVar1 != (byte *)0x0)) {
      uStack_b7 = (uint7)*pbVar1;
      uStack_98 = 0;
      local_a0 = CONCAT71(uStack_b7,2);
      local_90 = 0;
      StackValue::StackValue
                ((StackValue *)&local_80,&local_a0,this,
                 (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
      uVar4 = _local_80;
      puVar7 = *(undefined8 **)(this + 0x28);
      *(long *)(this + 0x28) = (long)puVar7 + 0x11;
      *(undefined1 *)(puVar7 + 2) = local_70;
      puVar7[1] = uStack_78;
      *puVar7 = _local_80;
      *param_4 = iVar9 + uVar8 + *param_4;
      if (FLAG_trace_wasm_memory != '\0') {
        uStack_7a = SUB82(uVar4,6);
        _local_80 = CONCAT15(param_6,(uint5)uVar2);
        TraceMemoryOperation
                  (1,&local_80,*(undefined4 *)(*param_2 + 8),param_3 & 0xffffffff,
                   *(undefined8 *)(**(long **)(this + 0x10) + 0xb));
      }
      bVar5 = true;
      goto LAB_01224608;
    }
  }
  *(undefined4 *)(this + 0x58) = 4;
  bVar5 = false;
  *(undefined4 *)(this + 0x68) = 1;
  *(ulong *)(*(long *)(this + 0x40) + -0x10) = param_3;
LAB_01224608:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

