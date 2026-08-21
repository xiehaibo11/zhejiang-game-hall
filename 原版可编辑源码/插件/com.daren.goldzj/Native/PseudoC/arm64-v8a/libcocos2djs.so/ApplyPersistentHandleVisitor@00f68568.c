
/* v8::internal::GlobalHandles::ApplyPersistentHandleVisitor(v8::PersistentHandleVisitor*,
   v8::internal::GlobalHandles::Node*) */

void __thiscall
v8::internal::GlobalHandles::ApplyPersistentHandleVisitor
          (GlobalHandles *this,PersistentHandleVisitor *param_1,Node *param_2)

{
  Node *local_18;
  
  local_18 = param_2;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_18,*(undefined2 *)(param_2 + 8));
  return;
}

