
/* v8::internal::Heap::VisitExternalResources(v8::ExternalResourceVisitor*) */

void __thiscall
v8::internal::Heap::VisitExternalResources(Heap *this,ExternalResourceVisitor *param_1)

{
  undefined **local_38;
  Heap *pHStack_30;
  ExternalResourceVisitor *local_28;
  
  pHStack_30 = this + -0x8850;
  local_38 = &PTR__RootVisitor_01ca77d0;
  local_28 = param_1;
  if (*(long *)(this + 0xae8) != *(long *)(this + 0xaf0)) {
    FUN_00f9de24(&local_38,1,0);
  }
  if (*(long *)(this + 0xb00) != *(long *)(this + 0xb08)) {
    (*(code *)local_38[2])(&local_38,1,0);
  }
  return;
}

