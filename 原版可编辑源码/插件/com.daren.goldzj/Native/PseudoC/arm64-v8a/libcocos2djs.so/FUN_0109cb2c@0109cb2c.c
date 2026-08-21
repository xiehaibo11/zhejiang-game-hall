
undefined1  [16]
FUN_0109cb2c(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  ulong local_28;
  
  local_28 = *param_4;
  if (param_5 < param_6) {
    uVar3 = (long)((ulong)*(uint *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 7))
                                   + 3) << 0x20) >> 0x21;
    if (uVar3 <= param_6) {
      param_6 = uVar3;
    }
    if (((((local_28 & 1) == 0) ||
         (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x42))
        || (!NAN(*(double *)(local_28 + 3)))) && (param_5 < param_6)) {
      iVar4 = (int)param_5 << 2;
      uVar1 = *(uint *)(*param_3 + 7);
      uVar3 = *param_3 & 0xffffffff00000000;
      do {
        uVar2 = v8::internal::Object::StrictEquals
                          ((Object *)&local_28,uVar3 | *(uint *)((uVar3 | uVar1) + 7 + (long)iVar4))
        ;
        if ((uVar2 & 1) != 0) goto LAB_0109cbe8;
        param_5 = param_5 + 1;
        iVar4 = iVar4 + 4;
      } while (param_5 < param_6);
    }
  }
  param_5 = 0xffffffffffffffff;
LAB_0109cbe8:
  auVar5._8_8_ = param_5;
  auVar5._0_8_ = 1;
  return auVar5;
}

