
/* v8::internal::JSFunction::EnsureHasInitialMap(v8::internal::Handle<v8::internal::JSFunction>) */

void v8::internal::JSFunction::EnsureHasInitialMap(ulong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar6 = *param_1;
  pIVar7 = (Isolate *)(uVar6 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar7 | 7) +
                (ulong)*(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(uVar6 + 0x1b)) - 1)) != 0xa2) {
    uVar1 = *(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(uVar6 + 0xb)) + 0x1b) & 0x1f;
    if ((uVar1 - 10 < 7) || (uVar1 - 1 < 2)) {
      uVar5 = 0x419;
      if (1 < ((*(uint *)(((ulong)pIVar7 | (ulong)*(uint *)(uVar6 + 0xb)) + 0x1b) & 0x1f) - 0xd &
              0xff)) {
        uVar5 = 0x417;
      }
    }
    else {
      uVar5 = 0x421;
    }
    uVar2 = CalculateExpectedNofProperties(pIVar7,param_1);
    CalculateInstanceSizeHelper(uVar5,0,0,uVar2,&uStack_24,&local_28);
    puVar3 = (undefined8 *)Factory::NewMap((Factory *)pIVar7,uVar5,uStack_24,3,local_28);
    uVar1 = *(uint *)(*param_1 + 0x1b);
    uVar6 = *param_1 & 0xffffffff00000000;
    uVar8 = uVar6 | uVar1;
    if ((*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xa2) ||
       (uVar1 != *(uint *)(uVar6 + 0xa8))) {
      if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0xa2) {
        uVar8 = uVar6 | *(uint *)(uVar8 + 0xf);
      }
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar8;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar8);
      }
    }
    else {
      puVar4 = (ulong *)Factory::NewFunctionPrototype((Factory *)pIVar7,param_1);
    }
    SetInitialMap(param_1,puVar3,puVar4);
    local_48 = *puVar3;
    Map::StartInobjectSlackTracking((Map *)&local_48);
  }
  return;
}

