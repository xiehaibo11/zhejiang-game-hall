
undefined8 FUN_015d8f28(uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xd8);
  uVar1 = *(uint *)(lVar4 + -0x48);
  uVar2 = (int)((ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) >> 3) * -0x55555555 -
          *(int *)(lVar4 + -0x84);
  if (*(char *)(lVar4 + -0x78) == '\0') {
    if (uVar2 == uVar1) {
      if (uVar1 != 0) {
        uVar3 = FUN_015de854();
        return uVar3;
      }
      return 1;
    }
  }
  else if ((int)uVar2 <= (int)uVar1) {
    uVar3 = FUN_015de97c(param_1,(uint *)(lVar4 + -0x48),0);
    return uVar3;
  }
  v8::internal::wasm::Decoder::errorf
            (param_1,*(char **)(param_1 + 0x10),
             "expected %u elements on the stack for fallthru to @%d, found %u",(ulong)uVar1,
             (ulong)(uint)(*(int *)(lVar4 + -0x80) - *(int *)(param_1 + 8)));
  return 0;
}

