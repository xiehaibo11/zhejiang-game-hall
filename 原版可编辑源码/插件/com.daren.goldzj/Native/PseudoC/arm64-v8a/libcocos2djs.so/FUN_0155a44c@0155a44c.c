
void FUN_0155a44c(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong local_20;
  Representation local_18 [8];
  
  uVar5 = param_2 & 0xffffffff00000000;
  if ((*(uint *)((uVar5 | *(uint *)(param_2 + 0xb)) + 0x1b) >> 0xd & 1) != 0) {
    local_20 = param_2;
    if (*(int *)((uVar5 | *(uint *)((uVar5 | *(uint *)(param_2 - 1)) + 0x17)) + 0x27) !=
        *(int *)(param_1 + 0xb78)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "method.map().instance_descriptors().GetKey(kPropertyIndex) == ReadOnlyRoots(isolate).home_object_symbol()"
              );
    }
    uVar6 = uVar5 | *(uint *)(param_2 - 1);
    uVar1 = *(int *)((uVar5 | 0x2b) + (ulong)*(uint *)(uVar6 + 0x17)) >> 1;
    uVar3 = uVar1 >> 0x13 & 0x3ff;
    iVar2 = (uint)*(byte *)(uVar6 + 3) - (uint)*(byte *)(uVar6 + 4);
    if ((int)uVar3 < iVar2) {
      uVar5 = (ulong)*(byte *)(uVar6 + 4) << 0x1c;
      iVar7 = (uVar3 + *(byte *)(uVar6 + 4)) * 4;
    }
    else {
      iVar7 = (uVar3 - iVar2) * 4 + 8;
      uVar5 = 0x20000000;
    }
    uVar1 = uVar1 >> 6 & 7;
    local_18[0] = SUB41(uVar1,0);
    if (4 < uVar1) {
      uVar4 = v8::internal::Representation::Mnemonic(local_18);
      v8::internal::PrintF("%s\n",uVar4);
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    v8::internal::JSObject::RawFastPropertyAtPut
              ((JSObject *)&local_20,
               (ulong)((int)uVar3 < iVar2) << 0xd | (long)iVar2 << 0x10 | (long)iVar7 | uVar5 |
               *(ulong *)(&DAT_01a4c0b0 + (ulong)uVar1 * 8),param_3,4);
  }
  return;
}

