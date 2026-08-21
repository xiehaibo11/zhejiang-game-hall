
/* v8::internal::RuntimeProfiler::MaybeOSR(v8::internal::JSFunction,
   v8::internal::InterpretedFrame*) */

undefined4 __thiscall
v8::internal::RuntimeProfiler::MaybeOSR
          (RuntimeProfiler *this,ulong param_2,InterpretedFrame *param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_28;
  
  uVar2 = param_2 & 0xffffffff00000000;
  iVar1 = *(int *)((uVar2 | *(uint *)((uVar2 | *(uint *)(param_2 + 0x13)) + 3)) + 0x17);
  uVar3 = *(uint *)((uVar2 | *(uint *)(param_2 + 0xb)) + 3);
  local_28 = param_2;
  if ((uVar3 != 0x84) &&
     (((uVar3 & 1) == 0 ||
      (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) - 0x95)))) {
    uVar2 = param_2 & 0xffffffff00000000;
    uVar5 = uVar2 | *(uint *)((uVar2 | *(uint *)(param_2 + 0x13)) + 3);
    uVar4 = uVar2 | 7;
    if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x9f) && (*(int *)(uVar5 + 7) == 4))
    goto LAB_00f61c8c;
  }
  uVar2 = param_2 & 0xffffffff00000000;
  uVar3 = *(uint *)((uVar2 | *(uint *)(param_2 + 0xb)) + 3);
  if ((uVar3 != 0x84) &&
     (((uVar3 & 1) == 0 ||
      (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) - 0x95)))) {
    uVar2 = param_2 & 0xffffffff00000000;
    uVar5 = uVar2 | *(uint *)((uVar2 | *(uint *)(param_2 + 0x13)) + 3);
    uVar4 = uVar2 | 7;
    if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x9f) && (*(int *)(uVar5 + 7) == 6))
    goto LAB_00f61c8c;
  }
  this = (RuntimeProfiler *)JSFunction::HasOptimizedCode((JSFunction *)&local_28);
  if (((ulong)this & 1) == 0) {
    return 0;
  }
  uVar2 = local_28 & 0xffffffff00000000;
  uVar4 = uVar2 | 7;
LAB_00f61c8c:
  uVar5 = uVar2 | *(uint *)(local_28 + 0xb);
  uVar6 = uVar2 | *(uint *)(uVar5 + 0xf);
  if ((*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x5b) &&
     (*(short *)(uVar4 + *(uint *)((uVar2 | *(uint *)(uVar6 + 0x13)) - 1)) == 0x86)) {
    uVar3 = *(uint *)(uVar6 + 0xf);
  }
  else {
    uVar3 = *(uint *)(uVar5 + 3);
    if (((uVar3 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((uVar2 | uVar3) - 1)) != 0x86)) {
      uVar3 = *(uint *)((uVar2 | *(uint *)(uVar5 + 3)) + 3);
    }
    else {
      uVar3 = *(uint *)(uVar5 + 3);
    }
  }
  if ((long)(*(int *)((uVar2 | uVar3) + 3) >> 1) <= (long)iVar1 * 0x30 + 0xb4) {
    AttemptOnStackReplacement(this,param_3,1);
  }
  return 1;
}

