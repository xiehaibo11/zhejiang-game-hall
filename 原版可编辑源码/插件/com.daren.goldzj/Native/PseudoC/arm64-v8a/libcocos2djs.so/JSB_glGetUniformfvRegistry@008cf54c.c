
/* JSB_glGetUniformfvRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void JSB_glGetUniformfvRegistry(FunctionCallbackInfo *param_1)

{
  undefined4 uVar1;
  long lVar2;
  Value *pVVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  void *pvVar7;
  long *plVar8;
  Value *pVVar9;
  Object *pOVar10;
  long lVar11;
  HandleObject *this;
  Isolate *pIVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong __n;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  Object *local_b0;
  int local_a4;
  int iStack_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  State aSStack_90 [40];
  float local_68 [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar12 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c8,pIVar12);
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  pvVar7 = (void *)se::internal::getPrivate(pIVar12,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar7,(vector *)&local_e0);
  plVar8 = (long *)se::State::args(aSStack_90);
  if ((plVar8[1] - *plVar8 & 0xffffffff0U) != 0x20) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe68,"JSB_glGetUniformfv");
    __android_log_print(6,"jswrapper","Invalid number of arguments");
    goto LAB_008cf6a8;
  }
  pVVar9 = (Value *)se::State::rval(aSStack_90);
  se::Value::setNull(pVVar9);
  pVVar9 = (Value *)*plVar8;
  if ((byte)pVVar9[8] < 2) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe6f,"JSB_glGetUniformfv");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
    goto LAB_008cf6a8;
  }
  if ((byte)pVVar9[0x18] < 2) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe70,"JSB_glGetUniformfv");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
    goto LAB_008cf6a8;
  }
  if (pVVar9[8] != (Value)0x5) {
    seval_to_uint32(pVVar9 + 0x10,&local_94);
LAB_008cf8f0:
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xe73,"JSB_glGetUniformfv");
    __android_log_print(6,"jswrapper",&DAT_0190552e);
    goto LAB_008cf6a8;
  }
  pOVar10 = (Object *)se::Value::toObject(pVVar9);
  lVar11 = se::Object::getPrivateData(pOVar10);
  bVar5 = seval_to_uint32((Value *)(*plVar8 + 0x10),&local_94);
  if ((lVar11 != 0 & bVar5) == 0) goto LAB_008cf8f0;
  uVar1 = *(undefined4 *)(lVar11 + 0xc);
  glGetProgramiv(uVar1,0x8b86,&local_98);
  glGetProgramiv(uVar1,0x8b87,&local_9c);
  uVar15 = (ulong)(int)local_9c;
  uVar14 = 0xffffffffffffffff;
  if (-1 < (long)(uVar15 + 1)) {
    uVar14 = uVar15 + 1;
  }
  pvVar7 = operator_new__(uVar14,(nothrow_t *)&std::nothrow);
  local_a4 = -1;
  iStack_a0 = -1;
  if (local_98 < 1) {
LAB_008cf894:
    local_a4 = -1;
    iStack_a0 = -1;
  }
  else {
    iVar13 = 0;
    while( true ) {
      glGetActiveUniform(uVar1,iVar13,uVar15 & 0xffffffff,0,&iStack_a0,&local_a4,pvVar7);
      uVar4 = local_94;
      uVar6 = glGetUniformLocation(uVar1,pvVar7);
      if (uVar4 == uVar6) break;
      iVar13 = iVar13 + 1;
      if (local_98 <= iVar13) goto LAB_008cf894;
      uVar15 = (ulong)local_9c;
    }
  }
  if (pvVar7 != (void *)0x0) {
    operator_delete__(pvVar7);
  }
  uVar14 = 2;
  __n = 8;
  uVar15 = 0x10;
  switch(local_a4) {
  case 0x8b50:
    uVar15 = 8;
    break;
  case 0x8b51:
    uVar15 = 0xc;
    break;
  case 0x8b52:
  case 0x8b5a:
    break;
  case 0x8b53:
    goto switchD_008cf8d8_caseD_8b53;
  case 0x8b54:
    __n = 0xc;
    goto switchD_008cf8d8_caseD_8b53;
  case 0x8b55:
    __n = 0x10;
switchD_008cf8d8_caseD_8b53:
    pvVar7 = operator_new(__n);
    memset(pvVar7,0,__n);
    glGetUniformiv(uVar1,local_94,pvVar7);
    pOVar10 = (Object *)se::Object::createTypedArray(3,pvVar7,__n);
    se::HandleObject::HandleObject((HandleObject *)local_68,pOVar10);
    pVVar9 = (Value *)se::State::rval(aSStack_90);
    se::Value::setObject(pVVar9,(HandleObject *)local_68,false);
    goto LAB_008cfac8;
  case 0x8b56:
    local_68[0] = 0.0;
    glGetUniformiv(uVar1,local_94,local_68);
    pVVar9 = (Value *)se::State::rval(aSStack_90);
    se::Value::setBoolean(pVVar9,local_68[0] != 0.0);
    goto LAB_008cf6d4;
  case 0x8b57:
    goto switchD_008cf8d8_caseD_8b57;
  case 0x8b58:
    uVar14 = 3;
    goto switchD_008cf8d8_caseD_8b57;
  case 0x8b59:
    uVar14 = 4;
switchD_008cf8d8_caseD_8b57:
    uVar15 = (ulong)(uint)((int)uVar14 << 2);
    pvVar7 = operator_new(uVar15);
    memset(pvVar7,0,uVar15);
    glGetUniformiv(uVar1,local_94,pvVar7);
    pOVar10 = (Object *)se::Object::createArrayObject(uVar14);
    se::HandleObject::HandleObject((HandleObject *)&local_b0,pOVar10);
    uVar15 = 0;
    do {
      pOVar10 = local_b0;
      se::Value::Value((Value *)local_68,*(int *)((long)pvVar7 + uVar15 * 4) != 0);
      se::Object::setArrayElement(pOVar10,(uint)uVar15,(Value *)local_68);
      se::Value::~Value((Value *)local_68);
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar14);
    pVVar9 = (Value *)se::State::rval(aSStack_90);
    se::Value::setObject(pVVar9,(HandleObject *)&local_b0,false);
    this = (HandleObject *)&local_b0;
    goto LAB_008cfb6c;
  case 0x8b5b:
    uVar15 = 0x24;
    break;
  case 0x8b5c:
    uVar15 = 0x40;
    break;
  case 0x8b5d:
  case 0x8b5f:
    goto switchD_008cf8d8_caseD_8b5d;
  case 0x8b5e:
  case 0x8b60:
switchD_008cf8d8_caseD_8b5e:
    local_68[0] = 0.0;
    glGetUniformiv(uVar1,local_94,local_68);
    pVVar9 = (Value *)se::State::rval(aSStack_90);
    se::Value::setInt32(pVVar9,(int)local_68[0]);
    goto LAB_008cf6d4;
  default:
    if (local_a4 == 0x1404) goto switchD_008cf8d8_caseD_8b5e;
    if (local_a4 == 0x1406) {
      local_68[0] = 0.0;
      glGetUniformfv(uVar1,local_94,local_68);
      pVVar9 = (Value *)se::State::rval(aSStack_90);
      se::Value::setFloat(pVVar9,local_68[0]);
      goto LAB_008cf6d4;
    }
switchD_008cf8d8_caseD_8b5d:
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp, 3802): glGetUniformfv: Uniform Type (%d) not supported\n"
                       );
LAB_008cf6a8:
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "JSB_glGetUniformfv",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_opengl_manual.cpp"
                        ,0xf17);
    goto LAB_008cf6d4;
  }
  pvVar7 = operator_new(uVar15);
  memset(pvVar7,0,uVar15);
  glGetUniformfv(uVar1,local_94,pvVar7);
  pOVar10 = (Object *)se::Object::createTypedArray(8,pvVar7,uVar15);
  se::HandleObject::HandleObject((HandleObject *)local_68,pOVar10);
  pVVar9 = (Value *)se::State::rval(aSStack_90);
  se::Value::setObject(pVVar9,(HandleObject *)local_68,false);
LAB_008cfac8:
  this = (HandleObject *)local_68;
LAB_008cfb6c:
  se::HandleObject::~HandleObject(this);
  operator_delete(pvVar7);
LAB_008cf6d4:
  pVVar9 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_90);
  pVVar3 = local_e0;
  pVVar9 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d8 = pVVar3;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

