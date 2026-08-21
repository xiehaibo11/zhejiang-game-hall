
/* bool v8::internal::wasm::ThreadImpl::ExecuteLoad<long, short>(v8::internal::wasm::Decoder*,
   v8::internal::wasm::InterpreterCode*, unsigned long, int*, v8::internal::MachineRepresentation,
   int) */

bool __thiscall
v8::internal::wasm::ThreadImpl::ExecuteLoad<long,short>
          (ThreadImpl *this,undefined8 param_2_00,long *param_2,ulong param_3,int *param_4,
          undefined1 param_6,int param_7)

{
  byte *pbVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int7 iStack_b7;
  byte bStack_b0;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 local_90;
  uint5 local_80;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar8 = param_2[8] + param_3 + (long)param_7;
  if (*(char *)(lVar8 + 1) < '\0') {
    if (*(char *)(lVar8 + 2) < '\0') {
      if (*(char *)(lVar8 + 3) < '\0') {
        uVar10 = 4;
        if (*(char *)(lVar8 + 4) < '\0') {
          uVar10 = 5;
        }
      }
      else {
        uVar10 = 3;
      }
    }
    else {
      uVar10 = 2;
    }
  }
  else {
    uVar10 = 1;
  }
  pbVar1 = (byte *)((char *)(lVar8 + 1) + uVar10);
  uVar12 = *pbVar1 & 0x7f;
  if ((char)*pbVar1 < '\0') {
    uVar12 = uVar12 | (pbVar1[1] & 0x7f) << 7;
    if ((char)pbVar1[1] < '\0') {
      uVar12 = uVar12 | (pbVar1[2] & 0x7f) << 0xe;
      if ((char)pbVar1[2] < '\0') {
        uVar12 = uVar12 | (pbVar1[3] & 0x7f) << 0x15;
        if ((char)pbVar1[3] < '\0') {
          iVar11 = 5;
          uVar12 = uVar12 | (uint)pbVar1[4] << 0x1c;
        }
        else {
          iVar11 = 4;
        }
      }
      else {
        iVar11 = 3;
      }
    }
    else {
      iVar11 = 2;
    }
  }
  else {
    iVar11 = 1;
  }
  lVar8 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar8 + -0x11;
  local_70 = *(undefined1 *)(lVar8 + -1);
  uStack_78 = *(undefined8 *)(lVar8 + -9);
  _local_80 = *(undefined8 *)(lVar8 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  uVar2 = local_a0._1_4_ + uVar12;
  if (!CARRY4(local_a0._1_4_,uVar12)) {
    lVar8 = **(long **)(this + 0x10);
    if (((1 < *(ulong *)(lVar8 + 0x13)) && ((ulong)uVar2 <= *(ulong *)(lVar8 + 0x13) - 2)) &&
       (psVar3 = (short *)((*(ulong *)(lVar8 + 0x1b) & (ulong)uVar2) + *(long *)(lVar8 + 0xb)),
       psVar3 != (short *)0x0)) {
      sVar4 = *psVar3;
      iStack_b7 = (int7)sVar4;
      bStack_b0 = (byte)(sVar4 >> 0xf);
      uStack_98 = (ulong)bStack_b0;
      local_a0 = CONCAT71(iStack_b7,2);
      local_90 = 0;
      StackValue::StackValue
                ((StackValue *)&local_80,&local_a0,this,
                 (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
      uVar6 = _local_80;
      puVar9 = *(undefined8 **)(this + 0x28);
      *(long *)(this + 0x28) = (long)puVar9 + 0x11;
      *(undefined1 *)(puVar9 + 2) = local_70;
      puVar9[1] = uStack_78;
      *puVar9 = _local_80;
      *param_4 = iVar11 + uVar10 + *param_4;
      if (FLAG_trace_wasm_memory != '\0') {
        uStack_7a = SUB82(uVar6,6);
        _local_80 = CONCAT15(param_6,(uint5)uVar2);
        TraceMemoryOperation
                  (1,&local_80,*(undefined4 *)(*param_2 + 8),param_3 & 0xffffffff,
                   *(undefined8 *)(**(long **)(this + 0x10) + 0xb));
      }
      bVar7 = true;
      goto LAB_012248d0;
    }
  }
  *(undefined4 *)(this + 0x58) = 4;
  bVar7 = false;
  *(undefined4 *)(this + 0x68) = 1;
  *(ulong *)(*(long *)(this + 0x40) + -0x10) = param_3;
LAB_012248d0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}

