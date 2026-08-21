
/* v8::internal::compiler::ConstantFoldingReducer::Reduce(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::ConstantFoldingReducer::Reduce(ConstantFoldingReducer *this,Node *param_1)

{
  ulong uVar1;
  JSGraph *pJVar2;
  long lVar3;
  ObjectRef *pOVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  ObjectRef aOStack_48 [16];
  int *local_38;
  
  uVar5 = (uint)*(ushort *)(*(long *)param_1 + 0x10);
  if (uVar5 - 0x17 < 0xb) {
    return 0;
  }
  local_38 = *(int **)(param_1 + 8);
  if (local_38 == (int *)0x0) {
    return 0;
  }
  if (uVar5 == 0x28) {
    return 0;
  }
  if ((*(byte *)(*(long *)param_1 + 0x12) & 0x70) != 0x70) {
    return 0;
  }
  if (local_38 == (int *)0x1) {
    return 0;
  }
  if ((((ulong)local_38 & 1) == 0) && (*local_38 == 0)) {
    pJVar2 = *(JSGraph **)(this + 0x10);
    lVar3 = Type::AsHeapConstant((Type *)&local_38);
    pOVar4 = (ObjectRef *)(lVar3 + 8);
  }
  else {
    if ((local_38 != (int *)0x801) &&
       (uVar1 = Type::SlowIs((Type *)&local_38,0x801), (uVar1 & 1) == 0)) {
      if ((local_38 == (int *)0x1001) ||
         (uVar1 = Type::SlowIs((Type *)&local_38,0x1001), (uVar1 & 1) != 0)) {
        lVar3 = JSGraph::NaNConstant(*(JSGraph **)(this + 0x10));
      }
      else if ((local_38 == (int *)0x81) ||
              (uVar1 = Type::SlowIs((Type *)&local_38,0x81), (uVar1 & 1) != 0)) {
        lVar3 = JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
      }
      else {
        if ((local_38 == (int *)0x45f) ||
           (uVar1 = Type::SlowIs((Type *)&local_38,0x45f), (uVar1 & 1) != 0)) {
          dVar6 = (double)Type::Min((Type *)&local_38);
          dVar7 = (double)Type::Max((Type *)&local_38);
          if (dVar6 == dVar7) {
            pJVar2 = *(JSGraph **)(this + 0x10);
            dVar6 = (double)Type::Min((Type *)&local_38);
            lVar3 = JSGraph::Constant(pJVar2,dVar6);
            goto joined_r0x01697aec;
          }
        }
        if ((local_38 != (int *)0x101) &&
           (uVar1 = Type::SlowIs((Type *)&local_38,0x101), (uVar1 & 1) == 0)) {
          return 0;
        }
        lVar3 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
      }
      goto joined_r0x01697aec;
    }
    ObjectRef::ObjectRef
              (aOStack_48,*(undefined8 *)(this + 0x18),
               *(long *)(*(long *)(this + 0x10) + 0x168) + 0x448,1);
    pJVar2 = *(JSGraph **)(this + 0x10);
    pOVar4 = aOStack_48;
  }
  lVar3 = JSGraph::Constant(pJVar2,pOVar4);
joined_r0x01697aec:
  if (lVar3 == 0) {
    return 0;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    *(int **)(lVar3 + 8) = local_38;
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar3,0,0);
  return lVar3;
}

