
/* v8::internal::compiler::EscapeAnalysisReducer::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::EscapeAnalysisReducer::Reduce(EscapeAnalysisReducer *this,Node *param_1)

{
  ushort uVar1;
  Node *pNVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_30;
  Node *local_28;
  
  local_30 = *(undefined8 *)(this + 0x18);
  local_28 = param_1;
  pNVar2 = (Node *)EscapeAnalysisResult::GetReplacementOf((EscapeAnalysisResult *)&local_30,param_1)
  ;
  if (pNVar2 != (Node *)0x0) {
    uVar3 = ReplaceNode(this,param_1,pNVar2);
    return uVar3;
  }
  uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
  if (uVar1 < 0xe7) {
    if (uVar1 == 0x28) {
      plVar5 = (long *)NodeProperties::GetEffectInput(param_1,0);
      if (*(short *)(*plVar5 + 0x10) != 0x27) {
        return 0;
      }
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),plVar5,plVar5,0,0);
      goto LAB_016b60f4;
    }
    if (uVar1 != 0x3a) goto LAB_016b6068;
  }
  else {
    if (uVar1 == 0x117) {
      std::__ndk1::
      __tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__emplace_unique_key_args<v8::internal::compiler::Node*,v8::internal::compiler::Node*const&>
                ((__tree<v8::internal::compiler::Node*,std::__ndk1::less<v8::internal::compiler::Node*>,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0xa0),&local_28,&local_28);
      return 0;
    }
    if (uVar1 != 0xe7) {
LAB_016b6068:
      if (*(int *)(*(long *)param_1 + 0x18) < 1) {
        return 0;
      }
      ReduceFrameStateInputs(this,param_1);
      return 0;
    }
  }
  local_30 = *(undefined8 *)(this + 0x18);
  lVar4 = EscapeAnalysisResult::GetVirtualObject((EscapeAnalysisResult *)&local_30,param_1);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(char *)(lVar4 + 0x20) != '\0') {
    return 0;
  }
LAB_016b60f4:
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),local_28,local_28,0,0);
  return 0;
}

