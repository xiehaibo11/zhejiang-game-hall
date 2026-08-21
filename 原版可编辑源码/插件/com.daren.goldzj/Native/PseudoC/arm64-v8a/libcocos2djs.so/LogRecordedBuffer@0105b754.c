
/* v8::internal::JitLogger::LogRecordedBuffer(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo, char const*, int) */

void __thiscall
v8::internal::JitLogger::LogRecordedBuffer
          (JitLogger *this,ulong param_2,ulong param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong local_a0;
  long lStack_98;
  long local_90;
  ulong *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_48;
  
  lStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  puStack_88 = (ulong *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uVar4 = param_2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar4 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_48 = param_2;
      lStack_98 = Code::OffHeapInstructionStart((Code *)&local_48);
    }
    else {
      lStack_98 = param_2 + 0x3f;
      local_48 = param_2;
    }
  }
  else {
    lStack_98 = param_2 + 0x21;
  }
  local_a0 = (ulong)CONCAT14(*(short *)(uVar4 + *(uint *)(param_2 - 1)) == 0x9a,(undefined4)local_a0
                            );
  if (*(short *)(uVar4 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_48 = param_2;
      iVar1 = Code::OffHeapInstructionSize((Code *)&local_48);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x13);
      local_48 = param_2;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 3) >> 1;
  }
  local_90 = (long)iVar1;
  if ((int)param_3 != 0) {
    pIVar2 = (Isolate *)(param_3 & 0xffffffff00000000);
    uVar4 = (ulong)pIVar2 | (ulong)*(uint *)(param_3 + 0xf);
    if (*(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
      uVar4 = (ulong)pIVar2 | (ulong)*(uint *)(uVar4 + 0xb);
    }
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x65) {
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = param_3;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),param_3);
      }
      goto LAB_0105b88c;
    }
  }
  puVar3 = (ulong *)0x0;
LAB_0105b88c:
  lStack_68 = (long)param_5;
  local_58 = *(undefined8 *)(this + 8);
  puStack_88 = puVar3;
  local_70 = param_4;
  (**(code **)(this + 0x18))(&local_a0);
  return;
}

