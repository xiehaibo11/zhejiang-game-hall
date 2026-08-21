
undefined8 FUN_011480a0(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  LookupIterator aLStack_a8 [4];
  int local_a4;
  char local_34 [4];
  
  if (param_4 << 1 != 0) {
    uVar6 = 0;
    do {
      puVar2 = *(ulong **)(param_3 + uVar6 * 8);
      uVar3 = *puVar2;
      if ((((uVar3 & 1) != 0) &&
          (uVar4 = uVar3 & 0xffffffff00000000 | 7, 0x40 < *(ushort *)(uVar4 + *(uint *)(uVar3 - 1)))
          ) && (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0x42)) {
        return 0;
      }
      uVar5 = *(undefined8 *)(param_3 + uVar6 * 8 + 8);
      v8::internal::LookupIterator::PropertyOrElement(aLStack_a8,param_1,param_2,puVar2,local_34,1);
      if (local_34[0] == '\0') {
        return 0;
      }
      if (local_a4 != 4) {
        return 0;
      }
      lVar1 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes(aLStack_a8,uVar5,0,1);
      if (lVar1 == 0) {
        return 0;
      }
      uVar6 = uVar6 + 2;
    } while (uVar6 < (uint)(param_4 << 1));
  }
  return 0x101;
}

