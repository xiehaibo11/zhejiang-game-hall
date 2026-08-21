
/* v8::Object::SetLazyDataProperty(v8::Local<v8::Context>, v8::Local<v8::Name>, void
   (*)(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&), v8::Local<v8::Value>,
   v8::PropertyAttribute, v8::SideEffectType, v8::SideEffectType) */

undefined2 __thiscall
v8::Object::SetLazyDataProperty
          (Object *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00eba024(param_2,this,param_3,param_4,0,param_5,0,param_6,1,1,param_7,param_8);
  return uVar1;
}

