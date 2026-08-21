
/* se::ScriptEngine::init() */

void __thiscall se::ScriptEngine::init(ScriptEngine *this)

{
  Value *this_00;
  __shared_weak_count *p_Var1;
  ScriptEngine SVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this_01;
  undefined8 uVar6;
  pthread_t pVar7;
  long *plVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  Context *pCVar11;
  Object *pOVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  Isolate *pIVar16;
  long *plVar17;
  long *plVar18;
  HandleScope aHStack_100 [24];
  Value local_e8;
  undefined5 uStack_e7;
  undefined2 uStack_e2;
  undefined1 uStack_e0;
  undefined5 uStack_df;
  undefined1 local_da;
  undefined1 uStack_d9;
  void *local_d8;
  Value aVStack_d0 [8];
  char local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  __shared_weak_count *local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  cleanup(this);
  uVar6 = v8::V8::GetVersion();
  __android_log_print(3,"jswrapper","Initializing V8, version: %s\n",uVar6);
  *(int *)(this + 0x208) = *(int *)(this + 0x208) + 1;
  pVar7 = pthread_self();
  plVar17 = *(long **)(this + 0x20);
  plVar18 = *(long **)(this + 0x28);
  *(pthread_t *)(this + 0x1e0) = pVar7;
  if (plVar17 != plVar18) {
    do {
      if ((long *)plVar17[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*(long *)plVar17[4] + 0x30))();
      plVar17 = plVar17 + 6;
    } while (plVar18 != plVar17);
    plVar17 = *(long **)(this + 0x20);
    plVar18 = *(long **)(this + 0x28);
joined_r0x0090abe8:
    if (plVar18 != plVar17) {
      plVar8 = (long *)plVar18[-2];
      plVar18 = plVar18 + -6;
      if (plVar18 != plVar8) goto code_r0x0090abfc;
      pcVar14 = *(code **)(*plVar8 + 0x20);
      goto LAB_0090ac14;
    }
  }
  *(long **)(this + 0x28) = plVar17;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = (__shared_weak_count *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_40 = 1;
  local_60 = v8::ArrayBuffer::Allocator::NewDefaultAllocator();
  pIVar9 = (Isolate *)v8::Isolate::New((CreateParams *)&local_c0);
  *(Isolate **)(this + 0x90) = pIVar9;
  v8::HandleScope::HandleScope(aHStack_100,pIVar9);
  v8::Isolate::Enter();
  v8::Isolate::SetCaptureStackTraceForUncaughtExceptions
            (*(undefined8 *)(this + 0x90),1,__jsbStackFrameLimit,0xf);
  v8::Isolate::SetFatalErrorHandler(*(Isolate **)(this + 0x90),onFatalErrorCallback);
  v8::Isolate::SetOOMErrorHandler(*(Isolate **)(this + 0x90),onOOMErrorCallback);
  v8::Isolate::AddMessageListener(*(Isolate **)(this + 0x90),onMessageCallback,0);
  v8::Isolate::SetPromiseRejectCallback(*(Isolate **)(this + 0x90),onPromiseRejectCallback);
  pIVar16 = *(Isolate **)(this + 0x90);
  puVar10 = (ulong *)v8::Context::New(pIVar16,0,0,0,0,0,0);
  if (*(ulong **)(this + 0x80) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(this + 0x80));
    *(undefined8 *)(this + 0x80) = 0;
  }
  if (puVar10 == (ulong *)0x0) {
    pCVar11 = (Context *)0x0;
  }
  else {
    puVar10 = (ulong *)v8::V8::GlobalizeReference(pIVar16,puVar10);
    *(ulong **)(this + 0x80) = puVar10;
    pCVar11 = (Context *)0x0;
    if (puVar10 != (ulong *)0x0) {
      pCVar11 = (Context *)v8::HandleScope::CreateHandle(*(Isolate **)(this + 0x90),*puVar10);
    }
  }
  v8::Context::Enter(pCVar11);
  NativePtrToObjectMap::init();
  NonRefNativePtrCreatedByCtorMap::init();
  Object::setup();
  Class::setIsolate(*(Isolate **)(this + 0x90));
  Object::setIsolate(*(Isolate **)(this + 0x90));
  if (*(ulong **)(this + 0x80) == (ulong *)0x0) {
    pCVar11 = (Context *)0x0;
  }
  else {
    pCVar11 = (Context *)
              v8::HandleScope::CreateHandle(*(Isolate **)(this + 0x90),**(ulong **)(this + 0x80));
  }
  uVar6 = v8::Context::Global(pCVar11);
  pOVar12 = (Object *)Object::_createJSObject(0,uVar6);
  *(Object **)(this + 0xa0) = pOVar12;
  Object::root(pOVar12);
  pOVar12 = *(Object **)(this + 0xa0);
  se::Value::Value(&local_e8,pOVar12,false);
  Object::setProperty(pOVar12,"window",&local_e8);
  se::Value::~Value(&local_e8);
  se::Value::Value(aVStack_d0);
  uVar13 = Object::getProperty(*(Object **)(this + 0xa0),"console",aVStack_d0);
  if (((uVar13 & 1) != 0) && (local_c8 == '\x05')) {
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::getProperty(pOVar12,"log",(Value *)&DAT_01d371c0);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::defineFunction(pOVar12,"log",FUN_0090b22c);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::getProperty(pOVar12,"debug",(Value *)&DAT_01d371d0);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::defineFunction(pOVar12,"debug",FUN_0090b3f8);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::getProperty(pOVar12,"info",(Value *)&DAT_01d371e0);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::defineFunction(pOVar12,"info",FUN_0090b5c4);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::getProperty(pOVar12,"warn",(Value *)&DAT_01d371f0);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::defineFunction(pOVar12,"warn",FUN_0090b790);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::getProperty(pOVar12,"error",(Value *)&DAT_01d37200);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::defineFunction(pOVar12,"error",FUN_0090b95c);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::getProperty(pOVar12,"assert",(Value *)&DAT_01d37210);
    pOVar12 = (Object *)se::Value::toObject(aVStack_d0);
    Object::defineFunction(pOVar12,"assert",FUN_0090bb28);
  }
  pOVar12 = *(Object **)(this + 0xa0);
  se::Value::Value(&local_e8,"V8");
  Object::setProperty(pOVar12,"scriptEngineType",&local_e8);
  se::Value::~Value(&local_e8);
  Object::defineFunction(*(Object **)(this + 0xa0),"log",FUN_0090bd24);
  Object::defineFunction(*(Object **)(this + 0xa0),"forceGC",FUN_0090be18);
  this_00 = (Value *)(this + 0xa8);
  Object::getProperty(*(Object **)(this + 0xa0),"__jsb_gc__",this_00);
  if (this[0xb0] == (ScriptEngine)0x5) {
    pOVar12 = (Object *)se::Value::toObject(this_00);
    uVar13 = Object::isFunction(pOVar12);
    if ((uVar13 & 1) != 0) {
      uVar6 = se::Value::toObject(this_00);
      goto LAB_0090afd4;
    }
  }
  uVar6 = 0;
LAB_0090afd4:
  *(undefined8 *)(this + 0xb8) = uVar6;
  uStack_d9 = 0;
  local_d8 = (void *)0x0;
  local_e8 = (Value)0x1a;
  uStack_df = 0x6174614465;
  uStack_e7 = 0x6972505f5f;
  uStack_e2 = 0x6176;
  uStack_e0 = 0x74;
  local_da = 0;
  __jsb_CCPrivateData_class =
       (Class *)Class::create((basic_string *)&local_e8,*(Object **)(this + 0xa0),(Object *)0x0,
                              (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  Class::defineFinalizeFunction(__jsb_CCPrivateData_class,privateDataFinalize);
  Class::setCreateProto(__jsb_CCPrivateData_class,false);
  Class::install(__jsb_CCPrivateData_class);
  plVar17 = *(long **)(this + 0x38);
  plVar18 = *(long **)(this + 0x40);
  this[0x20c] = (ScriptEngine)0x1;
  if (plVar17 != plVar18) {
    do {
      if ((long *)plVar17[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*(long *)plVar17[4] + 0x30))();
      plVar17 = plVar17 + 6;
    } while (plVar18 != plVar17);
    plVar17 = *(long **)(this + 0x38);
    plVar18 = *(long **)(this + 0x40);
joined_r0x0090b094:
    if (plVar18 != plVar17) {
      plVar8 = (long *)plVar18[-2];
      plVar18 = plVar18 + -6;
      if (plVar18 != plVar8) goto code_r0x0090b0a8;
      pcVar14 = *(code **)(*plVar8 + 0x20);
      goto LAB_0090b0c0;
    }
  }
  SVar2 = this[0x20c];
  *(long **)(this + 0x40) = plVar17;
  se::Value::~Value(aVStack_d0);
  v8::HandleScope::~HandleScope(aHStack_100);
  this_01 = local_50;
  if (local_50 != (__shared_weak_count *)0x0) {
    p_Var1 = local_50 + 8;
    do {
      lVar15 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(SVar2 != (ScriptEngine)0x0);
code_r0x0090abfc:
  if (plVar8 != (long *)0x0) {
    pcVar14 = *(code **)(*plVar8 + 0x28);
LAB_0090ac14:
    (*pcVar14)();
  }
  goto joined_r0x0090abe8;
code_r0x0090b0a8:
  if (plVar8 != (long *)0x0) {
    pcVar14 = *(code **)(*plVar8 + 0x28);
LAB_0090b0c0:
    (*pcVar14)();
  }
  goto joined_r0x0090b094;
}

