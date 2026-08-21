
/* v8::internal::compiler::TypedOptimization::ReduceCheckMaps(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceCheckMaps(TypedOptimization *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  MapRef local_70 [16];
  MapRef local_60 [16];
  int *local_50;
  undefined8 uStack_48;
  int *local_28;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  piVar4 = *(int **)(lVar1 + 8);
  uVar2 = NodeProperties::GetEffectInput(param_1,0);
  if ((((ulong)piVar4 & 1) == 0) && (*piVar4 == 0)) {
    local_28 = piVar4;
    lVar1 = Type::AsHeapConstant((Type *)&local_28);
    uStack_48 = *(undefined8 *)(lVar1 + 0x10);
    local_50 = *(int **)(lVar1 + 8);
    local_60 = (MapRef  [16])HeapObjectRef::map((HeapObjectRef *)&local_50);
    uVar3 = MapRef::is_stable(local_60);
    if ((uVar3 & 1) != 0) {
      if (1 < *(int *)(*(long *)param_1 + 0x14)) {
        iVar5 = 1;
        local_70 = local_60;
        do {
          lVar1 = NodeProperties::GetValueInput(param_1,iVar5);
          local_50 = *(int **)(lVar1 + 8);
          if ((((ulong)local_50 & 1) == 0) && (*local_50 == 0)) {
            lVar1 = Type::AsHeapConstant((Type *)&local_50);
            uVar3 = ObjectRef::equals((ObjectRef *)(lVar1 + 8),(ObjectRef *)local_70);
            if ((uVar3 & 1) != 0) {
              uVar3 = MapRef::CanTransition(local_70);
              if ((uVar3 & 1) == 0) {
                return uVar2;
              }
              CompilationDependencies::DependOnStableMap
                        (*(CompilationDependencies **)(this + 0x10),local_70);
              return uVar2;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(long *)param_1 + 0x14));
      }
      return 0;
    }
  }
  return 0;
}

