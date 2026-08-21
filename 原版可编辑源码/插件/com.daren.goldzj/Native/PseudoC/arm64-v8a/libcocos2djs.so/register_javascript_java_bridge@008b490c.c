
/* register_javascript_java_bridge(se::Object*) */

undefined8 register_javascript_java_bridge(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x28;
  uStack_2a = 0;
  uStack_37 = 0x426176614a7470;
  uStack_30 = 0x72;
  uStack_3f = 0x7263736176614a;
  uStack_38 = 0x69;
  uStack_2f = 0x65676469;
  uStack_2b = 0;
  this = (Class *)se::Class::create(&local_40,param_1,(Object *)0x0,
                                    JavaScriptJavaBridge_constructorRegistry);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,uStack_30))));
  }
  se::Class::defineFinalizeFunction(this,JavaScriptJavaBridge_finalizeRegistry);
  se::Class::defineFunction(this,"callStaticMethod",JavaScriptJavaBridge_callStaticMethodRegistry);
  se::Class::install(this);
  __jsb_JavaScriptJavaBridge_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

