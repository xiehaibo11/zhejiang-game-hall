
/* v8::internal::wasm::DisjointAllocationPool::AllocateInRegion(unsigned long,
   v8::base::AddressRegion) */

undefined1  [16]
v8::internal::wasm::DisjointAllocationPool::AllocateInRegion
          (long *param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)param_1[1];
  if (param_1 != plVar6) {
    do {
      uVar7 = plVar6[2];
      uVar1 = plVar6[3] + uVar7;
      uVar3 = param_3;
      if (param_3 <= uVar7) {
        uVar3 = uVar7;
      }
      uVar2 = param_4 + param_3;
      if (uVar1 <= param_4 + param_3) {
        uVar2 = uVar1;
      }
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      if (param_2 <= uVar2 - uVar3) {
        lVar5 = plVar6[3] - param_2;
        if (lVar5 == 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
          *(long *)plVar6[1] = *plVar6;
          param_1[2] = param_1[2] + -1;
          operator_delete(plVar6);
          uVar7 = uVar3;
        }
        else if (uVar7 < param_3) {
          uVar2 = uVar3 + param_2;
          if (uVar2 != uVar1) {
            plVar4 = operator_new(0x20);
            *plVar4 = 0;
            plVar4[2] = uVar7;
            plVar4[3] = uVar3 - uVar7;
            *(long **)(*plVar6 + 8) = plVar4;
            *plVar4 = *plVar6;
            *plVar6 = (long)plVar4;
            plVar4[1] = (long)plVar6;
            param_1[2] = param_1[2] + 1;
            lVar5 = plVar6[2];
            plVar6[2] = uVar2;
            lVar5 = (lVar5 - uVar2) + plVar6[3];
          }
          plVar6[3] = lVar5;
          uVar7 = param_3;
        }
        else {
          plVar6[2] = uVar7 + param_2;
          plVar6[3] = lVar5;
        }
        goto LAB_011fe388;
      }
      plVar6 = (long *)plVar6[1];
    } while (param_1 != plVar6);
  }
  param_2 = 0;
  uVar7 = 0;
LAB_011fe388:
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = uVar7;
  return auVar8;
}

