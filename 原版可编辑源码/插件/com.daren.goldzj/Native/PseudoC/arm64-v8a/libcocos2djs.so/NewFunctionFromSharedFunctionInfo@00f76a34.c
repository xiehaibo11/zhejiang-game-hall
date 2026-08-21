
/* v8::internal::Factory::NewFunctionFromSharedFunctionInfo(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::AllocationType) */

undefined8 v8::internal::Factory::NewFunctionFromSharedFunctionInfo(void)

{
  undefined8 uVar1;
  
  uVar1 = NewFunction();
  Compiler::PostInstantiation();
  return uVar1;
}

