
/* v8::internal::compiler::CanCover(v8::internal::compiler::Node*,
   v8::internal::compiler::IrOpcode::Value) */

undefined8 v8::internal::compiler::CanCover(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(ushort *)(*param_1 + 0x10) == param_2) {
    if ((long *)param_1[3] != (long *)0x0) {
      uVar5 = 1;
      plVar6 = (long *)param_1[3];
      do {
        plVar7 = (long *)*plVar6;
        lVar1 = 0x10;
        if ((*(uint *)(plVar6 + 2) & 1) != 0) {
          lVar1 = 0x20;
        }
        lVar1 = (long)plVar6 + lVar1 + (ulong)(*(uint *)(plVar6 + 2) >> 1) * 0x20 + 0x18;
        uVar3 = NodeProperties::IsControlEdge(plVar6,lVar1);
        if ((uVar3 & 1) == 0) {
          uVar2 = NodeProperties::IsEffectEdge(plVar6,lVar1);
          if (uVar5 == 0 && (uVar2 & 1) == 0) goto LAB_0131aedc;
          uVar5 = uVar2 & uVar5;
        }
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
    uVar4 = 1;
  }
  else {
LAB_0131aedc:
    uVar4 = 0;
  }
  return uVar4;
}

