
/* v8::internal::wasm::DisjointAllocationPool::Merge(v8::base::AddressRegion) */

undefined1  [16]
v8::internal::wasm::DisjointAllocationPool::Merge(long *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar4 = (long *)param_1[1];
  do {
    if (param_1 == plVar4) {
LAB_011fe228:
      plVar4 = operator_new(0x20);
      plVar4[1] = (long)param_1;
      plVar4[2] = param_2;
      plVar4[3] = param_3;
      lVar3 = *param_1;
      *plVar4 = lVar3;
      *(long **)(lVar3 + 8) = plVar4;
      lVar3 = param_1[2];
      *param_1 = (long)plVar4;
LAB_011fe24c:
      param_1[2] = lVar3 + 1;
      uVar2 = param_2;
LAB_011fe254:
      auVar5._8_8_ = param_3;
      auVar5._0_8_ = uVar2;
      return auVar5;
    }
    if (param_2 <= (ulong)(plVar4[3] + plVar4[2])) {
      if (param_1 != plVar4) {
        uVar2 = plVar4[2];
        if (uVar2 == param_3 + param_2) {
          param_3 = plVar4[3] + param_3;
          plVar4[2] = param_2;
          plVar4[3] = param_3;
          uVar2 = param_2;
          goto LAB_011fe254;
        }
        if (param_3 + param_2 < uVar2) {
          plVar1 = operator_new(0x20);
          *plVar1 = 0;
          plVar1[2] = param_2;
          plVar1[3] = param_3;
          *(long **)(*plVar4 + 8) = plVar1;
          *plVar1 = *plVar4;
          *plVar4 = (long)plVar1;
          plVar1[1] = (long)plVar4;
          lVar3 = param_1[2];
          goto LAB_011fe24c;
        }
        plVar1 = (long *)plVar4[1];
        param_3 = plVar4[3] + param_3;
        plVar4[3] = param_3;
        if ((param_1 != plVar1) && (uVar2 + param_3 == plVar1[2])) {
          plVar4[3] = plVar1[3] + param_3;
          *(long *)(*plVar1 + 8) = plVar1[1];
          *(long *)plVar1[1] = *plVar1;
          param_1[2] = param_1[2] + -1;
          operator_delete(plVar1);
          uVar2 = plVar4[2];
          param_3 = plVar4[3];
        }
        goto LAB_011fe254;
      }
      goto LAB_011fe228;
    }
    plVar4 = (long *)plVar4[1];
  } while( true );
}

