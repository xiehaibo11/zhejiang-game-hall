
/* js_renderer_Assembler_setVertexFormatRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Assembler_setVertexFormatRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  Value *pVVar6;
  Object *this;
  long lVar7;
  Isolate *pIVar8;
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_78,pIVar8);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,10);
                    /* try { // try from 00951084 to 00a5108b has its CatchHandler @ 0095174c */
  se::internal::jsToSeArgs(param_1,(vector *)&local_90);
                    /* try { // try from 0095108c to 00a5114b has its CatchHandler @ 009508b8 */
  pvVar3 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar3,(vector *)&local_90);
  plVar4 = (long *)se::State::nativeThisObject(aSStack_60);
  if (plVar4 == (long *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xdcf,"js_renderer_Assembler_setVertexFormat");
    __android_log_print(6,"jswrapper",
                        "js_renderer_Assembler_setVertexFormat : Invalid Native Object");
  }
  else {
    puVar5 = (undefined8 *)se::State::args(aSStack_60);
    pVVar6 = (Value *)*puVar5;
    if (puVar5[1] - (long)pVVar6 == 0x10) {
      if (pVVar6[8] == (Value)0x5) {
        this = (Object *)se::Value::toObject(pVVar6);
        lVar7 = se::Object::getPrivateData(this);
        if (lVar7 != 0) {
LAB_00951170:
          (**(code **)(*plVar4 + 0x40))(plVar4,lVar7);
          goto LAB_009511f4;
        }
      }
      else if ((byte)pVVar6[8] < 2) {
        lVar7 = 0;
        goto LAB_00951170;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xdd6,"js_renderer_Assembler_setVertexFormat");
      __android_log_print(6,"jswrapper",
                          "js_renderer_Assembler_setVertexFormat : Error processing arguments");
    }
    else {
                    /* try { // try from 0095114c to 00a51153 has its CatchHandler @ 00951748 */
                    /* try { // try from 00951154 to 00a51213 has its CatchHandler @ 009508b8 */
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3546): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(puVar5[1] - (long)pVVar6) >> 4,1);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_Assembler_setVertexFormat",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xddd);
LAB_009511f4:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_1);
  se::State::~State(aSStack_60);
  pVVar2 = local_90;
  pVVar6 = local_88;
  if (local_90 != (Value *)0x0) {
                    /* try { // try from 0095121c to 00a512db has its CatchHandler @ 009508b8 */
    while (pVVar6 != pVVar2) {
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_88 = pVVar2;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

