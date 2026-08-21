
/* v8::internal::Factory::NewJSArrayWithElements(v8::internal::Handle<v8::internal::FixedArrayBase>,
   v8::internal::ElementsKind, int, v8::internal::AllocationType) */

undefined8 * v8::internal::Factory::NewJSArrayWithElements(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)NewJSArrayWithUnverifiedElements();
  JSObject::ValidateElements(*puVar1);
  return puVar1;
}

