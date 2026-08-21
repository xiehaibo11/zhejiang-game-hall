
/* register_platform_bindings(se::Object*) */

undefined8 register_platform_bindings(Object *param_1)

{
  se::Object::defineFunction(__jsbObj,"loadFont",JSB_loadFontRegistry);
  return 1;
}

