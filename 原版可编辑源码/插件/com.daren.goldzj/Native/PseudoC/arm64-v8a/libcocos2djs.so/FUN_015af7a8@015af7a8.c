
undefined8 FUN_015af7a8(ulong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  IsCompiledScope local_30 [16];
  
  uVar4 = *param_1;
  uVar3 = uVar4 & 0xffffffff00000000;
  if ((*(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 0x1b) >> 0xc & 1) == 0) {
LAB_015af934:
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
    if ((uVar1 == 0x84) ||
       ((((uVar1 & 1) != 0 &&
         (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95 < 2)) ||
        (*(short *)((uVar3 | 7) +
                   (ulong)*(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar4 + 0x13)) + 3)) - 1))
         != 0x9f)))) {
      v8::internal::IsCompiledScope::IsCompiledScope
                (local_30,*param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb));
      uVar4 = *param_1;
      uVar3 = uVar4 & 0xffffffff00000000;
      if (*(int *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0x27) == 0x42) {
LAB_015af8a8:
        uVar4 = *param_1;
        uVar3 = uVar4 & 0xffffffff00000000;
        uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
        if (((uVar1 == 0x84) ||
            ((((uVar1 & 1) != 0 &&
              (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95 < 2)) ||
             (*(short *)((uVar3 | 7) +
                        (ulong)*(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar4 + 0x13)) + 3))
                                        - 1)) != 0x81)))) &&
           (uVar3 = v8::internal::Compiler::Compile(param_1,1,local_30), (uVar3 & 1) == 0))
        goto LAB_015af934;
      }
      else {
        uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
        if ((uVar1 == 0x84) ||
           (((uVar1 & 1) != 0 &&
            (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95 < 2))))
        goto LAB_015af8a8;
      }
      v8::internal::JSFunction::EnsureFeedbackVector(param_1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

