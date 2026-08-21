
/* v8::internal::Map::AsElementsKind(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::ElementsKind) */

ulong * v8::internal::Map::AsElementsKind(Isolate *param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  Isolate *local_70;
  undefined8 uStack_68;
  ulong local_60;
  Isolate *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_2;
  if ((uint)(*(byte *)(uVar8 + 10) >> 3) != (param_3 & 0xff)) {
    do {
      uStack_68 = 0;
      local_58 = param_1 + *(uint *)(uVar8 + 0x23);
      iVar3 = 1;
      local_70 = param_1;
      local_60 = uVar8;
      if ((((ulong)local_58 & 1) != 0) && ((int)local_58 != 3)) {
        uVar7 = (ulong)local_58 & 3;
        iVar3 = (int)uVar7;
        if (uVar7 != 3) {
          if (uVar7 != 1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar7 = (ulong)local_58 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar7 + *(uint *)(local_58 + -1)) == 0x98) {
            iVar3 = 4;
          }
          else {
            iVar3 = (uint)(*(short *)(uVar7 + *(uint *)(local_58 + -1)) != 100) << 1;
          }
        }
      }
      local_50 = iVar3;
      uVar7 = TransitionsAccessor::SearchSpecial
                        ((TransitionsAccessor *)&local_70,*(undefined8 *)(param_1 + 0xb48));
    } while (((int)uVar7 != 0) &&
            (uVar8 = uVar7, (uint)(*(byte *)(uVar7 + 10) >> 3) != (param_3 & 0xff)));
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    uVar8 = *puVar5;
  }
  bVar2 = *(byte *)(uVar8 + 10) >> 3;
  uVar9 = (uint)bVar2;
  if (uVar9 != (param_3 & 0xff)) {
    if ((*(uint *)(uVar8 + 0xb) >> 0x14 & 1) == 0) {
      uVar4 = (uint)bVar2;
      if (*(byte *)(uVar8 + 10) < 0x30) {
        do {
          uVar9 = uVar4;
          if (((uVar9 & 0xff) == 3) || ((uVar9 - 0x11 & 0xff) < 0xb)) goto LAB_010ecff0;
          uVar4 = GetNextTransitionElementsKind(uVar9);
          puVar5 = (ulong *)CopyAsElementsKind(param_1,puVar5,uVar4,0);
        } while ((uVar4 & 0xff) != (param_3 & 0xff));
        goto LAB_010ed014;
      }
LAB_010ecff0:
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    if ((uVar9 & 0xff) != (param_3 & 0xff)) {
      puVar5 = (ulong *)CopyAsElementsKind(param_1,puVar5,param_3,uVar6);
    }
  }
LAB_010ed014:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}

