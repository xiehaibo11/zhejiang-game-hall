
/* v8::internal::compiler::TypedOptimization::ReduceLoadField(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceLoadField(TypedOptimization *this,Node *param_1)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  ObjectRef local_60 [16];
  MapRef local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  int *local_18;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  piVar5 = *(int **)(lVar1 + 8);
  pcVar2 = (char *)FieldAccessOf(*(Operator **)param_1);
  if ((((*pcVar2 == '\x01') && (*(int *)(pcVar2 + 4) == 0)) && (((ulong)piVar5 & 1) == 0)) &&
     (*piVar5 == 0)) {
    local_18 = piVar5;
    lVar1 = Type::AsHeapConstant((Type *)&local_18);
    uStack_38 = *(undefined8 *)(lVar1 + 0x10);
    local_40 = *(undefined8 *)(lVar1 + 8);
    local_50 = (MapRef  [16])HeapObjectRef::map((HeapObjectRef *)&local_40);
    uVar3 = MapRef::is_stable(local_50);
    if ((uVar3 & 1) != 0) {
      local_60 = (ObjectRef  [16])local_50;
      CompilationDependencies::DependOnStableMap
                (*(CompilationDependencies **)(this + 0x10),local_60);
      uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x18),local_60);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,0,0);
      return uVar4;
    }
  }
  return 0;
}

