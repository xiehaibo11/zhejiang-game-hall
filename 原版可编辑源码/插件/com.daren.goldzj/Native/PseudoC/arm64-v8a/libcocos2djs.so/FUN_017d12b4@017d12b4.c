
undefined8 FUN_017d12b4(uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x4e0);
  uVar1 = *(uint *)(lVar4 + -0x1a8);
  uVar2 = (int)((ulong)(*(long *)(param_1 + 0x4c0) - *(long *)(param_1 + 0x4b8)) >> 4) -
          *(int *)(lVar4 + -0x1dc);
  if (*(char *)(lVar4 + -0x1d0) == '\0') {
    if (uVar2 == uVar1) {
      if (uVar1 != 0) {
        uVar3 = FUN_017e06d0();
        return uVar3;
      }
      return 1;
    }
  }
  else if ((int)uVar2 <= (int)uVar1) {
    uVar3 = FUN_017e07f4(param_1,(uint *)(lVar4 + -0x1a8),0);
    return uVar3;
  }
  v8::internal::wasm::Decoder::errorf
            (param_1,*(char **)(param_1 + 0x10),
             "expected %u elements on the stack for fallthru to @%d, found %u",(ulong)uVar1,
             (ulong)(uint)(*(int *)(lVar4 + -0x1d8) - *(int *)(param_1 + 8)));
  return 0;
}

