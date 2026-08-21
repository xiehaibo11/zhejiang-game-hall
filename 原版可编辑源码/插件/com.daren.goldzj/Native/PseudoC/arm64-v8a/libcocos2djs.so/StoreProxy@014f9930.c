
/* v8::internal::StoreHandler::StoreProxy(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::JSReceiver>) */

undefined8 *
v8::internal::StoreHandler::StoreProxy
          (Isolate *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x95a0);
    if (puVar1 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar1 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = 0x16;
  }
  else {
    puVar1 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0x16);
  }
  if ((param_4 != param_3) &&
     (((param_3 == (long *)0x0 || (param_4 == (long *)0x0)) || (*param_4 != *param_3)))) {
    puVar1 = (undefined8 *)StoreThroughPrototype(param_1,param_2,param_3,puVar1,0,param_3,1,0);
    return puVar1;
  }
  return puVar1;
}

