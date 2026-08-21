
undefined2 FUN_010e1ac0(undefined8 param_1,ulong *param_2,undefined8 *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined2 uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *param_2;
  pIVar6 = (Isolate *)*param_3;
  uVar7 = uVar8 & 0xffffffff00000000;
  bVar3 = *(byte *)((uVar7 | 9) + (ulong)*(uint *)(uVar8 - 1));
  if (param_4 == 0) {
    if ((bVar3 >> 3 & 1) == 0) {
      return 0x101;
    }
    uVar2 = *(uint *)((uVar7 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
    uVar8 = uVar7 | uVar2;
    if ((uVar2 & 1) != 0) {
      do {
        if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) {
          if (((uVar8 & 1) != 0) && (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x439)
             ) {
            uVar8 = uVar8 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) +
                                    3);
          }
          break;
        }
        puVar1 = (uint *)(uVar8 + 0x13);
        uVar8 = uVar7 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar9 = *(ulong *)(uVar7 + 0xa0);
    if (*(uint *)(uVar8 + 0x23) == (uint)uVar9) goto LAB_010e1c14;
    uVar2 = *(uint *)((uVar7 | *(uint *)(uVar8 + 0x23)) + 0x13);
  }
  else {
    if ((bVar3 >> 2 & 1) == 0) {
      return 0x101;
    }
    uVar2 = *(uint *)((uVar7 | 0x13) + (ulong)*(uint *)(uVar8 - 1));
    uVar8 = uVar7 | uVar2;
    if ((uVar2 & 1) != 0) {
      do {
        if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) {
          if (((uVar8 & 1) != 0) && (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x439)
             ) {
            uVar8 = uVar8 & 0xffffffff00000000 |
                    (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) +
                                    3);
          }
          break;
        }
        puVar1 = (uint *)(uVar8 + 0x13);
        uVar8 = uVar7 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar9 = *(ulong *)(uVar7 + 0xa0);
    if (*(uint *)(uVar8 + 0x23) == (uint)uVar9) goto LAB_010e1c14;
    uVar2 = *(uint *)((uVar7 | *(uint *)(uVar8 + 0x23)) + 0xf);
  }
  uVar9 = uVar7 | uVar2;
LAB_010e1c14:
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
    bVar3 = *(byte *)((long)param_3 + 0x24);
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar9);
    bVar3 = *(byte *)((long)param_3 + 0x24);
  }
  if (((bVar3 >> 5 & 1) != 0) && ((*(byte *)(*puVar5 + 0x23) >> 2 & 1) == 0)) {
    return 0x101;
  }
  uVar4 = FUN_010e2a38(param_1,param_2,puVar5,param_3,param_4);
  return uVar4;
}

