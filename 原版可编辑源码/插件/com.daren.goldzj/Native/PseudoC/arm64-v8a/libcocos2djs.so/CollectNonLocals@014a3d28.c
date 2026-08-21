
/* v8::internal::DeclarationScope::CollectNonLocals(v8::internal::Isolate*,
   v8::internal::ParseInfo*, v8::internal::Handle<v8::internal::StringSet>) */

undefined8 __thiscall
v8::internal::DeclarationScope::CollectNonLocals
          (DeclarationScope *this,Isolate *param_1,ParseInfo *param_2,undefined8 param_4)

{
  undefined8 local_18;
  
  local_18 = param_4;
  Scope::CollectNonLocals((Scope *)this,this,param_1,param_2,(Handle *)&local_18);
  return local_18;
}

