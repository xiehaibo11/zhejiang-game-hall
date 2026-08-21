
/* v8::internal::String::GetFlatContent(v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0,
   false> const&) */

undefined1  [16] v8::internal::String::GetFlatContent(PerThreadAssertScopeDebugOnly *param_1)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar6 = *(ulong *)param_1;
  uVar2 = *(uint *)(uVar6 + 7);
  uVar8 = uVar6 & 0xffffffff00000000;
  uVar3 = *(ushort *)((uVar8 | *(uint *)(uVar6 - 1)) + 7);
  if ((uVar3 & 7) == 3) {
    puVar1 = (uint *)(uVar6 + 0xf);
    uVar6 = uVar8 | *(uint *)(uVar6 + 0xb);
    uVar7 = *(uint *)(uVar6 - 1);
    lVar4 = (long)((ulong)*puVar1 << 0x20) >> 0x21;
LAB_01135e34:
    uVar3 = *(ushort *)((uVar8 | uVar7) + 7);
  }
  else {
    if ((uVar3 & 7) == 1) {
      if (*(int *)((uVar8 | *(uint *)(uVar6 + 0xf)) + 7) != 0) {
        uVar6 = 0;
        lVar4 = 0;
        goto LAB_01135ea8;
      }
      lVar4 = 0;
      uVar6 = uVar8 | *(uint *)(uVar6 + 0xb);
      uVar7 = *(uint *)(uVar6 - 1);
      goto LAB_01135e34;
    }
    lVar4 = 0;
  }
  uVar7 = (uint)uVar3;
  if ((uVar7 & 7) == 5) {
    uVar8 = uVar6 & 0xffffffff00000000;
    uVar6 = uVar8 | *(uint *)(uVar6 + 0xb);
    uVar7 = (uint)*(ushort *)((uVar8 | *(uint *)(uVar6 - 1)) + 7);
  }
  puVar5 = (undefined8 *)(uVar6 + 0xb);
  if ((uVar7 >> 3 & 1) == 0) {
    if ((uVar7 & 7) != 0) {
      puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))();
    }
    lVar4 = (long)puVar5 + lVar4 * 2;
    uVar6 = (ulong)uVar2 | 0x200000000;
  }
  else {
    if ((uVar7 & 7) != 0) {
      puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))();
    }
    lVar4 = (long)puVar5 + lVar4;
    uVar6 = (ulong)uVar2 | 0x100000000;
  }
LAB_01135ea8:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = lVar4;
  return auVar9;
}

