
/* JSB_glGetSupportedExtensionsRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetSupportedExtensionsRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  char *pcVar6;
  Object *pOVar7;
  size_t __n;
  char *__dest;
  Configuration *pCVar8;
  ulong uVar9;
  Value *pVVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  Isolate *pIVar14;
  uint uVar15;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [24];
  Object *local_a8;
  State aSStack_a0 [40];
  Value aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar14);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_a0,pvVar4,(vector *)&local_d8);
  plVar5 = (long *)se::State::args(aSStack_a0);
  if ((plVar5[1] - *plVar5 & 0xffffffff0U) == 0) {
    pcVar6 = (char *)glGetString(0x1f03);
    pOVar7 = (Object *)se::Object::createArrayObject(1);
    se::HandleObject::HandleObject((HandleObject *)&local_a8,pOVar7);
    __n = strlen(pcVar6);
    uVar9 = __n + 1;
    __dest = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
    __dest[__n] = '\0';
    strncpy(__dest,pcVar6,__n);
    if (uVar9 == 0) {
      uVar15 = 0;
    }
    else {
      uVar13 = 0;
      uVar15 = 0;
      uVar12 = 0;
      do {
        if (((__dest[uVar13] == ' ') || (__dest[uVar13] == ',')) || (uVar13 == __n)) {
          pcVar6 = __dest + uVar12;
          __dest[uVar13] = '\0';
          iVar3 = strcmp(pcVar6,"GL_EXT_texture_compression_s3tc");
          if (iVar3 == 0) {
            pcVar11 = "WEBGL_compressed_texture_s3tc";
          }
          else {
            iVar3 = strcmp(pcVar6,"GL_OES_compressed_ETC1_RGB8_texture");
            if (iVar3 == 0) {
              pcVar11 = "WEBGL_compressed_texture_etc1";
            }
            else {
              iVar3 = strcmp(pcVar6,"GL_IMG_texture_compression_pvrtc");
              pcVar11 = "WEBGL_compressed_texture_pvrtc";
              if (iVar3 != 0) {
                pcVar11 = pcVar6;
              }
            }
          }
          pOVar7 = local_a8;
          se::Value::Value(aVStack_78,pcVar11);
          se::Object::setArrayElement(pOVar7,uVar15,aVStack_78);
          se::Value::~Value(aVStack_78);
          uVar12 = uVar13 + 1;
          uVar15 = uVar15 + 1;
          uVar13 = uVar12;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar9);
    }
    pCVar8 = (Configuration *)cocos2d::Configuration::getInstance();
    uVar9 = cocos2d::Configuration::supportsFloatTexture(pCVar8);
    pOVar7 = local_a8;
    if ((uVar9 & 1) != 0) {
      se::Value::Value(aVStack_78,"OES_texture_float");
      se::Object::setArrayElement(pOVar7,uVar15,aVStack_78);
      uVar15 = uVar15 + 1;
      se::Value::~Value(aVStack_78);
    }
    pCVar8 = (Configuration *)cocos2d::Configuration::getInstance();
    uVar9 = cocos2d::Configuration::supportsETC2(pCVar8);
    pOVar7 = local_a8;
    if ((uVar9 & 1) != 0) {
      se::Value::Value(aVStack_78,"WEBGL_compressed_texture_etc");
      se::Object::setArrayElement(pOVar7,uVar15,aVStack_78);
      uVar15 = uVar15 + 1;
      se::Value::~Value(aVStack_78);
    }
    pCVar8 = (Configuration *)cocos2d::Configuration::getInstance();
    uVar9 = cocos2d::Configuration::supportsASTC(pCVar8);
    pOVar7 = local_a8;
    if ((uVar9 & 1) != 0) {
      se::Value::Value(aVStack_78,"WEBGL_compressed_texture_astc");
      se::Object::setArrayElement(pOVar7,uVar15,aVStack_78);
      uVar15 = uVar15 + 1;
      se::Value::~Value(aVStack_78);
    }
    pCVar8 = (Configuration *)cocos2d::Configuration::getInstance();
    uVar9 = cocos2d::Configuration::supportsStandardDerivatives(pCVar8);
    pOVar7 = local_a8;
    if ((uVar9 & 1) != 0) {
      se::Value::Value(aVStack_78,"OES_standard_derivatives");
      se::Object::setArrayElement(pOVar7,uVar15,aVStack_78);
      se::Value::~Value(aVStack_78);
    }
    pVVar10 = (Value *)se::State::rval(aSStack_a0);
    se::Value::setObject(pVVar10,local_a8,false);
    if (__dest != (char *)0x0) {
      operator_delete__(__dest);
    }
    se::HandleObject::~HandleObject((HandleObject *)&local_a8);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xdd1,"JSB_glGetSupportedExtensions");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glGetSupportedExtensions",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe08);
  }
  pVVar10 = (Value *)se::State::rval(aSStack_a0);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_a0);
  pVVar2 = local_d8;
  pVVar10 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar10 != pVVar2) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_d0 = pVVar2;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

