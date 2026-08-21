
/* bool v8::internal::wasm::ThreadImpl::ExtractAtomicOpParams<unsigned short, unsigned
   long>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long*,
   unsigned long, int*, unsigned short*, unsigned short*) */

bool __thiscall
v8::internal::wasm::ThreadImpl::ExtractAtomicOpParams<unsigned_short,unsigned_long>
          (ThreadImpl *this,Decoder *param_1,InterpreterCode *param_2,ulong *param_3,ulong param_4,
          int *param_5,ushort *param_6,ushort *param_7)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_97;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar4 = param_4 + *(long *)(param_2 + 0x40);
  if (*(char *)(lVar4 + 2) < '\0') {
    if (*(char *)(lVar4 + 3) < '\0') {
      if (*(char *)(lVar4 + 4) < '\0') {
        uVar6 = 4;
        if (*(char *)(lVar4 + 5) < '\0') {
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
  pbVar1 = (byte *)((char *)(lVar4 + 2) + uVar6);
  uVar2 = *pbVar1 & 0x7f;
  if ((char)*pbVar1 < '\0') {
    uVar2 = uVar2 | (pbVar1[1] & 0x7f) << 7;
    if ((char)pbVar1[1] < '\0') {
      uVar2 = uVar2 | (pbVar1[2] & 0x7f) << 0xe;
      if ((char)pbVar1[2] < '\0') {
        uVar2 = uVar2 | (pbVar1[3] & 0x7f) << 0x15;
        if ((char)pbVar1[3] < '\0') {
          iVar8 = 5;
          iVar7 = 5;
          uVar2 = uVar2 | (uint)pbVar1[4] << 0x1c;
        }
        else {
          iVar8 = 4;
          iVar7 = 4;
        }
      }
      else {
        iVar8 = 3;
        iVar7 = 3;
      }
    }
    else {
      iVar8 = 2;
      iVar7 = 2;
    }
  }
  else {
    iVar8 = 1;
    iVar7 = 1;
  }
  if (param_7 != (ushort *)0x0) {
    lVar4 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar4 + -0x11;
    local_70 = *(undefined1 *)(lVar4 + -1);
    uStack_78 = *(undefined8 *)(lVar4 + -9);
    local_80 = *(undefined8 *)(lVar4 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
    if (local_80._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    *param_7 = (ushort)local_97;
    iVar7 = iVar8;
  }
  if (param_6 != (ushort *)0x0) {
    lVar4 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar4 + -0x11;
    local_70 = *(undefined1 *)(lVar4 + -1);
    uStack_78 = *(undefined8 *)(lVar4 + -9);
    local_80 = *(undefined8 *)(lVar4 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
    if (local_80._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
        (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(this + 8) + 0xa8);
    }
    *param_6 = (ushort)local_97;
  }
  lVar4 = *(long *)(this + 0x28);
  *(long *)(this + 0x28) = lVar4 + -0x11;
  local_70 = *(undefined1 *)(lVar4 + -1);
  uStack_78 = *(undefined8 *)(lVar4 + -9);
  local_80 = *(undefined8 *)(lVar4 + -0x11);
  StackValue::ExtractValue((ThreadImpl *)&local_80,(ulong)this);
  if (local_80._0_1_ == (ThreadImpl)0x6) {
    *(undefined4 *)
     ((**(ulong **)(this + 0x30) & 0xffffffff00000000 |
      (ulong)*(uint *)(**(ulong **)(this + 0x30) + 3)) +
      (long)((*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0x3c3c3c3c) + 7) =
         *(undefined4 *)(*(long *)(this + 8) + 0xa8);
  }
  if (CARRY4(local_97,uVar2)) {
    *param_3 = 0;
  }
  else {
    lVar4 = **(long **)(this + 0x10);
    uVar5 = 0;
    if ((1 < *(ulong *)(lVar4 + 0x13)) &&
       ((ulong)(local_97 + uVar2) <= *(ulong *)(lVar4 + 0x13) - 2)) {
      uVar5 = (*(ulong *)(lVar4 + 0x1b) & (ulong)(local_97 + uVar2)) + *(long *)(lVar4 + 0xb);
    }
    *param_3 = uVar5;
  }
  if (param_3 != (ulong *)0x0) {
    *param_5 = uVar6 + iVar7 + 2;
  }
  else {
    *(undefined4 *)(this + 0x58) = 4;
    *(undefined4 *)(this + 0x68) = 1;
    *(ulong *)(*(long *)(this + 0x40) + -0x10) = param_4;
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3 != (ulong *)0x0;
}

