
/* v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::compiler::NameRef
   const&, v8::internal::ZoneVector<v8::internal::compiler::Node*>*,
   v8::internal::compiler::PropertyAccessInfo const&, v8::internal::compiler::AccessMode) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyAccess
          (JSNativeContextSpecialization *this,Node *param_1,undefined8 param_3_00,Node *param_3,
          Node *param_4,Node *param_5,PropertyAccessInfo *param_6,ZoneVector *param_7,
          PropertyAccessInfo *param_8,undefined8 param_9,int param_11)

{
  if (param_11 - 1U < 2) {
    BuildPropertyStore();
    return;
  }
  if (param_11 != 3) {
    if (param_11 == 0) {
      BuildPropertyLoad((Node *)this,param_1,param_3,param_4,param_5,(NameRef *)param_6,param_7,
                        param_8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  BuildPropertyTest((Node *)this,param_5,param_6);
  return;
}

